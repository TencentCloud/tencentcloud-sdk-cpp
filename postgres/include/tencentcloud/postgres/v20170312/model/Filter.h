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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_FILTER_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述键值对过滤器，用于条件过滤查询。例如过滤ID、名称等
* 若存在多个Filter时，Filter间的关系为逻辑与（AND）关系。
* 若同一个Filter存在多个Values，同一Filter下Values间的关系为逻辑或（OR）关系。
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤键的名称。
                     * @return Name 过滤键的名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置过滤键的名称。
                     * @param _name 过滤键的名称。
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
                     * 获取一个或者多个过滤值。
                     * @return Values 一个或者多个过滤值。
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置一个或者多个过滤值。
                     * @param _values 一个或者多个过滤值。
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
                     * 过滤键的名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 一个或者多个过滤值。
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_FILTER_H_
