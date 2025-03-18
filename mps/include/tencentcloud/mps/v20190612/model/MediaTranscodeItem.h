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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIATRANSCODEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIATRANSCODEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/MediaAudioStreamItem.h>
#include <tencentcloud/mps/v20190612/model/MediaVideoStreamItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 转码信息
                */
                class MediaTranscodeItem : public AbstractModel
                {
                public:
                    MediaTranscodeItem();
                    ~MediaTranscodeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转码后文件的目标存储。
                     * @return OutputStorage 转码后文件的目标存储。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置转码后文件的目标存储。
                     * @param _outputStorage 转码后文件的目标存储。
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取转码后的视频文件路径。
                     * @return Path 转码后的视频文件路径。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置转码后的视频文件路径。
                     * @param _path 转码后的视频文件路径。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取转码规格 ID，参见[转码参数模板](https://cloud.tencent.com/document/product/862/37042)。
                     * @return Definition 转码规格 ID，参见[转码参数模板](https://cloud.tencent.com/document/product/862/37042)。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置转码规格 ID，参见[转码参数模板](https://cloud.tencent.com/document/product/862/37042)。
                     * @param _definition 转码规格 ID，参见[转码参数模板](https://cloud.tencent.com/document/product/862/37042)。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取视频流码率平均值与音频流码率平均值之和， 单位：bps。
                     * @return Bitrate 视频流码率平均值与音频流码率平均值之和， 单位：bps。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置视频流码率平均值与音频流码率平均值之和， 单位：bps。
                     * @param _bitrate 视频流码率平均值与音频流码率平均值之和， 单位：bps。
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
                     * 获取视频流高度的最大值，单位：px。
                     * @return Height 视频流高度的最大值，单位：px。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置视频流高度的最大值，单位：px。
                     * @param _height 视频流高度的最大值，单位：px。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取视频流宽度的最大值，单位：px。
                     * @return Width 视频流宽度的最大值，单位：px。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置视频流宽度的最大值，单位：px。
                     * @param _width 视频流宽度的最大值，单位：px。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取媒体文件总大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。
                     * @return Size 媒体文件总大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置媒体文件总大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。
                     * @param _size 媒体文件总大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取视频时长，单位：秒。
                     * @return Duration 视频时长，单位：秒。
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置视频时长，单位：秒。
                     * @param _duration 视频时长，单位：秒。
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取容器类型，例如 m4a，mp4 等。
                     * @return Container 容器类型，例如 m4a，mp4 等。
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置容器类型，例如 m4a，mp4 等。
                     * @param _container 容器类型，例如 m4a，mp4 等。
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
                     * 获取视频的 md5 值。
                     * @return Md5 视频的 md5 值。
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置视频的 md5 值。
                     * @param _md5 视频的 md5 值。
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取音频流信息。
                     * @return AudioStreamSet 音频流信息。
                     * 
                     */
                    std::vector<MediaAudioStreamItem> GetAudioStreamSet() const;

                    /**
                     * 设置音频流信息。
                     * @param _audioStreamSet 音频流信息。
                     * 
                     */
                    void SetAudioStreamSet(const std::vector<MediaAudioStreamItem>& _audioStreamSet);

                    /**
                     * 判断参数 AudioStreamSet 是否已赋值
                     * @return AudioStreamSet 是否已赋值
                     * 
                     */
                    bool AudioStreamSetHasBeenSet() const;

                    /**
                     * 获取视频流信息。
                     * @return VideoStreamSet 视频流信息。
                     * 
                     */
                    std::vector<MediaVideoStreamItem> GetVideoStreamSet() const;

                    /**
                     * 设置视频流信息。
                     * @param _videoStreamSet 视频流信息。
                     * 
                     */
                    void SetVideoStreamSet(const std::vector<MediaVideoStreamItem>& _videoStreamSet);

                    /**
                     * 判断参数 VideoStreamSet 是否已赋值
                     * @return VideoStreamSet 是否已赋值
                     * 
                     */
                    bool VideoStreamSetHasBeenSet() const;

                    /**
                     * 获取视频转码使用增强项说明，增强项解释
<li>hdr：HDR配置</li>
<li>wd_fps：插帧帧率配置</li>
<li>video_super_resolution：	超分配置</li>
<li>repair：综合增强配置</li>
<li>denoise：视频降噪配置</li>
<li>color_enhance：色彩增强配置</li>
<li>scratch：去划痕配置</li>
<li>artifact：去伪影（毛刺）配置</li>
<li>sharp：细节增强配置</li>
<li>low_light：低光照增强配置</li>
<li>face_enhance：人脸增强配置</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallBackExtInfo 视频转码使用增强项说明，增强项解释
<li>hdr：HDR配置</li>
<li>wd_fps：插帧帧率配置</li>
<li>video_super_resolution：	超分配置</li>
<li>repair：综合增强配置</li>
<li>denoise：视频降噪配置</li>
<li>color_enhance：色彩增强配置</li>
<li>scratch：去划痕配置</li>
<li>artifact：去伪影（毛刺）配置</li>
<li>sharp：细节增强配置</li>
<li>low_light：低光照增强配置</li>
<li>face_enhance：人脸增强配置</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCallBackExtInfo() const;

                    /**
                     * 设置视频转码使用增强项说明，增强项解释
<li>hdr：HDR配置</li>
<li>wd_fps：插帧帧率配置</li>
<li>video_super_resolution：	超分配置</li>
<li>repair：综合增强配置</li>
<li>denoise：视频降噪配置</li>
<li>color_enhance：色彩增强配置</li>
<li>scratch：去划痕配置</li>
<li>artifact：去伪影（毛刺）配置</li>
<li>sharp：细节增强配置</li>
<li>low_light：低光照增强配置</li>
<li>face_enhance：人脸增强配置</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _callBackExtInfo 视频转码使用增强项说明，增强项解释
<li>hdr：HDR配置</li>
<li>wd_fps：插帧帧率配置</li>
<li>video_super_resolution：	超分配置</li>
<li>repair：综合增强配置</li>
<li>denoise：视频降噪配置</li>
<li>color_enhance：色彩增强配置</li>
<li>scratch：去划痕配置</li>
<li>artifact：去伪影（毛刺）配置</li>
<li>sharp：细节增强配置</li>
<li>low_light：低光照增强配置</li>
<li>face_enhance：人脸增强配置</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCallBackExtInfo(const std::string& _callBackExtInfo);

                    /**
                     * 判断参数 CallBackExtInfo 是否已赋值
                     * @return CallBackExtInfo 是否已赋值
                     * 
                     */
                    bool CallBackExtInfoHasBeenSet() const;

                private:

                    /**
                     * 转码后文件的目标存储。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 转码后的视频文件路径。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 转码规格 ID，参见[转码参数模板](https://cloud.tencent.com/document/product/862/37042)。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 视频流码率平均值与音频流码率平均值之和， 单位：bps。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 视频流高度的最大值，单位：px。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 视频流宽度的最大值，单位：px。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 媒体文件总大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 视频时长，单位：秒。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 容器类型，例如 m4a，mp4 等。
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * 视频的 md5 值。
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 音频流信息。
                     */
                    std::vector<MediaAudioStreamItem> m_audioStreamSet;
                    bool m_audioStreamSetHasBeenSet;

                    /**
                     * 视频流信息。
                     */
                    std::vector<MediaVideoStreamItem> m_videoStreamSet;
                    bool m_videoStreamSetHasBeenSet;

                    /**
                     * 视频转码使用增强项说明，增强项解释
<li>hdr：HDR配置</li>
<li>wd_fps：插帧帧率配置</li>
<li>video_super_resolution：	超分配置</li>
<li>repair：综合增强配置</li>
<li>denoise：视频降噪配置</li>
<li>color_enhance：色彩增强配置</li>
<li>scratch：去划痕配置</li>
<li>artifact：去伪影（毛刺）配置</li>
<li>sharp：细节增强配置</li>
<li>low_light：低光照增强配置</li>
<li>face_enhance：人脸增强配置</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callBackExtInfo;
                    bool m_callBackExtInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIATRANSCODEITEM_H_
