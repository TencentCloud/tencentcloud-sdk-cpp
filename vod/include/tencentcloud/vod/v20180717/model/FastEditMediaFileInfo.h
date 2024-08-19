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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIAFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIAFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 快速媒体编辑操作的输入媒体类型
                */
                class FastEditMediaFileInfo : public AbstractModel
                {
                public:
                    FastEditMediaFileInfo();
                    ~FastEditMediaFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体的 ID。
                     * @return FileId 媒体的 ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体的 ID。
                     * @param _fileId 媒体的 ID。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取操作的音视频类型，可选值有：
<li>Transcode：转码输出；</li>
<li>Original：原始音视频。</li>
注意：操作的音视频，必须为 HLS 格式。
                     * @return AudioVideoType 操作的音视频类型，可选值有：
<li>Transcode：转码输出；</li>
<li>Original：原始音视频。</li>
注意：操作的音视频，必须为 HLS 格式。
                     * 
                     */
                    std::string GetAudioVideoType() const;

                    /**
                     * 设置操作的音视频类型，可选值有：
<li>Transcode：转码输出；</li>
<li>Original：原始音视频。</li>
注意：操作的音视频，必须为 HLS 格式。
                     * @param _audioVideoType 操作的音视频类型，可选值有：
<li>Transcode：转码输出；</li>
<li>Original：原始音视频。</li>
注意：操作的音视频，必须为 HLS 格式。
                     * 
                     */
                    void SetAudioVideoType(const std::string& _audioVideoType);

                    /**
                     * 判断参数 AudioVideoType 是否已赋值
                     * @return AudioVideoType 是否已赋值
                     * 
                     */
                    bool AudioVideoTypeHasBeenSet() const;

                    /**
                     * 获取当 AudioVideoType 为 Transcode 时有效，表示操作媒体的的转码模板 ID。
                     * @return TranscodeDefinition 当 AudioVideoType 为 Transcode 时有效，表示操作媒体的的转码模板 ID。
                     * 
                     */
                    int64_t GetTranscodeDefinition() const;

                    /**
                     * 设置当 AudioVideoType 为 Transcode 时有效，表示操作媒体的的转码模板 ID。
                     * @param _transcodeDefinition 当 AudioVideoType 为 Transcode 时有效，表示操作媒体的的转码模板 ID。
                     * 
                     */
                    void SetTranscodeDefinition(const int64_t& _transcodeDefinition);

                    /**
                     * 判断参数 TranscodeDefinition 是否已赋值
                     * @return TranscodeDefinition 是否已赋值
                     * 
                     */
                    bool TranscodeDefinitionHasBeenSet() const;

                    /**
                     * 获取媒体剪辑起始的偏移时间，单位：秒。
                     * @return StartTimeOffset 媒体剪辑起始的偏移时间，单位：秒。
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置媒体剪辑起始的偏移时间，单位：秒。
                     * @param _startTimeOffset 媒体剪辑起始的偏移时间，单位：秒。
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取媒体剪辑结束的时间偏移，单位：秒。
                     * @return EndTimeOffset 媒体剪辑结束的时间偏移，单位：秒。
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置媒体剪辑结束的时间偏移，单位：秒。
                     * @param _endTimeOffset 媒体剪辑结束的时间偏移，单位：秒。
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * 媒体的 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 操作的音视频类型，可选值有：
<li>Transcode：转码输出；</li>
<li>Original：原始音视频。</li>
注意：操作的音视频，必须为 HLS 格式。
                     */
                    std::string m_audioVideoType;
                    bool m_audioVideoTypeHasBeenSet;

                    /**
                     * 当 AudioVideoType 为 Transcode 时有效，表示操作媒体的的转码模板 ID。
                     */
                    int64_t m_transcodeDefinition;
                    bool m_transcodeDefinitionHasBeenSet;

                    /**
                     * 媒体剪辑起始的偏移时间，单位：秒。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 媒体剪辑结束的时间偏移，单位：秒。
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIAFILEINFO_H_
