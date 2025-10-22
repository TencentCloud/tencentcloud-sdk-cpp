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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_OPENPOLICYINFO_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_OPENPOLICYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/OpenConstraintInfo.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * opa策略信息
                */
                class OpenPolicyInfo : public AbstractModel
                {
                public:
                    OpenPolicyInfo();
                    ~OpenPolicyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略分类：cluster集群策略、node节点策略、namespace命名空间策略、configuration配置相关策略、compute计算资源策略、storage存储资源策略、network网络资源策略
                     * @return PolicyCategory 策略分类：cluster集群策略、node节点策略、namespace命名空间策略、configuration配置相关策略、compute计算资源策略、storage存储资源策略、network网络资源策略
                     * 
                     */
                    std::string GetPolicyCategory() const;

                    /**
                     * 设置策略分类：cluster集群策略、node节点策略、namespace命名空间策略、configuration配置相关策略、compute计算资源策略、storage存储资源策略、network网络资源策略
                     * @param _policyCategory 策略分类：cluster集群策略、node节点策略、namespace命名空间策略、configuration配置相关策略、compute计算资源策略、storage存储资源策略、network网络资源策略
                     * 
                     */
                    void SetPolicyCategory(const std::string& _policyCategory);

                    /**
                     * 判断参数 PolicyCategory 是否已赋值
                     * @return PolicyCategory 是否已赋值
                     * 
                     */
                    bool PolicyCategoryHasBeenSet() const;

                    /**
                     * 获取策略中文名称
                     * @return PolicyName 策略中文名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略中文名称
                     * @param _policyName 策略中文名称
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取策略描述
                     * @return PolicyDesc 策略描述
                     * 
                     */
                    std::string GetPolicyDesc() const;

                    /**
                     * 设置策略描述
                     * @param _policyDesc 策略描述
                     * 
                     */
                    void SetPolicyDesc(const std::string& _policyDesc);

                    /**
                     * 判断参数 PolicyDesc 是否已赋值
                     * @return PolicyDesc 是否已赋值
                     * 
                     */
                    bool PolicyDescHasBeenSet() const;

                    /**
                     * 获取策略运行模式：dryrun空跑不生效，deny拦截生效
                     * @return EnforcementAction 策略运行模式：dryrun空跑不生效，deny拦截生效
                     * 
                     */
                    std::string GetEnforcementAction() const;

                    /**
                     * 设置策略运行模式：dryrun空跑不生效，deny拦截生效
                     * @param _enforcementAction 策略运行模式：dryrun空跑不生效，deny拦截生效
                     * 
                     */
                    void SetEnforcementAction(const std::string& _enforcementAction);

                    /**
                     * 判断参数 EnforcementAction 是否已赋值
                     * @return EnforcementAction 是否已赋值
                     * 
                     */
                    bool EnforcementActionHasBeenSet() const;

                    /**
                     * 获取关联的事件数量(最近7d)
                     * @return EventNums 关联的事件数量(最近7d)
                     * 
                     */
                    uint64_t GetEventNums() const;

                    /**
                     * 设置关联的事件数量(最近7d)
                     * @param _eventNums 关联的事件数量(最近7d)
                     * 
                     */
                    void SetEventNums(const uint64_t& _eventNums);

                    /**
                     * 判断参数 EventNums 是否已赋值
                     * @return EventNums 是否已赋值
                     * 
                     */
                    bool EventNumsHasBeenSet() const;

                    /**
                     * 获取策略英文名称
                     * @return Name 策略英文名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略英文名称
                     * @param _name 策略英文名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取策略模板类型，支持的类型如下：
优选策略：
blocknamespacedeletion：存在pod的命名空间不允许删除
blockcrddeletion：存在cr的crd不允许删除
blockmountablevolumetype：禁止挂载指定的volume类型
disallowalwayspullimage：禁止镜像拉取策略使用Always
tkeallowedrepos：容器镜像来源限制
blockunknowndaemonset：禁止未知的DaemonSet部署
blockpvdeletion：PV处于绑定状态则不允许删除
corednsprotect：CoreDNS组件删除保护
blockschedulablenodedelete：非封锁状态的Node不允许删除
resourcesdeletionprotection：资源删除保护
tkeenirequest：弹性网卡资源配置限制
blockworkloadcrossversionupgrade：工作负载镜像版本升级策略管控
blockserviceaccountgranthighprivilegepermission：ServiceAccount权限管控
blockclusteripserviceexist：不允许Service为ClusterIP类型
blockinternetaccess：禁止公网访问
assign：禁止访问Metadata Server
blockhostnetworkpod：禁止创建HostNetwork类型Pod

可选策略：
blockvolumemountpath：禁止容器挂载指定的目录
k8sallowedrepos：容器镜像必须以指定字符串列表中的字符串开头
k8sblockendpointeditdefaultrole：禁止默认ClusterRole修改Endpoints
k8sblockloadbalancer：不允许Service为LoadBalancer类型
k8sblocknodeport：不允许Service为NodePort类型
k8sblockwildcardingress：禁止ingress配置空白或通配符类型的hostname
k8scontainerlimits：限制容器必须设置CPU和内存Limit
k8scontainerratios：限制CPU和内存的Request与Limit的最大比率
k8scontainerrequests：限制CPU和内存的Request必须设置且小于配置的最大值
k8srequiredresources：必须配置内存的Limit，CPU和内存的Request
k8sdisallowanonymous：不允许将白名单以外的ClusterRole和Role关联到system:anonymous User和system:unauthenticated Group
k8sdisallowedtags：约束容器镜像tag
k8sexternalips：限制服务externalIP仅为允许的IP地址列表
k8simagedigests：容器镜像必须包含digest
noupdateserviceaccount：拒绝白名单外的资源更新ServiceAccount
k8sreplicalimits：要求具有spec.replicas字段的对象（Deployments、ReplicaSets等）在定义的范围内
k8srequiredannotations：要求资源包含指定的annotations，其值与提供的正则表达式匹配
k8srequiredlabels：要求资源包含指定的标签，其值与提供的正则表达式匹配
k8srequiredprobes：要求Pod具有Readiness或Liveness Probe
k8spspautomountserviceaccounttokenpod：约束容器不能设置automountServiceAccountToken为true
k8spspallowprivilegeescalationcontainer：约束PodSecurityPolicy中的allowPrivilegeEscalation字段为false
k8spspapparmor：约束AppArmor字段列表
k8spspcapabilities：限制PodSecurityPolicy中的allowedCapabilities和requiredDropCapabilities字段
k8spspflexvolumes：约束PodSecurityPolicy中的allowedFlexVolumes字段类型
k8spspforbiddensysctls：约束PodSecurityPolicy中的sysctls字段不能使用的name
k8spspfsgroup：控制PodSecurityPolicy中的fsGroup字段在限制范围内
k8spsphostfilesystem：约束PodSecurityPolicy中的hostPath字段的参数
k8spsphostnamespace：限制PodSecurityPolicy中的hostPID和hostIPC字段
k8spsphostnetworkingports：约束PodSecurityPolicy中的hostNetwork和hostPorts字段
k8spspprivilegedcontainer：禁止PodSecurityPolicy中的privileged字段为true
k8spspprocmount：约束PodSecurityPolicy中的allowedProcMountTypes字段
k8spspreadonlyrootfilesystem：约束PodSecurityPolicy中的readOnlyRootFilesystem字段
k8spspseccomp：约束PodSecurityPolicy上的seccomp.security.alpha.kubernetes.io/allowedProfileNames注解
k8spspselinuxv2：约束Pod定义SELinux配置的允许列表
k8spspallowedusers：约束PodSecurityPolicy中的runAsUser、runAsGroup、supplementalGroups和fsGroup字段
k8spspvolumetypes：约束PodSecurityPolicy中的volumes字段类型
                     * @return Kind 策略模板类型，支持的类型如下：
优选策略：
blocknamespacedeletion：存在pod的命名空间不允许删除
blockcrddeletion：存在cr的crd不允许删除
blockmountablevolumetype：禁止挂载指定的volume类型
disallowalwayspullimage：禁止镜像拉取策略使用Always
tkeallowedrepos：容器镜像来源限制
blockunknowndaemonset：禁止未知的DaemonSet部署
blockpvdeletion：PV处于绑定状态则不允许删除
corednsprotect：CoreDNS组件删除保护
blockschedulablenodedelete：非封锁状态的Node不允许删除
resourcesdeletionprotection：资源删除保护
tkeenirequest：弹性网卡资源配置限制
blockworkloadcrossversionupgrade：工作负载镜像版本升级策略管控
blockserviceaccountgranthighprivilegepermission：ServiceAccount权限管控
blockclusteripserviceexist：不允许Service为ClusterIP类型
blockinternetaccess：禁止公网访问
assign：禁止访问Metadata Server
blockhostnetworkpod：禁止创建HostNetwork类型Pod

可选策略：
blockvolumemountpath：禁止容器挂载指定的目录
k8sallowedrepos：容器镜像必须以指定字符串列表中的字符串开头
k8sblockendpointeditdefaultrole：禁止默认ClusterRole修改Endpoints
k8sblockloadbalancer：不允许Service为LoadBalancer类型
k8sblocknodeport：不允许Service为NodePort类型
k8sblockwildcardingress：禁止ingress配置空白或通配符类型的hostname
k8scontainerlimits：限制容器必须设置CPU和内存Limit
k8scontainerratios：限制CPU和内存的Request与Limit的最大比率
k8scontainerrequests：限制CPU和内存的Request必须设置且小于配置的最大值
k8srequiredresources：必须配置内存的Limit，CPU和内存的Request
k8sdisallowanonymous：不允许将白名单以外的ClusterRole和Role关联到system:anonymous User和system:unauthenticated Group
k8sdisallowedtags：约束容器镜像tag
k8sexternalips：限制服务externalIP仅为允许的IP地址列表
k8simagedigests：容器镜像必须包含digest
noupdateserviceaccount：拒绝白名单外的资源更新ServiceAccount
k8sreplicalimits：要求具有spec.replicas字段的对象（Deployments、ReplicaSets等）在定义的范围内
k8srequiredannotations：要求资源包含指定的annotations，其值与提供的正则表达式匹配
k8srequiredlabels：要求资源包含指定的标签，其值与提供的正则表达式匹配
k8srequiredprobes：要求Pod具有Readiness或Liveness Probe
k8spspautomountserviceaccounttokenpod：约束容器不能设置automountServiceAccountToken为true
k8spspallowprivilegeescalationcontainer：约束PodSecurityPolicy中的allowPrivilegeEscalation字段为false
k8spspapparmor：约束AppArmor字段列表
k8spspcapabilities：限制PodSecurityPolicy中的allowedCapabilities和requiredDropCapabilities字段
k8spspflexvolumes：约束PodSecurityPolicy中的allowedFlexVolumes字段类型
k8spspforbiddensysctls：约束PodSecurityPolicy中的sysctls字段不能使用的name
k8spspfsgroup：控制PodSecurityPolicy中的fsGroup字段在限制范围内
k8spsphostfilesystem：约束PodSecurityPolicy中的hostPath字段的参数
k8spsphostnamespace：限制PodSecurityPolicy中的hostPID和hostIPC字段
k8spsphostnetworkingports：约束PodSecurityPolicy中的hostNetwork和hostPorts字段
k8spspprivilegedcontainer：禁止PodSecurityPolicy中的privileged字段为true
k8spspprocmount：约束PodSecurityPolicy中的allowedProcMountTypes字段
k8spspreadonlyrootfilesystem：约束PodSecurityPolicy中的readOnlyRootFilesystem字段
k8spspseccomp：约束PodSecurityPolicy上的seccomp.security.alpha.kubernetes.io/allowedProfileNames注解
k8spspselinuxv2：约束Pod定义SELinux配置的允许列表
k8spspallowedusers：约束PodSecurityPolicy中的runAsUser、runAsGroup、supplementalGroups和fsGroup字段
k8spspvolumetypes：约束PodSecurityPolicy中的volumes字段类型
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置策略模板类型，支持的类型如下：
优选策略：
blocknamespacedeletion：存在pod的命名空间不允许删除
blockcrddeletion：存在cr的crd不允许删除
blockmountablevolumetype：禁止挂载指定的volume类型
disallowalwayspullimage：禁止镜像拉取策略使用Always
tkeallowedrepos：容器镜像来源限制
blockunknowndaemonset：禁止未知的DaemonSet部署
blockpvdeletion：PV处于绑定状态则不允许删除
corednsprotect：CoreDNS组件删除保护
blockschedulablenodedelete：非封锁状态的Node不允许删除
resourcesdeletionprotection：资源删除保护
tkeenirequest：弹性网卡资源配置限制
blockworkloadcrossversionupgrade：工作负载镜像版本升级策略管控
blockserviceaccountgranthighprivilegepermission：ServiceAccount权限管控
blockclusteripserviceexist：不允许Service为ClusterIP类型
blockinternetaccess：禁止公网访问
assign：禁止访问Metadata Server
blockhostnetworkpod：禁止创建HostNetwork类型Pod

可选策略：
blockvolumemountpath：禁止容器挂载指定的目录
k8sallowedrepos：容器镜像必须以指定字符串列表中的字符串开头
k8sblockendpointeditdefaultrole：禁止默认ClusterRole修改Endpoints
k8sblockloadbalancer：不允许Service为LoadBalancer类型
k8sblocknodeport：不允许Service为NodePort类型
k8sblockwildcardingress：禁止ingress配置空白或通配符类型的hostname
k8scontainerlimits：限制容器必须设置CPU和内存Limit
k8scontainerratios：限制CPU和内存的Request与Limit的最大比率
k8scontainerrequests：限制CPU和内存的Request必须设置且小于配置的最大值
k8srequiredresources：必须配置内存的Limit，CPU和内存的Request
k8sdisallowanonymous：不允许将白名单以外的ClusterRole和Role关联到system:anonymous User和system:unauthenticated Group
k8sdisallowedtags：约束容器镜像tag
k8sexternalips：限制服务externalIP仅为允许的IP地址列表
k8simagedigests：容器镜像必须包含digest
noupdateserviceaccount：拒绝白名单外的资源更新ServiceAccount
k8sreplicalimits：要求具有spec.replicas字段的对象（Deployments、ReplicaSets等）在定义的范围内
k8srequiredannotations：要求资源包含指定的annotations，其值与提供的正则表达式匹配
k8srequiredlabels：要求资源包含指定的标签，其值与提供的正则表达式匹配
k8srequiredprobes：要求Pod具有Readiness或Liveness Probe
k8spspautomountserviceaccounttokenpod：约束容器不能设置automountServiceAccountToken为true
k8spspallowprivilegeescalationcontainer：约束PodSecurityPolicy中的allowPrivilegeEscalation字段为false
k8spspapparmor：约束AppArmor字段列表
k8spspcapabilities：限制PodSecurityPolicy中的allowedCapabilities和requiredDropCapabilities字段
k8spspflexvolumes：约束PodSecurityPolicy中的allowedFlexVolumes字段类型
k8spspforbiddensysctls：约束PodSecurityPolicy中的sysctls字段不能使用的name
k8spspfsgroup：控制PodSecurityPolicy中的fsGroup字段在限制范围内
k8spsphostfilesystem：约束PodSecurityPolicy中的hostPath字段的参数
k8spsphostnamespace：限制PodSecurityPolicy中的hostPID和hostIPC字段
k8spsphostnetworkingports：约束PodSecurityPolicy中的hostNetwork和hostPorts字段
k8spspprivilegedcontainer：禁止PodSecurityPolicy中的privileged字段为true
k8spspprocmount：约束PodSecurityPolicy中的allowedProcMountTypes字段
k8spspreadonlyrootfilesystem：约束PodSecurityPolicy中的readOnlyRootFilesystem字段
k8spspseccomp：约束PodSecurityPolicy上的seccomp.security.alpha.kubernetes.io/allowedProfileNames注解
k8spspselinuxv2：约束Pod定义SELinux配置的允许列表
k8spspallowedusers：约束PodSecurityPolicy中的runAsUser、runAsGroup、supplementalGroups和fsGroup字段
k8spspvolumetypes：约束PodSecurityPolicy中的volumes字段类型
                     * @param _kind 策略模板类型，支持的类型如下：
优选策略：
blocknamespacedeletion：存在pod的命名空间不允许删除
blockcrddeletion：存在cr的crd不允许删除
blockmountablevolumetype：禁止挂载指定的volume类型
disallowalwayspullimage：禁止镜像拉取策略使用Always
tkeallowedrepos：容器镜像来源限制
blockunknowndaemonset：禁止未知的DaemonSet部署
blockpvdeletion：PV处于绑定状态则不允许删除
corednsprotect：CoreDNS组件删除保护
blockschedulablenodedelete：非封锁状态的Node不允许删除
resourcesdeletionprotection：资源删除保护
tkeenirequest：弹性网卡资源配置限制
blockworkloadcrossversionupgrade：工作负载镜像版本升级策略管控
blockserviceaccountgranthighprivilegepermission：ServiceAccount权限管控
blockclusteripserviceexist：不允许Service为ClusterIP类型
blockinternetaccess：禁止公网访问
assign：禁止访问Metadata Server
blockhostnetworkpod：禁止创建HostNetwork类型Pod

可选策略：
blockvolumemountpath：禁止容器挂载指定的目录
k8sallowedrepos：容器镜像必须以指定字符串列表中的字符串开头
k8sblockendpointeditdefaultrole：禁止默认ClusterRole修改Endpoints
k8sblockloadbalancer：不允许Service为LoadBalancer类型
k8sblocknodeport：不允许Service为NodePort类型
k8sblockwildcardingress：禁止ingress配置空白或通配符类型的hostname
k8scontainerlimits：限制容器必须设置CPU和内存Limit
k8scontainerratios：限制CPU和内存的Request与Limit的最大比率
k8scontainerrequests：限制CPU和内存的Request必须设置且小于配置的最大值
k8srequiredresources：必须配置内存的Limit，CPU和内存的Request
k8sdisallowanonymous：不允许将白名单以外的ClusterRole和Role关联到system:anonymous User和system:unauthenticated Group
k8sdisallowedtags：约束容器镜像tag
k8sexternalips：限制服务externalIP仅为允许的IP地址列表
k8simagedigests：容器镜像必须包含digest
noupdateserviceaccount：拒绝白名单外的资源更新ServiceAccount
k8sreplicalimits：要求具有spec.replicas字段的对象（Deployments、ReplicaSets等）在定义的范围内
k8srequiredannotations：要求资源包含指定的annotations，其值与提供的正则表达式匹配
k8srequiredlabels：要求资源包含指定的标签，其值与提供的正则表达式匹配
k8srequiredprobes：要求Pod具有Readiness或Liveness Probe
k8spspautomountserviceaccounttokenpod：约束容器不能设置automountServiceAccountToken为true
k8spspallowprivilegeescalationcontainer：约束PodSecurityPolicy中的allowPrivilegeEscalation字段为false
k8spspapparmor：约束AppArmor字段列表
k8spspcapabilities：限制PodSecurityPolicy中的allowedCapabilities和requiredDropCapabilities字段
k8spspflexvolumes：约束PodSecurityPolicy中的allowedFlexVolumes字段类型
k8spspforbiddensysctls：约束PodSecurityPolicy中的sysctls字段不能使用的name
k8spspfsgroup：控制PodSecurityPolicy中的fsGroup字段在限制范围内
k8spsphostfilesystem：约束PodSecurityPolicy中的hostPath字段的参数
k8spsphostnamespace：限制PodSecurityPolicy中的hostPID和hostIPC字段
k8spsphostnetworkingports：约束PodSecurityPolicy中的hostNetwork和hostPorts字段
k8spspprivilegedcontainer：禁止PodSecurityPolicy中的privileged字段为true
k8spspprocmount：约束PodSecurityPolicy中的allowedProcMountTypes字段
k8spspreadonlyrootfilesystem：约束PodSecurityPolicy中的readOnlyRootFilesystem字段
k8spspseccomp：约束PodSecurityPolicy上的seccomp.security.alpha.kubernetes.io/allowedProfileNames注解
k8spspselinuxv2：约束Pod定义SELinux配置的允许列表
k8spspallowedusers：约束PodSecurityPolicy中的runAsUser、runAsGroup、supplementalGroups和fsGroup字段
k8spspvolumetypes：约束PodSecurityPolicy中的volumes字段类型
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取策略开关状态：open打开，close关闭
                     * @return EnabledStatus 策略开关状态：open打开，close关闭
                     * 
                     */
                    std::string GetEnabledStatus() const;

                    /**
                     * 设置策略开关状态：open打开，close关闭
                     * @param _enabledStatus 策略开关状态：open打开，close关闭
                     * 
                     */
                    void SetEnabledStatus(const std::string& _enabledStatus);

                    /**
                     * 判断参数 EnabledStatus 是否已赋值
                     * @return EnabledStatus 是否已赋值
                     * 
                     */
                    bool EnabledStatusHasBeenSet() const;

                    /**
                     * 获取策略的实例的yaml示例base64编码
                     * @return ConstraintYamlExample 策略的实例的yaml示例base64编码
                     * 
                     */
                    std::string GetConstraintYamlExample() const;

                    /**
                     * 设置策略的实例的yaml示例base64编码
                     * @param _constraintYamlExample 策略的实例的yaml示例base64编码
                     * 
                     */
                    void SetConstraintYamlExample(const std::string& _constraintYamlExample);

                    /**
                     * 判断参数 ConstraintYamlExample 是否已赋值
                     * @return ConstraintYamlExample 是否已赋值
                     * 
                     */
                    bool ConstraintYamlExampleHasBeenSet() const;

                    /**
                     * 获取策略关联的实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenConstraintInfoList 策略关联的实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OpenConstraintInfo> GetOpenConstraintInfoList() const;

                    /**
                     * 设置策略关联的实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _openConstraintInfoList 策略关联的实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOpenConstraintInfoList(const std::vector<OpenConstraintInfo>& _openConstraintInfoList);

                    /**
                     * 判断参数 OpenConstraintInfoList 是否已赋值
                     * @return OpenConstraintInfoList 是否已赋值
                     * 
                     */
                    bool OpenConstraintInfoListHasBeenSet() const;

                private:

                    /**
                     * 策略分类：cluster集群策略、node节点策略、namespace命名空间策略、configuration配置相关策略、compute计算资源策略、storage存储资源策略、network网络资源策略
                     */
                    std::string m_policyCategory;
                    bool m_policyCategoryHasBeenSet;

                    /**
                     * 策略中文名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略描述
                     */
                    std::string m_policyDesc;
                    bool m_policyDescHasBeenSet;

                    /**
                     * 策略运行模式：dryrun空跑不生效，deny拦截生效
                     */
                    std::string m_enforcementAction;
                    bool m_enforcementActionHasBeenSet;

                    /**
                     * 关联的事件数量(最近7d)
                     */
                    uint64_t m_eventNums;
                    bool m_eventNumsHasBeenSet;

                    /**
                     * 策略英文名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 策略模板类型，支持的类型如下：
优选策略：
blocknamespacedeletion：存在pod的命名空间不允许删除
blockcrddeletion：存在cr的crd不允许删除
blockmountablevolumetype：禁止挂载指定的volume类型
disallowalwayspullimage：禁止镜像拉取策略使用Always
tkeallowedrepos：容器镜像来源限制
blockunknowndaemonset：禁止未知的DaemonSet部署
blockpvdeletion：PV处于绑定状态则不允许删除
corednsprotect：CoreDNS组件删除保护
blockschedulablenodedelete：非封锁状态的Node不允许删除
resourcesdeletionprotection：资源删除保护
tkeenirequest：弹性网卡资源配置限制
blockworkloadcrossversionupgrade：工作负载镜像版本升级策略管控
blockserviceaccountgranthighprivilegepermission：ServiceAccount权限管控
blockclusteripserviceexist：不允许Service为ClusterIP类型
blockinternetaccess：禁止公网访问
assign：禁止访问Metadata Server
blockhostnetworkpod：禁止创建HostNetwork类型Pod

可选策略：
blockvolumemountpath：禁止容器挂载指定的目录
k8sallowedrepos：容器镜像必须以指定字符串列表中的字符串开头
k8sblockendpointeditdefaultrole：禁止默认ClusterRole修改Endpoints
k8sblockloadbalancer：不允许Service为LoadBalancer类型
k8sblocknodeport：不允许Service为NodePort类型
k8sblockwildcardingress：禁止ingress配置空白或通配符类型的hostname
k8scontainerlimits：限制容器必须设置CPU和内存Limit
k8scontainerratios：限制CPU和内存的Request与Limit的最大比率
k8scontainerrequests：限制CPU和内存的Request必须设置且小于配置的最大值
k8srequiredresources：必须配置内存的Limit，CPU和内存的Request
k8sdisallowanonymous：不允许将白名单以外的ClusterRole和Role关联到system:anonymous User和system:unauthenticated Group
k8sdisallowedtags：约束容器镜像tag
k8sexternalips：限制服务externalIP仅为允许的IP地址列表
k8simagedigests：容器镜像必须包含digest
noupdateserviceaccount：拒绝白名单外的资源更新ServiceAccount
k8sreplicalimits：要求具有spec.replicas字段的对象（Deployments、ReplicaSets等）在定义的范围内
k8srequiredannotations：要求资源包含指定的annotations，其值与提供的正则表达式匹配
k8srequiredlabels：要求资源包含指定的标签，其值与提供的正则表达式匹配
k8srequiredprobes：要求Pod具有Readiness或Liveness Probe
k8spspautomountserviceaccounttokenpod：约束容器不能设置automountServiceAccountToken为true
k8spspallowprivilegeescalationcontainer：约束PodSecurityPolicy中的allowPrivilegeEscalation字段为false
k8spspapparmor：约束AppArmor字段列表
k8spspcapabilities：限制PodSecurityPolicy中的allowedCapabilities和requiredDropCapabilities字段
k8spspflexvolumes：约束PodSecurityPolicy中的allowedFlexVolumes字段类型
k8spspforbiddensysctls：约束PodSecurityPolicy中的sysctls字段不能使用的name
k8spspfsgroup：控制PodSecurityPolicy中的fsGroup字段在限制范围内
k8spsphostfilesystem：约束PodSecurityPolicy中的hostPath字段的参数
k8spsphostnamespace：限制PodSecurityPolicy中的hostPID和hostIPC字段
k8spsphostnetworkingports：约束PodSecurityPolicy中的hostNetwork和hostPorts字段
k8spspprivilegedcontainer：禁止PodSecurityPolicy中的privileged字段为true
k8spspprocmount：约束PodSecurityPolicy中的allowedProcMountTypes字段
k8spspreadonlyrootfilesystem：约束PodSecurityPolicy中的readOnlyRootFilesystem字段
k8spspseccomp：约束PodSecurityPolicy上的seccomp.security.alpha.kubernetes.io/allowedProfileNames注解
k8spspselinuxv2：约束Pod定义SELinux配置的允许列表
k8spspallowedusers：约束PodSecurityPolicy中的runAsUser、runAsGroup、supplementalGroups和fsGroup字段
k8spspvolumetypes：约束PodSecurityPolicy中的volumes字段类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 策略开关状态：open打开，close关闭
                     */
                    std::string m_enabledStatus;
                    bool m_enabledStatusHasBeenSet;

                    /**
                     * 策略的实例的yaml示例base64编码
                     */
                    std::string m_constraintYamlExample;
                    bool m_constraintYamlExampleHasBeenSet;

                    /**
                     * 策略关联的实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OpenConstraintInfo> m_openConstraintInfoList;
                    bool m_openConstraintInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_OPENPOLICYINFO_H_
