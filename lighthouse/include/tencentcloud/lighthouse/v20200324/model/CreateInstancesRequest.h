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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/InstanceChargePrepaid.h>
#include <tencentcloud/lighthouse/v20200324/model/LoginConfiguration.h>
#include <tencentcloud/lighthouse/v20200324/model/DockerContainerConfiguration.h>
#include <tencentcloud/lighthouse/v20200324/model/Tag.h>
#include <tencentcloud/lighthouse/v20200324/model/Command.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * CreateInstances请求参数结构体
                */
                class CreateInstancesRequest : public AbstractModel
                {
                public:
                    CreateInstancesRequest();
                    ~CreateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取套餐ID。可以通过调用 [DescribeBundles](https://cloud.tencent.com/document/api/1207/47575) 接口获取。
                     * @return BundleId 套餐ID。可以通过调用 [DescribeBundles](https://cloud.tencent.com/document/api/1207/47575) 接口获取。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置套餐ID。可以通过调用 [DescribeBundles](https://cloud.tencent.com/document/api/1207/47575) 接口获取。
                     * @param _bundleId 套餐ID。可以通过调用 [DescribeBundles](https://cloud.tencent.com/document/api/1207/47575) 接口获取。
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取镜像ID。可以通过调用 [DescribeBlueprints](https://cloud.tencent.com/document/api/1207/47689) 接口获取。
                     * @return BlueprintId 镜像ID。可以通过调用 [DescribeBlueprints](https://cloud.tencent.com/document/api/1207/47689) 接口获取。
                     * 
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置镜像ID。可以通过调用 [DescribeBlueprints](https://cloud.tencent.com/document/api/1207/47689) 接口获取。
                     * @param _blueprintId 镜像ID。可以通过调用 [DescribeBlueprints](https://cloud.tencent.com/document/api/1207/47689) 接口获取。
                     * 
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     * 
                     */
                    bool BlueprintIdHasBeenSet() const;

                    /**
                     * 获取当前实例仅支持预付费模式，即包年包月相关参数设置，单位（月）。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。该参数必传。
                     * @return InstanceChargePrepaid 当前实例仅支持预付费模式，即包年包月相关参数设置，单位（月）。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。该参数必传。
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置当前实例仅支持预付费模式，即包年包月相关参数设置，单位（月）。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。该参数必传。
                     * @param _instanceChargePrepaid 当前实例仅支持预付费模式，即包年包月相关参数设置，单位（月）。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。该参数必传。
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
                     * 获取实例显示名称。
                     * @return InstanceName 实例显示名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例显示名称。
                     * @param _instanceName 实例显示名称。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取购买实例数量。包年包月实例取值范围：[1，30]。默认取值：1。指定购买实例的数量不能超过用户所能购买的剩余配额数量
                     * @return InstanceCount 购买实例数量。包年包月实例取值范围：[1，30]。默认取值：1。指定购买实例的数量不能超过用户所能购买的剩余配额数量
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置购买实例数量。包年包月实例取值范围：[1，30]。默认取值：1。指定购买实例的数量不能超过用户所能购买的剩余配额数量
                     * @param _instanceCount 购买实例数量。包年包月实例取值范围：[1，30]。默认取值：1。指定购买实例的数量不能超过用户所能购买的剩余配额数量
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取可用区列表。
不填此参数，表示为随机可用区。
可通过 <a href="https://cloud.tencent.com/document/product/1207/57513" target="_blank">DescribeZones</a>接口获取指定地域下的可用区列表信息
                     * @return Zones 可用区列表。
不填此参数，表示为随机可用区。
可通过 <a href="https://cloud.tencent.com/document/product/1207/57513" target="_blank">DescribeZones</a>接口获取指定地域下的可用区列表信息
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置可用区列表。
不填此参数，表示为随机可用区。
可通过 <a href="https://cloud.tencent.com/document/product/1207/57513" target="_blank">DescribeZones</a>接口获取指定地域下的可用区列表信息
                     * @param _zones 可用区列表。
不填此参数，表示为随机可用区。
可通过 <a href="https://cloud.tencent.com/document/product/1207/57513" target="_blank">DescribeZones</a>接口获取指定地域下的可用区列表信息
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取是否只预检此次请求。
true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和库存。
如果检查不通过，则返回对应错误码；
如果检查通过，则返回RequestId.
false（默认）：发送正常请求，通过检查后直接创建实例
                     * @return DryRun 是否只预检此次请求。
true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和库存。
如果检查不通过，则返回对应错误码；
如果检查通过，则返回RequestId.
false（默认）：发送正常请求，通过检查后直接创建实例
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否只预检此次请求。
true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和库存。
如果检查不通过，则返回对应错误码；
如果检查通过，则返回RequestId.
false（默认）：发送正常请求，通过检查后直接创建实例
                     * @param _dryRun 是否只预检此次请求。
true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和库存。
如果检查不通过，则返回对应错误码；
如果检查通过，则返回RequestId.
false（默认）：发送正常请求，通过检查后直接创建实例
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @return ClientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @param _clientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取实例登录密码信息配置。默认缺失情况下代表用户选择实例创建后设置登录密码。
                     * @return LoginConfiguration 实例登录密码信息配置。默认缺失情况下代表用户选择实例创建后设置登录密码。
                     * 
                     */
                    LoginConfiguration GetLoginConfiguration() const;

                    /**
                     * 设置实例登录密码信息配置。默认缺失情况下代表用户选择实例创建后设置登录密码。
                     * @param _loginConfiguration 实例登录密码信息配置。默认缺失情况下代表用户选择实例创建后设置登录密码。
                     * 
                     */
                    void SetLoginConfiguration(const LoginConfiguration& _loginConfiguration);

                    /**
                     * 判断参数 LoginConfiguration 是否已赋值
                     * @return LoginConfiguration 是否已赋值
                     * 
                     */
                    bool LoginConfigurationHasBeenSet() const;

                    /**
                     * 获取要创建的容器配置列表。
                     * @return Containers 要创建的容器配置列表。
                     * 
                     */
                    std::vector<DockerContainerConfiguration> GetContainers() const;

                    /**
                     * 设置要创建的容器配置列表。
                     * @param _containers 要创建的容器配置列表。
                     * 
                     */
                    void SetContainers(const std::vector<DockerContainerConfiguration>& _containers);

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     * 
                     */
                    bool ContainersHasBeenSet() const;

                    /**
                     * 获取是否自动使用代金券。默认不使用。
                     * @return AutoVoucher 是否自动使用代金券。默认不使用。
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券。默认不使用。
                     * @param _autoVoucher 是否自动使用代金券。默认不使用。
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取防火墙模板ID。若不指定该参数，则使用默认防火墙策略。
                     * @return FirewallTemplateId 防火墙模板ID。若不指定该参数，则使用默认防火墙策略。
                     * 
                     */
                    std::string GetFirewallTemplateId() const;

                    /**
                     * 设置防火墙模板ID。若不指定该参数，则使用默认防火墙策略。
                     * @param _firewallTemplateId 防火墙模板ID。若不指定该参数，则使用默认防火墙策略。
                     * 
                     */
                    void SetFirewallTemplateId(const std::string& _firewallTemplateId);

                    /**
                     * 判断参数 FirewallTemplateId 是否已赋值
                     * @return FirewallTemplateId 是否已赋值
                     * 
                     */
                    bool FirewallTemplateIdHasBeenSet() const;

                    /**
                     * 获取标签键和标签值。
如果指定多个标签，则会为指定资源同时创建并绑定该多个标签。
同一个资源上的同一个标签键只能对应一个标签值。如果您尝试添加已有标签键，则对应的标签值会更新为新值。
如果标签不存在会为您自动创建标签。
数组最多支持10个元素。
                     * @return Tags 标签键和标签值。
如果指定多个标签，则会为指定资源同时创建并绑定该多个标签。
同一个资源上的同一个标签键只能对应一个标签值。如果您尝试添加已有标签键，则对应的标签值会更新为新值。
如果标签不存在会为您自动创建标签。
数组最多支持10个元素。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签键和标签值。
如果指定多个标签，则会为指定资源同时创建并绑定该多个标签。
同一个资源上的同一个标签键只能对应一个标签值。如果您尝试添加已有标签键，则对应的标签值会更新为新值。
如果标签不存在会为您自动创建标签。
数组最多支持10个元素。
                     * @param _tags 标签键和标签值。
如果指定多个标签，则会为指定资源同时创建并绑定该多个标签。
同一个资源上的同一个标签键只能对应一个标签值。如果您尝试添加已有标签键，则对应的标签值会更新为新值。
如果标签不存在会为您自动创建标签。
数组最多支持10个元素。
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
                     * 获取创建实例后自动执行的命令。
                     * @return InitCommand 创建实例后自动执行的命令。
                     * 
                     */
                    Command GetInitCommand() const;

                    /**
                     * 设置创建实例后自动执行的命令。
                     * @param _initCommand 创建实例后自动执行的命令。
                     * 
                     */
                    void SetInitCommand(const Command& _initCommand);

                    /**
                     * 判断参数 InitCommand 是否已赋值
                     * @return InitCommand 是否已赋值
                     * 
                     */
                    bool InitCommandHasBeenSet() const;

                    /**
                     * 获取主域名。
注意：域名指定后，仅支持购买一台实例（参数InstanceCount=1）。
                     * @return DomainName 主域名。
注意：域名指定后，仅支持购买一台实例（参数InstanceCount=1）。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置主域名。
注意：域名指定后，仅支持购买一台实例（参数InstanceCount=1）。
                     * @param _domainName 主域名。
注意：域名指定后，仅支持购买一台实例（参数InstanceCount=1）。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取子域名。
注意：域名指定后，仅支持购买一台实例（参数InstanceCount=1）。
                     * @return Subdomain 子域名。
注意：域名指定后，仅支持购买一台实例（参数InstanceCount=1）。
                     * 
                     */
                    std::string GetSubdomain() const;

                    /**
                     * 设置子域名。
注意：域名指定后，仅支持购买一台实例（参数InstanceCount=1）。
                     * @param _subdomain 子域名。
注意：域名指定后，仅支持购买一台实例（参数InstanceCount=1）。
                     * 
                     */
                    void SetSubdomain(const std::string& _subdomain);

                    /**
                     * 判断参数 Subdomain 是否已赋值
                     * @return Subdomain 是否已赋值
                     * 
                     */
                    bool SubdomainHasBeenSet() const;

                private:

                    /**
                     * 套餐ID。可以通过调用 [DescribeBundles](https://cloud.tencent.com/document/api/1207/47575) 接口获取。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * 镜像ID。可以通过调用 [DescribeBlueprints](https://cloud.tencent.com/document/api/1207/47689) 接口获取。
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                    /**
                     * 当前实例仅支持预付费模式，即包年包月相关参数设置，单位（月）。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。该参数必传。
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * 实例显示名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 购买实例数量。包年包月实例取值范围：[1，30]。默认取值：1。指定购买实例的数量不能超过用户所能购买的剩余配额数量
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 可用区列表。
不填此参数，表示为随机可用区。
可通过 <a href="https://cloud.tencent.com/document/product/1207/57513" target="_blank">DescribeZones</a>接口获取指定地域下的可用区列表信息
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 是否只预检此次请求。
true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和库存。
如果检查不通过，则返回对应错误码；
如果检查通过，则返回RequestId.
false（默认）：发送正常请求，通过检查后直接创建实例
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 实例登录密码信息配置。默认缺失情况下代表用户选择实例创建后设置登录密码。
                     */
                    LoginConfiguration m_loginConfiguration;
                    bool m_loginConfigurationHasBeenSet;

                    /**
                     * 要创建的容器配置列表。
                     */
                    std::vector<DockerContainerConfiguration> m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * 是否自动使用代金券。默认不使用。
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 防火墙模板ID。若不指定该参数，则使用默认防火墙策略。
                     */
                    std::string m_firewallTemplateId;
                    bool m_firewallTemplateIdHasBeenSet;

                    /**
                     * 标签键和标签值。
如果指定多个标签，则会为指定资源同时创建并绑定该多个标签。
同一个资源上的同一个标签键只能对应一个标签值。如果您尝试添加已有标签键，则对应的标签值会更新为新值。
如果标签不存在会为您自动创建标签。
数组最多支持10个元素。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 创建实例后自动执行的命令。
                     */
                    Command m_initCommand;
                    bool m_initCommandHasBeenSet;

                    /**
                     * 主域名。
注意：域名指定后，仅支持购买一台实例（参数InstanceCount=1）。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 子域名。
注意：域名指定后，仅支持购买一台实例（参数InstanceCount=1）。
                     */
                    std::string m_subdomain;
                    bool m_subdomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEINSTANCESREQUEST_H_
