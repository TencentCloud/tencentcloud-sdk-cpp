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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_QUERYPARAMFILTER_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_QUERYPARAMFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 查询参数过滤器
                */
                class QueryParamFilter : public AbstractModel
                {
                public:
                    QueryParamFilter();
                    ~QueryParamFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取搜索字段，目前支持："InstanceId", "ProjectId", "InstanceName", "Vip"
                     * @return Names 搜索字段，目前支持："InstanceId", "ProjectId", "InstanceName", "Vip"
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置搜索字段，目前支持："InstanceId", "ProjectId", "InstanceName", "Vip"
                     * @param _names 搜索字段，目前支持："InstanceId", "ProjectId", "InstanceName", "Vip"
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取搜索字符串
                     * @return Values 搜索字符串
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置搜索字符串
                     * @param _values 搜索字符串
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
                     * 获取是否精确匹配
                     * @return ExactMatch 是否精确匹配
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置是否精确匹配
                     * @param _exactMatch 是否精确匹配
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
                     * 搜索字段，目前支持："InstanceId", "ProjectId", "InstanceName", "Vip"
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * 搜索字符串
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 是否精确匹配
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_QUERYPARAMFILTER_H_
