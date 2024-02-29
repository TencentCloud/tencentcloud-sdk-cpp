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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_FILTERSITEMNEW_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_FILTERSITEMNEW_H_

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
                * 过滤数组
                */
                class FiltersItemNew : public AbstractModel
                {
                public:
                    FiltersItemNew();
                    ~FiltersItemNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段名； 过滤
子订单号过滤通过name 为：DealName； value为子订单号
                     * @return Name 字段名； 过滤
子订单号过滤通过name 为：DealName； value为子订单号
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置字段名； 过滤
子订单号过滤通过name 为：DealName； value为子订单号
                     * @param _name 字段名； 过滤
子订单号过滤通过name 为：DealName； value为子订单号
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
                     * 获取过滤值
                     * @return Values 过滤值
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置过滤值
                     * @param _values 过滤值
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
                     * 获取是否精确查找
                     * @return ExactMatch 是否精确查找
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置是否精确查找
                     * @param _exactMatch 是否精确查找
                     * 
                     */
                    void SetExactMatch(const bool& _exactMatch);

                    /**
                     * 判断参数 ExactMatch 是否已赋值
                     * @return ExactMatch 是否已赋值
                     * 
                     */
                    bool ExactMatchHasBeenSet() const;

                private:

                    /**
                     * 字段名； 过滤
子订单号过滤通过name 为：DealName； value为子订单号
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 过滤值
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 是否精确查找
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_FILTERSITEMNEW_H_
