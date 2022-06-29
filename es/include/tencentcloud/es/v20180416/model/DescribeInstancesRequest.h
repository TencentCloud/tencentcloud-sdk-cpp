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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/TagInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeInstances请求参数结构体
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例所属可用区，不传则默认所有可用区
                     * @return Zone 集群实例所属可用区，不传则默认所有可用区
                     */
                    std::string GetZone() const;

                    /**
                     * 设置集群实例所属可用区，不传则默认所有可用区
                     * @param Zone 集群实例所属可用区，不传则默认所有可用区
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取集群实例ID列表
                     * @return InstanceIds 集群实例ID列表
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置集群实例ID列表
                     * @param InstanceIds 集群实例ID列表
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取集群实例名称列表
                     * @return InstanceNames 集群实例名称列表
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置集群实例名称列表
                     * @param InstanceNames 集群实例名称列表
                     */
                    void SetInstanceNames(const std::vector<std::string>& _instanceNames);

                    /**
                     * 判断参数 InstanceNames 是否已赋值
                     * @return InstanceNames 是否已赋值
                     */
                    bool InstanceNamesHasBeenSet() const;

                    /**
                     * 获取分页起始值, 默认值0
                     * @return Offset 分页起始值, 默认值0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页起始值, 默认值0
                     * @param Offset 分页起始值, 默认值0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页大小，默认值20
                     * @return Limit 分页大小，默认值20
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小，默认值20
                     * @param Limit 分页大小，默认值20
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取排序字段<li>1：实例ID</li><li>2：实例名称</li><li>3：可用区</li><li>4：创建时间</li>若orderKey未传递则按创建时间降序排序
                     * @return OrderByKey 排序字段<li>1：实例ID</li><li>2：实例名称</li><li>3：可用区</li><li>4：创建时间</li>若orderKey未传递则按创建时间降序排序
                     */
                    uint64_t GetOrderByKey() const;

                    /**
                     * 设置排序字段<li>1：实例ID</li><li>2：实例名称</li><li>3：可用区</li><li>4：创建时间</li>若orderKey未传递则按创建时间降序排序
                     * @param OrderByKey 排序字段<li>1：实例ID</li><li>2：实例名称</li><li>3：可用区</li><li>4：创建时间</li>若orderKey未传递则按创建时间降序排序
                     */
                    void SetOrderByKey(const uint64_t& _orderByKey);

                    /**
                     * 判断参数 OrderByKey 是否已赋值
                     * @return OrderByKey 是否已赋值
                     */
                    bool OrderByKeyHasBeenSet() const;

                    /**
                     * 获取排序方式<li>0：升序</li><li>1：降序</li>若传递了orderByKey未传递orderByType, 则默认升序
                     * @return OrderByType 排序方式<li>0：升序</li><li>1：降序</li>若传递了orderByKey未传递orderByType, 则默认升序
                     */
                    uint64_t GetOrderByType() const;

                    /**
                     * 设置排序方式<li>0：升序</li><li>1：降序</li>若传递了orderByKey未传递orderByType, 则默认升序
                     * @param OrderByType 排序方式<li>0：升序</li><li>1：降序</li>若传递了orderByKey未传递orderByType, 则默认升序
                     */
                    void SetOrderByType(const uint64_t& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取节点标签信息列表
                     * @return TagList 节点标签信息列表
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置节点标签信息列表
                     * @param TagList 节点标签信息列表
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取私有网络vip列表
                     * @return IpList 私有网络vip列表
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置私有网络vip列表
                     * @param IpList 私有网络vip列表
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取可用区列表
                     * @return ZoneList 可用区列表
                     */
                    std::vector<std::string> GetZoneList() const;

                    /**
                     * 设置可用区列表
                     * @param ZoneList 可用区列表
                     */
                    void SetZoneList(const std::vector<std::string>& _zoneList);

                    /**
                     * 判断参数 ZoneList 是否已赋值
                     * @return ZoneList 是否已赋值
                     */
                    bool ZoneListHasBeenSet() const;

                    /**
                     * 获取健康状态筛列表
                     * @return HealthStatus 健康状态筛列表
                     */
                    std::vector<int64_t> GetHealthStatus() const;

                    /**
                     * 设置健康状态筛列表
                     * @param HealthStatus 健康状态筛列表
                     */
                    void SetHealthStatus(const std::vector<int64_t>& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     */
                    bool HealthStatusHasBeenSet() const;

                private:

                    /**
                     * 集群实例所属可用区，不传则默认所有可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 集群实例ID列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 集群实例名称列表
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * 分页起始值, 默认值0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页大小，默认值20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段<li>1：实例ID</li><li>2：实例名称</li><li>3：可用区</li><li>4：创建时间</li>若orderKey未传递则按创建时间降序排序
                     */
                    uint64_t m_orderByKey;
                    bool m_orderByKeyHasBeenSet;

                    /**
                     * 排序方式<li>0：升序</li><li>1：降序</li>若传递了orderByKey未传递orderByType, 则默认升序
                     */
                    uint64_t m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 节点标签信息列表
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 私有网络vip列表
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * 可用区列表
                     */
                    std::vector<std::string> m_zoneList;
                    bool m_zoneListHasBeenSet;

                    /**
                     * 健康状态筛列表
                     */
                    std::vector<int64_t> m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCESREQUEST_H_
