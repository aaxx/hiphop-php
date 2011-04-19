/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXTPROFILE_IMAGE_H__
#define __EXTPROFILE_IMAGE_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_image.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Array x_gd_info() {
  FUNCTION_INJECTION_BUILTIN(gd_info);
  return f_gd_info();
}

inline Variant x_getimagesize(CStrRef filename, CVarRef imageinfo = null) {
  FUNCTION_INJECTION_BUILTIN(getimagesize);
  return f_getimagesize(filename, imageinfo);
}

inline String x_image_type_to_extension(int imagetype, bool include_dot = true) {
  FUNCTION_INJECTION_BUILTIN(image_type_to_extension);
  return f_image_type_to_extension(imagetype, include_dot);
}

inline String x_image_type_to_mime_type(int imagetype) {
  FUNCTION_INJECTION_BUILTIN(image_type_to_mime_type);
  return f_image_type_to_mime_type(imagetype);
}

inline bool x_image2wbmp(CObjRef image, CStrRef filename = null_string, int threshold = -1) {
  FUNCTION_INJECTION_BUILTIN(image2wbmp);
  return f_image2wbmp(image, filename, threshold);
}

inline bool x_imagealphablending(CObjRef image, bool blendmode) {
  FUNCTION_INJECTION_BUILTIN(imagealphablending);
  return f_imagealphablending(image, blendmode);
}

inline bool x_imageantialias(CObjRef image, bool on) {
  FUNCTION_INJECTION_BUILTIN(imageantialias);
  return f_imageantialias(image, on);
}

inline bool x_imagearc(CObjRef image, int cx, int cy, int width, int height, int start, int end, int color) {
  FUNCTION_INJECTION_BUILTIN(imagearc);
  return f_imagearc(image, cx, cy, width, height, start, end, color);
}

inline bool x_imagechar(CObjRef image, int font, int x, int y, CStrRef c, int color) {
  FUNCTION_INJECTION_BUILTIN(imagechar);
  return f_imagechar(image, font, x, y, c, color);
}

inline bool x_imagecharup(CObjRef image, int font, int x, int y, CStrRef c, int color) {
  FUNCTION_INJECTION_BUILTIN(imagecharup);
  return f_imagecharup(image, font, x, y, c, color);
}

inline Variant x_imagecolorallocate(CObjRef image, int red, int green, int blue) {
  FUNCTION_INJECTION_BUILTIN(imagecolorallocate);
  return f_imagecolorallocate(image, red, green, blue);
}

inline Variant x_imagecolorallocatealpha(CObjRef image, int red, int green, int blue, int alpha) {
  FUNCTION_INJECTION_BUILTIN(imagecolorallocatealpha);
  return f_imagecolorallocatealpha(image, red, green, blue, alpha);
}

inline Variant x_imagecolorat(CObjRef image, int x, int y) {
  FUNCTION_INJECTION_BUILTIN(imagecolorat);
  return f_imagecolorat(image, x, y);
}

inline Variant x_imagecolorclosest(CObjRef image, int red, int green, int blue) {
  FUNCTION_INJECTION_BUILTIN(imagecolorclosest);
  return f_imagecolorclosest(image, red, green, blue);
}

inline Variant x_imagecolorclosestalpha(CObjRef image, int red, int green, int blue, int alpha) {
  FUNCTION_INJECTION_BUILTIN(imagecolorclosestalpha);
  return f_imagecolorclosestalpha(image, red, green, blue, alpha);
}

inline Variant x_imagecolorclosesthwb(CObjRef image, int red, int green, int blue) {
  FUNCTION_INJECTION_BUILTIN(imagecolorclosesthwb);
  return f_imagecolorclosesthwb(image, red, green, blue);
}

inline bool x_imagecolordeallocate(CObjRef image, int color) {
  FUNCTION_INJECTION_BUILTIN(imagecolordeallocate);
  return f_imagecolordeallocate(image, color);
}

inline Variant x_imagecolorexact(CObjRef image, int red, int green, int blue) {
  FUNCTION_INJECTION_BUILTIN(imagecolorexact);
  return f_imagecolorexact(image, red, green, blue);
}

inline Variant x_imagecolorexactalpha(CObjRef image, int red, int green, int blue, int alpha) {
  FUNCTION_INJECTION_BUILTIN(imagecolorexactalpha);
  return f_imagecolorexactalpha(image, red, green, blue, alpha);
}

inline Variant x_imagecolormatch(CObjRef image1, CObjRef image2) {
  FUNCTION_INJECTION_BUILTIN(imagecolormatch);
  return f_imagecolormatch(image1, image2);
}

inline Variant x_imagecolorresolve(CObjRef image, int red, int green, int blue) {
  FUNCTION_INJECTION_BUILTIN(imagecolorresolve);
  return f_imagecolorresolve(image, red, green, blue);
}

inline Variant x_imagecolorresolvealpha(CObjRef image, int red, int green, int blue, int alpha) {
  FUNCTION_INJECTION_BUILTIN(imagecolorresolvealpha);
  return f_imagecolorresolvealpha(image, red, green, blue, alpha);
}

inline Variant x_imagecolorset(CObjRef image, int index, int red, int green, int blue) {
  FUNCTION_INJECTION_BUILTIN(imagecolorset);
  return f_imagecolorset(image, index, red, green, blue);
}

inline Variant x_imagecolorsforindex(CObjRef image, int index) {
  FUNCTION_INJECTION_BUILTIN(imagecolorsforindex);
  return f_imagecolorsforindex(image, index);
}

inline Variant x_imagecolorstotal(CObjRef image) {
  FUNCTION_INJECTION_BUILTIN(imagecolorstotal);
  return f_imagecolorstotal(image);
}

inline Variant x_imagecolortransparent(CObjRef image, int color = -1) {
  FUNCTION_INJECTION_BUILTIN(imagecolortransparent);
  return f_imagecolortransparent(image, color);
}

inline bool x_imageconvolution(CObjRef image, CArrRef matrix, double div, double offset) {
  FUNCTION_INJECTION_BUILTIN(imageconvolution);
  return f_imageconvolution(image, matrix, div, offset);
}

inline bool x_imagecopy(CObjRef dst_im, CObjRef src_im, int dst_x, int dst_y, int src_x, int src_y, int src_w, int src_h) {
  FUNCTION_INJECTION_BUILTIN(imagecopy);
  return f_imagecopy(dst_im, src_im, dst_x, dst_y, src_x, src_y, src_w, src_h);
}

inline bool x_imagecopymerge(CObjRef dst_im, CObjRef src_im, int dst_x, int dst_y, int src_x, int src_y, int src_w, int src_h, int pct) {
  FUNCTION_INJECTION_BUILTIN(imagecopymerge);
  return f_imagecopymerge(dst_im, src_im, dst_x, dst_y, src_x, src_y, src_w, src_h, pct);
}

inline bool x_imagecopymergegray(CObjRef dst_im, CObjRef src_im, int dst_x, int dst_y, int src_x, int src_y, int src_w, int src_h, int pct) {
  FUNCTION_INJECTION_BUILTIN(imagecopymergegray);
  return f_imagecopymergegray(dst_im, src_im, dst_x, dst_y, src_x, src_y, src_w, src_h, pct);
}

inline bool x_imagecopyresampled(CObjRef dst_im, CObjRef src_im, int dst_x, int dst_y, int src_x, int src_y, int dst_w, int dst_h, int src_w, int src_h) {
  FUNCTION_INJECTION_BUILTIN(imagecopyresampled);
  return f_imagecopyresampled(dst_im, src_im, dst_x, dst_y, src_x, src_y, dst_w, dst_h, src_w, src_h);
}

inline bool x_imagecopyresized(CObjRef dst_im, CObjRef src_im, int dst_x, int dst_y, int src_x, int src_y, int dst_w, int dst_h, int src_w, int src_h) {
  FUNCTION_INJECTION_BUILTIN(imagecopyresized);
  return f_imagecopyresized(dst_im, src_im, dst_x, dst_y, src_x, src_y, dst_w, dst_h, src_w, src_h);
}

inline Variant x_imagecreate(int width, int height) {
  FUNCTION_INJECTION_BUILTIN(imagecreate);
  return f_imagecreate(width, height);
}

inline Variant x_imagecreatefromgd2part(CStrRef filename, int srcx, int srcy, int width, int height) {
  FUNCTION_INJECTION_BUILTIN(imagecreatefromgd2part);
  return f_imagecreatefromgd2part(filename, srcx, srcy, width, height);
}

inline Variant x_imagecreatefromgd(CStrRef filename) {
  FUNCTION_INJECTION_BUILTIN(imagecreatefromgd);
  return f_imagecreatefromgd(filename);
}

inline Variant x_imagecreatefromgd2(CStrRef filename) {
  FUNCTION_INJECTION_BUILTIN(imagecreatefromgd2);
  return f_imagecreatefromgd2(filename);
}

inline Variant x_imagecreatefromgif(CStrRef filename) {
  FUNCTION_INJECTION_BUILTIN(imagecreatefromgif);
  return f_imagecreatefromgif(filename);
}

inline Variant x_imagecreatefromjpeg(CStrRef filename) {
  FUNCTION_INJECTION_BUILTIN(imagecreatefromjpeg);
  return f_imagecreatefromjpeg(filename);
}

inline Variant x_imagecreatefrompng(CStrRef filename) {
  FUNCTION_INJECTION_BUILTIN(imagecreatefrompng);
  return f_imagecreatefrompng(filename);
}

inline Variant x_imagecreatefromstring(CStrRef data) {
  FUNCTION_INJECTION_BUILTIN(imagecreatefromstring);
  return f_imagecreatefromstring(data);
}

inline Variant x_imagecreatefromwbmp(CStrRef filename) {
  FUNCTION_INJECTION_BUILTIN(imagecreatefromwbmp);
  return f_imagecreatefromwbmp(filename);
}

inline Variant x_imagecreatefromxbm(CStrRef filename) {
  FUNCTION_INJECTION_BUILTIN(imagecreatefromxbm);
  return f_imagecreatefromxbm(filename);
}

inline Variant x_imagecreatefromxpm(CStrRef filename) {
  FUNCTION_INJECTION_BUILTIN(imagecreatefromxpm);
  return f_imagecreatefromxpm(filename);
}

inline Variant x_imagecreatetruecolor(int width, int height) {
  FUNCTION_INJECTION_BUILTIN(imagecreatetruecolor);
  return f_imagecreatetruecolor(width, height);
}

inline bool x_imagedashedline(CObjRef image, int x1, int y1, int x2, int y2, int color) {
  FUNCTION_INJECTION_BUILTIN(imagedashedline);
  return f_imagedashedline(image, x1, y1, x2, y2, color);
}

inline bool x_imagedestroy(CObjRef image) {
  FUNCTION_INJECTION_BUILTIN(imagedestroy);
  return f_imagedestroy(image);
}

inline bool x_imageellipse(CObjRef image, int cx, int cy, int width, int height, int color) {
  FUNCTION_INJECTION_BUILTIN(imageellipse);
  return f_imageellipse(image, cx, cy, width, height, color);
}

inline bool x_imagefill(CObjRef image, int x, int y, int color) {
  FUNCTION_INJECTION_BUILTIN(imagefill);
  return f_imagefill(image, x, y, color);
}

inline bool x_imagefilledarc(CObjRef image, int cx, int cy, int width, int height, int start, int end, int color, int style) {
  FUNCTION_INJECTION_BUILTIN(imagefilledarc);
  return f_imagefilledarc(image, cx, cy, width, height, start, end, color, style);
}

inline bool x_imagefilledellipse(CObjRef image, int cx, int cy, int width, int height, int color) {
  FUNCTION_INJECTION_BUILTIN(imagefilledellipse);
  return f_imagefilledellipse(image, cx, cy, width, height, color);
}

inline bool x_imagefilledpolygon(CObjRef image, CArrRef points, int num_points, int color) {
  FUNCTION_INJECTION_BUILTIN(imagefilledpolygon);
  return f_imagefilledpolygon(image, points, num_points, color);
}

inline bool x_imagefilledrectangle(CObjRef image, int x1, int y1, int x2, int y2, int color) {
  FUNCTION_INJECTION_BUILTIN(imagefilledrectangle);
  return f_imagefilledrectangle(image, x1, y1, x2, y2, color);
}

inline bool x_imagefilltoborder(CObjRef image, int x, int y, int border, int color) {
  FUNCTION_INJECTION_BUILTIN(imagefilltoborder);
  return f_imagefilltoborder(image, x, y, border, color);
}

inline bool x_imagefilter(CObjRef image, int filtertype, int arg1 = 0, int arg2 = 0, int arg3 = 0, int arg4 = 0) {
  FUNCTION_INJECTION_BUILTIN(imagefilter);
  return f_imagefilter(image, filtertype, arg1, arg2, arg3, arg4);
}

inline int x_imagefontheight(int font) {
  FUNCTION_INJECTION_BUILTIN(imagefontheight);
  return f_imagefontheight(font);
}

inline int x_imagefontwidth(int font) {
  FUNCTION_INJECTION_BUILTIN(imagefontwidth);
  return f_imagefontwidth(font);
}

inline Variant x_imageftbbox(double size, double angle, CStrRef font_file, CStrRef text, CArrRef extrainfo = null) {
  FUNCTION_INJECTION_BUILTIN(imageftbbox);
  return f_imageftbbox(size, angle, font_file, text, extrainfo);
}

inline Variant x_imagefttext(CObjRef image, double size, double angle, int x, int y, int col, CStrRef font_file, CStrRef text, CArrRef extrainfo = null) {
  FUNCTION_INJECTION_BUILTIN(imagefttext);
  return f_imagefttext(image, size, angle, x, y, col, font_file, text, extrainfo);
}

inline bool x_imagegammacorrect(CObjRef image, double inputgamma, double outputgamma) {
  FUNCTION_INJECTION_BUILTIN(imagegammacorrect);
  return f_imagegammacorrect(image, inputgamma, outputgamma);
}

inline bool x_imagegd2(CObjRef image, CStrRef filename = null_string, int chunk_size = 0, int type = 0) {
  FUNCTION_INJECTION_BUILTIN(imagegd2);
  return f_imagegd2(image, filename, chunk_size, type);
}

inline bool x_imagegd(CObjRef image, CStrRef filename = null_string) {
  FUNCTION_INJECTION_BUILTIN(imagegd);
  return f_imagegd(image, filename);
}

inline bool x_imagegif(CObjRef image, CStrRef filename = null_string) {
  FUNCTION_INJECTION_BUILTIN(imagegif);
  return f_imagegif(image, filename);
}

inline Variant x_imagegrabscreen() {
  FUNCTION_INJECTION_BUILTIN(imagegrabscreen);
  return f_imagegrabscreen();
}

inline Variant x_imagegrabwindow(int window, int client_area = 0) {
  FUNCTION_INJECTION_BUILTIN(imagegrabwindow);
  return f_imagegrabwindow(window, client_area);
}

inline Variant x_imageinterlace(CObjRef image, int interlace = 0) {
  FUNCTION_INJECTION_BUILTIN(imageinterlace);
  return f_imageinterlace(image, interlace);
}

inline bool x_imageistruecolor(CObjRef image) {
  FUNCTION_INJECTION_BUILTIN(imageistruecolor);
  return f_imageistruecolor(image);
}

inline bool x_imagejpeg(CObjRef image, CStrRef filename = null_string, int quality = -1) {
  FUNCTION_INJECTION_BUILTIN(imagejpeg);
  return f_imagejpeg(image, filename, quality);
}

inline bool x_imagelayereffect(CObjRef image, int effect) {
  FUNCTION_INJECTION_BUILTIN(imagelayereffect);
  return f_imagelayereffect(image, effect);
}

inline bool x_imageline(CObjRef image, int x1, int y1, int x2, int y2, int color) {
  FUNCTION_INJECTION_BUILTIN(imageline);
  return f_imageline(image, x1, y1, x2, y2, color);
}

inline Variant x_imageloadfont(CStrRef file) {
  FUNCTION_INJECTION_BUILTIN(imageloadfont);
  return f_imageloadfont(file);
}

inline void x_imagepalettecopy(CObjRef destination, CObjRef source) {
  FUNCTION_INJECTION_BUILTIN(imagepalettecopy);
  f_imagepalettecopy(destination, source);
}

inline bool x_imagepng(CObjRef image, CStrRef filename = null_string, int quality = -1, int filters = -1) {
  FUNCTION_INJECTION_BUILTIN(imagepng);
  return f_imagepng(image, filename, quality, filters);
}

inline bool x_imagepolygon(CObjRef image, CArrRef points, int num_points, int color) {
  FUNCTION_INJECTION_BUILTIN(imagepolygon);
  return f_imagepolygon(image, points, num_points, color);
}

inline Array x_imagepsbbox(CStrRef text, int font, int size, int space = 0, int tightness = 0, double angle = 0.0) {
  FUNCTION_INJECTION_BUILTIN(imagepsbbox);
  return f_imagepsbbox(text, font, size, space, tightness, angle);
}

inline bool x_imagepsencodefont(CObjRef font_index, CStrRef encodingfile) {
  FUNCTION_INJECTION_BUILTIN(imagepsencodefont);
  return f_imagepsencodefont(font_index, encodingfile);
}

inline bool x_imagepsextendfont(int font_index, double extend) {
  FUNCTION_INJECTION_BUILTIN(imagepsextendfont);
  return f_imagepsextendfont(font_index, extend);
}

inline bool x_imagepsfreefont(CObjRef fontindex) {
  FUNCTION_INJECTION_BUILTIN(imagepsfreefont);
  return f_imagepsfreefont(fontindex);
}

inline Object x_imagepsloadfont(CStrRef filename) {
  FUNCTION_INJECTION_BUILTIN(imagepsloadfont);
  return f_imagepsloadfont(filename);
}

inline bool x_imagepsslantfont(CObjRef font_index, double slant) {
  FUNCTION_INJECTION_BUILTIN(imagepsslantfont);
  return f_imagepsslantfont(font_index, slant);
}

inline Array x_imagepstext(CObjRef image, CStrRef text, CObjRef font, int size, int foreground, int background, int x, int y, int space = 0, int tightness = 0, double angle = 0.0, int antialias_steps = 0) {
  FUNCTION_INJECTION_BUILTIN(imagepstext);
  return f_imagepstext(image, text, font, size, foreground, background, x, y, space, tightness, angle, antialias_steps);
}

inline bool x_imagerectangle(CObjRef image, int x1, int y1, int x2, int y2, int color) {
  FUNCTION_INJECTION_BUILTIN(imagerectangle);
  return f_imagerectangle(image, x1, y1, x2, y2, color);
}

inline Variant x_imagerotate(CObjRef source_image, double angle, int bgd_color, int ignore_transparent = 0) {
  FUNCTION_INJECTION_BUILTIN(imagerotate);
  return f_imagerotate(source_image, angle, bgd_color, ignore_transparent);
}

inline bool x_imagesavealpha(CObjRef image, bool saveflag) {
  FUNCTION_INJECTION_BUILTIN(imagesavealpha);
  return f_imagesavealpha(image, saveflag);
}

inline bool x_imagesetbrush(CObjRef image, CObjRef brush) {
  FUNCTION_INJECTION_BUILTIN(imagesetbrush);
  return f_imagesetbrush(image, brush);
}

inline bool x_imagesetpixel(CObjRef image, int x, int y, int color) {
  FUNCTION_INJECTION_BUILTIN(imagesetpixel);
  return f_imagesetpixel(image, x, y, color);
}

inline bool x_imagesetstyle(CObjRef image, CArrRef style) {
  FUNCTION_INJECTION_BUILTIN(imagesetstyle);
  return f_imagesetstyle(image, style);
}

inline bool x_imagesetthickness(CObjRef image, int thickness) {
  FUNCTION_INJECTION_BUILTIN(imagesetthickness);
  return f_imagesetthickness(image, thickness);
}

inline bool x_imagesettile(CObjRef image, CObjRef tile) {
  FUNCTION_INJECTION_BUILTIN(imagesettile);
  return f_imagesettile(image, tile);
}

inline bool x_imagestring(CObjRef image, int font, int x, int y, CStrRef str, int color) {
  FUNCTION_INJECTION_BUILTIN(imagestring);
  return f_imagestring(image, font, x, y, str, color);
}

inline bool x_imagestringup(CObjRef image, int font, int x, int y, CStrRef str, int color) {
  FUNCTION_INJECTION_BUILTIN(imagestringup);
  return f_imagestringup(image, font, x, y, str, color);
}

inline Variant x_imagesx(CObjRef image) {
  FUNCTION_INJECTION_BUILTIN(imagesx);
  return f_imagesx(image);
}

inline Variant x_imagesy(CObjRef image) {
  FUNCTION_INJECTION_BUILTIN(imagesy);
  return f_imagesy(image);
}

inline Variant x_imagetruecolortopalette(CObjRef image, bool dither, int ncolors) {
  FUNCTION_INJECTION_BUILTIN(imagetruecolortopalette);
  return f_imagetruecolortopalette(image, dither, ncolors);
}

inline Variant x_imagettfbbox(double size, double angle, CStrRef fontfile, CStrRef text) {
  FUNCTION_INJECTION_BUILTIN(imagettfbbox);
  return f_imagettfbbox(size, angle, fontfile, text);
}

inline Variant x_imagettftext(CObjRef image, double size, double angle, int x, int y, int color, CStrRef fontfile, CStrRef text) {
  FUNCTION_INJECTION_BUILTIN(imagettftext);
  return f_imagettftext(image, size, angle, x, y, color, fontfile, text);
}

inline int x_imagetypes() {
  FUNCTION_INJECTION_BUILTIN(imagetypes);
  return f_imagetypes();
}

inline bool x_imagewbmp(CObjRef image, CStrRef filename = null_string, int foreground = -1) {
  FUNCTION_INJECTION_BUILTIN(imagewbmp);
  return f_imagewbmp(image, filename, foreground);
}

inline bool x_imagexbm(CObjRef image, CStrRef filename = null_string, int foreground = -1) {
  FUNCTION_INJECTION_BUILTIN(imagexbm);
  return f_imagexbm(image, filename, foreground);
}

inline Variant x_iptcembed(CStrRef iptcdata, CStrRef jpeg_file_name, int spool = 0) {
  FUNCTION_INJECTION_BUILTIN(iptcembed);
  return f_iptcembed(iptcdata, jpeg_file_name, spool);
}

inline Variant x_iptcparse(CStrRef iptcblock) {
  FUNCTION_INJECTION_BUILTIN(iptcparse);
  return f_iptcparse(iptcblock);
}

inline bool x_jpeg2wbmp(CStrRef jpegname, CStrRef wbmpname, int dest_height, int dest_width, int threshold) {
  FUNCTION_INJECTION_BUILTIN(jpeg2wbmp);
  return f_jpeg2wbmp(jpegname, wbmpname, dest_height, dest_width, threshold);
}

inline bool x_png2wbmp(CStrRef pngname, CStrRef wbmpname, int dest_height, int dest_width, int threshold) {
  FUNCTION_INJECTION_BUILTIN(png2wbmp);
  return f_png2wbmp(pngname, wbmpname, dest_height, dest_width, threshold);
}

inline Variant x_exif_imagetype(CStrRef filename) {
  FUNCTION_INJECTION_BUILTIN(exif_imagetype);
  return f_exif_imagetype(filename);
}

inline Variant x_exif_read_data(CStrRef filename, CStrRef sections = null_string, bool arrays = false, bool thumbnail = false) {
  FUNCTION_INJECTION_BUILTIN(exif_read_data);
  return f_exif_read_data(filename, sections, arrays, thumbnail);
}

inline Variant x_read_exif_data(CStrRef filename, CStrRef sections = null_string, bool arrays = false, bool thumbnail = false) {
  FUNCTION_INJECTION_BUILTIN(read_exif_data);
  return f_read_exif_data(filename, sections, arrays, thumbnail);
}

inline Variant x_exif_tagname(int index) {
  FUNCTION_INJECTION_BUILTIN(exif_tagname);
  return f_exif_tagname(index);
}

inline Variant x_exif_thumbnail(CStrRef filename, CVarRef width = null, CVarRef height = null, CVarRef imagetype = null) {
  FUNCTION_INJECTION_BUILTIN(exif_thumbnail);
  return f_exif_thumbnail(filename, width, height, imagetype);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_IMAGE_H__
