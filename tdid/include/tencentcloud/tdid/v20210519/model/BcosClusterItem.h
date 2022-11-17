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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_BCOSCLUSTERITEM_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_BCOSCLUSTERITEM_H_

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
                * bcos网络信息
                */
                class BcosClusterItem : public AbstractModel
                {
                public:
                    BcosClusterItem();
                    ~BcosClusterItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络索引id
                     * @return ChainId 网络索引id
                     */
                    uint64_t GetChainId() const;

                    /**
                     * 设置网络索引id
                     * @param ChainId 网络索引id
                     */
                    void SetChainId(const uint64_t& _chainId);

                    /**
                     * 判断参数 ChainId 是否已赋值
                     * @return ChainId 是否已赋值
                     */
                    bool ChainIdHasBeenSet() const;

                    /**
                     * 获取网络名称
                     * @return ChainName 网络名称
                     */
                    std::string GetChainName() const;

                    /**
                     * 设置网络名称
                     * @param ChainName 网络名称
                     */
                    void SetChainName(const std::string& _chainName);

                    /**
                     * 判断参数 ChainName 是否已赋值
                     * @return ChainName 是否已赋值
                     */
                    bool ChainNameHasBeenSet() const;

                    /**
                     * 获取机构数量
                     * @return AgencyCount 机构数量
                     */
                    uint64_t GetAgencyCount() const;

                    /**
                     * 设置机构数量
                     * @param AgencyCount 机构数量
                     */
                    void SetAgencyCount(const uint64_t& _agencyCount);

                    /**
                     * 判断参数 AgencyCount 是否已赋值
                     * @return AgencyCount 是否已赋值
                     */
                    bool AgencyCountHasBeenSet() const;

                    /**
                     * 获取联盟id
                     * @return ConsortiumId 联盟id
                     */
                    uint64_t GetConsortiumId() const;

                    /**
                     * 设置联盟id
                     * @param ConsortiumId 联盟id
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
                     * 获取资源 id
                     * @return ResourceId 资源 id
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源 id
                     * @param ResourceId 资源 id
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param ClusterId 集群id
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取组织名称
                     * @return ConsortiumName 组织名称
                     */
                    std::string GetConsortiumName() const;

                    /**
                     * 设置组织名称
                     * @param ConsortiumName 组织名称
                     */
                    void SetConsortiumName(const std::string& _consortiumName);

                    /**
                     * 判断参数 ConsortiumName 是否已赋值
                     * @return ConsortiumName 是否已赋值
                     */
                    bool ConsortiumNameHasBeenSet() const;

                    /**
                     * 获取机构id
                     * @return AgencyId 机构id
                     */
                    uint64_t GetAgencyId() const;

                    /**
                     * 设置机构id
                     * @param AgencyId 机构id
                     */
                    void SetAgencyId(const uint64_t& _agencyId);

                    /**
                     * 判断参数 AgencyId 是否已赋值
                     * @return AgencyId 是否已赋值
                     */
                    bool AgencyIdHasBeenSet() const;

                    /**
                     * 获取续费状态
                     * @return AutoRenewFlag 续费状态
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置续费状态
                     * @param AutoRenewFlag 续费状态
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取网络模式
                     * @return TotalNetworkNode 网络模式
                     */
                    uint64_t GetTotalNetworkNode() const;

                    /**
                     * 设置网络模式
                     * @param TotalNetworkNode 网络模式
                     */
                    void SetTotalNetworkNode(const uint64_t& _totalNetworkNode);

                    /**
                     * 判断参数 TotalNetworkNode 是否已赋值
                     * @return TotalNetworkNode 是否已赋值
                     */
                    bool TotalNetworkNodeHasBeenSet() const;

                    /**
                     * 获取创建节点数
                     * @return TotalCreateNode 创建节点数
                     */
                    uint64_t GetTotalCreateNode() const;

                    /**
                     * 设置创建节点数
                     * @param TotalCreateNode 创建节点数
                     */
                    void SetTotalCreateNode(const uint64_t& _totalCreateNode);

                    /**
                     * 判断参数 TotalCreateNode 是否已赋值
                     * @return TotalCreateNode 是否已赋值
                     */
                    bool TotalCreateNodeHasBeenSet() const;

                    /**
                     * 获取总群组数量
                     * @return TotalGroups 总群组数量
                     */
                    uint64_t GetTotalGroups() const;

                    /**
                     * 设置总群组数量
                     * @param TotalGroups 总群组数量
                     */
                    void SetTotalGroups(const uint64_t& _totalGroups);

                    /**
                     * 判断参数 TotalGroups 是否已赋值
                     * @return TotalGroups 是否已赋值
                     */
                    bool TotalGroupsHasBeenSet() const;

                private:

                    /**
                     * 网络索引id
                     */
                    uint64_t m_chainId;
                    bool m_chainIdHasBeenSet;

                    /**
                     * 网络名称
                     */
                    std::string m_chainName;
                    bool m_chainNameHasBeenSet;

                    /**
                     * 机构数量
                     */
                    uint64_t m_agencyCount;
                    bool m_agencyCountHasBeenSet;

                    /**
                     * 联盟id
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
                     * 资源 id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 组织名称
                     */
                    std::string m_consortiumName;
                    bool m_consortiumNameHasBeenSet;

                    /**
                     * 机构id
                     */
                    uint64_t m_agencyId;
                    bool m_agencyIdHasBeenSet;

                    /**
                     * 续费状态
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 网络模式
                     */
                    uint64_t m_totalNetworkNode;
                    bool m_totalNetworkNodeHasBeenSet;

                    /**
                     * 创建节点数
                     */
                    uint64_t m_totalCreateNode;
                    bool m_totalCreateNodeHasBeenSet;

                    /**
                     * 总群组数量
                     */
                    uint64_t m_totalGroups;
                    bool m_totalGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_BCOSCLUSTERITEM_H_
