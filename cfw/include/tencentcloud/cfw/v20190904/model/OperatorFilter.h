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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_OPERATORFILTER_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_OPERATORFILTER_H_

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
                * 查询过滤条件
                */
                class OperatorFilter : public AbstractModel
                {
                public:
                    OperatorFilter();
                    ~OperatorFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤字段
                     * @return Name 过滤字段
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置过滤字段
                     * @param _name 过滤字段
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
                     * 获取匹配的值
                     * @return Values 匹配的值
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置匹配的值
                     * @param _values 匹配的值
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取操作类型：
1：等于 field = value
2：大于 field > value
3：小于 field < value
4：大于等于 field >= value
5：小于等于 field <= value
6：不等于 field <> value
7：IN field IN (value1, value2...)
8：NOT IN field NOT IN (value1, value2...)
9：模糊匹配 field LIKE value
13：非模糊匹配 field NOT LIKE value
14：按位与 field & value = value
15：between and field between value1 and value2
                     * @return OperatorType 操作类型：
1：等于 field = value
2：大于 field > value
3：小于 field < value
4：大于等于 field >= value
5：小于等于 field <= value
6：不等于 field <> value
7：IN field IN (value1, value2...)
8：NOT IN field NOT IN (value1, value2...)
9：模糊匹配 field LIKE value
13：非模糊匹配 field NOT LIKE value
14：按位与 field & value = value
15：between and field between value1 and value2
                     * 
                     */
                    uint64_t GetOperatorType() const;

                    /**
                     * 设置操作类型：
1：等于 field = value
2：大于 field > value
3：小于 field < value
4：大于等于 field >= value
5：小于等于 field <= value
6：不等于 field <> value
7：IN field IN (value1, value2...)
8：NOT IN field NOT IN (value1, value2...)
9：模糊匹配 field LIKE value
13：非模糊匹配 field NOT LIKE value
14：按位与 field & value = value
15：between and field between value1 and value2
                     * @param _operatorType 操作类型：
1：等于 field = value
2：大于 field > value
3：小于 field < value
4：大于等于 field >= value
5：小于等于 field <= value
6：不等于 field <> value
7：IN field IN (value1, value2...)
8：NOT IN field NOT IN (value1, value2...)
9：模糊匹配 field LIKE value
13：非模糊匹配 field NOT LIKE value
14：按位与 field & value = value
15：between and field between value1 and value2
                     * 
                     */
                    void SetOperatorType(const uint64_t& _operatorType);

                    /**
                     * 判断参数 OperatorType 是否已赋值
                     * @return OperatorType 是否已赋值
                     * 
                     */
                    bool OperatorTypeHasBeenSet() const;

                private:

                    /**
                     * 过滤字段
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 匹配的值
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 操作类型：
1：等于 field = value
2：大于 field > value
3：小于 field < value
4：大于等于 field >= value
5：小于等于 field <= value
6：不等于 field <> value
7：IN field IN (value1, value2...)
8：NOT IN field NOT IN (value1, value2...)
9：模糊匹配 field LIKE value
13：非模糊匹配 field NOT LIKE value
14：按位与 field & value = value
15：between and field between value1 and value2
                     */
                    uint64_t m_operatorType;
                    bool m_operatorTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_OPERATORFILTER_H_
