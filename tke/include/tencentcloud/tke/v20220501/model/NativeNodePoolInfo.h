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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_NATIVENODEPOOLINFO_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_NATIVENODEPOOLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/MachineSetScaling.h>
#include <tencentcloud/tke/v20220501/model/MachineUpgradeSettings.h>
#include <tencentcloud/tke/v20220501/model/InstanceChargePrepaid.h>
#include <tencentcloud/tke/v20220501/model/Disk.h>
#include <tencentcloud/tke/v20220501/model/ManagementConfig.h>
#include <tencentcloud/tke/v20220501/model/LifecycleConfig.h>
#include <tencentcloud/tke/v20220501/model/InternetAccessible.h>
#include <tencentcloud/tke/v20220501/model/DataDisk.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 原生节点池信息
                */
                class NativeNodePoolInfo : public AbstractModel
                {
                public:
                    NativeNodePoolInfo();
                    ~NativeNodePoolInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取伸缩配置
                     * @return Scaling 伸缩配置
                     * 
                     */
                    MachineSetScaling GetScaling() const;

                    /**
                     * 设置伸缩配置
                     * @param _scaling 伸缩配置
                     * 
                     */
                    void SetScaling(const MachineSetScaling& _scaling);

                    /**
                     * 判断参数 Scaling 是否已赋值
                     * @return Scaling 是否已赋值
                     * 
                     */
                    bool ScalingHasBeenSet() const;

                    /**
                     * 获取子网列表
                     * @return SubnetIds 子网列表
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网列表
                     * @param _subnetIds 子网列表
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取安全组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityGroupIds 安全组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityGroupIds 安全组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取自动升级配置
                     * @return UpgradeSettings 自动升级配置
                     * 
                     */
                    MachineUpgradeSettings GetUpgradeSettings() const;

                    /**
                     * 设置自动升级配置
                     * @param _upgradeSettings 自动升级配置
                     * 
                     */
                    void SetUpgradeSettings(const MachineUpgradeSettings& _upgradeSettings);

                    /**
                     * 判断参数 UpgradeSettings 是否已赋值
                     * @return UpgradeSettings 是否已赋值
                     * 
                     */
                    bool UpgradeSettingsHasBeenSet() const;

                    /**
                     * 获取是否开启自愈能力
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRepair 是否开启自愈能力
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoRepair() const;

                    /**
                     * 设置是否开启自愈能力
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRepair 是否开启自愈能力
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoRepair(const bool& _autoRepair);

                    /**
                     * 判断参数 AutoRepair 是否已赋值
                     * @return AutoRepair 是否已赋值
                     * 
                     */
                    bool AutoRepairHasBeenSet() const;

                    /**
                     * 获取节点计费类型
                     * @return InstanceChargeType 节点计费类型
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置节点计费类型
                     * @param _instanceChargeType 节点计费类型
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取包年包月机型计费配置
                     * @return InstanceChargePrepaid 包年包月机型计费配置
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置包年包月机型计费配置
                     * @param _instanceChargePrepaid 包年包月机型计费配置
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取系统盘配置
                     * @return SystemDisk 系统盘配置
                     * 
                     */
                    Disk GetSystemDisk() const;

                    /**
                     * 设置系统盘配置
                     * @param _systemDisk 系统盘配置
                     * 
                     */
                    void SetSystemDisk(const Disk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取密钥 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyIds 密钥 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置密钥 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyIds 密钥 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                    /**
                     * 获取Machine 系统配置
                     * @return Management Machine 系统配置
                     * 
                     */
                    ManagementConfig GetManagement() const;

                    /**
                     * 设置Machine 系统配置
                     * @param _management Machine 系统配置
                     * 
                     */
                    void SetManagement(const ManagementConfig& _management);

                    /**
                     * 判断参数 Management 是否已赋值
                     * @return Management 是否已赋值
                     * 
                     */
                    bool ManagementHasBeenSet() const;

                    /**
                     * 获取故障自愈规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckPolicyName 故障自愈规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHealthCheckPolicyName() const;

                    /**
                     * 设置故障自愈规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheckPolicyName 故障自愈规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthCheckPolicyName(const std::string& _healthCheckPolicyName);

                    /**
                     * 判断参数 HealthCheckPolicyName 是否已赋值
                     * @return HealthCheckPolicyName 是否已赋值
                     * 
                     */
                    bool HealthCheckPolicyNameHasBeenSet() const;

                    /**
                     * 获取原生节点池hostName模式串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostNamePattern 原生节点池hostName模式串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHostNamePattern() const;

                    /**
                     * 设置原生节点池hostName模式串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostNamePattern 原生节点池hostName模式串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostNamePattern(const std::string& _hostNamePattern);

                    /**
                     * 判断参数 HostNamePattern 是否已赋值
                     * @return HostNamePattern 是否已赋值
                     * 
                     */
                    bool HostNamePatternHasBeenSet() const;

                    /**
                     * 获取kubelet 自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KubeletArgs kubelet 自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKubeletArgs() const;

                    /**
                     * 设置kubelet 自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kubeletArgs kubelet 自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKubeletArgs(const std::vector<std::string>& _kubeletArgs);

                    /**
                     * 判断参数 KubeletArgs 是否已赋值
                     * @return KubeletArgs 是否已赋值
                     * 
                     */
                    bool KubeletArgsHasBeenSet() const;

                    /**
                     * 获取预定义脚本
                     * @return Lifecycle 预定义脚本
                     * 
                     */
                    LifecycleConfig GetLifecycle() const;

                    /**
                     * 设置预定义脚本
                     * @param _lifecycle 预定义脚本
                     * 
                     */
                    void SetLifecycle(const LifecycleConfig& _lifecycle);

                    /**
                     * 判断参数 Lifecycle 是否已赋值
                     * @return Lifecycle 是否已赋值
                     * 
                     */
                    bool LifecycleHasBeenSet() const;

                    /**
                     * 获取运行时根目录
                     * @return RuntimeRootDir 运行时根目录
                     * 
                     */
                    std::string GetRuntimeRootDir() const;

                    /**
                     * 设置运行时根目录
                     * @param _runtimeRootDir 运行时根目录
                     * 
                     */
                    void SetRuntimeRootDir(const std::string& _runtimeRootDir);

                    /**
                     * 判断参数 RuntimeRootDir 是否已赋值
                     * @return RuntimeRootDir 是否已赋值
                     * 
                     */
                    bool RuntimeRootDirHasBeenSet() const;

                    /**
                     * 获取是否开启弹性伸缩
                     * @return EnableAutoscaling 是否开启弹性伸缩
                     * 
                     */
                    bool GetEnableAutoscaling() const;

                    /**
                     * 设置是否开启弹性伸缩
                     * @param _enableAutoscaling 是否开启弹性伸缩
                     * 
                     */
                    void SetEnableAutoscaling(const bool& _enableAutoscaling);

                    /**
                     * 判断参数 EnableAutoscaling 是否已赋值
                     * @return EnableAutoscaling 是否已赋值
                     * 
                     */
                    bool EnableAutoscalingHasBeenSet() const;

                    /**
                     * 获取机型列表
                     * @return InstanceTypes 机型列表
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置机型列表
                     * @param _instanceTypes 机型列表
                     * 
                     */
                    void SetInstanceTypes(const std::vector<std::string>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     * 
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取期望节点数
                     * @return Replicas 期望节点数
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置期望节点数
                     * @param _replicas 期望节点数
                     * 
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取就绪 Machine 个数
                     * @return ReadyReplicas 就绪 Machine 个数
                     * 
                     */
                    int64_t GetReadyReplicas() const;

                    /**
                     * 设置就绪 Machine 个数
                     * @param _readyReplicas 就绪 Machine 个数
                     * 
                     */
                    void SetReadyReplicas(const int64_t& _readyReplicas);

                    /**
                     * 判断参数 ReadyReplicas 是否已赋值
                     * @return ReadyReplicas 是否已赋值
                     * 
                     */
                    bool ReadyReplicasHasBeenSet() const;

                    /**
                     * 获取公网带宽设置
                     * @return InternetAccessible 公网带宽设置
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置公网带宽设置
                     * @param _internetAccessible 公网带宽设置
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取原生节点池数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDisks 原生节点池数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置原生节点池数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataDisks 原生节点池数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取原生节点机型 Native, NativeCVM
                     * @return MachineType 原生节点机型 Native, NativeCVM
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置原生节点机型 Native, NativeCVM
                     * @param _machineType 原生节点机型 Native, NativeCVM
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                private:

                    /**
                     * 伸缩配置
                     */
                    MachineSetScaling m_scaling;
                    bool m_scalingHasBeenSet;

                    /**
                     * 子网列表
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 安全组列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 自动升级配置
                     */
                    MachineUpgradeSettings m_upgradeSettings;
                    bool m_upgradeSettingsHasBeenSet;

                    /**
                     * 是否开启自愈能力
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoRepair;
                    bool m_autoRepairHasBeenSet;

                    /**
                     * 节点计费类型
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 包年包月机型计费配置
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * 系统盘配置
                     */
                    Disk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 密钥 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                    /**
                     * Machine 系统配置
                     */
                    ManagementConfig m_management;
                    bool m_managementHasBeenSet;

                    /**
                     * 故障自愈规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_healthCheckPolicyName;
                    bool m_healthCheckPolicyNameHasBeenSet;

                    /**
                     * 原生节点池hostName模式串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostNamePattern;
                    bool m_hostNamePatternHasBeenSet;

                    /**
                     * kubelet 自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_kubeletArgs;
                    bool m_kubeletArgsHasBeenSet;

                    /**
                     * 预定义脚本
                     */
                    LifecycleConfig m_lifecycle;
                    bool m_lifecycleHasBeenSet;

                    /**
                     * 运行时根目录
                     */
                    std::string m_runtimeRootDir;
                    bool m_runtimeRootDirHasBeenSet;

                    /**
                     * 是否开启弹性伸缩
                     */
                    bool m_enableAutoscaling;
                    bool m_enableAutoscalingHasBeenSet;

                    /**
                     * 机型列表
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * 期望节点数
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * 就绪 Machine 个数
                     */
                    int64_t m_readyReplicas;
                    bool m_readyReplicasHasBeenSet;

                    /**
                     * 公网带宽设置
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * 原生节点池数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * 原生节点机型 Native, NativeCVM
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_NATIVENODEPOOLINFO_H_
