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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaSubStreamInfoItem.h>
#include <tencentcloud/vod/v20180717/model/MediaSubtitleItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 转自适应码流信息
                */
                class AdaptiveDynamicStreamingInfoItem : public AbstractModel
                {
                public:
                    AdaptiveDynamicStreamingInfoItem();
                    ~AdaptiveDynamicStreamingInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转自适应码流规格。
                     * @return Definition 转自适应码流规格。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置转自适应码流规格。
                     * @param _definition 转自适应码流规格。
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
                     * 获取打包格式，取值范围：
<li>HLS；</li>
<li>DASH。</li>
                     * @return Package 打包格式，取值范围：
<li>HLS；</li>
<li>DASH。</li>
                     * 
                     */
                    std::string GetPackage() const;

                    /**
                     * 设置打包格式，取值范围：
<li>HLS；</li>
<li>DASH。</li>
                     * @param _package 打包格式，取值范围：
<li>HLS；</li>
<li>DASH。</li>
                     * 
                     */
                    void SetPackage(const std::string& _package);

                    /**
                     * 判断参数 Package 是否已赋值
                     * @return Package 是否已赋值
                     * 
                     */
                    bool PackageHasBeenSet() const;

                    /**
                     * 获取加密类型。
                     * @return DrmType 加密类型。
                     * 
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置加密类型。
                     * @param _drmType 加密类型。
                     * 
                     */
                    void SetDrmType(const std::string& _drmType);

                    /**
                     * 判断参数 DrmType 是否已赋值
                     * @return DrmType 是否已赋值
                     * 
                     */
                    bool DrmTypeHasBeenSet() const;

                    /**
                     * 获取播放地址。
                     * @return Url 播放地址。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置播放地址。
                     * @param _url 播放地址。
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
                     * 获取媒体文件大小，单位：字节。
<li>当媒体文件为 HLS 时，大小是 m3u8 和 ts 文件大小的总和；</li>
<li>当媒体文件为 DASH 时，大小是 mpd 和分片文件大小的总和；</li>
<li><font color=red>注意</font>：在 2022-01-10T16:00:00Z 前处理生成的自适应码流文件此字段为0。</li>
                     * @return Size 媒体文件大小，单位：字节。
<li>当媒体文件为 HLS 时，大小是 m3u8 和 ts 文件大小的总和；</li>
<li>当媒体文件为 DASH 时，大小是 mpd 和分片文件大小的总和；</li>
<li><font color=red>注意</font>：在 2022-01-10T16:00:00Z 前处理生成的自适应码流文件此字段为0。</li>
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置媒体文件大小，单位：字节。
<li>当媒体文件为 HLS 时，大小是 m3u8 和 ts 文件大小的总和；</li>
<li>当媒体文件为 DASH 时，大小是 mpd 和分片文件大小的总和；</li>
<li><font color=red>注意</font>：在 2022-01-10T16:00:00Z 前处理生成的自适应码流文件此字段为0。</li>
                     * @param _size 媒体文件大小，单位：字节。
<li>当媒体文件为 HLS 时，大小是 m3u8 和 ts 文件大小的总和；</li>
<li>当媒体文件为 DASH 时，大小是 mpd 和分片文件大小的总和；</li>
<li><font color=red>注意</font>：在 2022-01-10T16:00:00Z 前处理生成的自适应码流文件此字段为0。</li>
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
                     * 获取数字水印类型。可选值：
<li>Trace 表示经过溯源水印处理；</li>
<li>CopyRight 表示经过版权水印处理；</li>
<li>None 表示没有经过数字水印处理。</li>
                     * @return DigitalWatermarkType 数字水印类型。可选值：
<li>Trace 表示经过溯源水印处理；</li>
<li>CopyRight 表示经过版权水印处理；</li>
<li>None 表示没有经过数字水印处理。</li>
                     * 
                     */
                    std::string GetDigitalWatermarkType() const;

                    /**
                     * 设置数字水印类型。可选值：
<li>Trace 表示经过溯源水印处理；</li>
<li>CopyRight 表示经过版权水印处理；</li>
<li>None 表示没有经过数字水印处理。</li>
                     * @param _digitalWatermarkType 数字水印类型。可选值：
<li>Trace 表示经过溯源水印处理；</li>
<li>CopyRight 表示经过版权水印处理；</li>
<li>None 表示没有经过数字水印处理。</li>
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
                     * 获取子流信息列表。
                     * @return SubStreamSet 子流信息列表。
                     * 
                     */
                    std::vector<MediaSubStreamInfoItem> GetSubStreamSet() const;

                    /**
                     * 设置子流信息列表。
                     * @param _subStreamSet 子流信息列表。
                     * 
                     */
                    void SetSubStreamSet(const std::vector<MediaSubStreamInfoItem>& _subStreamSet);

                    /**
                     * 判断参数 SubStreamSet 是否已赋值
                     * @return SubStreamSet 是否已赋值
                     * 
                     */
                    bool SubStreamSetHasBeenSet() const;

                    /**
                     * 获取版权信息。
                     * @return CopyRightWatermarkText 版权信息。
                     * 
                     */
                    std::string GetCopyRightWatermarkText() const;

                    /**
                     * 设置版权信息。
                     * @param _copyRightWatermarkText 版权信息。
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
                     * 获取字幕信息列表。
                     * @return SubtitleSet 字幕信息列表。
                     * 
                     */
                    std::vector<MediaSubtitleItem> GetSubtitleSet() const;

                    /**
                     * 设置字幕信息列表。
                     * @param _subtitleSet 字幕信息列表。
                     * 
                     */
                    void SetSubtitleSet(const std::vector<MediaSubtitleItem>& _subtitleSet);

                    /**
                     * 判断参数 SubtitleSet 是否已赋值
                     * @return SubtitleSet 是否已赋值
                     * 
                     */
                    bool SubtitleSetHasBeenSet() const;

                    /**
                     * 获取默认字幕的唯一标识。
                     * @return DefaultSubtitleId 默认字幕的唯一标识。
                     * 
                     */
                    std::string GetDefaultSubtitleId() const;

                    /**
                     * 设置默认字幕的唯一标识。
                     * @param _defaultSubtitleId 默认字幕的唯一标识。
                     * 
                     */
                    void SetDefaultSubtitleId(const std::string& _defaultSubtitleId);

                    /**
                     * 判断参数 DefaultSubtitleId 是否已赋值
                     * @return DefaultSubtitleId 是否已赋值
                     * 
                     */
                    bool DefaultSubtitleIdHasBeenSet() const;

                private:

                    /**
                     * 转自适应码流规格。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 打包格式，取值范围：
<li>HLS；</li>
<li>DASH。</li>
                     */
                    std::string m_package;
                    bool m_packageHasBeenSet;

                    /**
                     * 加密类型。
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * 播放地址。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 媒体文件大小，单位：字节。
<li>当媒体文件为 HLS 时，大小是 m3u8 和 ts 文件大小的总和；</li>
<li>当媒体文件为 DASH 时，大小是 mpd 和分片文件大小的总和；</li>
<li><font color=red>注意</font>：在 2022-01-10T16:00:00Z 前处理生成的自适应码流文件此字段为0。</li>
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 数字水印类型。可选值：
<li>Trace 表示经过溯源水印处理；</li>
<li>CopyRight 表示经过版权水印处理；</li>
<li>None 表示没有经过数字水印处理。</li>
                     */
                    std::string m_digitalWatermarkType;
                    bool m_digitalWatermarkTypeHasBeenSet;

                    /**
                     * 子流信息列表。
                     */
                    std::vector<MediaSubStreamInfoItem> m_subStreamSet;
                    bool m_subStreamSetHasBeenSet;

                    /**
                     * 版权信息。
                     */
                    std::string m_copyRightWatermarkText;
                    bool m_copyRightWatermarkTextHasBeenSet;

                    /**
                     * 字幕信息列表。
                     */
                    std::vector<MediaSubtitleItem> m_subtitleSet;
                    bool m_subtitleSetHasBeenSet;

                    /**
                     * 默认字幕的唯一标识。
                     */
                    std::string m_defaultSubtitleId;
                    bool m_defaultSubtitleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_
