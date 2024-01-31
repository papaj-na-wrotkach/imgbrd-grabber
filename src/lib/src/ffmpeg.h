#ifndef FFMPEG_H
#define FFMPEG_H

#include <QString>


class FFmpeg
{
	public:
		/**
		 * Get the version of FFmpeg.
		 *
		 * @param msecs The duration to wait in milliseconds for the version command to run.
		 * @return The version number found, with basic parsing done (ex: "4.4.3").
		 */
		static QString version(int msecs = 30000);

		/**
		 * Remux a file to a different format, copying the streams.
		 *
		 * @param file The file to remux.
		 * @param extension The target extension (ex: "mp4").
		 * @param deleteOriginal Whether to delete the original file on success.
		 * @param msecs The duration to wait in milliseconds for the command to run.
		 * @return The destination file path on success, the original file path on error.
		 */
		static QString remux(const QString &file, const QString &extension, bool deleteOriginal = true, int msecs = 30000);
};

#endif // FFMPEG_H