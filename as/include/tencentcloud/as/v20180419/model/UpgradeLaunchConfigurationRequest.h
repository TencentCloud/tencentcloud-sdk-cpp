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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_UPGRADELAUNCHCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_UPGRADELAUNCHCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/DataDisk.h>
#include <tencentcloud/as/v20180419/model/EnhancedService.h>
#include <tencentcloud/as/v20180419/model/InstanceMarketOptionsRequest.h>
#include <tencentcloud/as/v20180419/model/InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/LoginSettings.h>
#include <tencentcloud/as/v20180419/model/SystemDisk.h>
#include <tencentcloud/as/v20180419/model/InstanceTag.h>
#include <tencentcloud/as/v20180419/model/HostNameSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceNameSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceChargePrepaid.h>
#include <tencentcloud/as/v20180419/model/IPv6InternetAccessible.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * UpgradeLaunchConfiguration请求参数结构体
                */
                class UpgradeLaunchConfigurationRequest : public AbstractModel
                {
                public:
                    UpgradeLaunchConfigurationRequest();
                    ~UpgradeLaunchConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>启动配置ID。</p>
                     * @return LaunchConfigurationId <p>启动配置ID。</p>
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置<p>启动配置ID。</p>
                     * @param _launchConfigurationId <p>启动配置ID。</p>
                     * 
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     * 
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                    /**
                     * 获取<p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-8toqc6s3</code>。镜像类型分为四种：<br/><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br/>可通过以下方式获取可用的镜像ID：<br/><li><code>公共镜像</code>、<code>自定义镜像</code>、<code>共享镜像</code>的镜像ID可通过登录<a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">控制台</a>查询；<code>服务镜像市场</code>的镜像ID可通过<a href="https://market.cloud.tencent.com/list">云市场</a>查询。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15715">DescribeImages</a> ，取返回信息中的<code>ImageId</code>字段。</li></p>
                     * @return ImageId <p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-8toqc6s3</code>。镜像类型分为四种：<br/><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br/>可通过以下方式获取可用的镜像ID：<br/><li><code>公共镜像</code>、<code>自定义镜像</code>、<code>共享镜像</code>的镜像ID可通过登录<a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">控制台</a>查询；<code>服务镜像市场</code>的镜像ID可通过<a href="https://market.cloud.tencent.com/list">云市场</a>查询。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15715">DescribeImages</a> ，取返回信息中的<code>ImageId</code>字段。</li></p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-8toqc6s3</code>。镜像类型分为四种：<br/><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br/>可通过以下方式获取可用的镜像ID：<br/><li><code>公共镜像</code>、<code>自定义镜像</code>、<code>共享镜像</code>的镜像ID可通过登录<a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">控制台</a>查询；<code>服务镜像市场</code>的镜像ID可通过<a href="https://market.cloud.tencent.com/list">云市场</a>查询。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15715">DescribeImages</a> ，取返回信息中的<code>ImageId</code>字段。</li></p>
                     * @param _imageId <p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-8toqc6s3</code>。镜像类型分为四种：<br/><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br/>可通过以下方式获取可用的镜像ID：<br/><li><code>公共镜像</code>、<code>自定义镜像</code>、<code>共享镜像</code>的镜像ID可通过登录<a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">控制台</a>查询；<code>服务镜像市场</code>的镜像ID可通过<a href="https://market.cloud.tencent.com/list">云市场</a>查询。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15715">DescribeImages</a> ，取返回信息中的<code>ImageId</code>字段。</li></p>
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
                     * 获取<p>实例机型列表，不同实例机型指定了不同的资源规格，最多支持5种实例机型。</p>
                     * @return InstanceTypes <p>实例机型列表，不同实例机型指定了不同的资源规格，最多支持5种实例机型。</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置<p>实例机型列表，不同实例机型指定了不同的资源规格，最多支持5种实例机型。</p>
                     * @param _instanceTypes <p>实例机型列表，不同实例机型指定了不同的资源规格，最多支持5种实例机型。</p>
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
                     * 获取<p>启动配置显示名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。</p>
                     * @return LaunchConfigurationName <p>启动配置显示名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。</p>
                     * 
                     */
                    std::string GetLaunchConfigurationName() const;

                    /**
                     * 设置<p>启动配置显示名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。</p>
                     * @param _launchConfigurationName <p>启动配置显示名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。</p>
                     * 
                     */
                    void SetLaunchConfigurationName(const std::string& _launchConfigurationName);

                    /**
                     * 判断参数 LaunchConfigurationName 是否已赋值
                     * @return LaunchConfigurationName 是否已赋值
                     * 
                     */
                    bool LaunchConfigurationNameHasBeenSet() const;

                    /**
                     * 获取<p>实例数据盘配置信息。若不指定该参数，则默认不购买数据盘，最多支持指定11块数据盘。</p>
                     * @return DataDisks <p>实例数据盘配置信息。若不指定该参数，则默认不购买数据盘，最多支持指定11块数据盘。</p>
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置<p>实例数据盘配置信息。若不指定该参数，则默认不购买数据盘，最多支持指定11块数据盘。</p>
                     * @param _dataDisks <p>实例数据盘配置信息。若不指定该参数，则默认不购买数据盘，最多支持指定11块数据盘。</p>
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
                     * 获取<p>实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。<br><li>POSTPAID_BY_HOUR：按小时后付费<br><li>SPOTPAID：竞价付费<br><li>PREPAID：预付费，即包年包月</p>
                     * @return InstanceChargeType <p>实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。<br><li>POSTPAID_BY_HOUR：按小时后付费<br><li>SPOTPAID：竞价付费<br><li>PREPAID：预付费，即包年包月</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。<br><li>POSTPAID_BY_HOUR：按小时后付费<br><li>SPOTPAID：竞价付费<br><li>PREPAID：预付费，即包年包月</p>
                     * @param _instanceChargeType <p>实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。<br><li>POSTPAID_BY_HOUR：按小时后付费<br><li>SPOTPAID：竞价付费<br><li>PREPAID：预付费，即包年包月</p>
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
                     * 获取<p>实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。</p>
                     * @return InstanceMarketOptions <p>实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。</p>
                     * 
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置<p>实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。</p>
                     * @param _instanceMarketOptions <p>实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。</p>
                     * 
                     */
                    void SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions);

                    /**
                     * 判断参数 InstanceMarketOptions 是否已赋值
                     * @return InstanceMarketOptions 是否已赋值
                     * 
                     */
                    bool InstanceMarketOptionsHasBeenSet() const;

                    /**
                     * 获取<p>实例类型校验策略，取值包括 ALL 和 ANY，默认取值为ANY。<br><li> ALL，所有实例类型（InstanceType）都可用则通过校验，否则校验报错。<br><li> ANY，存在任何一个实例类型（InstanceType）可用则通过校验，否则校验报错。</p><p>实例类型不可用的常见原因包括该实例类型售罄、对应云盘售罄等。如果 InstanceTypes 中一款机型不存在或者已下线，则无论 InstanceTypesCheckPolicy 采用何种取值，都会校验报错。</p>
                     * @return InstanceTypesCheckPolicy <p>实例类型校验策略，取值包括 ALL 和 ANY，默认取值为ANY。<br><li> ALL，所有实例类型（InstanceType）都可用则通过校验，否则校验报错。<br><li> ANY，存在任何一个实例类型（InstanceType）可用则通过校验，否则校验报错。</p><p>实例类型不可用的常见原因包括该实例类型售罄、对应云盘售罄等。如果 InstanceTypes 中一款机型不存在或者已下线，则无论 InstanceTypesCheckPolicy 采用何种取值，都会校验报错。</p>
                     * 
                     */
                    std::string GetInstanceTypesCheckPolicy() const;

                    /**
                     * 设置<p>实例类型校验策略，取值包括 ALL 和 ANY，默认取值为ANY。<br><li> ALL，所有实例类型（InstanceType）都可用则通过校验，否则校验报错。<br><li> ANY，存在任何一个实例类型（InstanceType）可用则通过校验，否则校验报错。</p><p>实例类型不可用的常见原因包括该实例类型售罄、对应云盘售罄等。如果 InstanceTypes 中一款机型不存在或者已下线，则无论 InstanceTypesCheckPolicy 采用何种取值，都会校验报错。</p>
                     * @param _instanceTypesCheckPolicy <p>实例类型校验策略，取值包括 ALL 和 ANY，默认取值为ANY。<br><li> ALL，所有实例类型（InstanceType）都可用则通过校验，否则校验报错。<br><li> ANY，存在任何一个实例类型（InstanceType）可用则通过校验，否则校验报错。</p><p>实例类型不可用的常见原因包括该实例类型售罄、对应云盘售罄等。如果 InstanceTypes 中一款机型不存在或者已下线，则无论 InstanceTypesCheckPolicy 采用何种取值，都会校验报错。</p>
                     * 
                     */
                    void SetInstanceTypesCheckPolicy(const std::string& _instanceTypesCheckPolicy);

                    /**
                     * 判断参数 InstanceTypesCheckPolicy 是否已赋值
                     * @return InstanceTypesCheckPolicy 是否已赋值
                     * 
                     */
                    bool InstanceTypesCheckPolicyHasBeenSet() const;

                    /**
                     * 获取<p>公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。</p>
                     * @return InternetAccessible <p>公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。</p>
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置<p>公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。</p>
                     * @param _internetAccessible <p>公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。</p>
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
                     * 获取<p>该参数已失效，请勿使用。升级启动配置接口无法修改或覆盖 LoginSettings 参数，升级后 LoginSettings 不会发生变化。</p>
                     * @return LoginSettings <p>该参数已失效，请勿使用。升级启动配置接口无法修改或覆盖 LoginSettings 参数，升级后 LoginSettings 不会发生变化。</p>
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置<p>该参数已失效，请勿使用。升级启动配置接口无法修改或覆盖 LoginSettings 参数，升级后 LoginSettings 不会发生变化。</p>
                     * @param _loginSettings <p>该参数已失效，请勿使用。升级启动配置接口无法修改或覆盖 LoginSettings 参数，升级后 LoginSettings 不会发生变化。</p>
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
                     * 获取<p>实例所属项目ID。不填为默认项目。</p>
                     * @return ProjectId <p>实例所属项目ID。不填为默认项目。</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>实例所属项目ID。不填为默认项目。</p>
                     * @param _projectId <p>实例所属项目ID。不填为默认项目。</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的<code>SecurityGroupId</code>字段来获取。若不指定该参数，则默认不绑定安全组。</p>
                     * @return SecurityGroupIds <p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的<code>SecurityGroupId</code>字段来获取。若不指定该参数，则默认不绑定安全组。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的<code>SecurityGroupId</code>字段来获取。若不指定该参数，则默认不绑定安全组。</p>
                     * @param _securityGroupIds <p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的<code>SecurityGroupId</code>字段来获取。若不指定该参数，则默认不绑定安全组。</p>
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
                     * 获取<p>实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     * @return SystemDisk <p>实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置<p>实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     * @param _systemDisk <p>实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取<p>经过 Base64 编码后的自定义数据，最大长度不超过16KB。</p>
                     * @return UserData <p>经过 Base64 编码后的自定义数据，最大长度不超过16KB。</p>
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置<p>经过 Base64 编码后的自定义数据，最大长度不超过16KB。</p>
                     * @param _userData <p>经过 Base64 编码后的自定义数据，最大长度不超过16KB。</p>
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取<p>标签列表。通过指定该参数，可以为扩容的实例绑定标签。最多支持指定10个标签。</p>
                     * @return InstanceTags <p>标签列表。通过指定该参数，可以为扩容的实例绑定标签。最多支持指定10个标签。</p>
                     * 
                     */
                    std::vector<InstanceTag> GetInstanceTags() const;

                    /**
                     * 设置<p>标签列表。通过指定该参数，可以为扩容的实例绑定标签。最多支持指定10个标签。</p>
                     * @param _instanceTags <p>标签列表。通过指定该参数，可以为扩容的实例绑定标签。最多支持指定10个标签。</p>
                     * 
                     */
                    void SetInstanceTags(const std::vector<InstanceTag>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     * 
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取<p>CAM角色名称。可通过DescribeRoleList接口返回值中的roleName获取。</p>
                     * @return CamRoleName <p>CAM角色名称。可通过DescribeRoleList接口返回值中的roleName获取。</p>
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置<p>CAM角色名称。可通过DescribeRoleList接口返回值中的roleName获取。</p>
                     * @param _camRoleName <p>CAM角色名称。可通过DescribeRoleList接口返回值中的roleName获取。</p>
                     * 
                     */
                    void SetCamRoleName(const std::string& _camRoleName);

                    /**
                     * 判断参数 CamRoleName 是否已赋值
                     * @return CamRoleName 是否已赋值
                     * 
                     */
                    bool CamRoleNameHasBeenSet() const;

                    /**
                     * 获取<p>云服务器主机名（HostName）的相关设置。</p>
                     * @return HostNameSettings <p>云服务器主机名（HostName）的相关设置。</p>
                     * 
                     */
                    HostNameSettings GetHostNameSettings() const;

                    /**
                     * 设置<p>云服务器主机名（HostName）的相关设置。</p>
                     * @param _hostNameSettings <p>云服务器主机名（HostName）的相关设置。</p>
                     * 
                     */
                    void SetHostNameSettings(const HostNameSettings& _hostNameSettings);

                    /**
                     * 判断参数 HostNameSettings 是否已赋值
                     * @return HostNameSettings 是否已赋值
                     * 
                     */
                    bool HostNameSettingsHasBeenSet() const;

                    /**
                     * 获取<p>云服务器实例名（InstanceName）的相关设置。</p>
                     * @return InstanceNameSettings <p>云服务器实例名（InstanceName）的相关设置。</p>
                     * 
                     */
                    InstanceNameSettings GetInstanceNameSettings() const;

                    /**
                     * 设置<p>云服务器实例名（InstanceName）的相关设置。</p>
                     * @param _instanceNameSettings <p>云服务器实例名（InstanceName）的相关设置。</p>
                     * 
                     */
                    void SetInstanceNameSettings(const InstanceNameSettings& _instanceNameSettings);

                    /**
                     * 判断参数 InstanceNameSettings 是否已赋值
                     * @return InstanceNameSettings 是否已赋值
                     * 
                     */
                    bool InstanceNameSettingsHasBeenSet() const;

                    /**
                     * 获取<p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * @return InstanceChargePrepaid <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置<p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * @param _instanceChargePrepaid <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
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
                     * 获取<p>云盘类型选择策略，取值范围：<br><li>ORIGINAL：使用设置的云盘类型<br><li>AUTOMATIC：自动选择当前可用的云盘类型</p>
                     * @return DiskTypePolicy <p>云盘类型选择策略，取值范围：<br><li>ORIGINAL：使用设置的云盘类型<br><li>AUTOMATIC：自动选择当前可用的云盘类型</p>
                     * 
                     */
                    std::string GetDiskTypePolicy() const;

                    /**
                     * 设置<p>云盘类型选择策略，取值范围：<br><li>ORIGINAL：使用设置的云盘类型<br><li>AUTOMATIC：自动选择当前可用的云盘类型</p>
                     * @param _diskTypePolicy <p>云盘类型选择策略，取值范围：<br><li>ORIGINAL：使用设置的云盘类型<br><li>AUTOMATIC：自动选择当前可用的云盘类型</p>
                     * 
                     */
                    void SetDiskTypePolicy(const std::string& _diskTypePolicy);

                    /**
                     * 判断参数 DiskTypePolicy 是否已赋值
                     * @return DiskTypePolicy 是否已赋值
                     * 
                     */
                    bool DiskTypePolicyHasBeenSet() const;

                    /**
                     * 获取<p>IPv6公网带宽相关信息设置。若新建实例包含IPv6地址，该参数可为新建实例的IPv6地址分配公网带宽。关联启动配置的伸缩组Ipv6AddressCount参数为0时，该参数不会生效。</p>
                     * @return IPv6InternetAccessible <p>IPv6公网带宽相关信息设置。若新建实例包含IPv6地址，该参数可为新建实例的IPv6地址分配公网带宽。关联启动配置的伸缩组Ipv6AddressCount参数为0时，该参数不会生效。</p>
                     * 
                     */
                    IPv6InternetAccessible GetIPv6InternetAccessible() const;

                    /**
                     * 设置<p>IPv6公网带宽相关信息设置。若新建实例包含IPv6地址，该参数可为新建实例的IPv6地址分配公网带宽。关联启动配置的伸缩组Ipv6AddressCount参数为0时，该参数不会生效。</p>
                     * @param _iPv6InternetAccessible <p>IPv6公网带宽相关信息设置。若新建实例包含IPv6地址，该参数可为新建实例的IPv6地址分配公网带宽。关联启动配置的伸缩组Ipv6AddressCount参数为0时，该参数不会生效。</p>
                     * 
                     */
                    void SetIPv6InternetAccessible(const IPv6InternetAccessible& _iPv6InternetAccessible);

                    /**
                     * 判断参数 IPv6InternetAccessible 是否已赋值
                     * @return IPv6InternetAccessible 是否已赋值
                     * 
                     */
                    bool IPv6InternetAccessibleHasBeenSet() const;

                private:

                    /**
                     * <p>启动配置ID。</p>
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * <p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-8toqc6s3</code>。镜像类型分为四种：<br/><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br/>可通过以下方式获取可用的镜像ID：<br/><li><code>公共镜像</code>、<code>自定义镜像</code>、<code>共享镜像</code>的镜像ID可通过登录<a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">控制台</a>查询；<code>服务镜像市场</code>的镜像ID可通过<a href="https://market.cloud.tencent.com/list">云市场</a>查询。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15715">DescribeImages</a> ，取返回信息中的<code>ImageId</code>字段。</li></p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>实例机型列表，不同实例机型指定了不同的资源规格，最多支持5种实例机型。</p>
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * <p>启动配置显示名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。</p>
                     */
                    std::string m_launchConfigurationName;
                    bool m_launchConfigurationNameHasBeenSet;

                    /**
                     * <p>实例数据盘配置信息。若不指定该参数，则默认不购买数据盘，最多支持指定11块数据盘。</p>
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * <p>增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认开启云监控、云安全服务。</p>
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * <p>实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。<br><li>POSTPAID_BY_HOUR：按小时后付费<br><li>SPOTPAID：竞价付费<br><li>PREPAID：预付费，即包年包月</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。</p>
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * <p>实例类型校验策略，取值包括 ALL 和 ANY，默认取值为ANY。<br><li> ALL，所有实例类型（InstanceType）都可用则通过校验，否则校验报错。<br><li> ANY，存在任何一个实例类型（InstanceType）可用则通过校验，否则校验报错。</p><p>实例类型不可用的常见原因包括该实例类型售罄、对应云盘售罄等。如果 InstanceTypes 中一款机型不存在或者已下线，则无论 InstanceTypesCheckPolicy 采用何种取值，都会校验报错。</p>
                     */
                    std::string m_instanceTypesCheckPolicy;
                    bool m_instanceTypesCheckPolicyHasBeenSet;

                    /**
                     * <p>公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。</p>
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * <p>该参数已失效，请勿使用。升级启动配置接口无法修改或覆盖 LoginSettings 参数，升级后 LoginSettings 不会发生变化。</p>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * <p>实例所属项目ID。不填为默认项目。</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的<code>SecurityGroupId</code>字段来获取。若不指定该参数，则默认不绑定安全组。</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>经过 Base64 编码后的自定义数据，最大长度不超过16KB。</p>
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * <p>标签列表。通过指定该参数，可以为扩容的实例绑定标签。最多支持指定10个标签。</p>
                     */
                    std::vector<InstanceTag> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * <p>CAM角色名称。可通过DescribeRoleList接口返回值中的roleName获取。</p>
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * <p>云服务器主机名（HostName）的相关设置。</p>
                     */
                    HostNameSettings m_hostNameSettings;
                    bool m_hostNameSettingsHasBeenSet;

                    /**
                     * <p>云服务器实例名（InstanceName）的相关设置。</p>
                     */
                    InstanceNameSettings m_instanceNameSettings;
                    bool m_instanceNameSettingsHasBeenSet;

                    /**
                     * <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * <p>云盘类型选择策略，取值范围：<br><li>ORIGINAL：使用设置的云盘类型<br><li>AUTOMATIC：自动选择当前可用的云盘类型</p>
                     */
                    std::string m_diskTypePolicy;
                    bool m_diskTypePolicyHasBeenSet;

                    /**
                     * <p>IPv6公网带宽相关信息设置。若新建实例包含IPv6地址，该参数可为新建实例的IPv6地址分配公网带宽。关联启动配置的伸缩组Ipv6AddressCount参数为0时，该参数不会生效。</p>
                     */
                    IPv6InternetAccessible m_iPv6InternetAccessible;
                    bool m_iPv6InternetAccessibleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_UPGRADELAUNCHCONFIGURATIONREQUEST_H_
