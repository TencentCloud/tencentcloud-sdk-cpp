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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYBLINDWATERMARKTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYBLINDWATERMARKTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifyBlindWatermarkTemplate请求参数结构体
                */
                class ModifyBlindWatermarkTemplateRequest : public AbstractModel
                {
                public:
                    ModifyBlindWatermarkTemplateRequest();
                    ~ModifyBlindWatermarkTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数字水印模板唯一标识。
                     * @return Definition 数字水印模板唯一标识。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置数字水印模板唯一标识。
                     * @param _definition 数字水印模板唯一标识。
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
                     * 获取数字水印模板名称，支持 中文、英文、数字、_、-和. 六种格式，长度限制：64 个字符。
                     * @return Name 数字水印模板名称，支持 中文、英文、数字、_、-和. 六种格式，长度限制：64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数字水印模板名称，支持 中文、英文、数字、_、-和. 六种格式，长度限制：64 个字符。
                     * @param _name 数字水印模板名称，支持 中文、英文、数字、_、-和. 六种格式，长度限制：64 个字符。
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
                     * 获取数字水印模板描述信息，长度限制：256 个字符。
                     * @return Comment 数字水印模板描述信息，长度限制：256 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置数字水印模板描述信息，长度限制：256 个字符。
                     * @param _comment 数字水印模板描述信息，长度限制：256 个字符。
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
                     * 获取数字水印文字内容，长度不超过64个字符，NAGRA水印类型的模板不支持修改文字内容。
                     * @return TextContent 数字水印文字内容，长度不超过64个字符，NAGRA水印类型的模板不支持修改文字内容。
                     * 
                     */
                    std::string GetTextContent() const;

                    /**
                     * 设置数字水印文字内容，长度不超过64个字符，NAGRA水印类型的模板不支持修改文字内容。
                     * @param _textContent 数字水印文字内容，长度不超过64个字符，NAGRA水印类型的模板不支持修改文字内容。
                     * 
                     */
                    void SetTextContent(const std::string& _textContent);

                    /**
                     * 判断参数 TextContent 是否已赋值
                     * @return TextContent 是否已赋值
                     * 
                     */
                    bool TextContentHasBeenSet() const;

                    /**
                     * 获取数字水印强度。 default: 默认，高清画质和抗性平衡 stronger:画质清晰，抗性较强 strongest:画质一般，抗性最强
                     * @return Strength 数字水印强度。 default: 默认，高清画质和抗性平衡 stronger:画质清晰，抗性较强 strongest:画质一般，抗性最强
                     * 
                     */
                    std::string GetStrength() const;

                    /**
                     * 设置数字水印强度。 default: 默认，高清画质和抗性平衡 stronger:画质清晰，抗性较强 strongest:画质一般，抗性最强
                     * @param _strength 数字水印强度。 default: 默认，高清画质和抗性平衡 stronger:画质清晰，抗性较强 strongest:画质一般，抗性最强
                     * 
                     */
                    void SetStrength(const std::string& _strength);

                    /**
                     * 判断参数 Strength 是否已赋值
                     * @return Strength 是否已赋值
                     * 
                     */
                    bool StrengthHasBeenSet() const;

                private:

                    /**
                     * 数字水印模板唯一标识。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 数字水印模板名称，支持 中文、英文、数字、_、-和. 六种格式，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数字水印模板描述信息，长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 数字水印文字内容，长度不超过64个字符，NAGRA水印类型的模板不支持修改文字内容。
                     */
                    std::string m_textContent;
                    bool m_textContentHasBeenSet;

                    /**
                     * 数字水印强度。 default: 默认，高清画质和抗性平衡 stronger:画质清晰，抗性较强 strongest:画质一般，抗性最强
                     */
                    std::string m_strength;
                    bool m_strengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYBLINDWATERMARKTEMPLATEREQUEST_H_
