(function () {
    'use strict';

    var autoPrefixer = require('gulp-autoprefixer');
    var gulp = require('gulp');
    var jshint = require('gulp-jshint');
    var plumber = require('gulp-plumber');
    var sass = require('gulp-ruby-sass');
    var stylish = require('jshint-stylish');

    gulp.task('default', ['build', 'watch'], function() {
    });

    gulp.task('build', ['compileSASS', 'jshint'], function() {
    });

    gulp.task('watch', ['build'], function() {
        gulp.watch(['scss/**/*.scss'], ['compileSASS']);
        gulp.watch(['js/*.js'], ['jshint']);
    });

    gulp.task('compileSASS', function() {
        return gulp.src(['scss/*.scss'])
            .pipe(plumber())
            .pipe(sass({"sourcemap=none": true, style: 'expanded'}))
            .pipe(autoPrefixer('last 2 version'))
            .pipe(gulp.dest('css'));
    });

    gulp.task('jshint', function() {
        return gulp.src(['js/*.js'])
            .pipe(plumber())
            .pipe(jshint())
            .pipe(jshint.reporter(stylish));
    });

})();