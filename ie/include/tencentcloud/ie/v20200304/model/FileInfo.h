/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_FILEINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_FILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/VideoInfoResultItem.h>
#include <tencentcloud/ie/v20200304/model/AudioInfoResultItem.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 画质重生处理后文件的详细信息
                */
                class FileInfo : public AbstractModel
                {
                public:
                    FileInfo();
                    ~FileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务结束后生成的文件大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSize 任务结束后生成的文件大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置任务结束后生成的文件大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSize 任务结束后生成的文件大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取任务结束后生成的文件格式，例如：mp4,flv等等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileType 任务结束后生成的文件格式，例如：mp4,flv等等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置任务结束后生成的文件格式，例如：mp4,flv等等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileType 任务结束后生成的文件格式，例如：mp4,flv等等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取任务结束后生成的文件整体码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bitrate 任务结束后生成的文件整体码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置任务结束后生成的文件整体码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bitrate 任务结束后生成的文件整体码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取任务结束后生成的文件时长，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 任务结束后生成的文件时长，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置任务结束后生成的文件时长，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 任务结束后生成的文件时长，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取任务结束后生成的文件视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoInfoResult 任务结束后生成的文件视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VideoInfoResultItem> GetVideoInfoResult() const;

                    /**
                     * 设置任务结束后生成的文件视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoInfoResult 任务结束后生成的文件视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideoInfoResult(const std::vector<VideoInfoResultItem>& _videoInfoResult);

                    /**
                     * 判断参数 VideoInfoResult 是否已赋值
                     * @return VideoInfoResult 是否已赋值
                     * 
                     */
                    bool VideoInfoResultHasBeenSet() const;

                    /**
                     * 获取任务结束后生成的文件音频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioInfoResult 任务结束后生成的文件音频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AudioInfoResultItem> GetAudioInfoResult() const;

                    /**
                     * 设置任务结束后生成的文件音频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioInfoResult 任务结束后生成的文件音频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudioInfoResult(const std::vector<AudioInfoResultItem>& _audioInfoResult);

                    /**
                     * 判断参数 AudioInfoResult 是否已赋值
                     * @return AudioInfoResult 是否已赋值
                     * 
                     */
                    bool AudioInfoResultHasBeenSet() const;

                private:

                    /**
                     * 任务结束后生成的文件大小。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 任务结束后生成的文件格式，例如：mp4,flv等等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 任务结束后生成的文件整体码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 任务结束后生成的文件时长，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 任务结束后生成的文件视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VideoInfoResultItem> m_videoInfoResult;
                    bool m_videoInfoResultHasBeenSet;

                    /**
                     * 任务结束后生成的文件音频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AudioInfoResultItem> m_audioInfoResult;
                    bool m_audioInfoResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_FILEINFO_H_
