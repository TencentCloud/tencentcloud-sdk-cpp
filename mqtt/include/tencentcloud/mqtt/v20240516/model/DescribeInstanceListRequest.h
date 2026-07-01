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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/Filter.h>
#include <tencentcloud/mqtt/v20240516/model/TagFilter.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * DescribeInstanceList请求参数结构体
                */
                class DescribeInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeInstanceListRequest();
                    ~DescribeInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询条件列表,支持以下字段<br>InstanceName：集群名模糊搜索<br>InstanceId：集群id精确搜索<br>InstanceStatus：集群状态搜索（RUNNING-运行中，CREATING-创建中，MODIFYING-变配中，DELETING-删除中）<br>PayMode：付费模式搜索（PREPAID-包年包月，POSTPAID-按小时计费）<br>ExpiredBefore：按过期时间过滤：仅筛选包年包月（PREPAID）集群<br>注意：配置TagFilters时该查询条件不生效。</p>
                     * @return Filters <p>查询条件列表,支持以下字段<br>InstanceName：集群名模糊搜索<br>InstanceId：集群id精确搜索<br>InstanceStatus：集群状态搜索（RUNNING-运行中，CREATING-创建中，MODIFYING-变配中，DELETING-删除中）<br>PayMode：付费模式搜索（PREPAID-包年包月，POSTPAID-按小时计费）<br>ExpiredBefore：按过期时间过滤：仅筛选包年包月（PREPAID）集群<br>注意：配置TagFilters时该查询条件不生效。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>查询条件列表,支持以下字段<br>InstanceName：集群名模糊搜索<br>InstanceId：集群id精确搜索<br>InstanceStatus：集群状态搜索（RUNNING-运行中，CREATING-创建中，MODIFYING-变配中，DELETING-删除中）<br>PayMode：付费模式搜索（PREPAID-包年包月，POSTPAID-按小时计费）<br>ExpiredBefore：按过期时间过滤：仅筛选包年包月（PREPAID）集群<br>注意：配置TagFilters时该查询条件不生效。</p>
                     * @param _filters <p>查询条件列表,支持以下字段<br>InstanceName：集群名模糊搜索<br>InstanceId：集群id精确搜索<br>InstanceStatus：集群状态搜索（RUNNING-运行中，CREATING-创建中，MODIFYING-变配中，DELETING-删除中）<br>PayMode：付费模式搜索（PREPAID-包年包月，POSTPAID-按小时计费）<br>ExpiredBefore：按过期时间过滤：仅筛选包年包月（PREPAID）集群<br>注意：配置TagFilters时该查询条件不生效。</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>查询起始位置，默认0</p>
                     * @return Offset <p>查询起始位置，默认0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>查询起始位置，默认0</p>
                     * @param _offset <p>查询起始位置，默认0</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>查询结果限制数量，默认20，最大100</p>
                     * @return Limit <p>查询结果限制数量，默认20，最大100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>查询结果限制数量，默认20，最大100</p>
                     * @param _limit <p>查询结果限制数量，默认20，最大100</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>标签过滤器</p>
                     * @return TagFilters <p>标签过滤器</p>
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置<p>标签过滤器</p>
                     * @param _tagFilters <p>标签过滤器</p>
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * <p>查询条件列表,支持以下字段<br>InstanceName：集群名模糊搜索<br>InstanceId：集群id精确搜索<br>InstanceStatus：集群状态搜索（RUNNING-运行中，CREATING-创建中，MODIFYING-变配中，DELETING-删除中）<br>PayMode：付费模式搜索（PREPAID-包年包月，POSTPAID-按小时计费）<br>ExpiredBefore：按过期时间过滤：仅筛选包年包月（PREPAID）集群<br>注意：配置TagFilters时该查询条件不生效。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>查询起始位置，默认0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>查询结果限制数量，默认20，最大100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>标签过滤器</p>
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEINSTANCELISTREQUEST_H_
