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
                     * 获取<p>集群实例所属可用区，不传则默认所有可用区</p>
                     * @return Zone <p>集群实例所属可用区，不传则默认所有可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>集群实例所属可用区，不传则默认所有可用区</p>
                     * @param _zone <p>集群实例所属可用区，不传则默认所有可用区</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>集群实例ID列表</p>
                     * @return InstanceIds <p>集群实例ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>集群实例ID列表</p>
                     * @param _instanceIds <p>集群实例ID列表</p>
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
                     * 获取<p>集群实例名称列表</p>
                     * @return InstanceNames <p>集群实例名称列表</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置<p>集群实例名称列表</p>
                     * @param _instanceNames <p>集群实例名称列表</p>
                     * 
                     */
                    void SetInstanceNames(const std::vector<std::string>& _instanceNames);

                    /**
                     * 判断参数 InstanceNames 是否已赋值
                     * @return InstanceNames 是否已赋值
                     * 
                     */
                    bool InstanceNamesHasBeenSet() const;

                    /**
                     * 获取<p>分页起始值, 默认值0</p>
                     * @return Offset <p>分页起始值, 默认值0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页起始值, 默认值0</p>
                     * @param _offset <p>分页起始值, 默认值0</p>
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
                     * 获取<p>分页大小，默认值20</p>
                     * @return Limit <p>分页大小，默认值20</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页大小，默认值20</p>
                     * @param _limit <p>分页大小，默认值20</p>
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
                     * 获取<p>排序字段<li>1：实例ID</li><li>2：实例名称</li><li>3：可用区</li><li>4：创建时间</li>若orderByKey未传递则按创建时间降序排序</p>
                     * @return OrderByKey <p>排序字段<li>1：实例ID</li><li>2：实例名称</li><li>3：可用区</li><li>4：创建时间</li>若orderByKey未传递则按创建时间降序排序</p>
                     * 
                     */
                    uint64_t GetOrderByKey() const;

                    /**
                     * 设置<p>排序字段<li>1：实例ID</li><li>2：实例名称</li><li>3：可用区</li><li>4：创建时间</li>若orderByKey未传递则按创建时间降序排序</p>
                     * @param _orderByKey <p>排序字段<li>1：实例ID</li><li>2：实例名称</li><li>3：可用区</li><li>4：创建时间</li>若orderByKey未传递则按创建时间降序排序</p>
                     * 
                     */
                    void SetOrderByKey(const uint64_t& _orderByKey);

                    /**
                     * 判断参数 OrderByKey 是否已赋值
                     * @return OrderByKey 是否已赋值
                     * 
                     */
                    bool OrderByKeyHasBeenSet() const;

                    /**
                     * 获取<p>排序方式<li>0：升序</li><li>1：降序</li>若传递了orderByKey未传递orderByType, 则默认升序</p>
                     * @return OrderByType <p>排序方式<li>0：升序</li><li>1：降序</li>若传递了orderByKey未传递orderByType, 则默认升序</p>
                     * 
                     */
                    uint64_t GetOrderByType() const;

                    /**
                     * 设置<p>排序方式<li>0：升序</li><li>1：降序</li>若传递了orderByKey未传递orderByType, 则默认升序</p>
                     * @param _orderByType <p>排序方式<li>0：升序</li><li>1：降序</li>若传递了orderByKey未传递orderByType, 则默认升序</p>
                     * 
                     */
                    void SetOrderByType(const uint64_t& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取<p>节点标签信息列表</p>
                     * @return TagList <p>节点标签信息列表</p>
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置<p>节点标签信息列表</p>
                     * @param _tagList <p>节点标签信息列表</p>
                     * 
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>私有网络vip列表</p>
                     * @return IpList <p>私有网络vip列表</p>
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置<p>私有网络vip列表</p>
                     * @param _ipList <p>私有网络vip列表</p>
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取<p>集群节点IP列表</p>
                     * @return NodeIps <p>集群节点IP列表</p>
                     * 
                     */
                    std::vector<std::string> GetNodeIps() const;

                    /**
                     * 设置<p>集群节点IP列表</p>
                     * @param _nodeIps <p>集群节点IP列表</p>
                     * 
                     */
                    void SetNodeIps(const std::vector<std::string>& _nodeIps);

                    /**
                     * 判断参数 NodeIps 是否已赋值
                     * @return NodeIps 是否已赋值
                     * 
                     */
                    bool NodeIpsHasBeenSet() const;

                    /**
                     * 获取<p>可用区列表</p>
                     * @return ZoneList <p>可用区列表</p>
                     * 
                     */
                    std::vector<std::string> GetZoneList() const;

                    /**
                     * 设置<p>可用区列表</p>
                     * @param _zoneList <p>可用区列表</p>
                     * 
                     */
                    void SetZoneList(const std::vector<std::string>& _zoneList);

                    /**
                     * 判断参数 ZoneList 是否已赋值
                     * @return ZoneList 是否已赋值
                     * 
                     */
                    bool ZoneListHasBeenSet() const;

                    /**
                     * 获取<p>健康状态筛列表:0表示绿色，1表示黄色，2表示红色,-1表示未知</p>
                     * @return HealthStatus <p>健康状态筛列表:0表示绿色，1表示黄色，2表示红色,-1表示未知</p>
                     * 
                     */
                    std::vector<int64_t> GetHealthStatus() const;

                    /**
                     * 设置<p>健康状态筛列表:0表示绿色，1表示黄色，2表示红色,-1表示未知</p>
                     * @param _healthStatus <p>健康状态筛列表:0表示绿色，1表示黄色，2表示红色,-1表示未知</p>
                     * 
                     */
                    void SetHealthStatus(const std::vector<int64_t>& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取<p>Vpc列表 筛选项</p>
                     * @return VpcIds <p>Vpc列表 筛选项</p>
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置<p>Vpc列表 筛选项</p>
                     * @param _vpcIds <p>Vpc列表 筛选项</p>
                     * 
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取<p>cdc集群id</p>
                     * @return CdcId <p>cdc集群id</p>
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>cdc集群id</p>
                     * @param _cdcId <p>cdc集群id</p>
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                private:

                    /**
                     * <p>集群实例所属可用区，不传则默认所有可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>集群实例ID列表</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>集群实例名称列表</p>
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * <p>分页起始值, 默认值0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页大小，默认值20</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>排序字段<li>1：实例ID</li><li>2：实例名称</li><li>3：可用区</li><li>4：创建时间</li>若orderByKey未传递则按创建时间降序排序</p>
                     */
                    uint64_t m_orderByKey;
                    bool m_orderByKeyHasBeenSet;

                    /**
                     * <p>排序方式<li>0：升序</li><li>1：降序</li>若传递了orderByKey未传递orderByType, 则默认升序</p>
                     */
                    uint64_t m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * <p>节点标签信息列表</p>
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>私有网络vip列表</p>
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * <p>集群节点IP列表</p>
                     */
                    std::vector<std::string> m_nodeIps;
                    bool m_nodeIpsHasBeenSet;

                    /**
                     * <p>可用区列表</p>
                     */
                    std::vector<std::string> m_zoneList;
                    bool m_zoneListHasBeenSet;

                    /**
                     * <p>健康状态筛列表:0表示绿色，1表示黄色，2表示红色,-1表示未知</p>
                     */
                    std::vector<int64_t> m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * <p>Vpc列表 筛选项</p>
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * <p>cdc集群id</p>
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCESREQUEST_H_
