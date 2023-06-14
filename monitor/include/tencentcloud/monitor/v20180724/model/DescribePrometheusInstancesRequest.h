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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusTag.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusInstances请求参数结构体
                */
                class DescribePrometheusInstancesRequest : public AbstractModel
                {
                public:
                    DescribePrometheusInstancesRequest();
                    ~DescribePrometheusInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照一个或者多个实例ID查询。实例ID形如：prom-xxxxxxxx。请求的实例的上限为100。
                     * @return InstanceIds 按照一个或者多个实例ID查询。实例ID形如：prom-xxxxxxxx。请求的实例的上限为100。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置按照一个或者多个实例ID查询。实例ID形如：prom-xxxxxxxx。请求的实例的上限为100。
                     * @param _instanceIds 按照一个或者多个实例ID查询。实例ID形如：prom-xxxxxxxx。请求的实例的上限为100。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取按照【实例状态】进行过滤。
<ul>
<li>1：正在创建</li>
<li>2：运行中</li>
<li>3：异常</li>
<li>4：重建中</li>
<li>5：销毁中</li>
<li>6：已停服</li>
<li>8：欠费停服中</li>
<li>9：欠费已停服</li>
</ul>
                     * @return InstanceStatus 按照【实例状态】进行过滤。
<ul>
<li>1：正在创建</li>
<li>2：运行中</li>
<li>3：异常</li>
<li>4：重建中</li>
<li>5：销毁中</li>
<li>6：已停服</li>
<li>8：欠费停服中</li>
<li>9：欠费已停服</li>
</ul>
                     * 
                     */
                    std::vector<int64_t> GetInstanceStatus() const;

                    /**
                     * 设置按照【实例状态】进行过滤。
<ul>
<li>1：正在创建</li>
<li>2：运行中</li>
<li>3：异常</li>
<li>4：重建中</li>
<li>5：销毁中</li>
<li>6：已停服</li>
<li>8：欠费停服中</li>
<li>9：欠费已停服</li>
</ul>
                     * @param _instanceStatus 按照【实例状态】进行过滤。
<ul>
<li>1：正在创建</li>
<li>2：运行中</li>
<li>3：异常</li>
<li>4：重建中</li>
<li>5：销毁中</li>
<li>6：已停服</li>
<li>8：欠费停服中</li>
<li>9：欠费已停服</li>
</ul>
                     * 
                     */
                    void SetInstanceStatus(const std::vector<int64_t>& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取按照【实例名称】进行过滤。
                     * @return InstanceName 按照【实例名称】进行过滤。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置按照【实例名称】进行过滤。
                     * @param _instanceName 按照【实例名称】进行过滤。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取按照【可用区】进行过滤。可用区形如：ap-guangzhou-1。
                     * @return Zones 按照【可用区】进行过滤。可用区形如：ap-guangzhou-1。
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置按照【可用区】进行过滤。可用区形如：ap-guangzhou-1。
                     * @param _zones 按照【可用区】进行过滤。可用区形如：ap-guangzhou-1。
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取按照【标签键值对】进行过滤。tag-key使用具体的标签键进行替换。
                     * @return TagFilters 按照【标签键值对】进行过滤。tag-key使用具体的标签键进行替换。
                     * 
                     */
                    std::vector<PrometheusTag> GetTagFilters() const;

                    /**
                     * 设置按照【标签键值对】进行过滤。tag-key使用具体的标签键进行替换。
                     * @param _tagFilters 按照【标签键值对】进行过滤。tag-key使用具体的标签键进行替换。
                     * 
                     */
                    void SetTagFilters(const std::vector<PrometheusTag>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取按照【实例的IPv4地址】进行过滤。
                     * @return IPv4Address 按照【实例的IPv4地址】进行过滤。
                     * 
                     */
                    std::vector<std::string> GetIPv4Address() const;

                    /**
                     * 设置按照【实例的IPv4地址】进行过滤。
                     * @param _iPv4Address 按照【实例的IPv4地址】进行过滤。
                     * 
                     */
                    void SetIPv4Address(const std::vector<std::string>& _iPv4Address);

                    /**
                     * 判断参数 IPv4Address 是否已赋值
                     * @return IPv4Address 是否已赋值
                     * 
                     */
                    bool IPv4AddressHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取按照【计费类型】进行过滤。
<li>2：包年包月</li>
<li>3：按量</li>
                     * @return InstanceChargeType 按照【计费类型】进行过滤。
<li>2：包年包月</li>
<li>3：按量</li>
                     * 
                     */
                    int64_t GetInstanceChargeType() const;

                    /**
                     * 设置按照【计费类型】进行过滤。
<li>2：包年包月</li>
<li>3：按量</li>
                     * @param _instanceChargeType 按照【计费类型】进行过滤。
<li>2：包年包月</li>
<li>3：按量</li>
                     * 
                     */
                    void SetInstanceChargeType(const int64_t& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                private:

                    /**
                     * 按照一个或者多个实例ID查询。实例ID形如：prom-xxxxxxxx。请求的实例的上限为100。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 按照【实例状态】进行过滤。
<ul>
<li>1：正在创建</li>
<li>2：运行中</li>
<li>3：异常</li>
<li>4：重建中</li>
<li>5：销毁中</li>
<li>6：已停服</li>
<li>8：欠费停服中</li>
<li>9：欠费已停服</li>
</ul>
                     */
                    std::vector<int64_t> m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 按照【实例名称】进行过滤。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 按照【可用区】进行过滤。可用区形如：ap-guangzhou-1。
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 按照【标签键值对】进行过滤。tag-key使用具体的标签键进行替换。
                     */
                    std::vector<PrometheusTag> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * 按照【实例的IPv4地址】进行过滤。
                     */
                    std::vector<std::string> m_iPv4Address;
                    bool m_iPv4AddressHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 按照【计费类型】进行过滤。
<li>2：包年包月</li>
<li>3：按量</li>
                     */
                    int64_t m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCESREQUEST_H_
