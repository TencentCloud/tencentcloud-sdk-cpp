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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_EXTRAINFO_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_EXTRAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * 智能体值守任务额外信息
                */
                class ExtraInfo : public AbstractModel
                {
                public:
                    ExtraInfo();
                    ~ExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取出参额外信息的Key
                     * @return Key 出参额外信息的Key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置出参额外信息的Key
                     * @param _key 出参额外信息的Key
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
                     * 获取额外信息描述
                     * @return Description 额外信息描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置额外信息描述
                     * @param _description 额外信息描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取ExtraInfo的值
                     * @return Value ExtraInfo的值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置ExtraInfo的值
                     * @param _value ExtraInfo的值
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
                     * 获取值的数据结构类型
                     * @return ValueType 值的数据结构类型
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置值的数据结构类型
                     * @param _valueType 值的数据结构类型
                     * 
                     */
                    void SetValueType(const std::string& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     * 
                     */
                    bool ValueTypeHasBeenSet() const;

                private:

                    /**
                     * 出参额外信息的Key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 额外信息描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * ExtraInfo的值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 值的数据结构类型
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_EXTRAINFO_H_
