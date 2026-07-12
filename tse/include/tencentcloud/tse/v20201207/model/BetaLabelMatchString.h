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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_BETALABELMATCHSTRING_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_BETALABELMATCHSTRING_H_

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
                * 命中匹配方式与值
                */
                class BetaLabelMatchString : public AbstractModel
                {
                public:
                    BetaLabelMatchString();
                    ~BetaLabelMatchString() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>类型</p><p>枚举值：</p><ul><li>EXAT： 精确匹配</li></ul>
                     * @return Type <p>类型</p><p>枚举值：</p><ul><li>EXAT： 精确匹配</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>类型</p><p>枚举值：</p><ul><li>EXAT： 精确匹配</li></ul>
                     * @param _type <p>类型</p><p>枚举值：</p><ul><li>EXAT： 精确匹配</li></ul>
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
                     * 获取<p>值</p>
                     * @return Value <p>值</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>值</p>
                     * @param _value <p>值</p>
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
                     * 获取<p>值类型</p><p>枚举值：</p><ul><li>TEXT： 文本</li></ul>
                     * @return ValueType <p>值类型</p><p>枚举值：</p><ul><li>TEXT： 文本</li></ul>
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置<p>值类型</p><p>枚举值：</p><ul><li>TEXT： 文本</li></ul>
                     * @param _valueType <p>值类型</p><p>枚举值：</p><ul><li>TEXT： 文本</li></ul>
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
                     * <p>类型</p><p>枚举值：</p><ul><li>EXAT： 精确匹配</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>值</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>值类型</p><p>枚举值：</p><ul><li>TEXT： 文本</li></ul>
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_BETALABELMATCHSTRING_H_
