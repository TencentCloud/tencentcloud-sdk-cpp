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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERADVANCEDSETTINGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERADVANCEDSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/EtcdOverrideConfig.h>
#include <tencentcloud/tke/v20180525/model/ClusterExtraArgs.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群高级配置
                */
                class ClusterAdvancedSettings : public AbstractModel
                {
                public:
                    ClusterAdvancedSettings();
                    ~ClusterAdvancedSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用集群节点自动扩缩容(创建集群流程不支持开启此功能)
                     * @return AsEnabled 是否启用集群节点自动扩缩容(创建集群流程不支持开启此功能)
                     * 
                     */
                    bool GetAsEnabled() const;

                    /**
                     * 设置是否启用集群节点自动扩缩容(创建集群流程不支持开启此功能)
                     * @param _asEnabled 是否启用集群节点自动扩缩容(创建集群流程不支持开启此功能)
                     * 
                     */
                    void SetAsEnabled(const bool& _asEnabled);

                    /**
                     * 判断参数 AsEnabled 是否已赋值
                     * @return AsEnabled 是否已赋值
                     * 
                     */
                    bool AsEnabledHasBeenSet() const;

                    /**
                     * 获取是否开启审计开关
                     * @return AuditEnabled 是否开启审计开关
                     * 
                     */
                    bool GetAuditEnabled() const;

                    /**
                     * 设置是否开启审计开关
                     * @param _auditEnabled 是否开启审计开关
                     * 
                     */
                    void SetAuditEnabled(const bool& _auditEnabled);

                    /**
                     * 判断参数 AuditEnabled 是否已赋值
                     * @return AuditEnabled 是否已赋值
                     * 
                     */
                    bool AuditEnabledHasBeenSet() const;

                    /**
                     * 获取审计日志上传到的topic
                     * @return AuditLogTopicId 审计日志上传到的topic
                     * 
                     */
                    std::string GetAuditLogTopicId() const;

                    /**
                     * 设置审计日志上传到的topic
                     * @param _auditLogTopicId 审计日志上传到的topic
                     * 
                     */
                    void SetAuditLogTopicId(const std::string& _auditLogTopicId);

                    /**
                     * 判断参数 AuditLogTopicId 是否已赋值
                     * @return AuditLogTopicId 是否已赋值
                     * 
                     */
                    bool AuditLogTopicIdHasBeenSet() const;

                    /**
                     * 获取审计日志上传到的logset日志集
                     * @return AuditLogsetId 审计日志上传到的logset日志集
                     * 
                     */
                    std::string GetAuditLogsetId() const;

                    /**
                     * 设置审计日志上传到的logset日志集
                     * @param _auditLogsetId 审计日志上传到的logset日志集
                     * 
                     */
                    void SetAuditLogsetId(const std::string& _auditLogsetId);

                    /**
                     * 判断参数 AuditLogsetId 是否已赋值
                     * @return AuditLogsetId 是否已赋值
                     * 
                     */
                    bool AuditLogsetIdHasBeenSet() const;

                    /**
                     * 获取自定义模式下的基础pod数量
                     * @return BasePodNumber 自定义模式下的基础pod数量
                     * 
                     */
                    int64_t GetBasePodNumber() const;

                    /**
                     * 设置自定义模式下的基础pod数量
                     * @param _basePodNumber 自定义模式下的基础pod数量
                     * 
                     */
                    void SetBasePodNumber(const int64_t& _basePodNumber);

                    /**
                     * 判断参数 BasePodNumber 是否已赋值
                     * @return BasePodNumber 是否已赋值
                     * 
                     */
                    bool BasePodNumberHasBeenSet() const;

                    /**
                     * 获取启用 CiliumMode 的模式，空值表示不启用，“clusterIP” 表示启用 Cilium 支持 ClusterIP
                     * @return CiliumMode 启用 CiliumMode 的模式，空值表示不启用，“clusterIP” 表示启用 Cilium 支持 ClusterIP
                     * 
                     */
                    std::string GetCiliumMode() const;

                    /**
                     * 设置启用 CiliumMode 的模式，空值表示不启用，“clusterIP” 表示启用 Cilium 支持 ClusterIP
                     * @param _ciliumMode 启用 CiliumMode 的模式，空值表示不启用，“clusterIP” 表示启用 Cilium 支持 ClusterIP
                     * 
                     */
                    void SetCiliumMode(const std::string& _ciliumMode);

                    /**
                     * 判断参数 CiliumMode 是否已赋值
                     * @return CiliumMode 是否已赋值
                     * 
                     */
                    bool CiliumModeHasBeenSet() const;

                    /**
                     * 获取集群使用的runtime类型，包括"docker"和"containerd"两种类型，默认为"docker"
                     * @return ContainerRuntime 集群使用的runtime类型，包括"docker"和"containerd"两种类型，默认为"docker"
                     * 
                     */
                    std::string GetContainerRuntime() const;

                    /**
                     * 设置集群使用的runtime类型，包括"docker"和"containerd"两种类型，默认为"docker"
                     * @param _containerRuntime 集群使用的runtime类型，包括"docker"和"containerd"两种类型，默认为"docker"
                     * 
                     */
                    void SetContainerRuntime(const std::string& _containerRuntime);

                    /**
                     * 判断参数 ContainerRuntime 是否已赋值
                     * @return ContainerRuntime 是否已赋值
                     * 
                     */
                    bool ContainerRuntimeHasBeenSet() const;

                    /**
                     * 获取是否启用集群删除保护
                     * @return DeletionProtection 是否启用集群删除保护
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置是否启用集群删除保护
                     * @param _deletionProtection 是否启用集群删除保护
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取是否开节点podCIDR大小的自定义模式
                     * @return EnableCustomizedPodCIDR 是否开节点podCIDR大小的自定义模式
                     * 
                     */
                    bool GetEnableCustomizedPodCIDR() const;

                    /**
                     * 设置是否开节点podCIDR大小的自定义模式
                     * @param _enableCustomizedPodCIDR 是否开节点podCIDR大小的自定义模式
                     * 
                     */
                    void SetEnableCustomizedPodCIDR(const bool& _enableCustomizedPodCIDR);

                    /**
                     * 判断参数 EnableCustomizedPodCIDR 是否已赋值
                     * @return EnableCustomizedPodCIDR 是否已赋值
                     * 
                     */
                    bool EnableCustomizedPodCIDRHasBeenSet() const;

                    /**
                     * 获取元数据拆分存储Etcd配置
                     * @return EtcdOverrideConfigs 元数据拆分存储Etcd配置
                     * 
                     */
                    std::vector<EtcdOverrideConfig> GetEtcdOverrideConfigs() const;

                    /**
                     * 设置元数据拆分存储Etcd配置
                     * @param _etcdOverrideConfigs 元数据拆分存储Etcd配置
                     * 
                     */
                    void SetEtcdOverrideConfigs(const std::vector<EtcdOverrideConfig>& _etcdOverrideConfigs);

                    /**
                     * 判断参数 EtcdOverrideConfigs 是否已赋值
                     * @return EtcdOverrideConfigs 是否已赋值
                     * 
                     */
                    bool EtcdOverrideConfigsHasBeenSet() const;

                    /**
                     * 获取集群自定义参数
                     * @return ExtraArgs 集群自定义参数
                     * 
                     */
                    ClusterExtraArgs GetExtraArgs() const;

                    /**
                     * 设置集群自定义参数
                     * @param _extraArgs 集群自定义参数
                     * 
                     */
                    void SetExtraArgs(const ClusterExtraArgs& _extraArgs);

                    /**
                     * 判断参数 ExtraArgs 是否已赋值
                     * @return ExtraArgs 是否已赋值
                     * 
                     */
                    bool ExtraArgsHasBeenSet() const;

                    /**
                     * 获取是否启用IPVS
                     * @return IPVS 是否启用IPVS
                     * 
                     */
                    bool GetIPVS() const;

                    /**
                     * 设置是否启用IPVS
                     * @param _iPVS 是否启用IPVS
                     * 
                     */
                    void SetIPVS(const bool& _iPVS);

                    /**
                     * 判断参数 IPVS 是否已赋值
                     * @return IPVS 是否已赋值
                     * 
                     */
                    bool IPVSHasBeenSet() const;

                    /**
                     * 获取集群VPC-CNI模式下是否是双栈集群，默认false，表明非双栈集群。
                     * @return IsDualStack 集群VPC-CNI模式下是否是双栈集群，默认false，表明非双栈集群。
                     * 
                     */
                    bool GetIsDualStack() const;

                    /**
                     * 设置集群VPC-CNI模式下是否是双栈集群，默认false，表明非双栈集群。
                     * @param _isDualStack 集群VPC-CNI模式下是否是双栈集群，默认false，表明非双栈集群。
                     * 
                     */
                    void SetIsDualStack(const bool& _isDualStack);

                    /**
                     * 判断参数 IsDualStack 是否已赋值
                     * @return IsDualStack 是否已赋值
                     * 
                     */
                    bool IsDualStackHasBeenSet() const;

                    /**
                     * 获取集群VPC-CNI模式是否为非固定IP，默认: FALSE 固定IP。
                     * @return IsNonStaticIpMode 集群VPC-CNI模式是否为非固定IP，默认: FALSE 固定IP。
                     * 
                     */
                    bool GetIsNonStaticIpMode() const;

                    /**
                     * 设置集群VPC-CNI模式是否为非固定IP，默认: FALSE 固定IP。
                     * @param _isNonStaticIpMode 集群VPC-CNI模式是否为非固定IP，默认: FALSE 固定IP。
                     * 
                     */
                    void SetIsNonStaticIpMode(const bool& _isNonStaticIpMode);

                    /**
                     * 判断参数 IsNonStaticIpMode 是否已赋值
                     * @return IsNonStaticIpMode 是否已赋值
                     * 
                     */
                    bool IsNonStaticIpModeHasBeenSet() const;

                    /**
                     * 获取集群的网络代理模型，目前tke集群支持的网络代理模式有三种：iptables,ipvs,ipvs-bpf，此参数仅在使用ipvs-bpf模式时使用，三种网络模式的参数设置关系如下：
iptables模式：IPVS和KubeProxyMode都不设置
ipvs模式: 设置IPVS为true, KubeProxyMode不设置
ipvs-bpf模式: 设置KubeProxyMode为kube-proxy-bpf
使用ipvs-bpf的网络模式需要满足以下条件：
1. 集群版本必须为1.14及以上；
2. 系统镜像必须是: Tencent Linux 2.4；
                     * @return KubeProxyMode 集群的网络代理模型，目前tke集群支持的网络代理模式有三种：iptables,ipvs,ipvs-bpf，此参数仅在使用ipvs-bpf模式时使用，三种网络模式的参数设置关系如下：
iptables模式：IPVS和KubeProxyMode都不设置
ipvs模式: 设置IPVS为true, KubeProxyMode不设置
ipvs-bpf模式: 设置KubeProxyMode为kube-proxy-bpf
使用ipvs-bpf的网络模式需要满足以下条件：
1. 集群版本必须为1.14及以上；
2. 系统镜像必须是: Tencent Linux 2.4；
                     * 
                     */
                    std::string GetKubeProxyMode() const;

                    /**
                     * 设置集群的网络代理模型，目前tke集群支持的网络代理模式有三种：iptables,ipvs,ipvs-bpf，此参数仅在使用ipvs-bpf模式时使用，三种网络模式的参数设置关系如下：
iptables模式：IPVS和KubeProxyMode都不设置
ipvs模式: 设置IPVS为true, KubeProxyMode不设置
ipvs-bpf模式: 设置KubeProxyMode为kube-proxy-bpf
使用ipvs-bpf的网络模式需要满足以下条件：
1. 集群版本必须为1.14及以上；
2. 系统镜像必须是: Tencent Linux 2.4；
                     * @param _kubeProxyMode 集群的网络代理模型，目前tke集群支持的网络代理模式有三种：iptables,ipvs,ipvs-bpf，此参数仅在使用ipvs-bpf模式时使用，三种网络模式的参数设置关系如下：
iptables模式：IPVS和KubeProxyMode都不设置
ipvs模式: 设置IPVS为true, KubeProxyMode不设置
ipvs-bpf模式: 设置KubeProxyMode为kube-proxy-bpf
使用ipvs-bpf的网络模式需要满足以下条件：
1. 集群版本必须为1.14及以上；
2. 系统镜像必须是: Tencent Linux 2.4；
                     * 
                     */
                    void SetKubeProxyMode(const std::string& _kubeProxyMode);

                    /**
                     * 判断参数 KubeProxyMode 是否已赋值
                     * @return KubeProxyMode 是否已赋值
                     * 
                     */
                    bool KubeProxyModeHasBeenSet() const;

                    /**
                     * 获取集群网络类型（包括GR(全局路由)和VPC-CNI两种模式，默认为GR。
                     * @return NetworkType 集群网络类型（包括GR(全局路由)和VPC-CNI两种模式，默认为GR。
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置集群网络类型（包括GR(全局路由)和VPC-CNI两种模式，默认为GR。
                     * @param _networkType 集群网络类型（包括GR(全局路由)和VPC-CNI两种模式，默认为GR。
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip。如果开启了hostname模式，创建节点时需要设置HostName参数，并且InstanceName需要和HostName一致）
                     * @return NodeNameType 集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip。如果开启了hostname模式，创建节点时需要设置HostName参数，并且InstanceName需要和HostName一致）
                     * 
                     */
                    std::string GetNodeNameType() const;

                    /**
                     * 设置集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip。如果开启了hostname模式，创建节点时需要设置HostName参数，并且InstanceName需要和HostName一致）
                     * @param _nodeNameType 集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip。如果开启了hostname模式，创建节点时需要设置HostName参数，并且InstanceName需要和HostName一致）
                     * 
                     */
                    void SetNodeNameType(const std::string& _nodeNameType);

                    /**
                     * 判断参数 NodeNameType 是否已赋值
                     * @return NodeNameType 是否已赋值
                     * 
                     */
                    bool NodeNameTypeHasBeenSet() const;

                    /**
                     * 获取是否开启QGPU共享
                     * @return QGPUShareEnable 是否开启QGPU共享
                     * 
                     */
                    bool GetQGPUShareEnable() const;

                    /**
                     * 设置是否开启QGPU共享
                     * @param _qGPUShareEnable 是否开启QGPU共享
                     * 
                     */
                    void SetQGPUShareEnable(const bool& _qGPUShareEnable);

                    /**
                     * 判断参数 QGPUShareEnable 是否已赋值
                     * @return QGPUShareEnable 是否已赋值
                     * 
                     */
                    bool QGPUShareEnableHasBeenSet() const;

                    /**
                     * 获取运行时版本
                     * @return RuntimeVersion 运行时版本
                     * 
                     */
                    std::string GetRuntimeVersion() const;

                    /**
                     * 设置运行时版本
                     * @param _runtimeVersion 运行时版本
                     * 
                     */
                    void SetRuntimeVersion(const std::string& _runtimeVersion);

                    /**
                     * 判断参数 RuntimeVersion 是否已赋值
                     * @return RuntimeVersion 是否已赋值
                     * 
                     */
                    bool RuntimeVersionHasBeenSet() const;

                    /**
                     * 获取区分共享网卡多IP模式和独立网卡模式，共享网卡多 IP 模式填写"tke-route-eni"，独立网卡模式填写"tke-direct-eni"，默认为共享网卡模式
                     * @return VpcCniType 区分共享网卡多IP模式和独立网卡模式，共享网卡多 IP 模式填写"tke-route-eni"，独立网卡模式填写"tke-direct-eni"，默认为共享网卡模式
                     * 
                     */
                    std::string GetVpcCniType() const;

                    /**
                     * 设置区分共享网卡多IP模式和独立网卡模式，共享网卡多 IP 模式填写"tke-route-eni"，独立网卡模式填写"tke-direct-eni"，默认为共享网卡模式
                     * @param _vpcCniType 区分共享网卡多IP模式和独立网卡模式，共享网卡多 IP 模式填写"tke-route-eni"，独立网卡模式填写"tke-direct-eni"，默认为共享网卡模式
                     * 
                     */
                    void SetVpcCniType(const std::string& _vpcCniType);

                    /**
                     * 判断参数 VpcCniType 是否已赋值
                     * @return VpcCniType 是否已赋值
                     * 
                     */
                    bool VpcCniTypeHasBeenSet() const;

                private:

                    /**
                     * 是否启用集群节点自动扩缩容(创建集群流程不支持开启此功能)
                     */
                    bool m_asEnabled;
                    bool m_asEnabledHasBeenSet;

                    /**
                     * 是否开启审计开关
                     */
                    bool m_auditEnabled;
                    bool m_auditEnabledHasBeenSet;

                    /**
                     * 审计日志上传到的topic
                     */
                    std::string m_auditLogTopicId;
                    bool m_auditLogTopicIdHasBeenSet;

                    /**
                     * 审计日志上传到的logset日志集
                     */
                    std::string m_auditLogsetId;
                    bool m_auditLogsetIdHasBeenSet;

                    /**
                     * 自定义模式下的基础pod数量
                     */
                    int64_t m_basePodNumber;
                    bool m_basePodNumberHasBeenSet;

                    /**
                     * 启用 CiliumMode 的模式，空值表示不启用，“clusterIP” 表示启用 Cilium 支持 ClusterIP
                     */
                    std::string m_ciliumMode;
                    bool m_ciliumModeHasBeenSet;

                    /**
                     * 集群使用的runtime类型，包括"docker"和"containerd"两种类型，默认为"docker"
                     */
                    std::string m_containerRuntime;
                    bool m_containerRuntimeHasBeenSet;

                    /**
                     * 是否启用集群删除保护
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * 是否开节点podCIDR大小的自定义模式
                     */
                    bool m_enableCustomizedPodCIDR;
                    bool m_enableCustomizedPodCIDRHasBeenSet;

                    /**
                     * 元数据拆分存储Etcd配置
                     */
                    std::vector<EtcdOverrideConfig> m_etcdOverrideConfigs;
                    bool m_etcdOverrideConfigsHasBeenSet;

                    /**
                     * 集群自定义参数
                     */
                    ClusterExtraArgs m_extraArgs;
                    bool m_extraArgsHasBeenSet;

                    /**
                     * 是否启用IPVS
                     */
                    bool m_iPVS;
                    bool m_iPVSHasBeenSet;

                    /**
                     * 集群VPC-CNI模式下是否是双栈集群，默认false，表明非双栈集群。
                     */
                    bool m_isDualStack;
                    bool m_isDualStackHasBeenSet;

                    /**
                     * 集群VPC-CNI模式是否为非固定IP，默认: FALSE 固定IP。
                     */
                    bool m_isNonStaticIpMode;
                    bool m_isNonStaticIpModeHasBeenSet;

                    /**
                     * 集群的网络代理模型，目前tke集群支持的网络代理模式有三种：iptables,ipvs,ipvs-bpf，此参数仅在使用ipvs-bpf模式时使用，三种网络模式的参数设置关系如下：
iptables模式：IPVS和KubeProxyMode都不设置
ipvs模式: 设置IPVS为true, KubeProxyMode不设置
ipvs-bpf模式: 设置KubeProxyMode为kube-proxy-bpf
使用ipvs-bpf的网络模式需要满足以下条件：
1. 集群版本必须为1.14及以上；
2. 系统镜像必须是: Tencent Linux 2.4；
                     */
                    std::string m_kubeProxyMode;
                    bool m_kubeProxyModeHasBeenSet;

                    /**
                     * 集群网络类型（包括GR(全局路由)和VPC-CNI两种模式，默认为GR。
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip。如果开启了hostname模式，创建节点时需要设置HostName参数，并且InstanceName需要和HostName一致）
                     */
                    std::string m_nodeNameType;
                    bool m_nodeNameTypeHasBeenSet;

                    /**
                     * 是否开启QGPU共享
                     */
                    bool m_qGPUShareEnable;
                    bool m_qGPUShareEnableHasBeenSet;

                    /**
                     * 运行时版本
                     */
                    std::string m_runtimeVersion;
                    bool m_runtimeVersionHasBeenSet;

                    /**
                     * 区分共享网卡多IP模式和独立网卡模式，共享网卡多 IP 模式填写"tke-route-eni"，独立网卡模式填写"tke-direct-eni"，默认为共享网卡模式
                     */
                    std::string m_vpcCniType;
                    bool m_vpcCniTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERADVANCEDSETTINGS_H_
