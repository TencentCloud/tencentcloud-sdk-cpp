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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNEVENTLOGCONDITIONS_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNEVENTLOGCONDITIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * SCDN 事件日志查询条件
                */
                class ScdnEventLogConditions : public AbstractModel
                {
                public:
                    ScdnEventLogConditions();
                    ~ScdnEventLogConditions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配关键字，ip, attack_location
                     * @return Key 匹配关键字，ip, attack_location
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置匹配关键字，ip, attack_location
                     * @param _key 匹配关键字，ip, attack_location
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
                     * 获取逻辑操作符，取值 exclude, include
                     * @return Operator 逻辑操作符，取值 exclude, include
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置逻辑操作符，取值 exclude, include
                     * @param _operator 逻辑操作符，取值 exclude, include
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
                     * 获取匹配值，允许使用通配符(*)查询，匹配零个、单个、多个字符，例如 1.2.*
                     * @return Value 匹配值，允许使用通配符(*)查询，匹配零个、单个、多个字符，例如 1.2.*
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置匹配值，允许使用通配符(*)查询，匹配零个、单个、多个字符，例如 1.2.*
                     * @param _value 匹配值，允许使用通配符(*)查询，匹配零个、单个、多个字符，例如 1.2.*
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
                     * 匹配关键字，ip, attack_location
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 逻辑操作符，取值 exclude, include
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 匹配值，允许使用通配符(*)查询，匹配零个、单个、多个字符，例如 1.2.*
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNEVENTLOGCONDITIONS_H_
