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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_FILTER_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 查询过滤参数
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤方式（=, !=, in）
                     * @return Type 过滤方式（=, !=, in）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置过滤方式（=, !=, in）
                     * @param _type 过滤方式（=, !=, in）
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
                     * 获取过滤维度名
                     * @return Key 过滤维度名
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置过滤维度名
                     * @param _key 过滤维度名
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
                     * 获取过滤值，in过滤方式用逗号分割多个值
                     * @return Value 过滤值，in过滤方式用逗号分割多个值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置过滤值，in过滤方式用逗号分割多个值
                     * @param _value 过滤值，in过滤方式用逗号分割多个值
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
                     * 获取过滤条件名称
                     * @return Name 过滤条件名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置过滤条件名称
                     * @param _name 过滤条件名称
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
                     * 获取过滤条件取值范围
                     * @return Values 过滤条件取值范围
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置过滤条件取值范围
                     * @param _values 过滤条件取值范围
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 过滤方式（=, !=, in）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 过滤维度名
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 过滤值，in过滤方式用逗号分割多个值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 过滤条件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 过滤条件取值范围
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_FILTER_H_
