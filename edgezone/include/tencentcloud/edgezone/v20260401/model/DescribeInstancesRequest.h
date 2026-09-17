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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
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
                     * 获取<p>实例ID列表，用于按实例ID筛选</p>
                     * @return InstanceIds <p>实例ID列表，用于按实例ID筛选</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>实例ID列表，用于按实例ID筛选</p>
                     * @param _instanceIds <p>实例ID列表，用于按实例ID筛选</p>
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
                     * 获取<p>实例名称，支持模糊匹配</p>
                     * @return InstanceName <p>实例名称，支持模糊匹配</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称，支持模糊匹配</p>
                     * @param _instanceName <p>实例名称，支持模糊匹配</p>
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
                     * 获取<p>可用区代码，用于筛选指定可用区的实例</p>
                     * @return Zone <p>可用区代码，用于筛选指定可用区的实例</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区代码，用于筛选指定可用区的实例</p>
                     * @param _zone <p>可用区代码，用于筛选指定可用区的实例</p>
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
                     * 获取<p>实例状态列表，用于按状态筛选实例。可选值：allocating、running、isolating、isolated、terminating、error</p>
                     * @return InstanceStatus <p>实例状态列表，用于按状态筛选实例。可选值：allocating、running、isolating、isolated、terminating、error</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceStatus() const;

                    /**
                     * 设置<p>实例状态列表，用于按状态筛选实例。可选值：allocating、running、isolating、isolated、terminating、error</p>
                     * @param _instanceStatus <p>实例状态列表，用于按状态筛选实例。可选值：allocating、running、isolating、isolated、terminating、error</p>
                     * 
                     */
                    void SetInstanceStatus(const std::vector<std::string>& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取<p>公网网络ID</p>
                     * @return PublicNetworkId <p>公网网络ID</p>
                     * 
                     */
                    std::string GetPublicNetworkId() const;

                    /**
                     * 设置<p>公网网络ID</p>
                     * @param _publicNetworkId <p>公网网络ID</p>
                     * 
                     */
                    void SetPublicNetworkId(const std::string& _publicNetworkId);

                    /**
                     * 判断参数 PublicNetworkId 是否已赋值
                     * @return PublicNetworkId 是否已赋值
                     * 
                     */
                    bool PublicNetworkIdHasBeenSet() const;

                    /**
                     * 获取<p>私有网络ID</p>
                     * @return PrivateNetworkId <p>私有网络ID</p>
                     * 
                     */
                    std::string GetPrivateNetworkId() const;

                    /**
                     * 设置<p>私有网络ID</p>
                     * @param _privateNetworkId <p>私有网络ID</p>
                     * 
                     */
                    void SetPrivateNetworkId(const std::string& _privateNetworkId);

                    /**
                     * 判断参数 PrivateNetworkId 是否已赋值
                     * @return PrivateNetworkId 是否已赋值
                     * 
                     */
                    bool PrivateNetworkIdHasBeenSet() const;

                    /**
                     * 获取<p>公网IPv4地址列表，用于按公网IP筛选实例</p>
                     * @return PublicIps <p>公网IPv4地址列表，用于按公网IP筛选实例</p>
                     * 
                     */
                    std::vector<std::string> GetPublicIps() const;

                    /**
                     * 设置<p>公网IPv4地址列表，用于按公网IP筛选实例</p>
                     * @param _publicIps <p>公网IPv4地址列表，用于按公网IP筛选实例</p>
                     * 
                     */
                    void SetPublicIps(const std::vector<std::string>& _publicIps);

                    /**
                     * 判断参数 PublicIps 是否已赋值
                     * @return PublicIps 是否已赋值
                     * 
                     */
                    bool PublicIpsHasBeenSet() const;

                    /**
                     * 获取<p>偏移量，默认0</p>
                     * @return Offset <p>偏移量，默认0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认0</p>
                     * @param _offset <p>偏移量，默认0</p>
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
                     * 获取<p>返回数量，默认20，最大100</p>
                     * @return Limit <p>返回数量，默认20，最大100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认20，最大100</p>
                     * @param _limit <p>返回数量，默认20，最大100</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID列表，用于按实例ID筛选</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>实例名称，支持模糊匹配</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>可用区代码，用于筛选指定可用区的实例</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>实例状态列表，用于按状态筛选实例。可选值：allocating、running、isolating、isolated、terminating、error</p>
                     */
                    std::vector<std::string> m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>公网网络ID</p>
                     */
                    std::string m_publicNetworkId;
                    bool m_publicNetworkIdHasBeenSet;

                    /**
                     * <p>私有网络ID</p>
                     */
                    std::string m_privateNetworkId;
                    bool m_privateNetworkIdHasBeenSet;

                    /**
                     * <p>公网IPv4地址列表，用于按公网IP筛选实例</p>
                     */
                    std::vector<std::string> m_publicIps;
                    bool m_publicIpsHasBeenSet;

                    /**
                     * <p>偏移量，默认0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认20，最大100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEINSTANCESREQUEST_H_
