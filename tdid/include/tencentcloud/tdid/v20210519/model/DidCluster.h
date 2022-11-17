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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_DIDCLUSTER_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_DIDCLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * did区块链网络信息
                */
                class DidCluster : public AbstractModel
                {
                public:
                    DidCluster();
                    ~DidCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取链ID
                     * @return ChainId 链ID
                     */
                    uint64_t GetChainId() const;

                    /**
                     * 设置链ID
                     * @param ChainId 链ID
                     */
                    void SetChainId(const uint64_t& _chainId);

                    /**
                     * 判断参数 ChainId 是否已赋值
                     * @return ChainId 是否已赋值
                     */
                    bool ChainIdHasBeenSet() const;

                    /**
                     * 获取链名称
                     * @return ChainName 链名称
                     */
                    std::string GetChainName() const;

                    /**
                     * 设置链名称
                     * @param ChainName 链名称
                     */
                    void SetChainName(const std::string& _chainName);

                    /**
                     * 判断参数 ChainName 是否已赋值
                     * @return ChainName 是否已赋值
                     */
                    bool ChainNameHasBeenSet() const;

                    /**
                     * 获取组织数量
                     * @return AgencyCount 组织数量
                     */
                    uint64_t GetAgencyCount() const;

                    /**
                     * 设置组织数量
                     * @param AgencyCount 组织数量
                     */
                    void SetAgencyCount(const uint64_t& _agencyCount);

                    /**
                     * 判断参数 AgencyCount 是否已赋值
                     * @return AgencyCount 是否已赋值
                     */
                    bool AgencyCountHasBeenSet() const;

                    /**
                     * 获取联盟ID
                     * @return ConsortiumId 联盟ID
                     */
                    uint64_t GetConsortiumId() const;

                    /**
                     * 设置联盟ID
                     * @param ConsortiumId 联盟ID
                     */
                    void SetConsortiumId(const uint64_t& _consortiumId);

                    /**
                     * 判断参数 ConsortiumId 是否已赋值
                     * @return ConsortiumId 是否已赋值
                     */
                    bool ConsortiumIdHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param ExpireTime 过期时间
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取网络状态
                     * @return ChainStatus 网络状态
                     */
                    uint64_t GetChainStatus() const;

                    /**
                     * 设置网络状态
                     * @param ChainStatus 网络状态
                     */
                    void SetChainStatus(const uint64_t& _chainStatus);

                    /**
                     * 判断参数 ChainStatus 是否已赋值
                     * @return ChainStatus 是否已赋值
                     */
                    bool ChainStatusHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param ResourceId 资源ID
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取网络ID
                     * @return ClusterId 网络ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID
                     * @param ClusterId 网络ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取联盟名称
                     * @return ConsortiumName 联盟名称
                     */
                    std::string GetConsortiumName() const;

                    /**
                     * 设置联盟名称
                     * @param ConsortiumName 联盟名称
                     */
                    void SetConsortiumName(const std::string& _consortiumName);

                    /**
                     * 判断参数 ConsortiumName 是否已赋值
                     * @return ConsortiumName 是否已赋值
                     */
                    bool ConsortiumNameHasBeenSet() const;

                    /**
                     * 获取组织ID
                     * @return AgencyId 组织ID
                     */
                    uint64_t GetAgencyId() const;

                    /**
                     * 设置组织ID
                     * @param AgencyId 组织ID
                     */
                    void SetAgencyId(const uint64_t& _agencyId);

                    /**
                     * 判断参数 AgencyId 是否已赋值
                     * @return AgencyId 是否已赋值
                     */
                    bool AgencyIdHasBeenSet() const;

                    /**
                     * 获取自动续费
                     * @return AutoRenewFlag 自动续费
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费
                     * @param AutoRenewFlag 自动续费
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取网络节点总数
                     * @return TotalNetworkNode 网络节点总数
                     */
                    uint64_t GetTotalNetworkNode() const;

                    /**
                     * 设置网络节点总数
                     * @param TotalNetworkNode 网络节点总数
                     */
                    void SetTotalNetworkNode(const uint64_t& _totalNetworkNode);

                    /**
                     * 判断参数 TotalNetworkNode 是否已赋值
                     * @return TotalNetworkNode 是否已赋值
                     */
                    bool TotalNetworkNodeHasBeenSet() const;

                    /**
                     * 获取本机构节点数
                     * @return TotalCreateNode 本机构节点数
                     */
                    uint64_t GetTotalCreateNode() const;

                    /**
                     * 设置本机构节点数
                     * @param TotalCreateNode 本机构节点数
                     */
                    void SetTotalCreateNode(const uint64_t& _totalCreateNode);

                    /**
                     * 判断参数 TotalCreateNode 是否已赋值
                     * @return TotalCreateNode 是否已赋值
                     */
                    bool TotalCreateNodeHasBeenSet() const;

                    /**
                     * 获取总群组数
                     * @return TotalGroups 总群组数
                     */
                    uint64_t GetTotalGroups() const;

                    /**
                     * 设置总群组数
                     * @param TotalGroups 总群组数
                     */
                    void SetTotalGroups(const uint64_t& _totalGroups);

                    /**
                     * 判断参数 TotalGroups 是否已赋值
                     * @return TotalGroups 是否已赋值
                     */
                    bool TotalGroupsHasBeenSet() const;

                    /**
                     * 获取DID总数
                     * @return DidCount DID总数
                     */
                    uint64_t GetDidCount() const;

                    /**
                     * 设置DID总数
                     * @param DidCount DID总数
                     */
                    void SetDidCount(const uint64_t& _didCount);

                    /**
                     * 判断参数 DidCount 是否已赋值
                     * @return DidCount 是否已赋值
                     */
                    bool DidCountHasBeenSet() const;

                private:

                    /**
                     * 链ID
                     */
                    uint64_t m_chainId;
                    bool m_chainIdHasBeenSet;

                    /**
                     * 链名称
                     */
                    std::string m_chainName;
                    bool m_chainNameHasBeenSet;

                    /**
                     * 组织数量
                     */
                    uint64_t m_agencyCount;
                    bool m_agencyCountHasBeenSet;

                    /**
                     * 联盟ID
                     */
                    uint64_t m_consortiumId;
                    bool m_consortiumIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 网络状态
                     */
                    uint64_t m_chainStatus;
                    bool m_chainStatusHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 网络ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 联盟名称
                     */
                    std::string m_consortiumName;
                    bool m_consortiumNameHasBeenSet;

                    /**
                     * 组织ID
                     */
                    uint64_t m_agencyId;
                    bool m_agencyIdHasBeenSet;

                    /**
                     * 自动续费
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 网络节点总数
                     */
                    uint64_t m_totalNetworkNode;
                    bool m_totalNetworkNodeHasBeenSet;

                    /**
                     * 本机构节点数
                     */
                    uint64_t m_totalCreateNode;
                    bool m_totalCreateNodeHasBeenSet;

                    /**
                     * 总群组数
                     */
                    uint64_t m_totalGroups;
                    bool m_totalGroupsHasBeenSet;

                    /**
                     * DID总数
                     */
                    uint64_t m_didCount;
                    bool m_didCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_DIDCLUSTER_H_
