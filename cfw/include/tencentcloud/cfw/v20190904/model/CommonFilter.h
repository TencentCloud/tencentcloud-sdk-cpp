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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_COMMONFILTER_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_COMMONFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 通用的列表检索过滤选项
                */
                class CommonFilter : public AbstractModel
                {
                public:
                    CommonFilter();
                    ~CommonFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检索的键值
                     * @return Name 检索的键值
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置检索的键值
                     * @param _name 检索的键值
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
                     * 获取枚举类型，代表Name与Values之间的匹配关系
enum FilterOperatorType {
    //等于
    FILTER_OPERATOR_TYPE_EQUAL = 1;
    //大于
    FILTER_OPERATOR_TYPE_GREATER = 2;
    //小于
    FILTER_OPERATOR_TYPE_LESS = 3;
    //大于等于
    FILTER_OPERATOR_TYPE_GREATER_EQ = 4;
    //小于等于
    FILTER_OPERATOR_TYPE_LESS_EQ = 5;
    //不等于
    FILTER_OPERATOR_TYPE_NO_EQ = 6;
    //not in
    FILTER_OPERATOR_TYPE_NOT_IN = 8;
    //模糊匹配
    FILTER_OPERATOR_TYPE_FUZZINESS = 9;
}
                     * @return OperatorType 枚举类型，代表Name与Values之间的匹配关系
enum FilterOperatorType {
    //等于
    FILTER_OPERATOR_TYPE_EQUAL = 1;
    //大于
    FILTER_OPERATOR_TYPE_GREATER = 2;
    //小于
    FILTER_OPERATOR_TYPE_LESS = 3;
    //大于等于
    FILTER_OPERATOR_TYPE_GREATER_EQ = 4;
    //小于等于
    FILTER_OPERATOR_TYPE_LESS_EQ = 5;
    //不等于
    FILTER_OPERATOR_TYPE_NO_EQ = 6;
    //not in
    FILTER_OPERATOR_TYPE_NOT_IN = 8;
    //模糊匹配
    FILTER_OPERATOR_TYPE_FUZZINESS = 9;
}
                     * 
                     */
                    int64_t GetOperatorType() const;

                    /**
                     * 设置枚举类型，代表Name与Values之间的匹配关系
enum FilterOperatorType {
    //等于
    FILTER_OPERATOR_TYPE_EQUAL = 1;
    //大于
    FILTER_OPERATOR_TYPE_GREATER = 2;
    //小于
    FILTER_OPERATOR_TYPE_LESS = 3;
    //大于等于
    FILTER_OPERATOR_TYPE_GREATER_EQ = 4;
    //小于等于
    FILTER_OPERATOR_TYPE_LESS_EQ = 5;
    //不等于
    FILTER_OPERATOR_TYPE_NO_EQ = 6;
    //not in
    FILTER_OPERATOR_TYPE_NOT_IN = 8;
    //模糊匹配
    FILTER_OPERATOR_TYPE_FUZZINESS = 9;
}
                     * @param _operatorType 枚举类型，代表Name与Values之间的匹配关系
enum FilterOperatorType {
    //等于
    FILTER_OPERATOR_TYPE_EQUAL = 1;
    //大于
    FILTER_OPERATOR_TYPE_GREATER = 2;
    //小于
    FILTER_OPERATOR_TYPE_LESS = 3;
    //大于等于
    FILTER_OPERATOR_TYPE_GREATER_EQ = 4;
    //小于等于
    FILTER_OPERATOR_TYPE_LESS_EQ = 5;
    //不等于
    FILTER_OPERATOR_TYPE_NO_EQ = 6;
    //not in
    FILTER_OPERATOR_TYPE_NOT_IN = 8;
    //模糊匹配
    FILTER_OPERATOR_TYPE_FUZZINESS = 9;
}
                     * 
                     */
                    void SetOperatorType(const int64_t& _operatorType);

                    /**
                     * 判断参数 OperatorType 是否已赋值
                     * @return OperatorType 是否已赋值
                     * 
                     */
                    bool OperatorTypeHasBeenSet() const;

                    /**
                     * 获取检索的值，各检索值间为OR关系
                     * @return Values 检索的值，各检索值间为OR关系
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置检索的值，各检索值间为OR关系
                     * @param _values 检索的值，各检索值间为OR关系
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
                     * 检索的键值
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 枚举类型，代表Name与Values之间的匹配关系
enum FilterOperatorType {
    //等于
    FILTER_OPERATOR_TYPE_EQUAL = 1;
    //大于
    FILTER_OPERATOR_TYPE_GREATER = 2;
    //小于
    FILTER_OPERATOR_TYPE_LESS = 3;
    //大于等于
    FILTER_OPERATOR_TYPE_GREATER_EQ = 4;
    //小于等于
    FILTER_OPERATOR_TYPE_LESS_EQ = 5;
    //不等于
    FILTER_OPERATOR_TYPE_NO_EQ = 6;
    //not in
    FILTER_OPERATOR_TYPE_NOT_IN = 8;
    //模糊匹配
    FILTER_OPERATOR_TYPE_FUZZINESS = 9;
}
                     */
                    int64_t m_operatorType;
                    bool m_operatorTypeHasBeenSet;

                    /**
                     * 检索的值，各检索值间为OR关系
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_COMMONFILTER_H_
