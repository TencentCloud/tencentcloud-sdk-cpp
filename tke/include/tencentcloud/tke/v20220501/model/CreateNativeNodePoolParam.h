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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_CREATENATIVENODEPOOLPARAM_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_CREATENATIVENODEPOOLPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/MachineSetScaling.h>
#include <tencentcloud/tke/v20220501/model/Disk.h>
#include <tencentcloud/tke/v20220501/model/MachineUpgradeSettings.h>
#include <tencentcloud/tke/v20220501/model/InstanceChargePrepaid.h>
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
                * 原生节点池创建参数
                */
                class CreateNativeNodePoolParam : public AbstractModel
                {
                public:
                    CreateNativeNodePoolParam();
                    ~CreateNativeNodePoolParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>节点池伸缩配置</p>
                     * @return Scaling <p>节点池伸缩配置</p>
                     * 
                     */
                    MachineSetScaling GetScaling() const;

                    /**
                     * 设置<p>节点池伸缩配置</p>
                     * @param _scaling <p>节点池伸缩配置</p>
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
                     * 获取<p>子网列表</p>
                     * @return SubnetIds <p>子网列表</p>
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置<p>子网列表</p>
                     * @param _subnetIds <p>子网列表</p>
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
                     * 获取<p>节点计费类型。PREPAID：包年包月；POSTPAID_BY_HOUR：按量计费（默认）；</p>
                     * @return InstanceChargeType <p>节点计费类型。PREPAID：包年包月；POSTPAID_BY_HOUR：按量计费（默认）；</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>节点计费类型。PREPAID：包年包月；POSTPAID_BY_HOUR：按量计费（默认）；</p>
                     * @param _instanceChargeType <p>节点计费类型。PREPAID：包年包月；POSTPAID_BY_HOUR：按量计费（默认）；</p>
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
                     * 获取<p>系统盘配置</p>
                     * @return SystemDisk <p>系统盘配置</p>
                     * 
                     */
                    Disk GetSystemDisk() const;

                    /**
                     * 设置<p>系统盘配置</p>
                     * @param _systemDisk <p>系统盘配置</p>
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
                     * 获取<p>机型列表</p>
                     * @return InstanceTypes <p>机型列表</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置<p>机型列表</p>
                     * @param _instanceTypes <p>机型列表</p>
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
                     * 获取<p>安全组列表</p>
                     * @return SecurityGroupIds <p>安全组列表</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>安全组列表</p>
                     * @param _securityGroupIds <p>安全组列表</p>
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
                     * 获取<p>自动升级配置</p>
                     * @return UpgradeSettings <p>自动升级配置</p>
                     * 
                     */
                    MachineUpgradeSettings GetUpgradeSettings() const;

                    /**
                     * 设置<p>自动升级配置</p>
                     * @param _upgradeSettings <p>自动升级配置</p>
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
                     * 获取<p>是否开启自愈能力</p>
                     * @return AutoRepair <p>是否开启自愈能力</p>
                     * 
                     */
                    bool GetAutoRepair() const;

                    /**
                     * 设置<p>是否开启自愈能力</p>
                     * @param _autoRepair <p>是否开启自愈能力</p>
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
                     * 获取<p>包年包月机型计费配置</p>
                     * @return InstanceChargePrepaid <p>包年包月机型计费配置</p>
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置<p>包年包月机型计费配置</p>
                     * @param _instanceChargePrepaid <p>包年包月机型计费配置</p>
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
                     * 获取<p>节点池 Management 参数设置</p>
                     * @return Management <p>节点池 Management 参数设置</p>
                     * 
                     */
                    ManagementConfig GetManagement() const;

                    /**
                     * 设置<p>节点池 Management 参数设置</p>
                     * @param _management <p>节点池 Management 参数设置</p>
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
                     * 获取<p>故障自愈规则名称</p>
                     * @return HealthCheckPolicyName <p>故障自愈规则名称</p>
                     * 
                     */
                    std::string GetHealthCheckPolicyName() const;

                    /**
                     * 设置<p>故障自愈规则名称</p>
                     * @param _healthCheckPolicyName <p>故障自愈规则名称</p>
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
                     * 获取<p>原生节点池hostName模式串</p>
                     * @return HostNamePattern <p>原生节点池hostName模式串</p>
                     * 
                     */
                    std::string GetHostNamePattern() const;

                    /**
                     * 设置<p>原生节点池hostName模式串</p>
                     * @param _hostNamePattern <p>原生节点池hostName模式串</p>
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
                     * 获取<p>kubelet 自定义参数</p>
                     * @return KubeletArgs <p>kubelet 自定义参数</p>
                     * 
                     */
                    std::vector<std::string> GetKubeletArgs() const;

                    /**
                     * 设置<p>kubelet 自定义参数</p>
                     * @param _kubeletArgs <p>kubelet 自定义参数</p>
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
                     * 获取<p>预定义脚本</p>
                     * @return Lifecycle <p>预定义脚本</p>
                     * 
                     */
                    LifecycleConfig GetLifecycle() const;

                    /**
                     * 设置<p>预定义脚本</p>
                     * @param _lifecycle <p>预定义脚本</p>
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
                     * 获取<p>运行时根目录</p>
                     * @return RuntimeRootDir <p>运行时根目录</p>
                     * 
                     */
                    std::string GetRuntimeRootDir() const;

                    /**
                     * 设置<p>运行时根目录</p>
                     * @param _runtimeRootDir <p>运行时根目录</p>
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
                     * 获取<p>是否开启弹性伸缩</p>
                     * @return EnableAutoscaling <p>是否开启弹性伸缩</p>
                     * 
                     */
                    bool GetEnableAutoscaling() const;

                    /**
                     * 设置<p>是否开启弹性伸缩</p>
                     * @param _enableAutoscaling <p>是否开启弹性伸缩</p>
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
                     * 获取<p>期望节点数</p>
                     * @return Replicas <p>期望节点数</p>
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置<p>期望节点数</p>
                     * @param _replicas <p>期望节点数</p>
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
                     * 获取<p>公网带宽设置</p>
                     * @return InternetAccessible <p>公网带宽设置</p>
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置<p>公网带宽设置</p>
                     * @param _internetAccessible <p>公网带宽设置</p>
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
                     * 获取<p>原生节点池数据盘列表</p>
                     * @return DataDisks <p>原生节点池数据盘列表</p>
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置<p>原生节点池数据盘列表</p>
                     * @param _dataDisks <p>原生节点池数据盘列表</p>
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
                     * 获取<p>qgpu开关</p>
                     * @return QGPUEnable <p>qgpu开关</p>
                     * 
                     */
                    bool GetQGPUEnable() const;

                    /**
                     * 设置<p>qgpu开关</p>
                     * @param _qGPUEnable <p>qgpu开关</p>
                     * 
                     */
                    void SetQGPUEnable(const bool& _qGPUEnable);

                    /**
                     * 判断参数 QGPUEnable 是否已赋值
                     * @return QGPUEnable 是否已赋值
                     * 
                     */
                    bool QGPUEnableHasBeenSet() const;

                    /**
                     * 获取<p>节点池ssh公钥id数组</p>
                     * @return KeyIds <p>节点池ssh公钥id数组</p>
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置<p>节点池ssh公钥id数组</p>
                     * @param _keyIds <p>节点池ssh公钥id数组</p>
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
                     * 获取<p>节点池类型</p>
                     * @return MachineType <p>节点池类型</p>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置<p>节点池类型</p>
                     * @param _machineType <p>节点池类型</p>
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取<p>原生节点池安装节点自动化助手开关</p>
                     * @return AutomationService <p>原生节点池安装节点自动化助手开关</p>
                     * 
                     */
                    bool GetAutomationService() const;

                    /**
                     * 设置<p>原生节点池安装节点自动化助手开关</p>
                     * @param _automationService <p>原生节点池安装节点自动化助手开关</p>
                     * 
                     */
                    void SetAutomationService(const bool& _automationService);

                    /**
                     * 判断参数 AutomationService 是否已赋值
                     * @return AutomationService 是否已赋值
                     * 
                     */
                    bool AutomationServiceHasBeenSet() const;

                    /**
                     * 获取<p>原生节点池密码</p>
                     * @return Password <p>原生节点池密码</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>原生节点池密码</p>
                     * @param _password <p>原生节点池密码</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * <p>节点池伸缩配置</p>
                     */
                    MachineSetScaling m_scaling;
                    bool m_scalingHasBeenSet;

                    /**
                     * <p>子网列表</p>
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * <p>节点计费类型。PREPAID：包年包月；POSTPAID_BY_HOUR：按量计费（默认）；</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>系统盘配置</p>
                     */
                    Disk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>机型列表</p>
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * <p>安全组列表</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>自动升级配置</p>
                     */
                    MachineUpgradeSettings m_upgradeSettings;
                    bool m_upgradeSettingsHasBeenSet;

                    /**
                     * <p>是否开启自愈能力</p>
                     */
                    bool m_autoRepair;
                    bool m_autoRepairHasBeenSet;

                    /**
                     * <p>包年包月机型计费配置</p>
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * <p>节点池 Management 参数设置</p>
                     */
                    ManagementConfig m_management;
                    bool m_managementHasBeenSet;

                    /**
                     * <p>故障自愈规则名称</p>
                     */
                    std::string m_healthCheckPolicyName;
                    bool m_healthCheckPolicyNameHasBeenSet;

                    /**
                     * <p>原生节点池hostName模式串</p>
                     */
                    std::string m_hostNamePattern;
                    bool m_hostNamePatternHasBeenSet;

                    /**
                     * <p>kubelet 自定义参数</p>
                     */
                    std::vector<std::string> m_kubeletArgs;
                    bool m_kubeletArgsHasBeenSet;

                    /**
                     * <p>预定义脚本</p>
                     */
                    LifecycleConfig m_lifecycle;
                    bool m_lifecycleHasBeenSet;

                    /**
                     * <p>运行时根目录</p>
                     */
                    std::string m_runtimeRootDir;
                    bool m_runtimeRootDirHasBeenSet;

                    /**
                     * <p>是否开启弹性伸缩</p>
                     */
                    bool m_enableAutoscaling;
                    bool m_enableAutoscalingHasBeenSet;

                    /**
                     * <p>期望节点数</p>
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * <p>公网带宽设置</p>
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * <p>原生节点池数据盘列表</p>
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * <p>qgpu开关</p>
                     */
                    bool m_qGPUEnable;
                    bool m_qGPUEnableHasBeenSet;

                    /**
                     * <p>节点池ssh公钥id数组</p>
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                    /**
                     * <p>节点池类型</p>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p>原生节点池安装节点自动化助手开关</p>
                     */
                    bool m_automationService;
                    bool m_automationServiceHasBeenSet;

                    /**
                     * <p>原生节点池密码</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_CREATENATIVENODEPOOLPARAM_H_
