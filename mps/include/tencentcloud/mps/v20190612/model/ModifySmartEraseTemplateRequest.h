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
                     * 获取智能擦除模板唯一标识
                     * @return Definition 智能擦除模板唯一标识
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置智能擦除模板唯一标识
                     * @param _definition 智能擦除模板唯一标识
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
                     * 获取智能擦除模板名称长度限制：64 个字符。
                     * @return Name 智能擦除模板名称长度限制：64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置智能擦除模板名称长度限制：64 个字符。
                     * @param _name 智能擦除模板名称长度限制：64 个字符。
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
                     * 获取智能擦除模板描述信息长度限制：256 个字符。
                     * @return Comment 智能擦除模板描述信息长度限制：256 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置智能擦除模板描述信息长度限制：256 个字符。
                     * @param _comment 智能擦除模板描述信息长度限制：256 个字符。
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
                     * 获取擦除类型
- subtitle 去字幕
- watermark 去水印
- privacy 隐私保护
                     * @return EraseType 擦除类型
- subtitle 去字幕
- watermark 去水印
- privacy 隐私保护
                     * 
                     */
                    std::string GetEraseType() const;

                    /**
                     * 设置擦除类型
- subtitle 去字幕
- watermark 去水印
- privacy 隐私保护
                     * @param _eraseType 擦除类型
- subtitle 去字幕
- watermark 去水印
- privacy 隐私保护
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
                     * 获取字幕擦除配置，EraseType取subtitle或者EraseType不填，对应模板原EraseType为subtitle时生效。
                     * @return EraseSubtitleConfig 字幕擦除配置，EraseType取subtitle或者EraseType不填，对应模板原EraseType为subtitle时生效。
                     * 
                     */
                    SmartEraseSubtitleConfig GetEraseSubtitleConfig() const;

                    /**
                     * 设置字幕擦除配置，EraseType取subtitle或者EraseType不填，对应模板原EraseType为subtitle时生效。
                     * @param _eraseSubtitleConfig 字幕擦除配置，EraseType取subtitle或者EraseType不填，对应模板原EraseType为subtitle时生效。
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
                     * 获取水印擦除配置，EraseType取watermark或者EraseType不填，对应模板原EraseType为watermark时生效。
                     * @return EraseWatermarkConfig 水印擦除配置，EraseType取watermark或者EraseType不填，对应模板原EraseType为watermark时生效。
                     * 
                     */
                    SmartEraseWatermarkConfig GetEraseWatermarkConfig() const;

                    /**
                     * 设置水印擦除配置，EraseType取watermark或者EraseType不填，对应模板原EraseType为watermark时生效。
                     * @param _eraseWatermarkConfig 水印擦除配置，EraseType取watermark或者EraseType不填，对应模板原EraseType为watermark时生效。
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
                     * 获取隐私保护配置，EraseType取privacy或者EraseType不填，对应模板原EraseType为privacy时生效。
                     * @return ErasePrivacyConfig 隐私保护配置，EraseType取privacy或者EraseType不填，对应模板原EraseType为privacy时生效。
                     * 
                     */
                    SmartErasePrivacyConfig GetErasePrivacyConfig() const;

                    /**
                     * 设置隐私保护配置，EraseType取privacy或者EraseType不填，对应模板原EraseType为privacy时生效。
                     * @param _erasePrivacyConfig 隐私保护配置，EraseType取privacy或者EraseType不填，对应模板原EraseType为privacy时生效。
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
                     * 智能擦除模板唯一标识
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 智能擦除模板名称长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 智能擦除模板描述信息长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 擦除类型
- subtitle 去字幕
- watermark 去水印
- privacy 隐私保护
                     */
                    std::string m_eraseType;
                    bool m_eraseTypeHasBeenSet;

                    /**
                     * 字幕擦除配置，EraseType取subtitle或者EraseType不填，对应模板原EraseType为subtitle时生效。
                     */
                    SmartEraseSubtitleConfig m_eraseSubtitleConfig;
                    bool m_eraseSubtitleConfigHasBeenSet;

                    /**
                     * 水印擦除配置，EraseType取watermark或者EraseType不填，对应模板原EraseType为watermark时生效。
                     */
                    SmartEraseWatermarkConfig m_eraseWatermarkConfig;
                    bool m_eraseWatermarkConfigHasBeenSet;

                    /**
                     * 隐私保护配置，EraseType取privacy或者EraseType不填，对应模板原EraseType为privacy时生效。
                     */
                    SmartErasePrivacyConfig m_erasePrivacyConfig;
                    bool m_erasePrivacyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSMARTERASETEMPLATEREQUEST_H_
