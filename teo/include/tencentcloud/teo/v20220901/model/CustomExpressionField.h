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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMEXPRESSIONFIELD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMEXPRESSIONFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 实时日志投递任务中的自定义日志字段，字段支持自定义命名和配置取值表达式，使用详情见 [自定义日志字段表达式]()。
                */
                class CustomExpressionField : public AbstractModel
                {
                public:
                    CustomExpressionField();
                    ~CustomExpressionField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>自定义日志字段名称。可输入1-100个字符，允许的字符为字母、数字、_，仅能以字母开头，该名称不能重复。</p>
                     * @return Name <p>自定义日志字段名称。可输入1-100个字符，允许的字符为字母、数字、_，仅能以字母开头，该名称不能重复。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>自定义日志字段名称。可输入1-100个字符，允许的字符为字母、数字、_，仅能以字母开头，该名称不能重复。</p>
                     * @param _name <p>自定义日志字段名称。可输入1-100个字符，允许的字符为字母、数字、_，仅能以字母开头，该名称不能重复。</p>
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
                     * 获取<p>自定义日志字段的取值表达式，表达式长度上限 4KB，语法说明详见 <a href=""> 自定义日志字段表达式</a>。</p>
                     * @return Expression <p>自定义日志字段的取值表达式，表达式长度上限 4KB，语法说明详见 <a href=""> 自定义日志字段表达式</a>。</p>
                     * 
                     */
                    std::string GetExpression() const;

                    /**
                     * 设置<p>自定义日志字段的取值表达式，表达式长度上限 4KB，语法说明详见 <a href=""> 自定义日志字段表达式</a>。</p>
                     * @param _expression <p>自定义日志字段的取值表达式，表达式长度上限 4KB，语法说明详见 <a href=""> 自定义日志字段表达式</a>。</p>
                     * 
                     */
                    void SetExpression(const std::string& _expression);

                    /**
                     * 判断参数 Expression 是否已赋值
                     * @return Expression 是否已赋值
                     * 
                     */
                    bool ExpressionHasBeenSet() const;

                    /**
                     * 获取<p>是否投递该字段，不填表示不投递此字段。</p>
                     * @return Enabled <p>是否投递该字段，不填表示不投递此字段。</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否投递该字段，不填表示不投递此字段。</p>
                     * @param _enabled <p>是否投递该字段，不填表示不投递此字段。</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * <p>自定义日志字段名称。可输入1-100个字符，允许的字符为字母、数字、_，仅能以字母开头，该名称不能重复。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>自定义日志字段的取值表达式，表达式长度上限 4KB，语法说明详见 <a href=""> 自定义日志字段表达式</a>。</p>
                     */
                    std::string m_expression;
                    bool m_expressionHasBeenSet;

                    /**
                     * <p>是否投递该字段，不填表示不投递此字段。</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMEXPRESSIONFIELD_H_
