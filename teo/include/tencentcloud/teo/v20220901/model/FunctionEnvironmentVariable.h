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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONENVIRONMENTVARIABLE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONENVIRONMENTVARIABLE_H_

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
                * 边缘函数环境变量
                */
                class FunctionEnvironmentVariable : public AbstractModel
                {
                public:
                    FunctionEnvironmentVariable();
                    ~FunctionEnvironmentVariable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取变量的名称，限制只能包含大小写字母、数字，特殊字符仅支持 @ . - _ ，最大 64 个字节，不支持重复。
                     * @return Key 变量的名称，限制只能包含大小写字母、数字，特殊字符仅支持 @ . - _ ，最大 64 个字节，不支持重复。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置变量的名称，限制只能包含大小写字母、数字，特殊字符仅支持 @ . - _ ，最大 64 个字节，不支持重复。
                     * @param _key 变量的名称，限制只能包含大小写字母、数字，特殊字符仅支持 @ . - _ ，最大 64 个字节，不支持重复。
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
                     * 获取变量的值，限制最大 5000 字节，默认值为空。
                     * @return Value 变量的值，限制最大 5000 字节，默认值为空。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置变量的值，限制最大 5000 字节，默认值为空。
                     * @param _value 变量的值，限制最大 5000 字节，默认值为空。
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
                     * 获取变量的类型，取值有：
<li>string：字符串类型；</li>
<li>json：json 对象类型。</li>默认值为：string。
                     * @return Type 变量的类型，取值有：
<li>string：字符串类型；</li>
<li>json：json 对象类型。</li>默认值为：string。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置变量的类型，取值有：
<li>string：字符串类型；</li>
<li>json：json 对象类型。</li>默认值为：string。
                     * @param _type 变量的类型，取值有：
<li>string：字符串类型；</li>
<li>json：json 对象类型。</li>默认值为：string。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 变量的名称，限制只能包含大小写字母、数字，特殊字符仅支持 @ . - _ ，最大 64 个字节，不支持重复。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 变量的值，限制最大 5000 字节，默认值为空。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 变量的类型，取值有：
<li>string：字符串类型；</li>
<li>json：json 对象类型。</li>默认值为：string。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONENVIRONMENTVARIABLE_H_
