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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCANARYRULECONDITION_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCANARYRULECONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 灰度规则中的条件配置
                */
                class CloudNativeAPIGatewayCanaryRuleCondition : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayCanaryRuleCondition();
                    ~CloudNativeAPIGatewayCanaryRuleCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取条件类型，支持 path, method, query, header, cookie, body 和 system。
                     * @return Type 条件类型，支持 path, method, query, header, cookie, body 和 system。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置条件类型，支持 path, method, query, header, cookie, body 和 system。
                     * @param _type 条件类型，支持 path, method, query, header, cookie, body 和 system。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取参数名
                     * @return Key 参数名
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置参数名
                     * @param _key 参数名
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取操作符，支持 "le", "eq", "lt", "ne", "ge", "gt", "regex", "exists", "in", "not in",  "prefix" ,"exact", "regex" 等
                     * @return Operator 操作符，支持 "le", "eq", "lt", "ne", "ge", "gt", "regex", "exists", "in", "not in",  "prefix" ,"exact", "regex" 等
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作符，支持 "le", "eq", "lt", "ne", "ge", "gt", "regex", "exists", "in", "not in",  "prefix" ,"exact", "regex" 等
                     * @param _operator 操作符，支持 "le", "eq", "lt", "ne", "ge", "gt", "regex", "exists", "in", "not in",  "prefix" ,"exact", "regex" 等
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取目标参数值
                     * @return Value 目标参数值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置目标参数值
                     * @param _value 目标参数值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取分隔符，当 Operator 为 in 或者 not in 时生效。支持值为英文逗号，英文分号，空格，换行符。
                     * @return Delimiter 分隔符，当 Operator 为 in 或者 not in 时生效。支持值为英文逗号，英文分号，空格，换行符。
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置分隔符，当 Operator 为 in 或者 not in 时生效。支持值为英文逗号，英文分号，空格，换行符。
                     * @param _delimiter 分隔符，当 Operator 为 in 或者 not in 时生效。支持值为英文逗号，英文分号，空格，换行符。
                     * 
                     */
                    void SetDelimiter(const std::string& _delimiter);

                    /**
                     * 判断参数 Delimiter 是否已赋值
                     * @return Delimiter 是否已赋值
                     * 
                     */
                    bool DelimiterHasBeenSet() const;

                    /**
                     * 获取全局配置 Id
                     * @return GlobalConfigId 全局配置 Id
                     * 
                     */
                    std::string GetGlobalConfigId() const;

                    /**
                     * 设置全局配置 Id
                     * @param _globalConfigId 全局配置 Id
                     * 
                     */
                    void SetGlobalConfigId(const std::string& _globalConfigId);

                    /**
                     * 判断参数 GlobalConfigId 是否已赋值
                     * @return GlobalConfigId 是否已赋值
                     * 
                     */
                    bool GlobalConfigIdHasBeenSet() const;

                    /**
                     * 获取全局配置名称
                     * @return GlobalConfigName 全局配置名称
                     * 
                     */
                    std::string GetGlobalConfigName() const;

                    /**
                     * 设置全局配置名称
                     * @param _globalConfigName 全局配置名称
                     * 
                     */
                    void SetGlobalConfigName(const std::string& _globalConfigName);

                    /**
                     * 判断参数 GlobalConfigName 是否已赋值
                     * @return GlobalConfigName 是否已赋值
                     * 
                     */
                    bool GlobalConfigNameHasBeenSet() const;

                private:

                    /**
                     * 条件类型，支持 path, method, query, header, cookie, body 和 system。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 参数名
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 操作符，支持 "le", "eq", "lt", "ne", "ge", "gt", "regex", "exists", "in", "not in",  "prefix" ,"exact", "regex" 等
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 目标参数值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 分隔符，当 Operator 为 in 或者 not in 时生效。支持值为英文逗号，英文分号，空格，换行符。
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * 全局配置 Id
                     */
                    std::string m_globalConfigId;
                    bool m_globalConfigIdHasBeenSet;

                    /**
                     * 全局配置名称
                     */
                    std::string m_globalConfigName;
                    bool m_globalConfigNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCANARYRULECONDITION_H_
