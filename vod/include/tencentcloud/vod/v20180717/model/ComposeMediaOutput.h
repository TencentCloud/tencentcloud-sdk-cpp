/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIAOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIAOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/OutputVideoStream.h>
#include <tencentcloud/vod/v20180717/model/OutputAudioStream.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 输出的媒体文件信息。
                */
                class ComposeMediaOutput : public AbstractModel
                {
                public:
                    ComposeMediaOutput();
                    ~ComposeMediaOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件名称，最长 64 个字符。
                     * @return FileName 文件名称，最长 64 个字符。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称，最长 64 个字符。
                     * @param _fileName 文件名称，最长 64 个字符。
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取描述信息，最长 128 个字符。
                     * @return Description 描述信息，最长 128 个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息，最长 128 个字符。
                     * @param _description 描述信息，最长 128 个字符。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     * @return ClassId 分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     * @param _classId 分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     * 
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return ExpireTime 输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _expireTime 输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取封装格式，可选值：mp4、mp3。其中，mp3 为纯音频文件。
                     * @return Container 封装格式，可选值：mp4、mp3。其中，mp3 为纯音频文件。
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置封装格式，可选值：mp4、mp3。其中，mp3 为纯音频文件。
                     * @param _container 封装格式，可选值：mp4、mp3。其中，mp3 为纯音频文件。
                     * 
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取输出的视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoStream 输出的视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OutputVideoStream GetVideoStream() const;

                    /**
                     * 设置输出的视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoStream 输出的视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideoStream(const OutputVideoStream& _videoStream);

                    /**
                     * 判断参数 VideoStream 是否已赋值
                     * @return VideoStream 是否已赋值
                     * 
                     */
                    bool VideoStreamHasBeenSet() const;

                    /**
                     * 获取输出的音频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioStream 输出的音频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OutputAudioStream GetAudioStream() const;

                    /**
                     * 设置输出的音频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioStream 输出的音频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudioStream(const OutputAudioStream& _audioStream);

                    /**
                     * 判断参数 AudioStream 是否已赋值
                     * @return AudioStream 是否已赋值
                     * 
                     */
                    bool AudioStreamHasBeenSet() const;

                    /**
                     * 获取是否去除视频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值：0。
                     * @return RemoveVideo 是否去除视频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值：0。
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置是否去除视频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值：0。
                     * @param _removeVideo 是否去除视频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值：0。
                     * 
                     */
                    void SetRemoveVideo(const int64_t& _removeVideo);

                    /**
                     * 判断参数 RemoveVideo 是否已赋值
                     * @return RemoveVideo 是否已赋值
                     * 
                     */
                    bool RemoveVideoHasBeenSet() const;

                    /**
                     * 获取是否去除音频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值：0。
                     * @return RemoveAudio 是否去除音频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值：0。
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置是否去除音频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值：0。
                     * @param _removeAudio 是否去除音频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值：0。
                     * 
                     */
                    void SetRemoveAudio(const int64_t& _removeAudio);

                    /**
                     * 判断参数 RemoveAudio 是否已赋值
                     * @return RemoveAudio 是否已赋值
                     * 
                     */
                    bool RemoveAudioHasBeenSet() const;

                private:

                    /**
                     * 文件名称，最长 64 个字符。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 描述信息，最长 128 个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * 输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 封装格式，可选值：mp4、mp3。其中，mp3 为纯音频文件。
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * 输出的视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OutputVideoStream m_videoStream;
                    bool m_videoStreamHasBeenSet;

                    /**
                     * 输出的音频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OutputAudioStream m_audioStream;
                    bool m_audioStreamHasBeenSet;

                    /**
                     * 是否去除视频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值：0。
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * 是否去除音频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值：0。
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIAOUTPUT_H_
