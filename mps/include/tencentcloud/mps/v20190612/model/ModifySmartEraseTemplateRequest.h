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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSMARTERASETEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSMARTERASETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SmartEraseSubtitleConfig.h>
#include <tencentcloud/mps/v20190612/model/SmartEraseWatermarkConfig.h>
#include <tencentcloud/mps/v20190612/model/SmartErasePrivacyConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifySmartEraseTemplate请求参数结构体
                */
                class ModifySmartEraseTemplateRequest : public AbstractModel
                {
                public:
                    ModifySmartEraseTemplateRequest();
                    ~ModifySmartEraseTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>智能擦除模板唯一标识</p>
                     * @return Definition <p>智能擦除模板唯一标识</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>智能擦除模板唯一标识</p>
                     * @param _definition <p>智能擦除模板唯一标识</p>
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
                     * 获取<p>字幕擦除配置，EraseType取subtitle或者EraseType不填，对应模板原EraseType为subtitle时生效。</p>
                     * @return EraseSubtitleConfig <p>字幕擦除配置，EraseType取subtitle或者EraseType不填，对应模板原EraseType为subtitle时生效。</p>
                     * 
                     */
                    SmartEraseSubtitleConfig GetEraseSubtitleConfig() const;

                    /**
                     * 设置<p>字幕擦除配置，EraseType取subtitle或者EraseType不填，对应模板原EraseType为subtitle时生效。</p>
                     * @param _eraseSubtitleConfig <p>字幕擦除配置，EraseType取subtitle或者EraseType不填，对应模板原EraseType为subtitle时生效。</p>
                     * 
                     */
                    void SetEraseSubtitleConfig(const SmartEraseSubtitleConfig& _eraseSubtitleConfig);

                    /**
                     * 判断参数 EraseSubtitleConfig 是否已赋值
                     * @return EraseSubtitleConfig 是否已赋值
                     * 
                     */
                    bool EraseSubtitleConfigHasBeenSet() const;

                    /**
                     * 获取<p>水印擦除配置，EraseType取watermark或者EraseType不填，对应模板原EraseType为watermark时生效。</p>
                     * @return EraseWatermarkConfig <p>水印擦除配置，EraseType取watermark或者EraseType不填，对应模板原EraseType为watermark时生效。</p>
                     * 
                     */
                    SmartEraseWatermarkConfig GetEraseWatermarkConfig() const;

                    /**
                     * 设置<p>水印擦除配置，EraseType取watermark或者EraseType不填，对应模板原EraseType为watermark时生效。</p>
                     * @param _eraseWatermarkConfig <p>水印擦除配置，EraseType取watermark或者EraseType不填，对应模板原EraseType为watermark时生效。</p>
                     * 
                     */
                    void SetEraseWatermarkConfig(const SmartEraseWatermarkConfig& _eraseWatermarkConfig);

                    /**
                     * 判断参数 EraseWatermarkConfig 是否已赋值
                     * @return EraseWatermarkConfig 是否已赋值
                     * 
                     */
                    bool EraseWatermarkConfigHasBeenSet() const;

                    /**
                     * 获取<p>隐私保护配置，EraseType取privacy或者EraseType不填，对应模板原EraseType为privacy时生效。</p>
                     * @return ErasePrivacyConfig <p>隐私保护配置，EraseType取privacy或者EraseType不填，对应模板原EraseType为privacy时生效。</p>
                     * 
                     */
                    SmartErasePrivacyConfig GetErasePrivacyConfig() const;

                    /**
                     * 设置<p>隐私保护配置，EraseType取privacy或者EraseType不填，对应模板原EraseType为privacy时生效。</p>
                     * @param _erasePrivacyConfig <p>隐私保护配置，EraseType取privacy或者EraseType不填，对应模板原EraseType为privacy时生效。</p>
                     * 
                     */
                    void SetErasePrivacyConfig(const SmartErasePrivacyConfig& _erasePrivacyConfig);

                    /**
                     * 判断参数 ErasePrivacyConfig 是否已赋值
                     * @return ErasePrivacyConfig 是否已赋值
                     * 
                     */
                    bool ErasePrivacyConfigHasBeenSet() const;

                private:

                    /**
                     * <p>智能擦除模板唯一标识</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>智能擦除模板名称长度限制：64 个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>智能擦除模板描述信息长度限制：256 个字符。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>擦除类型</p><ul><li>subtitle 去字幕</li><li>watermark 去水印</li><li>privacy 隐私保护</li></ul>
                     */
                    std::string m_eraseType;
                    bool m_eraseTypeHasBeenSet;

                    /**
                     * <p>字幕擦除配置，EraseType取subtitle或者EraseType不填，对应模板原EraseType为subtitle时生效。</p>
                     */
                    SmartEraseSubtitleConfig m_eraseSubtitleConfig;
                    bool m_eraseSubtitleConfigHasBeenSet;

                    /**
                     * <p>水印擦除配置，EraseType取watermark或者EraseType不填，对应模板原EraseType为watermark时生效。</p>
                     */
                    SmartEraseWatermarkConfig m_eraseWatermarkConfig;
                    bool m_eraseWatermarkConfigHasBeenSet;

                    /**
                     * <p>隐私保护配置，EraseType取privacy或者EraseType不填，对应模板原EraseType为privacy时生效。</p>
                     */
                    SmartErasePrivacyConfig m_erasePrivacyConfig;
                    bool m_erasePrivacyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSMARTERASETEMPLATEREQUEST_H_
