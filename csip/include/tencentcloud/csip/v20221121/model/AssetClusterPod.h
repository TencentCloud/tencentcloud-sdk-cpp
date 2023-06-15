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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETCLUSTERPOD_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETCLUSTERPOD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 集群pod列表
                */
                class AssetClusterPod : public AbstractModel
                {
                public:
                    AssetClusterPod();
                    ~AssetClusterPod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取租户id
                     * @return AppId 租户id
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置租户id
                     * @param _appId 租户id
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取租户uin
                     * @return Uin 租户uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置租户uin
                     * @param _uin 租户uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取租户昵称
                     * @return Nick 租户昵称
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置租户昵称
                     * @param _nick 租户昵称
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取pod id
                     * @return AssetId pod id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置pod id
                     * @param _assetId pod id
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取pod名称
                     * @return AssetName pod名称
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置pod名称
                     * @param _assetName pod名称
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取pod创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCreateTime pod创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceCreateTime() const;

                    /**
                     * 设置pod创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceCreateTime pod创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceCreateTime(const std::string& _instanceCreateTime);

                    /**
                     * 判断参数 InstanceCreateTime 是否已赋值
                     * @return InstanceCreateTime 是否已赋值
                     * 
                     */
                    bool InstanceCreateTimeHasBeenSet() const;

                    /**
                     * 获取命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 集群id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取主机id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineId 主机id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMachineId() const;

                    /**
                     * 设置主机id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _machineId 主机id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMachineId(const std::string& _machineId);

                    /**
                     * 判断参数 MachineId 是否已赋值
                     * @return MachineId 是否已赋值
                     * 
                     */
                    bool MachineIdHasBeenSet() const;

                    /**
                     * 获取主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineName 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _machineName 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取pod ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodIp pod ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPodIp() const;

                    /**
                     * 设置pod ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podIp pod ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodIp(const std::string& _podIp);

                    /**
                     * 判断参数 PodIp 是否已赋值
                     * @return PodIp 是否已赋值
                     * 
                     */
                    bool PodIpHasBeenSet() const;

                    /**
                     * 获取关联service数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceCount 关联service数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetServiceCount() const;

                    /**
                     * 设置关联service数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceCount 关联service数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceCount(const int64_t& _serviceCount);

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取关联容器数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerCount 关联容器数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetContainerCount() const;

                    /**
                     * 设置关联容器数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerCount 关联容器数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainerCount(const int64_t& _containerCount);

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     * 
                     */
                    bool ContainerCountHasBeenSet() const;

                    /**
                     * 获取公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIp 公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicIp 公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateIp 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateIp 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取是否核心：1:核心，2:非核心
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsCore 是否核心：1:核心，2:非核心
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsCore() const;

                    /**
                     * 设置是否核心：1:核心，2:非核心
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isCore 是否核心：1:核心，2:非核心
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsCore(const int64_t& _isCore);

                    /**
                     * 判断参数 IsCore 是否已赋值
                     * @return IsCore 是否已赋值
                     * 
                     */
                    bool IsCoreHasBeenSet() const;

                private:

                    /**
                     * 租户id
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 租户uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 租户昵称
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * pod id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * pod名称
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * pod创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceCreateTime;
                    bool m_instanceCreateTimeHasBeenSet;

                    /**
                     * 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 主机id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_machineId;
                    bool m_machineIdHasBeenSet;

                    /**
                     * 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * pod ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podIp;
                    bool m_podIpHasBeenSet;

                    /**
                     * 关联service数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * 关联容器数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                    /**
                     * 公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 是否核心：1:核心，2:非核心
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETCLUSTERPOD_H_
