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
#include <tencentcloud/mps/v20190612/model/MediaUsageItem.h>


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
                     * 获取<p>转码后文件的目标存储。</p>
                     * @return OutputStorage <p>转码后文件的目标存储。</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>转码后文件的目标存储。</p>
                     * @param _outputStorage <p>转码后文件的目标存储。</p>
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
                     * 获取<p>转码后的视频文件路径。</p>
                     * @return Path <p>转码后的视频文件路径。</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>转码后的视频文件路径。</p>
                     * @param _path <p>转码后的视频文件路径。</p>
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
                     * 获取<p>转码规格 ID，参见<a href="https://cloud.tencent.com/document/product/862/37042">转码参数模板</a>。</p>
                     * @return Definition <p>转码规格 ID，参见<a href="https://cloud.tencent.com/document/product/862/37042">转码参数模板</a>。</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>转码规格 ID，参见<a href="https://cloud.tencent.com/document/product/862/37042">转码参数模板</a>。</p>
                     * @param _definition <p>转码规格 ID，参见<a href="https://cloud.tencent.com/document/product/862/37042">转码参数模板</a>。</p>
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
                     * 获取<p>视频流码率平均值与音频流码率平均值之和， 单位：bps。</p>
                     * @return Bitrate <p>视频流码率平均值与音频流码率平均值之和， 单位：bps。</p>
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置<p>视频流码率平均值与音频流码率平均值之和， 单位：bps。</p>
                     * @param _bitrate <p>视频流码率平均值与音频流码率平均值之和， 单位：bps。</p>
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
                     * 获取<p>视频流高度的最大值，单位：px。</p>
                     * @return Height <p>视频流高度的最大值，单位：px。</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>视频流高度的最大值，单位：px。</p>
                     * @param _height <p>视频流高度的最大值，单位：px。</p>
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
                     * 获取<p>视频流宽度的最大值，单位：px。</p>
                     * @return Width <p>视频流宽度的最大值，单位：px。</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>视频流宽度的最大值，单位：px。</p>
                     * @param _width <p>视频流宽度的最大值，单位：px。</p>
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
                     * 获取<p>媒体文件总大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。</p>
                     * @return Size <p>媒体文件总大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。</p>
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>媒体文件总大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。</p>
                     * @param _size <p>媒体文件总大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。</p>
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
                     * 获取<p>视频时长，单位：秒。</p>
                     * @return Duration <p>视频时长，单位：秒。</p>
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置<p>视频时长，单位：秒。</p>
                     * @param _duration <p>视频时长，单位：秒。</p>
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
                     * 获取<p>容器类型，例如 m4a，mp4 等。</p>
                     * @return Container <p>容器类型，例如 m4a，mp4 等。</p>
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置<p>容器类型，例如 m4a，mp4 等。</p>
                     * @param _container <p>容器类型，例如 m4a，mp4 等。</p>
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
                     * 获取<p>视频的 md5 值。</p>
                     * @return Md5 <p>视频的 md5 值。</p>
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置<p>视频的 md5 值。</p>
                     * @param _md5 <p>视频的 md5 值。</p>
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
                     * 获取<p>音频流信息。</p>
                     * @return AudioStreamSet <p>音频流信息。</p>
                     * 
                     */
                    std::vector<MediaAudioStreamItem> GetAudioStreamSet() const;

                    /**
                     * 设置<p>音频流信息。</p>
                     * @param _audioStreamSet <p>音频流信息。</p>
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
                     * 获取<p>视频流信息。</p>
                     * @return VideoStreamSet <p>视频流信息。</p>
                     * 
                     */
                    std::vector<MediaVideoStreamItem> GetVideoStreamSet() const;

                    /**
                     * 设置<p>视频流信息。</p>
                     * @param _videoStreamSet <p>视频流信息。</p>
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
                     * 获取<p>视频转码使用增强项说明，增强项解释</p><li>hdr：HDR配置</li><li>wd_fps：插帧帧率配置</li><li>video_super_resolution：    超分配置</li><li>repair：综合增强配置</li><li>denoise：视频降噪配置</li><li>color_enhance：色彩增强配置</li><li>scratch：去划痕配置</li><li>artifact：去伪影（毛刺）配置</li><li>sharp：细节增强配置</li><li>low_light：低光照增强配置</li><li>face_enhance：人脸增强配置</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallBackExtInfo <p>视频转码使用增强项说明，增强项解释</p><li>hdr：HDR配置</li><li>wd_fps：插帧帧率配置</li><li>video_super_resolution：    超分配置</li><li>repair：综合增强配置</li><li>denoise：视频降噪配置</li><li>color_enhance：色彩增强配置</li><li>scratch：去划痕配置</li><li>artifact：去伪影（毛刺）配置</li><li>sharp：细节增强配置</li><li>low_light：低光照增强配置</li><li>face_enhance：人脸增强配置</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCallBackExtInfo() const;

                    /**
                     * 设置<p>视频转码使用增强项说明，增强项解释</p><li>hdr：HDR配置</li><li>wd_fps：插帧帧率配置</li><li>video_super_resolution：    超分配置</li><li>repair：综合增强配置</li><li>denoise：视频降噪配置</li><li>color_enhance：色彩增强配置</li><li>scratch：去划痕配置</li><li>artifact：去伪影（毛刺）配置</li><li>sharp：细节增强配置</li><li>low_light：低光照增强配置</li><li>face_enhance：人脸增强配置</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _callBackExtInfo <p>视频转码使用增强项说明，增强项解释</p><li>hdr：HDR配置</li><li>wd_fps：插帧帧率配置</li><li>video_super_resolution：    超分配置</li><li>repair：综合增强配置</li><li>denoise：视频降噪配置</li><li>color_enhance：色彩增强配置</li><li>scratch：去划痕配置</li><li>artifact：去伪影（毛刺）配置</li><li>sharp：细节增强配置</li><li>low_light：低光照增强配置</li><li>face_enhance：人脸增强配置</li>
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

                    /**
                     * 获取<p>MediaTranscodeItem</p>
                     * @return Usage <p>MediaTranscodeItem</p>
                     * 
                     */
                    MediaUsageItem GetUsage() const;

                    /**
                     * 设置<p>MediaTranscodeItem</p>
                     * @param _usage <p>MediaTranscodeItem</p>
                     * 
                     */
                    void SetUsage(const MediaUsageItem& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * <p>转码后文件的目标存储。</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>转码后的视频文件路径。</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>转码规格 ID，参见<a href="https://cloud.tencent.com/document/product/862/37042">转码参数模板</a>。</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>视频流码率平均值与音频流码率平均值之和， 单位：bps。</p>
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * <p>视频流高度的最大值，单位：px。</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>视频流宽度的最大值，单位：px。</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>媒体文件总大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。</p>
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>视频时长，单位：秒。</p>
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>容器类型，例如 m4a，mp4 等。</p>
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * <p>视频的 md5 值。</p>
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * <p>音频流信息。</p>
                     */
                    std::vector<MediaAudioStreamItem> m_audioStreamSet;
                    bool m_audioStreamSetHasBeenSet;

                    /**
                     * <p>视频流信息。</p>
                     */
                    std::vector<MediaVideoStreamItem> m_videoStreamSet;
                    bool m_videoStreamSetHasBeenSet;

                    /**
                     * <p>视频转码使用增强项说明，增强项解释</p><li>hdr：HDR配置</li><li>wd_fps：插帧帧率配置</li><li>video_super_resolution：    超分配置</li><li>repair：综合增强配置</li><li>denoise：视频降噪配置</li><li>color_enhance：色彩增强配置</li><li>scratch：去划痕配置</li><li>artifact：去伪影（毛刺）配置</li><li>sharp：细节增强配置</li><li>low_light：低光照增强配置</li><li>face_enhance：人脸增强配置</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callBackExtInfo;
                    bool m_callBackExtInfoHasBeenSet;

                    /**
                     * <p>MediaTranscodeItem</p>
                     */
                    MediaUsageItem m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIATRANSCODEITEM_H_
