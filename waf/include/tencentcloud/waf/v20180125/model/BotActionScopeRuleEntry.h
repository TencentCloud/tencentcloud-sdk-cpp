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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BOTACTIONSCOPERULEENTRY_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BOTACTIONSCOPERULEENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 动作策略的匹配规则实体
                */
                class BotActionScopeRuleEntry : public AbstractModel
                {
                public:
                    BotActionScopeRuleEntry();
                    ~BotActionScopeRuleEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数
                     * @return Key 参数
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置参数
                     * @param _key 参数
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
                     * 获取匹配符
                     * @return Op 匹配符
                     * 
                     */
                    std::string GetOp() const;

                    /**
                     * 设置匹配符
                     * @param _op 匹配符
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
                     * 获取参数值
                     * @return Value 参数值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置参数值
                     * @param _value 参数值
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
                     * 获取对于头部字段匹配value的时候指定的头部名
                     * @return Name 对于头部字段匹配value的时候指定的头部名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置对于头部字段匹配value的时候指定的头部名
                     * @param _name 对于头部字段匹配value的时候指定的头部名
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
                     * 获取470后使用此字段存储多值
                     * @return ValueArray 470后使用此字段存储多值
                     * 
                     */
                    std::vector<std::string> GetValueArray() const;

                    /**
                     * 设置470后使用此字段存储多值
                     * @param _valueArray 470后使用此字段存储多值
                     * 
                     */
                    void SetValueArray(const std::vector<std::string>& _valueArray);

                    /**
                     * 判断参数 ValueArray 是否已赋值
                     * @return ValueArray 是否已赋值
                     * 
                     */
                    bool ValueArrayHasBeenSet() const;

                private:

                    /**
                     * 参数
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 匹配符
                     */
                    std::string m_op;
                    bool m_opHasBeenSet;

                    /**
                     * 参数值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 对于头部字段匹配value的时候指定的头部名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 470后使用此字段存储多值
                     */
                    std::vector<std::string> m_valueArray;
                    bool m_valueArrayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BOTACTIONSCOPERULEENTRY_H_
