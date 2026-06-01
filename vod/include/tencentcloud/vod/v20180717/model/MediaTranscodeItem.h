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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRANSCODEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRANSCODEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaVideoStreamItem.h>
#include <tencentcloud/vod/v20180717/model/MediaAudioStreamItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
                     * 获取<p>转码后的视频文件地址。</p>
                     * @return Url <p>转码后的视频文件地址。</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>转码后的视频文件地址。</p>
                     * @param _url <p>转码后的视频文件地址。</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>转码规格 ID，参见<a href="https://cloud.tencent.com/document/product/266/33476">转码参数模板</a>。<br><font color="red">注意：取值 0 表示原始文件。</font></p>
                     * @return Definition <p>转码规格 ID，参见<a href="https://cloud.tencent.com/document/product/266/33476">转码参数模板</a>。<br><font color="red">注意：取值 0 表示原始文件。</font></p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>转码规格 ID，参见<a href="https://cloud.tencent.com/document/product/266/33476">转码参数模板</a>。<br><font color="red">注意：取值 0 表示原始文件。</font></p>
                     * @param _definition <p>转码规格 ID，参见<a href="https://cloud.tencent.com/document/product/266/33476">转码参数模板</a>。<br><font color="red">注意：取值 0 表示原始文件。</font></p>
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
                     * 获取<p>媒体文件总大小，单位：字节。</p><li>当媒体文件为 HLS 时，大小是 m3u8 和 ts 文件大小的总和。</li>
                     * @return Size <p>媒体文件总大小，单位：字节。</p><li>当媒体文件为 HLS 时，大小是 m3u8 和 ts 文件大小的总和。</li>
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>媒体文件总大小，单位：字节。</p><li>当媒体文件为 HLS 时，大小是 m3u8 和 ts 文件大小的总和。</li>
                     * @param _size <p>媒体文件总大小，单位：字节。</p><li>当媒体文件为 HLS 时，大小是 m3u8 和 ts 文件大小的总和。</li>
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
                     * 获取<p>数字水印类型。可选值：</p><li>Trace 表示经过溯源水印处理；</li><li>CopyRight 表示经过版权水印处理；</li><li>None 表示没有经过数字水印处理。</li>
                     * @return DigitalWatermarkType <p>数字水印类型。可选值：</p><li>Trace 表示经过溯源水印处理；</li><li>CopyRight 表示经过版权水印处理；</li><li>None 表示没有经过数字水印处理。</li>
                     * 
                     */
                    std::string GetDigitalWatermarkType() const;

                    /**
                     * 设置<p>数字水印类型。可选值：</p><li>Trace 表示经过溯源水印处理；</li><li>CopyRight 表示经过版权水印处理；</li><li>None 表示没有经过数字水印处理。</li>
                     * @param _digitalWatermarkType <p>数字水印类型。可选值：</p><li>Trace 表示经过溯源水印处理；</li><li>CopyRight 表示经过版权水印处理；</li><li>None 表示没有经过数字水印处理。</li>
                     * 
                     */
                    void SetDigitalWatermarkType(const std::string& _digitalWatermarkType);

                    /**
                     * 判断参数 DigitalWatermarkType 是否已赋值
                     * @return DigitalWatermarkType 是否已赋值
                     * 
                     */
                    bool DigitalWatermarkTypeHasBeenSet() const;

                    /**
                     * 获取<p>版权信息。</p>
                     * @return CopyRightWatermarkText <p>版权信息。</p>
                     * 
                     */
                    std::string GetCopyRightWatermarkText() const;

                    /**
                     * 设置<p>版权信息。</p>
                     * @param _copyRightWatermarkText <p>版权信息。</p>
                     * 
                     */
                    void SetCopyRightWatermarkText(const std::string& _copyRightWatermarkText);

                    /**
                     * 判断参数 CopyRightWatermarkText 是否已赋值
                     * @return CopyRightWatermarkText 是否已赋值
                     * 
                     */
                    bool CopyRightWatermarkTextHasBeenSet() const;

                    /**
                     * 获取<p>数字水印模板id。</p>
                     * @return BlindWatermarkDefinition <p>数字水印模板id。</p>
                     * 
                     */
                    int64_t GetBlindWatermarkDefinition() const;

                    /**
                     * 设置<p>数字水印模板id。</p>
                     * @param _blindWatermarkDefinition <p>数字水印模板id。</p>
                     * 
                     */
                    void SetBlindWatermarkDefinition(const int64_t& _blindWatermarkDefinition);

                    /**
                     * 判断参数 BlindWatermarkDefinition 是否已赋值
                     * @return BlindWatermarkDefinition 是否已赋值
                     * 
                     */
                    bool BlindWatermarkDefinitionHasBeenSet() const;

                    /**
                     * 获取<p>转码生成的新FileId，请求开启独立媒资输出时有效。</p>
                     * @return FileId <p>转码生成的新FileId，请求开启独立媒资输出时有效。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>转码生成的新FileId，请求开启独立媒资输出时有效。</p>
                     * @param _fileId <p>转码生成的新FileId，请求开启独立媒资输出时有效。</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * <p>转码后的视频文件地址。</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>转码规格 ID，参见<a href="https://cloud.tencent.com/document/product/266/33476">转码参数模板</a>。<br><font color="red">注意：取值 0 表示原始文件。</font></p>
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
                     * <p>媒体文件总大小，单位：字节。</p><li>当媒体文件为 HLS 时，大小是 m3u8 和 ts 文件大小的总和。</li>
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>视频时长，单位：秒。</p>
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>视频的 md5 值。</p>
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * <p>容器类型，例如 m4a，mp4 等。</p>
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * <p>视频流信息。</p>
                     */
                    std::vector<MediaVideoStreamItem> m_videoStreamSet;
                    bool m_videoStreamSetHasBeenSet;

                    /**
                     * <p>音频流信息。</p>
                     */
                    std::vector<MediaAudioStreamItem> m_audioStreamSet;
                    bool m_audioStreamSetHasBeenSet;

                    /**
                     * <p>数字水印类型。可选值：</p><li>Trace 表示经过溯源水印处理；</li><li>CopyRight 表示经过版权水印处理；</li><li>None 表示没有经过数字水印处理。</li>
                     */
                    std::string m_digitalWatermarkType;
                    bool m_digitalWatermarkTypeHasBeenSet;

                    /**
                     * <p>版权信息。</p>
                     */
                    std::string m_copyRightWatermarkText;
                    bool m_copyRightWatermarkTextHasBeenSet;

                    /**
                     * <p>数字水印模板id。</p>
                     */
                    int64_t m_blindWatermarkDefinition;
                    bool m_blindWatermarkDefinitionHasBeenSet;

                    /**
                     * <p>转码生成的新FileId，请求开启独立媒资输出时有效。</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRANSCODEITEM_H_
