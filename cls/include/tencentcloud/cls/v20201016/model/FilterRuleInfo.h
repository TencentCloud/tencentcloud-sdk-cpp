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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_FILTERRULEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_FILTERRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 投递日志的过滤规则
                */
                class FilterRuleInfo : public AbstractModel
                {
                public:
                    FilterRuleInfo();
                    ~FilterRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤规则Key
                     * @return Key 过滤规则Key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置过滤规则Key
                     * @param _key 过滤规则Key
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
                     * 获取过滤规则
                     * @return Regex 过滤规则
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置过滤规则
                     * @param _regex 过滤规则
                     * 
                     */
                    void SetRegex(const std::string& _regex);

                    /**
                     * 判断参数 Regex 是否已赋值
                     * @return Regex 是否已赋值
                     * 
                     */
                    bool RegexHasBeenSet() const;

                    /**
                     * 获取过滤规则Value
                     * @return Value 过滤规则Value
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置过滤规则Value
                     * @param _value 过滤规则Value
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 过滤规则Key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 过滤规则
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                    /**
                     * 过滤规则Value
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_FILTERRULEINFO_H_
