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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_APISECSCENERULEENTRY_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_APISECSCENERULEENTRY_H_

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
                * api安全用户自定义场景规则结构体
                */
                class ApiSecSceneRuleEntry : public AbstractModel
                {
                public:
                    ApiSecSceneRuleEntry();
                    ~ApiSecSceneRuleEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配字段
                     * @return Key 匹配字段
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置匹配字段
                     * @param _key 匹配字段
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
                     * 获取匹配值
                     * @return Value 匹配值
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置匹配值
                     * @param _value 匹配值
                     * 
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取操作符
                     * @return Operate 操作符
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置操作符
                     * @param _operate 操作符
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                    /**
                     * 获取当匹配字段是get参数值，post参数值，cookie参数值，header参数值，rsp参数值的时候，可填充此字段
                     * @return Name 当匹配字段是get参数值，post参数值，cookie参数值，header参数值，rsp参数值的时候，可填充此字段
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置当匹配字段是get参数值，post参数值，cookie参数值，header参数值，rsp参数值的时候，可填充此字段
                     * @param _name 当匹配字段是get参数值，post参数值，cookie参数值，header参数值，rsp参数值的时候，可填充此字段
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 匹配字段
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 匹配值
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 操作符
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * 当匹配字段是get参数值，post参数值，cookie参数值，header参数值，rsp参数值的时候，可填充此字段
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APISECSCENERULEENTRY_H_
