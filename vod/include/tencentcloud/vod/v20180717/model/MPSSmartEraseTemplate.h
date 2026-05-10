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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASETEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSSmartEraseSubtitleConfig.h>
#include <tencentcloud/vod/v20180717/model/MPSSmartEraseWatermarkConfig.h>
#include <tencentcloud/vod/v20180717/model/MPSSmartErasePrivacyConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * MPS智能擦除模板输入
                */
                class MPSSmartEraseTemplate : public AbstractModel
                {
                public:
                    MPSSmartEraseTemplate();
                    ~MPSSmartEraseTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>智能擦除模板名称长度限制：64 个字符。</p>
                     * @return Name <p>智能擦除模板名称长度限制：64 个字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>智能擦除模板名称长度限制：64 个字符。</p>
                     * @param _name <p>智能擦除模板名称长度限制：64 个字符。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>擦除类型</p><ul><li>subtitle 去字幕</li><li>watermark 去水印</li><li>privacy 隐私保护</li></ul>
                     * @return EraseType <p>擦除类型</p><ul><li>subtitle 去字幕</li><li>watermark 去水印</li><li>privacy 隐私保护</li></ul>
                     * 
                     */
                    std::string GetEraseType() const;

                    /**
                     * 设置<p>擦除类型</p><ul><li>subtitle 去字幕</li><li>watermark 去水印</li><li>privacy 隐私保护</li></ul>
                     * @param _eraseType <p>擦除类型</p><ul><li>subtitle 去字幕</li><li>watermark 去水印</li><li>privacy 隐私保护</li></ul>
                     * 
                     */
                    void SetEraseType(const std::string& _eraseType);

                    /**
                     * 判断参数 EraseType 是否已赋值
                     * @return EraseType 是否已赋值
                     * 
                     */
                    bool EraseTypeHasBeenSet() const;

                    /**
                     * 获取<p>智能擦除模板描述信息长度限制：256 个字符。</p>
                     * @return Comment <p>智能擦除模板描述信息长度限制：256 个字符。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>智能擦除模板描述信息长度限制：256 个字符。</p>
                     * @param _comment <p>智能擦除模板描述信息长度限制：256 个字符。</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>字幕擦除配置，EraseType取subtitle时必填且仅此时生效。</p>
                     * @return EraseSubtitleConfig <p>字幕擦除配置，EraseType取subtitle时必填且仅此时生效。</p>
                     * 
                     */
                    MPSSmartEraseSubtitleConfig GetEraseSubtitleConfig() const;

                    /**
                     * 设置<p>字幕擦除配置，EraseType取subtitle时必填且仅此时生效。</p>
                     * @param _eraseSubtitleConfig <p>字幕擦除配置，EraseType取subtitle时必填且仅此时生效。</p>
                     * 
                     */
                    void SetEraseSubtitleConfig(const MPSSmartEraseSubtitleConfig& _eraseSubtitleConfig);

                    /**
                     * 判断参数 EraseSubtitleConfig 是否已赋值
                     * @return EraseSubtitleConfig 是否已赋值
                     * 
                     */
                    bool EraseSubtitleConfigHasBeenSet() const;

                    /**
                     * 获取<p>水印擦除配置，EraseType取watermark时必填且仅此时生效。</p>
                     * @return EraseWatermarkConfig <p>水印擦除配置，EraseType取watermark时必填且仅此时生效。</p>
                     * 
                     */
                    MPSSmartEraseWatermarkConfig GetEraseWatermarkConfig() const;

                    /**
                     * 设置<p>水印擦除配置，EraseType取watermark时必填且仅此时生效。</p>
                     * @param _eraseWatermarkConfig <p>水印擦除配置，EraseType取watermark时必填且仅此时生效。</p>
                     * 
                     */
                    void SetEraseWatermarkConfig(const MPSSmartEraseWatermarkConfig& _eraseWatermarkConfig);

                    /**
                     * 判断参数 EraseWatermarkConfig 是否已赋值
                     * @return EraseWatermarkConfig 是否已赋值
                     * 
                     */
                    bool EraseWatermarkConfigHasBeenSet() const;

                    /**
                     * 获取<p>隐私保护配置，EraseType取privacy时必填且仅此时生效。</p>
                     * @return ErasePrivacyConfig <p>隐私保护配置，EraseType取privacy时必填且仅此时生效。</p>
                     * 
                     */
                    MPSSmartErasePrivacyConfig GetErasePrivacyConfig() const;

                    /**
                     * 设置<p>隐私保护配置，EraseType取privacy时必填且仅此时生效。</p>
                     * @param _erasePrivacyConfig <p>隐私保护配置，EraseType取privacy时必填且仅此时生效。</p>
                     * 
                     */
                    void SetErasePrivacyConfig(const MPSSmartErasePrivacyConfig& _erasePrivacyConfig);

                    /**
                     * 判断参数 ErasePrivacyConfig 是否已赋值
                     * @return ErasePrivacyConfig 是否已赋值
                     * 
                     */
                    bool ErasePrivacyConfigHasBeenSet() const;

                    /**
                     * 获取<p>示例视频或图片的宽，单位像素值</p>
                     * @return SampleWidth <p>示例视频或图片的宽，单位像素值</p>
                     * 
                     */
                    uint64_t GetSampleWidth() const;

                    /**
                     * 设置<p>示例视频或图片的宽，单位像素值</p>
                     * @param _sampleWidth <p>示例视频或图片的宽，单位像素值</p>
                     * 
                     */
                    void SetSampleWidth(const uint64_t& _sampleWidth);

                    /**
                     * 判断参数 SampleWidth 是否已赋值
                     * @return SampleWidth 是否已赋值
                     * 
                     */
                    bool SampleWidthHasBeenSet() const;

                    /**
                     * 获取<p>示例视频或图片的高，单位像素值</p>
                     * @return SampleHeight <p>示例视频或图片的高，单位像素值</p>
                     * 
                     */
                    uint64_t GetSampleHeight() const;

                    /**
                     * 设置<p>示例视频或图片的高，单位像素值</p>
                     * @param _sampleHeight <p>示例视频或图片的高，单位像素值</p>
                     * 
                     */
                    void SetSampleHeight(const uint64_t& _sampleHeight);

                    /**
                     * 判断参数 SampleHeight 是否已赋值
                     * @return SampleHeight 是否已赋值
                     * 
                     */
                    bool SampleHeightHasBeenSet() const;

                private:

                    /**
                     * <p>智能擦除模板名称长度限制：64 个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>擦除类型</p><ul><li>subtitle 去字幕</li><li>watermark 去水印</li><li>privacy 隐私保护</li></ul>
                     */
                    std::string m_eraseType;
                    bool m_eraseTypeHasBeenSet;

                    /**
                     * <p>智能擦除模板描述信息长度限制：256 个字符。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>字幕擦除配置，EraseType取subtitle时必填且仅此时生效。</p>
                     */
                    MPSSmartEraseSubtitleConfig m_eraseSubtitleConfig;
                    bool m_eraseSubtitleConfigHasBeenSet;

                    /**
                     * <p>水印擦除配置，EraseType取watermark时必填且仅此时生效。</p>
                     */
                    MPSSmartEraseWatermarkConfig m_eraseWatermarkConfig;
                    bool m_eraseWatermarkConfigHasBeenSet;

                    /**
                     * <p>隐私保护配置，EraseType取privacy时必填且仅此时生效。</p>
                     */
                    MPSSmartErasePrivacyConfig m_erasePrivacyConfig;
                    bool m_erasePrivacyConfigHasBeenSet;

                    /**
                     * <p>示例视频或图片的宽，单位像素值</p>
                     */
                    uint64_t m_sampleWidth;
                    bool m_sampleWidthHasBeenSet;

                    /**
                     * <p>示例视频或图片的高，单位像素值</p>
                     */
                    uint64_t m_sampleHeight;
                    bool m_sampleHeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASETEMPLATE_H_
