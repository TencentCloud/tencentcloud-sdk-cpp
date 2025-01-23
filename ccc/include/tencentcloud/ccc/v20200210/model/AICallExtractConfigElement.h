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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AICALLEXTRACTCONFIGELEMENT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AICALLEXTRACTCONFIGELEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * AI 通话提取配置项
                */
                class AICallExtractConfigElement : public AbstractModel
                {
                public:
                    AICallExtractConfigElement();
                    ~AICallExtractConfigElement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置项类型，包括
Text 文本
Selector 选项
Boolean 布尔值
Number 数字
                     * @return InfoType 配置项类型，包括
Text 文本
Selector 选项
Boolean 布尔值
Number 数字
                     * 
                     */
                    std::string GetInfoType() const;

                    /**
                     * 设置配置项类型，包括
Text 文本
Selector 选项
Boolean 布尔值
Number 数字
                     * @param _infoType 配置项类型，包括
Text 文本
Selector 选项
Boolean 布尔值
Number 数字
                     * 
                     */
                    void SetInfoType(const std::string& _infoType);

                    /**
                     * 判断参数 InfoType 是否已赋值
                     * @return InfoType 是否已赋值
                     * 
                     */
                    bool InfoTypeHasBeenSet() const;

                    /**
                     * 获取配置项名称，不可重复
                     * @return InfoName 配置项名称，不可重复
                     * 
                     */
                    std::string GetInfoName() const;

                    /**
                     * 设置配置项名称，不可重复
                     * @param _infoName 配置项名称，不可重复
                     * 
                     */
                    void SetInfoName(const std::string& _infoName);

                    /**
                     * 判断参数 InfoName 是否已赋值
                     * @return InfoName 是否已赋值
                     * 
                     */
                    bool InfoNameHasBeenSet() const;

                    /**
                     * 获取配置项具体内容
                     * @return InfoContent 配置项具体内容
                     * 
                     */
                    std::string GetInfoContent() const;

                    /**
                     * 设置配置项具体内容
                     * @param _infoContent 配置项具体内容
                     * 
                     */
                    void SetInfoContent(const std::string& _infoContent);

                    /**
                     * 判断参数 InfoContent 是否已赋值
                     * @return InfoContent 是否已赋值
                     * 
                     */
                    bool InfoContentHasBeenSet() const;

                    /**
                     * 获取配置项提取内容示例
                     * @return Examples 配置项提取内容示例
                     * 
                     */
                    std::vector<std::string> GetExamples() const;

                    /**
                     * 设置配置项提取内容示例
                     * @param _examples 配置项提取内容示例
                     * 
                     */
                    void SetExamples(const std::vector<std::string>& _examples);

                    /**
                     * 判断参数 Examples 是否已赋值
                     * @return Examples 是否已赋值
                     * 
                     */
                    bool ExamplesHasBeenSet() const;

                    /**
                     * 获取InfoType 为 Selector，需要配置此字段
                     * @return Choices InfoType 为 Selector，需要配置此字段
                     * 
                     */
                    std::vector<std::string> GetChoices() const;

                    /**
                     * 设置InfoType 为 Selector，需要配置此字段
                     * @param _choices InfoType 为 Selector，需要配置此字段
                     * 
                     */
                    void SetChoices(const std::vector<std::string>& _choices);

                    /**
                     * 判断参数 Choices 是否已赋值
                     * @return Choices 是否已赋值
                     * 
                     */
                    bool ChoicesHasBeenSet() const;

                private:

                    /**
                     * 配置项类型，包括
Text 文本
Selector 选项
Boolean 布尔值
Number 数字
                     */
                    std::string m_infoType;
                    bool m_infoTypeHasBeenSet;

                    /**
                     * 配置项名称，不可重复
                     */
                    std::string m_infoName;
                    bool m_infoNameHasBeenSet;

                    /**
                     * 配置项具体内容
                     */
                    std::string m_infoContent;
                    bool m_infoContentHasBeenSet;

                    /**
                     * 配置项提取内容示例
                     */
                    std::vector<std::string> m_examples;
                    bool m_examplesHasBeenSet;

                    /**
                     * InfoType 为 Selector，需要配置此字段
                     */
                    std::vector<std::string> m_choices;
                    bool m_choicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AICALLEXTRACTCONFIGELEMENT_H_
