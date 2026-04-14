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
#include <tencentcloud/tke/v20180525/model/SecurityModeConfig.h>


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
                     * 获取<p>是否启用集群节点自动扩缩容(创建集群流程不支持开启此功能)</p>
                     * @return AsEnabled <p>是否启用集群节点自动扩缩容(创建集群流程不支持开启此功能)</p>
                     * 
                     */
                    bool GetAsEnabled() const;

                    /**
                     * 设置<p>是否启用集群节点自动扩缩容(创建集群流程不支持开启此功能)</p>
                     * @param _asEnabled <p>是否启用集群节点自动扩缩容(创建集群流程不支持开启此功能)</p>
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
                     * 获取<p>是否开启审计开关</p>
                     * @return AuditEnabled <p>是否开启审计开关</p>
                     * 
                     */
                    bool GetAuditEnabled() const;

                    /**
                     * 设置<p>是否开启审计开关</p>
                     * @param _auditEnabled <p>是否开启审计开关</p>
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
                     * 获取<p>审计日志上传到的topic</p>
                     * @return AuditLogTopicId <p>审计日志上传到的topic</p>
                     * 
                     */
                    std::string GetAuditLogTopicId() const;

                    /**
                     * 设置<p>审计日志上传到的topic</p>
                     * @param _auditLogTopicId <p>审计日志上传到的topic</p>
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
                     * 获取<p>审计日志上传到的logset日志集</p>
                     * @return AuditLogsetId <p>审计日志上传到的logset日志集</p>
                     * 
                     */
                    std::string GetAuditLogsetId() const;

                    /**
                     * 设置<p>审计日志上传到的logset日志集</p>
                     * @param _auditLogsetId <p>审计日志上传到的logset日志集</p>
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
                     * 获取<p>自定义模式下的基础pod数量</p>
                     * @return BasePodNumber <p>自定义模式下的基础pod数量</p>
                     * 
                     */
                    int64_t GetBasePodNumber() const;

                    /**
                     * 设置<p>自定义模式下的基础pod数量</p>
                     * @param _basePodNumber <p>自定义模式下的基础pod数量</p>
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
                     * 获取<p>启用 CiliumMode 的模式，空值表示不启用，“clusterIP” 表示启用 Cilium 支持 ClusterIP</p>
                     * @return CiliumMode <p>启用 CiliumMode 的模式，空值表示不启用，“clusterIP” 表示启用 Cilium 支持 ClusterIP</p>
                     * 
                     */
                    std::string GetCiliumMode() const;

                    /**
                     * 设置<p>启用 CiliumMode 的模式，空值表示不启用，“clusterIP” 表示启用 Cilium 支持 ClusterIP</p>
                     * @param _ciliumMode <p>启用 CiliumMode 的模式，空值表示不启用，“clusterIP” 表示启用 Cilium 支持 ClusterIP</p>
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
                     * 获取<p>集群使用的runtime类型，包括&quot;docker&quot;和&quot;containerd&quot;两种类型，默认为&quot;docker&quot;</p>
                     * @return ContainerRuntime <p>集群使用的runtime类型，包括&quot;docker&quot;和&quot;containerd&quot;两种类型，默认为&quot;docker&quot;</p>
                     * 
                     */
                    std::string GetContainerRuntime() const;

                    /**
                     * 设置<p>集群使用的runtime类型，包括&quot;docker&quot;和&quot;containerd&quot;两种类型，默认为&quot;docker&quot;</p>
                     * @param _containerRuntime <p>集群使用的runtime类型，包括&quot;docker&quot;和&quot;containerd&quot;两种类型，默认为&quot;docker&quot;</p>
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
                     * 获取<p>是否启用 DataPlaneV2（cilium替代kube-proxy）</p>
                     * @return DataPlaneV2 <p>是否启用 DataPlaneV2（cilium替代kube-proxy）</p>
                     * 
                     */
                    bool GetDataPlaneV2() const;

                    /**
                     * 设置<p>是否启用 DataPlaneV2（cilium替代kube-proxy）</p>
                     * @param _dataPlaneV2 <p>是否启用 DataPlaneV2（cilium替代kube-proxy）</p>
                     * 
                     */
                    void SetDataPlaneV2(const bool& _dataPlaneV2);

                    /**
                     * 判断参数 DataPlaneV2 是否已赋值
                     * @return DataPlaneV2 是否已赋值
                     * 
                     */
                    bool DataPlaneV2HasBeenSet() const;

                    /**
                     * 获取<p>是否启用集群删除保护</p>
                     * @return DeletionProtection <p>是否启用集群删除保护</p>
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置<p>是否启用集群删除保护</p>
                     * @param _deletionProtection <p>是否启用集群删除保护</p>
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
                     * 获取<p>是否开节点podCIDR大小的自定义模式</p>
                     * @return EnableCustomizedPodCIDR <p>是否开节点podCIDR大小的自定义模式</p>
                     * 
                     */
                    bool GetEnableCustomizedPodCIDR() const;

                    /**
                     * 设置<p>是否开节点podCIDR大小的自定义模式</p>
                     * @param _enableCustomizedPodCIDR <p>是否开节点podCIDR大小的自定义模式</p>
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
                     * 获取<p>元数据拆分存储Etcd配置</p>
                     * @return EtcdOverrideConfigs <p>元数据拆分存储Etcd配置</p>
                     * 
                     */
                    std::vector<EtcdOverrideConfig> GetEtcdOverrideConfigs() const;

                    /**
                     * 设置<p>元数据拆分存储Etcd配置</p>
                     * @param _etcdOverrideConfigs <p>元数据拆分存储Etcd配置</p>
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
                     * 获取<p>集群自定义参数</p>
                     * @return ExtraArgs <p>集群自定义参数</p>
                     * 
                     */
                    ClusterExtraArgs GetExtraArgs() const;

                    /**
                     * 设置<p>集群自定义参数</p>
                     * @param _extraArgs <p>集群自定义参数</p>
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
                     * 获取<p>是否启用IPVS</p>
                     * @return IPVS <p>是否启用IPVS</p>
                     * 
                     */
                    bool GetIPVS() const;

                    /**
                     * 设置<p>是否启用IPVS</p>
                     * @param _iPVS <p>是否启用IPVS</p>
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
                     * 获取<p>集群VPC-CNI模式下是否是双栈集群，默认false，表明非双栈集群。</p>
                     * @return IsDualStack <p>集群VPC-CNI模式下是否是双栈集群，默认false，表明非双栈集群。</p>
                     * 
                     */
                    bool GetIsDualStack() const;

                    /**
                     * 设置<p>集群VPC-CNI模式下是否是双栈集群，默认false，表明非双栈集群。</p>
                     * @param _isDualStack <p>集群VPC-CNI模式下是否是双栈集群，默认false，表明非双栈集群。</p>
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
                     * 获取<p>集群VPC-CNI模式是否为非固定IP，默认: FALSE 固定IP。</p>
                     * @return IsNonStaticIpMode <p>集群VPC-CNI模式是否为非固定IP，默认: FALSE 固定IP。</p>
                     * 
                     */
                    bool GetIsNonStaticIpMode() const;

                    /**
                     * 设置<p>集群VPC-CNI模式是否为非固定IP，默认: FALSE 固定IP。</p>
                     * @param _isNonStaticIpMode <p>集群VPC-CNI模式是否为非固定IP，默认: FALSE 固定IP。</p>
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
                     * 获取<p>集群的网络代理模型，目前tke集群支持的网络代理模式有三种：iptables,ipvs,ipvs-bpf，此参数仅在使用ipvs-bpf模式时使用，三种网络模式的参数设置关系如下：<br>iptables模式：IPVS和KubeProxyMode都不设置<br>ipvs模式: 设置IPVS为true, KubeProxyMode不设置<br>ipvs-bpf模式: 设置KubeProxyMode为kube-proxy-bpf<br>使用ipvs-bpf的网络模式需要满足以下条件：</p><ol><li>集群版本必须为1.14及以上；</li><li>系统镜像必须是: Tencent Linux 2.4；</li></ol>
                     * @return KubeProxyMode <p>集群的网络代理模型，目前tke集群支持的网络代理模式有三种：iptables,ipvs,ipvs-bpf，此参数仅在使用ipvs-bpf模式时使用，三种网络模式的参数设置关系如下：<br>iptables模式：IPVS和KubeProxyMode都不设置<br>ipvs模式: 设置IPVS为true, KubeProxyMode不设置<br>ipvs-bpf模式: 设置KubeProxyMode为kube-proxy-bpf<br>使用ipvs-bpf的网络模式需要满足以下条件：</p><ol><li>集群版本必须为1.14及以上；</li><li>系统镜像必须是: Tencent Linux 2.4；</li></ol>
                     * 
                     */
                    std::string GetKubeProxyMode() const;

                    /**
                     * 设置<p>集群的网络代理模型，目前tke集群支持的网络代理模式有三种：iptables,ipvs,ipvs-bpf，此参数仅在使用ipvs-bpf模式时使用，三种网络模式的参数设置关系如下：<br>iptables模式：IPVS和KubeProxyMode都不设置<br>ipvs模式: 设置IPVS为true, KubeProxyMode不设置<br>ipvs-bpf模式: 设置KubeProxyMode为kube-proxy-bpf<br>使用ipvs-bpf的网络模式需要满足以下条件：</p><ol><li>集群版本必须为1.14及以上；</li><li>系统镜像必须是: Tencent Linux 2.4；</li></ol>
                     * @param _kubeProxyMode <p>集群的网络代理模型，目前tke集群支持的网络代理模式有三种：iptables,ipvs,ipvs-bpf，此参数仅在使用ipvs-bpf模式时使用，三种网络模式的参数设置关系如下：<br>iptables模式：IPVS和KubeProxyMode都不设置<br>ipvs模式: 设置IPVS为true, KubeProxyMode不设置<br>ipvs-bpf模式: 设置KubeProxyMode为kube-proxy-bpf<br>使用ipvs-bpf的网络模式需要满足以下条件：</p><ol><li>集群版本必须为1.14及以上；</li><li>系统镜像必须是: Tencent Linux 2.4；</li></ol>
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
                     * 获取<p>集群网络类型，默认为GR。</p><ul><li>GR: 全局路由</li><li>VPC-CNI: VPC-CNI模式</li><li>CiliumOverlay: CiliumOverlay模式</li></ul>
                     * @return NetworkType <p>集群网络类型，默认为GR。</p><ul><li>GR: 全局路由</li><li>VPC-CNI: VPC-CNI模式</li><li>CiliumOverlay: CiliumOverlay模式</li></ul>
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置<p>集群网络类型，默认为GR。</p><ul><li>GR: 全局路由</li><li>VPC-CNI: VPC-CNI模式</li><li>CiliumOverlay: CiliumOverlay模式</li></ul>
                     * @param _networkType <p>集群网络类型，默认为GR。</p><ul><li>GR: 全局路由</li><li>VPC-CNI: VPC-CNI模式</li><li>CiliumOverlay: CiliumOverlay模式</li></ul>
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
                     * 获取<p>集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip。如果开启了hostname模式，创建节点时需要设置HostName参数，并且InstanceName需要和HostName一致）</p>
                     * @return NodeNameType <p>集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip。如果开启了hostname模式，创建节点时需要设置HostName参数，并且InstanceName需要和HostName一致）</p>
                     * 
                     */
                    std::string GetNodeNameType() const;

                    /**
                     * 设置<p>集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip。如果开启了hostname模式，创建节点时需要设置HostName参数，并且InstanceName需要和HostName一致）</p>
                     * @param _nodeNameType <p>集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip。如果开启了hostname模式，创建节点时需要设置HostName参数，并且InstanceName需要和HostName一致）</p>
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
                     * 获取<p>是否开启QGPU共享</p>
                     * @return QGPUShareEnable <p>是否开启QGPU共享</p>
                     * 
                     */
                    bool GetQGPUShareEnable() const;

                    /**
                     * 设置<p>是否开启QGPU共享</p>
                     * @param _qGPUShareEnable <p>是否开启QGPU共享</p>
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
                     * 获取<p>运行时版本</p>
                     * @return RuntimeVersion <p>运行时版本</p>
                     * 
                     */
                    std::string GetRuntimeVersion() const;

                    /**
                     * 设置<p>运行时版本</p>
                     * @param _runtimeVersion <p>运行时版本</p>
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
                     * 获取<p>区分共享网卡多IP模式和独立网卡模式，共享网卡多 IP 模式填写&quot;tke-route-eni&quot;，独立网卡模式填写&quot;tke-direct-eni&quot;，默认为共享网卡模式</p>
                     * @return VpcCniType <p>区分共享网卡多IP模式和独立网卡模式，共享网卡多 IP 模式填写&quot;tke-route-eni&quot;，独立网卡模式填写&quot;tke-direct-eni&quot;，默认为共享网卡模式</p>
                     * 
                     */
                    std::string GetVpcCniType() const;

                    /**
                     * 设置<p>区分共享网卡多IP模式和独立网卡模式，共享网卡多 IP 模式填写&quot;tke-route-eni&quot;，独立网卡模式填写&quot;tke-direct-eni&quot;，默认为共享网卡模式</p>
                     * @param _vpcCniType <p>区分共享网卡多IP模式和独立网卡模式，共享网卡多 IP 模式填写&quot;tke-route-eni&quot;，独立网卡模式填写&quot;tke-direct-eni&quot;，默认为共享网卡模式</p>
                     * 
                     */
                    void SetVpcCniType(const std::string& _vpcCniType);

                    /**
                     * 判断参数 VpcCniType 是否已赋值
                     * @return VpcCniType 是否已赋值
                     * 
                     */
                    bool VpcCniTypeHasBeenSet() const;

                    /**
                     * 获取<p>集群是否启用高可用模式。用于指导跨可用区资源打散等高可用策略的执行，默认为true</p>
                     * @return IsHighAvailability <p>集群是否启用高可用模式。用于指导跨可用区资源打散等高可用策略的执行，默认为true</p>
                     * 
                     */
                    bool GetIsHighAvailability() const;

                    /**
                     * 设置<p>集群是否启用高可用模式。用于指导跨可用区资源打散等高可用策略的执行，默认为true</p>
                     * @param _isHighAvailability <p>集群是否启用高可用模式。用于指导跨可用区资源打散等高可用策略的执行，默认为true</p>
                     * 
                     */
                    void SetIsHighAvailability(const bool& _isHighAvailability);

                    /**
                     * 判断参数 IsHighAvailability 是否已赋值
                     * @return IsHighAvailability 是否已赋值
                     * 
                     */
                    bool IsHighAvailabilityHasBeenSet() const;

                    /**
                     * 获取<p>集群安全模式配置</p>
                     * @return SecurityModeConfig <p>集群安全模式配置</p>
                     * 
                     */
                    SecurityModeConfig GetSecurityModeConfig() const;

                    /**
                     * 设置<p>集群安全模式配置</p>
                     * @param _securityModeConfig <p>集群安全模式配置</p>
                     * 
                     */
                    void SetSecurityModeConfig(const SecurityModeConfig& _securityModeConfig);

                    /**
                     * 判断参数 SecurityModeConfig 是否已赋值
                     * @return SecurityModeConfig 是否已赋值
                     * 
                     */
                    bool SecurityModeConfigHasBeenSet() const;

                private:

                    /**
                     * <p>是否启用集群节点自动扩缩容(创建集群流程不支持开启此功能)</p>
                     */
                    bool m_asEnabled;
                    bool m_asEnabledHasBeenSet;

                    /**
                     * <p>是否开启审计开关</p>
                     */
                    bool m_auditEnabled;
                    bool m_auditEnabledHasBeenSet;

                    /**
                     * <p>审计日志上传到的topic</p>
                     */
                    std::string m_auditLogTopicId;
                    bool m_auditLogTopicIdHasBeenSet;

                    /**
                     * <p>审计日志上传到的logset日志集</p>
                     */
                    std::string m_auditLogsetId;
                    bool m_auditLogsetIdHasBeenSet;

                    /**
                     * <p>自定义模式下的基础pod数量</p>
                     */
                    int64_t m_basePodNumber;
                    bool m_basePodNumberHasBeenSet;

                    /**
                     * <p>启用 CiliumMode 的模式，空值表示不启用，“clusterIP” 表示启用 Cilium 支持 ClusterIP</p>
                     */
                    std::string m_ciliumMode;
                    bool m_ciliumModeHasBeenSet;

                    /**
                     * <p>集群使用的runtime类型，包括&quot;docker&quot;和&quot;containerd&quot;两种类型，默认为&quot;docker&quot;</p>
                     */
                    std::string m_containerRuntime;
                    bool m_containerRuntimeHasBeenSet;

                    /**
                     * <p>是否启用 DataPlaneV2（cilium替代kube-proxy）</p>
                     */
                    bool m_dataPlaneV2;
                    bool m_dataPlaneV2HasBeenSet;

                    /**
                     * <p>是否启用集群删除保护</p>
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * <p>是否开节点podCIDR大小的自定义模式</p>
                     */
                    bool m_enableCustomizedPodCIDR;
                    bool m_enableCustomizedPodCIDRHasBeenSet;

                    /**
                     * <p>元数据拆分存储Etcd配置</p>
                     */
                    std::vector<EtcdOverrideConfig> m_etcdOverrideConfigs;
                    bool m_etcdOverrideConfigsHasBeenSet;

                    /**
                     * <p>集群自定义参数</p>
                     */
                    ClusterExtraArgs m_extraArgs;
                    bool m_extraArgsHasBeenSet;

                    /**
                     * <p>是否启用IPVS</p>
                     */
                    bool m_iPVS;
                    bool m_iPVSHasBeenSet;

                    /**
                     * <p>集群VPC-CNI模式下是否是双栈集群，默认false，表明非双栈集群。</p>
                     */
                    bool m_isDualStack;
                    bool m_isDualStackHasBeenSet;

                    /**
                     * <p>集群VPC-CNI模式是否为非固定IP，默认: FALSE 固定IP。</p>
                     */
                    bool m_isNonStaticIpMode;
                    bool m_isNonStaticIpModeHasBeenSet;

                    /**
                     * <p>集群的网络代理模型，目前tke集群支持的网络代理模式有三种：iptables,ipvs,ipvs-bpf，此参数仅在使用ipvs-bpf模式时使用，三种网络模式的参数设置关系如下：<br>iptables模式：IPVS和KubeProxyMode都不设置<br>ipvs模式: 设置IPVS为true, KubeProxyMode不设置<br>ipvs-bpf模式: 设置KubeProxyMode为kube-proxy-bpf<br>使用ipvs-bpf的网络模式需要满足以下条件：</p><ol><li>集群版本必须为1.14及以上；</li><li>系统镜像必须是: Tencent Linux 2.4；</li></ol>
                     */
                    std::string m_kubeProxyMode;
                    bool m_kubeProxyModeHasBeenSet;

                    /**
                     * <p>集群网络类型，默认为GR。</p><ul><li>GR: 全局路由</li><li>VPC-CNI: VPC-CNI模式</li><li>CiliumOverlay: CiliumOverlay模式</li></ul>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * <p>集群中节点NodeName类型（包括 hostname,lan-ip两种形式，默认为lan-ip。如果开启了hostname模式，创建节点时需要设置HostName参数，并且InstanceName需要和HostName一致）</p>
                     */
                    std::string m_nodeNameType;
                    bool m_nodeNameTypeHasBeenSet;

                    /**
                     * <p>是否开启QGPU共享</p>
                     */
                    bool m_qGPUShareEnable;
                    bool m_qGPUShareEnableHasBeenSet;

                    /**
                     * <p>运行时版本</p>
                     */
                    std::string m_runtimeVersion;
                    bool m_runtimeVersionHasBeenSet;

                    /**
                     * <p>区分共享网卡多IP模式和独立网卡模式，共享网卡多 IP 模式填写&quot;tke-route-eni&quot;，独立网卡模式填写&quot;tke-direct-eni&quot;，默认为共享网卡模式</p>
                     */
                    std::string m_vpcCniType;
                    bool m_vpcCniTypeHasBeenSet;

                    /**
                     * <p>集群是否启用高可用模式。用于指导跨可用区资源打散等高可用策略的执行，默认为true</p>
                     */
                    bool m_isHighAvailability;
                    bool m_isHighAvailabilityHasBeenSet;

                    /**
                     * <p>集群安全模式配置</p>
                     */
                    SecurityModeConfig m_securityModeConfig;
                    bool m_securityModeConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERADVANCEDSETTINGS_H_
