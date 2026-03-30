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
                     * 获取<p>转自适应码流规格。</p>
                     * @return Definition <p>转自适应码流规格。</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>转自适应码流规格。</p>
                     * @param _definition <p>转自适应码流规格。</p>
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
                     * 获取<p>打包格式，取值范围：</p><li>HLS；</li><li>DASH。</li>
                     * @return Package <p>打包格式，取值范围：</p><li>HLS；</li><li>DASH。</li>
                     * 
                     */
                    std::string GetPackage() const;

                    /**
                     * 设置<p>打包格式，取值范围：</p><li>HLS；</li><li>DASH。</li>
                     * @param _package <p>打包格式，取值范围：</p><li>HLS；</li><li>DASH。</li>
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
                     * 获取<p>加密类型。</p>
                     * @return DrmType <p>加密类型。</p>
                     * 
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置<p>加密类型。</p>
                     * @param _drmType <p>加密类型。</p>
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
                     * 获取<p>播放地址。</p>
                     * @return Url <p>播放地址。</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>播放地址。</p>
                     * @param _url <p>播放地址。</p>
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
                     * 获取<p>媒体文件大小，单位：字节。</p><li>当媒体文件为 HLS 时，大小是 m3u8 和 ts 文件大小的总和；</li><li>当媒体文件为 DASH 时，大小是 mpd 和分片文件大小的总和；</li><li><font color="red">注意</font>：在 2022-01-10T16:00:00Z 前处理生成的自适应码流文件此字段为0。</li>
                     * @return Size <p>媒体文件大小，单位：字节。</p><li>当媒体文件为 HLS 时，大小是 m3u8 和 ts 文件大小的总和；</li><li>当媒体文件为 DASH 时，大小是 mpd 和分片文件大小的总和；</li><li><font color="red">注意</font>：在 2022-01-10T16:00:00Z 前处理生成的自适应码流文件此字段为0。</li>
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>媒体文件大小，单位：字节。</p><li>当媒体文件为 HLS 时，大小是 m3u8 和 ts 文件大小的总和；</li><li>当媒体文件为 DASH 时，大小是 mpd 和分片文件大小的总和；</li><li><font color="red">注意</font>：在 2022-01-10T16:00:00Z 前处理生成的自适应码流文件此字段为0。</li>
                     * @param _size <p>媒体文件大小，单位：字节。</p><li>当媒体文件为 HLS 时，大小是 m3u8 和 ts 文件大小的总和；</li><li>当媒体文件为 DASH 时，大小是 mpd 和分片文件大小的总和；</li><li><font color="red">注意</font>：在 2022-01-10T16:00:00Z 前处理生成的自适应码流文件此字段为0。</li>
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
                     * 获取<p>子流信息列表。</p>
                     * @return SubStreamSet <p>子流信息列表。</p>
                     * 
                     */
                    std::vector<MediaSubStreamInfoItem> GetSubStreamSet() const;

                    /**
                     * 设置<p>子流信息列表。</p>
                     * @param _subStreamSet <p>子流信息列表。</p>
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
                     * 获取<p>字幕信息列表。</p>
                     * @return SubtitleSet <p>字幕信息列表。</p>
                     * 
                     */
                    std::vector<MediaSubtitleItem> GetSubtitleSet() const;

                    /**
                     * 设置<p>字幕信息列表。</p>
                     * @param _subtitleSet <p>字幕信息列表。</p>
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
                     * 获取<p>默认字幕的唯一标识。</p>
                     * @return DefaultSubtitleId <p>默认字幕的唯一标识。</p>
                     * 
                     */
                    std::string GetDefaultSubtitleId() const;

                    /**
                     * 设置<p>默认字幕的唯一标识。</p>
                     * @param _defaultSubtitleId <p>默认字幕的唯一标识。</p>
                     * 
                     */
                    void SetDefaultSubtitleId(const std::string& _defaultSubtitleId);

                    /**
                     * 判断参数 DefaultSubtitleId 是否已赋值
                     * @return DefaultSubtitleId 是否已赋值
                     * 
                     */
                    bool DefaultSubtitleIdHasBeenSet() const;

                    /**
                     * 获取<p>DRM加密方法。</p>
                     * @return DrmEncryptType <p>DRM加密方法。</p>
                     * 
                     */
                    std::string GetDrmEncryptType() const;

                    /**
                     * 设置<p>DRM加密方法。</p>
                     * @param _drmEncryptType <p>DRM加密方法。</p>
                     * 
                     */
                    void SetDrmEncryptType(const std::string& _drmEncryptType);

                    /**
                     * 判断参数 DrmEncryptType 是否已赋值
                     * @return DrmEncryptType 是否已赋值
                     * 
                     */
                    bool DrmEncryptTypeHasBeenSet() const;

                private:

                    /**
                     * <p>转自适应码流规格。</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>打包格式，取值范围：</p><li>HLS；</li><li>DASH。</li>
                     */
                    std::string m_package;
                    bool m_packageHasBeenSet;

                    /**
                     * <p>加密类型。</p>
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * <p>播放地址。</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>媒体文件大小，单位：字节。</p><li>当媒体文件为 HLS 时，大小是 m3u8 和 ts 文件大小的总和；</li><li>当媒体文件为 DASH 时，大小是 mpd 和分片文件大小的总和；</li><li><font color="red">注意</font>：在 2022-01-10T16:00:00Z 前处理生成的自适应码流文件此字段为0。</li>
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>数字水印类型。可选值：</p><li>Trace 表示经过溯源水印处理；</li><li>CopyRight 表示经过版权水印处理；</li><li>None 表示没有经过数字水印处理。</li>
                     */
                    std::string m_digitalWatermarkType;
                    bool m_digitalWatermarkTypeHasBeenSet;

                    /**
                     * <p>子流信息列表。</p>
                     */
                    std::vector<MediaSubStreamInfoItem> m_subStreamSet;
                    bool m_subStreamSetHasBeenSet;

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
                     * <p>字幕信息列表。</p>
                     */
                    std::vector<MediaSubtitleItem> m_subtitleSet;
                    bool m_subtitleSetHasBeenSet;

                    /**
                     * <p>默认字幕的唯一标识。</p>
                     */
                    std::string m_defaultSubtitleId;
                    bool m_defaultSubtitleIdHasBeenSet;

                    /**
                     * <p>DRM加密方法。</p>
                     */
                    std::string m_drmEncryptType;
                    bool m_drmEncryptTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_
