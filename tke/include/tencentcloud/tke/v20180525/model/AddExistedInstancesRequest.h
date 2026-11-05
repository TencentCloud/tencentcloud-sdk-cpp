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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ADDEXISTEDINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ADDEXISTEDINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/InstanceAdvancedSettings.h>
#include <tencentcloud/tke/v20180525/model/EnhancedService.h>
#include <tencentcloud/tke/v20180525/model/LoginSettings.h>
#include <tencentcloud/tke/v20180525/model/NodePoolOption.h>
#include <tencentcloud/tke/v20180525/model/Tag.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * AddExistedInstances请求参数结构体
                */
                class AddExistedInstancesRequest : public AbstractModel
                {
                public:
                    AddExistedInstancesRequest();
                    ~AddExistedInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID（请登录 <a href="https://console.cloud.tencent.com/tke2">TKE 控制台</a> 获取集群 ID ）</p>
                     * @return ClusterId <p>集群ID（请登录 <a href="https://console.cloud.tencent.com/tke2">TKE 控制台</a> 获取集群 ID ）</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID（请登录 <a href="https://console.cloud.tencent.com/tke2">TKE 控制台</a> 获取集群 ID ）</p>
                     * @param _clusterId <p>集群ID（请登录 <a href="https://console.cloud.tencent.com/tke2">TKE 控制台</a> 获取集群 ID ）</p>
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
                     * 获取<p>实例列表，不支持竞价实例（请登录 <a href="https://console.cloud.tencent.com/cvm">CVM控制台</a> 获取待添加节点ID ）</p>
                     * @return InstanceIds <p>实例列表，不支持竞价实例（请登录 <a href="https://console.cloud.tencent.com/cvm">CVM控制台</a> 获取待添加节点ID ）</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>实例列表，不支持竞价实例（请登录 <a href="https://console.cloud.tencent.com/cvm">CVM控制台</a> 获取待添加节点ID ）</p>
                     * @param _instanceIds <p>实例列表，不支持竞价实例（请登录 <a href="https://console.cloud.tencent.com/cvm">CVM控制台</a> 获取待添加节点ID ）</p>
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
                     * 获取<p>实例额外需要设置参数信息(默认值)</p>
                     * @return InstanceAdvancedSettings <p>实例额外需要设置参数信息(默认值)</p>
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置<p>实例额外需要设置参数信息(默认值)</p>
                     * @param _instanceAdvancedSettings <p>实例额外需要设置参数信息(默认值)</p>
                     * 
                     */
                    void SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings);

                    /**
                     * 判断参数 InstanceAdvancedSettings 是否已赋值
                     * @return InstanceAdvancedSettings 是否已赋值
                     * 
                     */
                    bool InstanceAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取<p>增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认开启云监控、云安全服务。</p>
                     * @return EnhancedService <p>增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认开启云监控、云安全服务。</p>
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置<p>增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认开启云监控、云安全服务。</p>
                     * @param _enhancedService <p>增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认开启云监控、云安全服务。</p>
                     * 
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     * 
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取<p>节点登录信息（目前仅支持使用Password或者单个KeyIds）</p>
                     * @return LoginSettings <p>节点登录信息（目前仅支持使用Password或者单个KeyIds）</p>
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置<p>节点登录信息（目前仅支持使用Password或者单个KeyIds）</p>
                     * @param _loginSettings <p>节点登录信息（目前仅支持使用Password或者单个KeyIds）</p>
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取<p>重装系统时，可以指定修改实例的HostName(集群为HostName模式时，此参数必传，规则名称除不支持大写字符外与<a href="https://cloud.tencent.com/document/product/213/15730">CVM创建实例</a>接口HostName一致)</p>
                     * @return HostName <p>重装系统时，可以指定修改实例的HostName(集群为HostName模式时，此参数必传，规则名称除不支持大写字符外与<a href="https://cloud.tencent.com/document/product/213/15730">CVM创建实例</a>接口HostName一致)</p>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置<p>重装系统时，可以指定修改实例的HostName(集群为HostName模式时，此参数必传，规则名称除不支持大写字符外与<a href="https://cloud.tencent.com/document/product/213/15730">CVM创建实例</a>接口HostName一致)</p>
                     * @param _hostName <p>重装系统时，可以指定修改实例的HostName(集群为HostName模式时，此参数必传，规则名称除不支持大写字符外与<a href="https://cloud.tencent.com/document/product/213/15730">CVM创建实例</a>接口HostName一致)</p>
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取<p>实例所属安全组。该参数可以通过调用 DescribeSecurityGroups 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。（目前仅支持设置单个sgId）</p>
                     * @return SecurityGroupIds <p>实例所属安全组。该参数可以通过调用 DescribeSecurityGroups 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。（目前仅支持设置单个sgId）</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>实例所属安全组。该参数可以通过调用 DescribeSecurityGroups 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。（目前仅支持设置单个sgId）</p>
                     * @param _securityGroupIds <p>实例所属安全组。该参数可以通过调用 DescribeSecurityGroups 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。（目前仅支持设置单个sgId）</p>
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
                     * 获取<p>节点池选项</p>
                     * @return NodePool <p>节点池选项</p>
                     * 
                     */
                    NodePoolOption GetNodePool() const;

                    /**
                     * 设置<p>节点池选项</p>
                     * @param _nodePool <p>节点池选项</p>
                     * 
                     */
                    void SetNodePool(const NodePoolOption& _nodePool);

                    /**
                     * 判断参数 NodePool 是否已赋值
                     * @return NodePool 是否已赋值
                     * 
                     */
                    bool NodePoolHasBeenSet() const;

                    /**
                     * 获取<p>校验规则相关选项，可配置跳过某些校验规则。目前支持GlobalRouteCIDRCheck（跳过GlobalRouter的相关校验），VpcCniCIDRCheck（跳过VpcCni相关校验）</p>
                     * @return SkipValidateOptions <p>校验规则相关选项，可配置跳过某些校验规则。目前支持GlobalRouteCIDRCheck（跳过GlobalRouter的相关校验），VpcCniCIDRCheck（跳过VpcCni相关校验）</p>
                     * 
                     */
                    std::vector<std::string> GetSkipValidateOptions() const;

                    /**
                     * 设置<p>校验规则相关选项，可配置跳过某些校验规则。目前支持GlobalRouteCIDRCheck（跳过GlobalRouter的相关校验），VpcCniCIDRCheck（跳过VpcCni相关校验）</p>
                     * @param _skipValidateOptions <p>校验规则相关选项，可配置跳过某些校验规则。目前支持GlobalRouteCIDRCheck（跳过GlobalRouter的相关校验），VpcCniCIDRCheck（跳过VpcCni相关校验）</p>
                     * 
                     */
                    void SetSkipValidateOptions(const std::vector<std::string>& _skipValidateOptions);

                    /**
                     * 判断参数 SkipValidateOptions 是否已赋值
                     * @return SkipValidateOptions 是否已赋值
                     * 
                     */
                    bool SkipValidateOptionsHasBeenSet() const;

                    /**
                     * 获取<p>参数InstanceAdvancedSettingsOverride数组用于定制化地配置各台instance，与InstanceIds顺序对应。当传入InstanceAdvancedSettingsOverrides数组时，将覆盖默认参数InstanceAdvancedSettings；当没有传入参数InstanceAdvancedSettingsOverrides时，InstanceAdvancedSettings参数对每台instance生效。参数InstanceAdvancedSettingsOverride数组的长度应与InstanceIds数组一致；当长度大于InstanceIds数组长度时将报错；当长度小于InstanceIds数组时，没有对应配置的instance将使用默认配置。</p>
                     * @return InstanceAdvancedSettingsOverrides <p>参数InstanceAdvancedSettingsOverride数组用于定制化地配置各台instance，与InstanceIds顺序对应。当传入InstanceAdvancedSettingsOverrides数组时，将覆盖默认参数InstanceAdvancedSettings；当没有传入参数InstanceAdvancedSettingsOverrides时，InstanceAdvancedSettings参数对每台instance生效。参数InstanceAdvancedSettingsOverride数组的长度应与InstanceIds数组一致；当长度大于InstanceIds数组长度时将报错；当长度小于InstanceIds数组时，没有对应配置的instance将使用默认配置。</p>
                     * 
                     */
                    std::vector<InstanceAdvancedSettings> GetInstanceAdvancedSettingsOverrides() const;

                    /**
                     * 设置<p>参数InstanceAdvancedSettingsOverride数组用于定制化地配置各台instance，与InstanceIds顺序对应。当传入InstanceAdvancedSettingsOverrides数组时，将覆盖默认参数InstanceAdvancedSettings；当没有传入参数InstanceAdvancedSettingsOverrides时，InstanceAdvancedSettings参数对每台instance生效。参数InstanceAdvancedSettingsOverride数组的长度应与InstanceIds数组一致；当长度大于InstanceIds数组长度时将报错；当长度小于InstanceIds数组时，没有对应配置的instance将使用默认配置。</p>
                     * @param _instanceAdvancedSettingsOverrides <p>参数InstanceAdvancedSettingsOverride数组用于定制化地配置各台instance，与InstanceIds顺序对应。当传入InstanceAdvancedSettingsOverrides数组时，将覆盖默认参数InstanceAdvancedSettings；当没有传入参数InstanceAdvancedSettingsOverrides时，InstanceAdvancedSettings参数对每台instance生效。参数InstanceAdvancedSettingsOverride数组的长度应与InstanceIds数组一致；当长度大于InstanceIds数组长度时将报错；当长度小于InstanceIds数组时，没有对应配置的instance将使用默认配置。</p>
                     * 
                     */
                    void SetInstanceAdvancedSettingsOverrides(const std::vector<InstanceAdvancedSettings>& _instanceAdvancedSettingsOverrides);

                    /**
                     * 判断参数 InstanceAdvancedSettingsOverrides 是否已赋值
                     * @return InstanceAdvancedSettingsOverrides 是否已赋值
                     * 
                     */
                    bool InstanceAdvancedSettingsOverridesHasBeenSet() const;

                    /**
                     * 获取<p>添加已有节点时需要跳过的步骤，默认为空，当前支持 :</p><ul><li>ResetCVM——跳过 CVM 重装（请确保 TKE 的 UserData 已经写入 CVM）</li><li>InstallRuntime——跳过运行时安装</li><li>ConfigRuntime——跳过运行时配置文件下发</li><li>InstallKubelet——跳过 kubelet 配置文件下发</li><li>ConfigKubelet——跳过 kubelet安装</li></ul>
                     * @return SkipOptions <p>添加已有节点时需要跳过的步骤，默认为空，当前支持 :</p><ul><li>ResetCVM——跳过 CVM 重装（请确保 TKE 的 UserData 已经写入 CVM）</li><li>InstallRuntime——跳过运行时安装</li><li>ConfigRuntime——跳过运行时配置文件下发</li><li>InstallKubelet——跳过 kubelet 配置文件下发</li><li>ConfigKubelet——跳过 kubelet安装</li></ul>
                     * 
                     */
                    std::vector<std::string> GetSkipOptions() const;

                    /**
                     * 设置<p>添加已有节点时需要跳过的步骤，默认为空，当前支持 :</p><ul><li>ResetCVM——跳过 CVM 重装（请确保 TKE 的 UserData 已经写入 CVM）</li><li>InstallRuntime——跳过运行时安装</li><li>ConfigRuntime——跳过运行时配置文件下发</li><li>InstallKubelet——跳过 kubelet 配置文件下发</li><li>ConfigKubelet——跳过 kubelet安装</li></ul>
                     * @param _skipOptions <p>添加已有节点时需要跳过的步骤，默认为空，当前支持 :</p><ul><li>ResetCVM——跳过 CVM 重装（请确保 TKE 的 UserData 已经写入 CVM）</li><li>InstallRuntime——跳过运行时安装</li><li>ConfigRuntime——跳过运行时配置文件下发</li><li>InstallKubelet——跳过 kubelet 配置文件下发</li><li>ConfigKubelet——跳过 kubelet安装</li></ul>
                     * 
                     */
                    void SetSkipOptions(const std::vector<std::string>& _skipOptions);

                    /**
                     * 判断参数 SkipOptions 是否已赋值
                     * @return SkipOptions 是否已赋值
                     * 
                     */
                    bool SkipOptionsHasBeenSet() const;

                    /**
                     * 获取<p>节点镜像</p>
                     * @return ImageId <p>节点镜像</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>节点镜像</p>
                     * @param _imageId <p>节点镜像</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>直接添加为原生节点</p>
                     * @return NodeType <p>直接添加为原生节点</p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>直接添加为原生节点</p>
                     * @param _nodeType <p>直接添加为原生节点</p>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>云标签列表</p>
                     * @return Tags <p>云标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>云标签列表</p>
                     * @param _tags <p>云标签列表</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标识，NOTIFY_AND_AUTO_RENEW（通知过期且自动续费）、NOTIFY_AND_MANUAL_RENEW（通知过期不自动续费）</p>
                     * @return RenewFlag <p>自动续费标识，NOTIFY_AND_AUTO_RENEW（通知过期且自动续费）、NOTIFY_AND_MANUAL_RENEW（通知过期不自动续费）</p>
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置<p>自动续费标识，NOTIFY_AND_AUTO_RENEW（通知过期且自动续费）、NOTIFY_AND_MANUAL_RENEW（通知过期不自动续费）</p>
                     * @param _renewFlag <p>自动续费标识，NOTIFY_AND_AUTO_RENEW（通知过期且自动续费）、NOTIFY_AND_MANUAL_RENEW（通知过期不自动续费）</p>
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID（请登录 <a href="https://console.cloud.tencent.com/tke2">TKE 控制台</a> 获取集群 ID ）</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>实例列表，不支持竞价实例（请登录 <a href="https://console.cloud.tencent.com/cvm">CVM控制台</a> 获取待添加节点ID ）</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>实例额外需要设置参数信息(默认值)</p>
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                    /**
                     * <p>增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认开启云监控、云安全服务。</p>
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * <p>节点登录信息（目前仅支持使用Password或者单个KeyIds）</p>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * <p>重装系统时，可以指定修改实例的HostName(集群为HostName模式时，此参数必传，规则名称除不支持大写字符外与<a href="https://cloud.tencent.com/document/product/213/15730">CVM创建实例</a>接口HostName一致)</p>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>实例所属安全组。该参数可以通过调用 DescribeSecurityGroups 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。（目前仅支持设置单个sgId）</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>节点池选项</p>
                     */
                    NodePoolOption m_nodePool;
                    bool m_nodePoolHasBeenSet;

                    /**
                     * <p>校验规则相关选项，可配置跳过某些校验规则。目前支持GlobalRouteCIDRCheck（跳过GlobalRouter的相关校验），VpcCniCIDRCheck（跳过VpcCni相关校验）</p>
                     */
                    std::vector<std::string> m_skipValidateOptions;
                    bool m_skipValidateOptionsHasBeenSet;

                    /**
                     * <p>参数InstanceAdvancedSettingsOverride数组用于定制化地配置各台instance，与InstanceIds顺序对应。当传入InstanceAdvancedSettingsOverrides数组时，将覆盖默认参数InstanceAdvancedSettings；当没有传入参数InstanceAdvancedSettingsOverrides时，InstanceAdvancedSettings参数对每台instance生效。参数InstanceAdvancedSettingsOverride数组的长度应与InstanceIds数组一致；当长度大于InstanceIds数组长度时将报错；当长度小于InstanceIds数组时，没有对应配置的instance将使用默认配置。</p>
                     */
                    std::vector<InstanceAdvancedSettings> m_instanceAdvancedSettingsOverrides;
                    bool m_instanceAdvancedSettingsOverridesHasBeenSet;

                    /**
                     * <p>添加已有节点时需要跳过的步骤，默认为空，当前支持 :</p><ul><li>ResetCVM——跳过 CVM 重装（请确保 TKE 的 UserData 已经写入 CVM）</li><li>InstallRuntime——跳过运行时安装</li><li>ConfigRuntime——跳过运行时配置文件下发</li><li>InstallKubelet——跳过 kubelet 配置文件下发</li><li>ConfigKubelet——跳过 kubelet安装</li></ul>
                     */
                    std::vector<std::string> m_skipOptions;
                    bool m_skipOptionsHasBeenSet;

                    /**
                     * <p>节点镜像</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>直接添加为原生节点</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>云标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>自动续费标识，NOTIFY_AND_AUTO_RENEW（通知过期且自动续费）、NOTIFY_AND_MANUAL_RENEW（通知过期不自动续费）</p>
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ADDEXISTEDINSTANCESREQUEST_H_
