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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CUSTOMERCLUSTERATTR_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CUSTOMERCLUSTERATTR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/ClientClusterManagerNodeInfo.h>
#include <tencentcloud/goosefs/v20220519/model/ClusterMountAttr.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * goosefsx客户端集群信息
                */
                class CustomerClusterAttr : public AbstractModel
                {
                public:
                    CustomerClusterAttr();
                    ~CustomerClusterAttr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取vpc网络id
                     * @return VpcId vpc网络id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc网络id
                     * @param _vpcId vpc网络id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网id
                     * @return SubnetId 子网id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id
                     * @param _subnetId 子网id
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取客户端数量
                     * @return ClientNum 客户端数量
                     * 
                     */
                    uint64_t GetClientNum() const;

                    /**
                     * 设置客户端数量
                     * @param _clientNum 客户端数量
                     * 
                     */
                    void SetClientNum(const uint64_t& _clientNum);

                    /**
                     * 判断参数 ClientNum 是否已赋值
                     * @return ClientNum 是否已赋值
                     * 
                     */
                    bool ClientNumHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群类型：0: 默认集群（文件系统创建时构建，不可销毁）；1: 扩展集群（客户端数量为0时可销毁）
                     * @return ClusterType 集群类型：0: 默认集群（文件系统创建时构建，不可销毁）；1: 扩展集群（客户端数量为0时可销毁）
                     * 
                     */
                    uint64_t GetClusterType() const;

                    /**
                     * 设置集群类型：0: 默认集群（文件系统创建时构建，不可销毁）；1: 扩展集群（客户端数量为0时可销毁）
                     * @param _clusterType 集群类型：0: 默认集群（文件系统创建时构建，不可销毁）；1: 扩展集群（客户端数量为0时可销毁）
                     * 
                     */
                    void SetClusterType(const uint64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取管理节点信息
                     * @return ManagerNodes 管理节点信息
                     * 
                     */
                    std::vector<ClientClusterManagerNodeInfo> GetManagerNodes() const;

                    /**
                     * 设置管理节点信息
                     * @param _managerNodes 管理节点信息
                     * 
                     */
                    void SetManagerNodes(const std::vector<ClientClusterManagerNodeInfo>& _managerNodes);

                    /**
                     * 判断参数 ManagerNodes 是否已赋值
                     * @return ManagerNodes 是否已赋值
                     * 
                     */
                    bool ManagerNodesHasBeenSet() const;

                    /**
                     * 获取集群状态：0:creating 创建中；1: created 创建完成; 2: deleting 删除中； 3: deleted 删除完成； 4:  failed 创建失败 
                     * @return Status 集群状态：0:creating 创建中；1: created 创建完成; 2: deleting 删除中； 3: deleted 删除完成； 4:  failed 创建失败 
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置集群状态：0:creating 创建中；1: created 创建完成; 2: deleting 删除中； 3: deleted 删除完成； 4:  failed 创建失败 
                     * @param _status 集群状态：0:creating 创建中；1: created 创建完成; 2: deleting 删除中； 3: deleted 删除完成； 4:  failed 创建失败 
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取客户端集群挂载存储集合
                     * @return ClusterMountSet 客户端集群挂载存储集合
                     * 
                     */
                    std::vector<ClusterMountAttr> GetClusterMountSet() const;

                    /**
                     * 设置客户端集群挂载存储集合
                     * @param _clusterMountSet 客户端集群挂载存储集合
                     * 
                     */
                    void SetClusterMountSet(const std::vector<ClusterMountAttr>& _clusterMountSet);

                    /**
                     * 判断参数 ClusterMountSet 是否已赋值
                     * @return ClusterMountSet 是否已赋值
                     * 
                     */
                    bool ClusterMountSetHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * vpc网络id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 客户端数量
                     */
                    uint64_t m_clientNum;
                    bool m_clientNumHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群类型：0: 默认集群（文件系统创建时构建，不可销毁）；1: 扩展集群（客户端数量为0时可销毁）
                     */
                    uint64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 管理节点信息
                     */
                    std::vector<ClientClusterManagerNodeInfo> m_managerNodes;
                    bool m_managerNodesHasBeenSet;

                    /**
                     * 集群状态：0:creating 创建中；1: created 创建完成; 2: deleting 删除中； 3: deleted 删除完成； 4:  failed 创建失败 
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 客户端集群挂载存储集合
                     */
                    std::vector<ClusterMountAttr> m_clusterMountSet;
                    bool m_clusterMountSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CUSTOMERCLUSTERATTR_H_
