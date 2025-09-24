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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_TOKENRULEENTRY_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_TOKENRULEENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/TokenRuleEntryValue.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Token有效性校验规则
                */
                class TokenRuleEntry : public AbstractModel
                {
                public:
                    TokenRuleEntry();
                    ~TokenRuleEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取校验方式，可选值：验签校验、字段校验
                     * @return Type 校验方式，可选值：验签校验、字段校验
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置校验方式，可选值：验签校验、字段校验
                     * @param _type 校验方式，可选值：验签校验、字段校验
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
                     * 获取键
                     * @return Key 键
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置键
                     * @param _key 键
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
                     * 获取操作符
                     * @return Op 操作符
                     * 
                     */
                    std::string GetOp() const;

                    /**
                     * 设置操作符
                     * @param _op 操作符
                     * 
                     */
                    void SetOp(const std::string& _op);

                    /**
                     * 判断参数 Op 是否已赋值
                     * @return Op 是否已赋值
                     * 
                     */
                    bool OpHasBeenSet() const;

                    /**
                     * 获取值
                     * @return Value 值
                     * 
                     */
                    TokenRuleEntryValue GetValue() const;

                    /**
                     * 设置值
                     * @param _value 值
                     * 
                     */
                    void SetValue(const TokenRuleEntryValue& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 校验方式，可选值：验签校验、字段校验
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 键
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 操作符
                     */
                    std::string m_op;
                    bool m_opHasBeenSet;

                    /**
                     * 值
                     */
                    TokenRuleEntryValue m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_TOKENRULEENTRY_H_
