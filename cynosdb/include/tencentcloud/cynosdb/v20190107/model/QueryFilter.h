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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_QUERYFILTER_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_QUERYFILTER_H_

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
                * 查询过滤器。用于 DescribeClusterAndInstances 接口的过滤条件。
                */
                class QueryFilter : public AbstractModel
                {
                public:
                    QueryFilter();
                    ~QueryFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段值列表，与 Names 一一对应。InstanceId/ClusterId 为精确匹配，InstanceName 默认模糊匹配
                     * @return Values 字段值列表，与 Names 一一对应。InstanceId/ClusterId 为精确匹配，InstanceName 默认模糊匹配
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置字段值列表，与 Names 一一对应。InstanceId/ClusterId 为精确匹配，InstanceName 默认模糊匹配
                     * @param _values 字段值列表，与 Names 一一对应。InstanceId/ClusterId 为精确匹配，InstanceName 默认模糊匹配
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
                     * 获取搜索字段名称列表，仅支持以下 3 个字段（不区分大小写，多个值为 OR 关系）：ClusterId（按集群 ID 过滤，精确匹配）、InstanceId（按实例 ID 反查所属集群）、InstanceName（按实例名称反查所属集群，默认 LIKE 模糊匹配，ExactMatch=true 时精确匹配）。InstanceId 与 InstanceName 同时传入时取交集（AND 语义）。
                     * @return Names 搜索字段名称列表，仅支持以下 3 个字段（不区分大小写，多个值为 OR 关系）：ClusterId（按集群 ID 过滤，精确匹配）、InstanceId（按实例 ID 反查所属集群）、InstanceName（按实例名称反查所属集群，默认 LIKE 模糊匹配，ExactMatch=true 时精确匹配）。InstanceId 与 InstanceName 同时传入时取交集（AND 语义）。
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置搜索字段名称列表，仅支持以下 3 个字段（不区分大小写，多个值为 OR 关系）：ClusterId（按集群 ID 过滤，精确匹配）、InstanceId（按实例 ID 反查所属集群）、InstanceName（按实例名称反查所属集群，默认 LIKE 模糊匹配，ExactMatch=true 时精确匹配）。InstanceId 与 InstanceName 同时传入时取交集（AND 语义）。
                     * @param _names 搜索字段名称列表，仅支持以下 3 个字段（不区分大小写，多个值为 OR 关系）：ClusterId（按集群 ID 过滤，精确匹配）、InstanceId（按实例 ID 反查所属集群）、InstanceName（按实例名称反查所属集群，默认 LIKE 模糊匹配，ExactMatch=true 时精确匹配）。InstanceId 与 InstanceName 同时传入时取交集（AND 语义）。
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
                     * 获取是否精确匹配。仅对 InstanceName 生效：true 精确匹配，false（默认）LIKE 模糊匹配。
                     * @return ExactMatch 是否精确匹配。仅对 InstanceName 生效：true 精确匹配，false（默认）LIKE 模糊匹配。
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置是否精确匹配。仅对 InstanceName 生效：true 精确匹配，false（默认）LIKE 模糊匹配。
                     * @param _exactMatch 是否精确匹配。仅对 InstanceName 生效：true 精确匹配，false（默认）LIKE 模糊匹配。
                     * 
                     */
                    void SetExactMatch(const bool& _exactMatch);

                    /**
                     * 判断参数 ExactMatch 是否已赋值
                     * @return ExactMatch 是否已赋值
                     * 
                     */
                    bool ExactMatchHasBeenSet() const;

                    /**
                     * 获取搜索字段名称（单个字段模式，与 Names 二选一）。支持：ClusterId、InstanceId、InstanceName
                     * @return Name 搜索字段名称（单个字段模式，与 Names 二选一）。支持：ClusterId、InstanceId、InstanceName
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置搜索字段名称（单个字段模式，与 Names 二选一）。支持：ClusterId、InstanceId、InstanceName
                     * @param _name 搜索字段名称（单个字段模式，与 Names 二选一）。支持：ClusterId、InstanceId、InstanceName
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
                     * 获取操作符（预留字段，当前未启用）。可选值：>、>=、!=、=、<、<=
                     * @return Operator 操作符（预留字段，当前未启用）。可选值：>、>=、!=、=、<、<=
                     * @deprecated
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作符（预留字段，当前未启用）。可选值：>、>=、!=、=、<、<=
                     * @param _operator 操作符（预留字段，当前未启用）。可选值：>、>=、!=、=、<、<=
                     * @deprecated
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 字段值列表，与 Names 一一对应。InstanceId/ClusterId 为精确匹配，InstanceName 默认模糊匹配
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 搜索字段名称列表，仅支持以下 3 个字段（不区分大小写，多个值为 OR 关系）：ClusterId（按集群 ID 过滤，精确匹配）、InstanceId（按实例 ID 反查所属集群）、InstanceName（按实例名称反查所属集群，默认 LIKE 模糊匹配，ExactMatch=true 时精确匹配）。InstanceId 与 InstanceName 同时传入时取交集（AND 语义）。
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * 是否精确匹配。仅对 InstanceName 生效：true 精确匹配，false（默认）LIKE 模糊匹配。
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                    /**
                     * 搜索字段名称（单个字段模式，与 Names 二选一）。支持：ClusterId、InstanceId、InstanceName
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 操作符（预留字段，当前未启用）。可选值：>、>=、!=、=、<、<=
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_QUERYFILTER_H_
