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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_LISTALIASESREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_LISTALIASESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/Filter.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * ListAliases请求参数结构体
                */
                class ListAliasesRequest : public AbstractModel
                {
                public:
                    ListAliasesRequest();
                    ~ListAliasesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取名字，长度不小于1字符不超过1024字符
                     * @return Name 名字，长度不小于1字符不超过1024字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字，长度不小于1字符不超过1024字符
                     * @param _name 名字，长度不小于1字符不超过1024字符
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
                     * 获取路由策略类型，有效值常规别名(SIMPLE)、终止别名(TERMINAL)
                     * @return RoutingStrategyType 路由策略类型，有效值常规别名(SIMPLE)、终止别名(TERMINAL)
                     * 
                     */
                    std::string GetRoutingStrategyType() const;

                    /**
                     * 设置路由策略类型，有效值常规别名(SIMPLE)、终止别名(TERMINAL)
                     * @param _routingStrategyType 路由策略类型，有效值常规别名(SIMPLE)、终止别名(TERMINAL)
                     * 
                     */
                    void SetRoutingStrategyType(const std::string& _routingStrategyType);

                    /**
                     * 判断参数 RoutingStrategyType 是否已赋值
                     * @return RoutingStrategyType 是否已赋值
                     * 
                     */
                    bool RoutingStrategyTypeHasBeenSet() const;

                    /**
                     * 获取要返回的最大结果数，最小值1
                     * @return Limit 要返回的最大结果数，最小值1
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置要返回的最大结果数，最小值1
                     * @param _limit 要返回的最大结果数，最小值1
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移，默认0
                     * @return Offset 偏移，默认0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移，默认0
                     * @param _offset 偏移，默认0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取排序字段，例如CreationTime
                     * @return OrderBy 排序字段，例如CreationTime
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，例如CreationTime
                     * @param _orderBy 排序字段，例如CreationTime
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序方式，有效值asc|desc
                     * @return OrderWay 排序方式，有效值asc|desc
                     * 
                     */
                    std::string GetOrderWay() const;

                    /**
                     * 设置排序方式，有效值asc|desc
                     * @param _orderWay 排序方式，有效值asc|desc
                     * 
                     */
                    void SetOrderWay(const std::string& _orderWay);

                    /**
                     * 判断参数 OrderWay 是否已赋值
                     * @return OrderWay 是否已赋值
                     * 
                     */
                    bool OrderWayHasBeenSet() const;

                    /**
                     * 获取资源过滤字段，可以按照资源名称和标签进行过滤- 资源名称过滤    - Key: 固定字符串 "resource:name"    - Values: 资源名称数组（舰队当前仅支持单个名称的过滤）- 标签过滤    - 通过标签键过滤        - Key: 固定字符串 "tag:key"        - Values 不传    - 通过标签键值过滤        - Key: 固定字符串 "tag:key-value"        - Values: 标签键值对数组，例如 ["key1:value1", "key1:value2", "key2:value2"]
                     * @return Filters 资源过滤字段，可以按照资源名称和标签进行过滤- 资源名称过滤    - Key: 固定字符串 "resource:name"    - Values: 资源名称数组（舰队当前仅支持单个名称的过滤）- 标签过滤    - 通过标签键过滤        - Key: 固定字符串 "tag:key"        - Values 不传    - 通过标签键值过滤        - Key: 固定字符串 "tag:key-value"        - Values: 标签键值对数组，例如 ["key1:value1", "key1:value2", "key2:value2"]
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置资源过滤字段，可以按照资源名称和标签进行过滤- 资源名称过滤    - Key: 固定字符串 "resource:name"    - Values: 资源名称数组（舰队当前仅支持单个名称的过滤）- 标签过滤    - 通过标签键过滤        - Key: 固定字符串 "tag:key"        - Values 不传    - 通过标签键值过滤        - Key: 固定字符串 "tag:key-value"        - Values: 标签键值对数组，例如 ["key1:value1", "key1:value2", "key2:value2"]
                     * @param _filters 资源过滤字段，可以按照资源名称和标签进行过滤- 资源名称过滤    - Key: 固定字符串 "resource:name"    - Values: 资源名称数组（舰队当前仅支持单个名称的过滤）- 标签过滤    - 通过标签键过滤        - Key: 固定字符串 "tag:key"        - Values 不传    - 通过标签键值过滤        - Key: 固定字符串 "tag:key-value"        - Values: 标签键值对数组，例如 ["key1:value1", "key1:value2", "key2:value2"]
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 名字，长度不小于1字符不超过1024字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 路由策略类型，有效值常规别名(SIMPLE)、终止别名(TERMINAL)
                     */
                    std::string m_routingStrategyType;
                    bool m_routingStrategyTypeHasBeenSet;

                    /**
                     * 要返回的最大结果数，最小值1
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移，默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序字段，例如CreationTime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，有效值asc|desc
                     */
                    std::string m_orderWay;
                    bool m_orderWayHasBeenSet;

                    /**
                     * 资源过滤字段，可以按照资源名称和标签进行过滤- 资源名称过滤    - Key: 固定字符串 "resource:name"    - Values: 资源名称数组（舰队当前仅支持单个名称的过滤）- 标签过滤    - 通过标签键过滤        - Key: 固定字符串 "tag:key"        - Values 不传    - 通过标签键值过滤        - Key: 固定字符串 "tag:key-value"        - Values: 标签键值对数组，例如 ["key1:value1", "key1:value2", "key2:value2"]
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_LISTALIASESREQUEST_H_
