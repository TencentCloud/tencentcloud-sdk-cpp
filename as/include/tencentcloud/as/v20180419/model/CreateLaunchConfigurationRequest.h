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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CREATELAUNCHCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CREATELAUNCHCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/SystemDisk.h>
#include <tencentcloud/as/v20180419/model/DataDisk.h>
#include <tencentcloud/as/v20180419/model/InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/LoginSettings.h>
#include <tencentcloud/as/v20180419/model/EnhancedService.h>
#include <tencentcloud/as/v20180419/model/InstanceMarketOptionsRequest.h>
#include <tencentcloud/as/v20180419/model/InstanceTag.h>
#include <tencentcloud/as/v20180419/model/Tag.h>
#include <tencentcloud/as/v20180419/model/HostNameSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceNameSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceChargePrepaid.h>
#include <tencentcloud/as/v20180419/model/IPv6InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/Metadata.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * CreateLaunchConfiguration请求参数结构体
                */
                class CreateLaunchConfigurationRequest : public AbstractModel
                {
                public:
                    CreateLaunchConfigurationRequest();
                    ~CreateLaunchConfigurationRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-8toqc6s3</code>。镜像Id与镜像族名称，二者必填一个且只能填写一个。镜像类型分为四种：<br/><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br/>可通过以下方式获取可用的镜像ID：<br/><li><code>公共镜像</code>、<code>自定义镜像</code>、<code>共享镜像</code>的镜像ID可通过登录<a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">控制台</a>查询；<code>服务镜像市场</code>的镜像ID可通过<a href="https://market.cloud.tencent.com/list">云市场</a>查询。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15715">DescribeImages</a> ，取返回信息中的<code>ImageId</code>字段。</li></p>
                     * @return ImageId <p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-8toqc6s3</code>。镜像Id与镜像族名称，二者必填一个且只能填写一个。镜像类型分为四种：<br/><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br/>可通过以下方式获取可用的镜像ID：<br/><li><code>公共镜像</code>、<code>自定义镜像</code>、<code>共享镜像</code>的镜像ID可通过登录<a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">控制台</a>查询；<code>服务镜像市场</code>的镜像ID可通过<a href="https://market.cloud.tencent.com/list">云市场</a>查询。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15715">DescribeImages</a> ，取返回信息中的<code>ImageId</code>字段。</li></p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-8toqc6s3</code>。镜像Id与镜像族名称，二者必填一个且只能填写一个。镜像类型分为四种：<br/><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br/>可通过以下方式获取可用的镜像ID：<br/><li><code>公共镜像</code>、<code>自定义镜像</code>、<code>共享镜像</code>的镜像ID可通过登录<a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">控制台</a>查询；<code>服务镜像市场</code>的镜像ID可通过<a href="https://market.cloud.tencent.com/list">云市场</a>查询。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15715">DescribeImages</a> ，取返回信息中的<code>ImageId</code>字段。</li></p>
                     * @param _imageId <p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-8toqc6s3</code>。镜像Id与镜像族名称，二者必填一个且只能填写一个。镜像类型分为四种：<br/><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br/>可通过以下方式获取可用的镜像ID：<br/><li><code>公共镜像</code>、<code>自定义镜像</code>、<code>共享镜像</code>的镜像ID可通过登录<a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">控制台</a>查询；<code>服务镜像市场</code>的镜像ID可通过<a href="https://market.cloud.tencent.com/list">云市场</a>查询。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15715">DescribeImages</a> ，取返回信息中的<code>ImageId</code>字段。</li></p>
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
                     * 获取<p>启动配置所属项目ID。默认值为0，表示使用默认项目。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/651/78725">DescribeProject</a> 的返回值中的 projectId 字段来获取。注意：伸缩组内实例所属项目ID取伸缩组项目ID，与这里取值无关。</p>
                     * @return ProjectId <p>启动配置所属项目ID。默认值为0，表示使用默认项目。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/651/78725">DescribeProject</a> 的返回值中的 projectId 字段来获取。注意：伸缩组内实例所属项目ID取伸缩组项目ID，与这里取值无关。</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>启动配置所属项目ID。默认值为0，表示使用默认项目。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/651/78725">DescribeProject</a> 的返回值中的 projectId 字段来获取。注意：伸缩组内实例所属项目ID取伸缩组项目ID，与这里取值无关。</p>
                     * @param _projectId <p>启动配置所属项目ID。默认值为0，表示使用默认项目。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/651/78725">DescribeProject</a> 的返回值中的 projectId 字段来获取。注意：伸缩组内实例所属项目ID取伸缩组项目ID，与这里取值无关。</p>
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>实例机型。不同实例机型指定了不同的资源规格，具体取值可通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a> 来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例类型</a>描述。<code>InstanceType</code>和<code>InstanceTypes</code>参数互斥，二者必填一个且只能填写一个。</p>
                     * @return InstanceType <p>实例机型。不同实例机型指定了不同的资源规格，具体取值可通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a> 来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例类型</a>描述。<code>InstanceType</code>和<code>InstanceTypes</code>参数互斥，二者必填一个且只能填写一个。</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例机型。不同实例机型指定了不同的资源规格，具体取值可通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a> 来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例类型</a>描述。<code>InstanceType</code>和<code>InstanceTypes</code>参数互斥，二者必填一个且只能填写一个。</p>
                     * @param _instanceType <p>实例机型。不同实例机型指定了不同的资源规格，具体取值可通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a> 来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例类型</a>描述。<code>InstanceType</code>和<code>InstanceTypes</code>参数互斥，二者必填一个且只能填写一个。</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

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
                     * 获取<p>实例登录设置。通过该参数可以设置实例的登录方式密码、密钥或保持镜像的原始登录设置。默认情况下会随机生成密码，并以站内信方式知会到用户。</p>
                     * @return LoginSettings <p>实例登录设置。通过该参数可以设置实例的登录方式密码、密钥或保持镜像的原始登录设置。默认情况下会随机生成密码，并以站内信方式知会到用户。</p>
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置<p>实例登录设置。通过该参数可以设置实例的登录方式密码、密钥或保持镜像的原始登录设置。默认情况下会随机生成密码，并以站内信方式知会到用户。</p>
                     * @param _loginSettings <p>实例登录设置。通过该参数可以设置实例的登录方式密码、密钥或保持镜像的原始登录设置。默认情况下会随机生成密码，并以站内信方式知会到用户。</p>
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
                     * 获取<p>实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。<li>POSTPAID_BY_HOUR：按小时后付费</li><li>SPOTPAID：竞价付费</li><li>PREPAID：预付费，即包年包月</li><li>CDCPAID：专用集群付费</li></p>
                     * @return InstanceChargeType <p>实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。<li>POSTPAID_BY_HOUR：按小时后付费</li><li>SPOTPAID：竞价付费</li><li>PREPAID：预付费，即包年包月</li><li>CDCPAID：专用集群付费</li></p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。<li>POSTPAID_BY_HOUR：按小时后付费</li><li>SPOTPAID：竞价付费</li><li>PREPAID：预付费，即包年包月</li><li>CDCPAID：专用集群付费</li></p>
                     * @param _instanceChargeType <p>实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。<li>POSTPAID_BY_HOUR：按小时后付费</li><li>SPOTPAID：竞价付费</li><li>PREPAID：预付费，即包年包月</li><li>CDCPAID：专用集群付费</li></p>
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
                     * 获取<p>实例机型列表，不同实例机型指定了不同的资源规格，最多支持10种实例机型。<code>InstanceType</code>和<code>InstanceTypes</code>参数互斥，二者必填一个且只能填写一个。具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格描述</a>。</p>
                     * @return InstanceTypes <p>实例机型列表，不同实例机型指定了不同的资源规格，最多支持10种实例机型。<code>InstanceType</code>和<code>InstanceTypes</code>参数互斥，二者必填一个且只能填写一个。具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格描述</a>。</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置<p>实例机型列表，不同实例机型指定了不同的资源规格，最多支持10种实例机型。<code>InstanceType</code>和<code>InstanceTypes</code>参数互斥，二者必填一个且只能填写一个。具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格描述</a>。</p>
                     * @param _instanceTypes <p>实例机型列表，不同实例机型指定了不同的资源规格，最多支持10种实例机型。<code>InstanceType</code>和<code>InstanceTypes</code>参数互斥，二者必填一个且只能填写一个。具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格描述</a>。</p>
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
                     * 获取<p>CAM角色名称。可通过<a href="https://cloud.tencent.com/document/product/598/36223">DescribeRoleList</a>接口返回值中的roleName获取。</p>
                     * @return CamRoleName <p>CAM角色名称。可通过<a href="https://cloud.tencent.com/document/product/598/36223">DescribeRoleList</a>接口返回值中的roleName获取。</p>
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置<p>CAM角色名称。可通过<a href="https://cloud.tencent.com/document/product/598/36223">DescribeRoleList</a>接口返回值中的roleName获取。</p>
                     * @param _camRoleName <p>CAM角色名称。可通过<a href="https://cloud.tencent.com/document/product/598/36223">DescribeRoleList</a>接口返回值中的roleName获取。</p>
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
                     * 获取<p>实例类型校验策略，取值包括 ALL 和 ANY，默认取值为ANY。该参数仅在 InstanceTypes 入参包含多个机型时生效。<li> ALL，所有实例类型（InstanceType）都可用则通过校验，否则校验报错。</li><li> ANY，存在任何一个实例类型（InstanceType）可用则通过校验，否则校验报错。</li></p><p>实例类型不可用的常见原因包括该实例类型售罄、对应云盘售罄等。如果 InstanceTypes 中一款机型不存在或者已下线，则无论 InstanceTypesCheckPolicy 采用何种取值，都会校验报错。</p>
                     * @return InstanceTypesCheckPolicy <p>实例类型校验策略，取值包括 ALL 和 ANY，默认取值为ANY。该参数仅在 InstanceTypes 入参包含多个机型时生效。<li> ALL，所有实例类型（InstanceType）都可用则通过校验，否则校验报错。</li><li> ANY，存在任何一个实例类型（InstanceType）可用则通过校验，否则校验报错。</li></p><p>实例类型不可用的常见原因包括该实例类型售罄、对应云盘售罄等。如果 InstanceTypes 中一款机型不存在或者已下线，则无论 InstanceTypesCheckPolicy 采用何种取值，都会校验报错。</p>
                     * 
                     */
                    std::string GetInstanceTypesCheckPolicy() const;

                    /**
                     * 设置<p>实例类型校验策略，取值包括 ALL 和 ANY，默认取值为ANY。该参数仅在 InstanceTypes 入参包含多个机型时生效。<li> ALL，所有实例类型（InstanceType）都可用则通过校验，否则校验报错。</li><li> ANY，存在任何一个实例类型（InstanceType）可用则通过校验，否则校验报错。</li></p><p>实例类型不可用的常见原因包括该实例类型售罄、对应云盘售罄等。如果 InstanceTypes 中一款机型不存在或者已下线，则无论 InstanceTypesCheckPolicy 采用何种取值，都会校验报错。</p>
                     * @param _instanceTypesCheckPolicy <p>实例类型校验策略，取值包括 ALL 和 ANY，默认取值为ANY。该参数仅在 InstanceTypes 入参包含多个机型时生效。<li> ALL，所有实例类型（InstanceType）都可用则通过校验，否则校验报错。</li><li> ANY，存在任何一个实例类型（InstanceType）可用则通过校验，否则校验报错。</li></p><p>实例类型不可用的常见原因包括该实例类型售罄、对应云盘售罄等。如果 InstanceTypes 中一款机型不存在或者已下线，则无论 InstanceTypesCheckPolicy 采用何种取值，都会校验报错。</p>
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
                     * 获取<p>标签描述列表。通过指定该参数可以支持绑定标签到启动配置。每个启动配置最多支持30个标签。</p>
                     * @return Tags <p>标签描述列表。通过指定该参数可以支持绑定标签到启动配置。每个启动配置最多支持30个标签。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签描述列表。通过指定该参数可以支持绑定标签到启动配置。每个启动配置最多支持30个标签。</p>
                     * @param _tags <p>标签描述列表。通过指定该参数可以支持绑定标签到启动配置。每个启动配置最多支持30个标签。</p>
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
                     * 获取<p>云服务器主机名（HostName）的相关设置。不支持windows实例设置主机名。 新增该属性时，必须传递云服务器的主机名，其它未传递字段会设置为默认值。会校验主机名(如果存在后缀则加上后缀)是否超过最大位数46。</p>
                     * @return HostNameSettings <p>云服务器主机名（HostName）的相关设置。不支持windows实例设置主机名。 新增该属性时，必须传递云服务器的主机名，其它未传递字段会设置为默认值。会校验主机名(如果存在后缀则加上后缀)是否超过最大位数46。</p>
                     * 
                     */
                    HostNameSettings GetHostNameSettings() const;

                    /**
                     * 设置<p>云服务器主机名（HostName）的相关设置。不支持windows实例设置主机名。 新增该属性时，必须传递云服务器的主机名，其它未传递字段会设置为默认值。会校验主机名(如果存在后缀则加上后缀)是否超过最大位数46。</p>
                     * @param _hostNameSettings <p>云服务器主机名（HostName）的相关设置。不支持windows实例设置主机名。 新增该属性时，必须传递云服务器的主机名，其它未传递字段会设置为默认值。会校验主机名(如果存在后缀则加上后缀)是否超过最大位数46。</p>
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
                     * 获取<p>云服务器实例名（InstanceName）的相关设置。如果用户在启动配置中设置此字段，则伸缩组创建出的实例 InstanceName 参照此字段进行设置，并传递给 CVM；如果用户未在启动配置中设置此字段，则伸缩组创建出的实例 InstanceName 按照“as-{{ 伸缩组AutoScalingGroupName }}”进行设置，并传递给 CVM。新增该属性时，必须传递云服务器的实例名称，其它未传递字段会设置为默认值。会校验实例名称(如果存在后缀则加上后缀)是否超过最大位数108。</p>
                     * @return InstanceNameSettings <p>云服务器实例名（InstanceName）的相关设置。如果用户在启动配置中设置此字段，则伸缩组创建出的实例 InstanceName 参照此字段进行设置，并传递给 CVM；如果用户未在启动配置中设置此字段，则伸缩组创建出的实例 InstanceName 按照“as-{{ 伸缩组AutoScalingGroupName }}”进行设置，并传递给 CVM。新增该属性时，必须传递云服务器的实例名称，其它未传递字段会设置为默认值。会校验实例名称(如果存在后缀则加上后缀)是否超过最大位数108。</p>
                     * 
                     */
                    InstanceNameSettings GetInstanceNameSettings() const;

                    /**
                     * 设置<p>云服务器实例名（InstanceName）的相关设置。如果用户在启动配置中设置此字段，则伸缩组创建出的实例 InstanceName 参照此字段进行设置，并传递给 CVM；如果用户未在启动配置中设置此字段，则伸缩组创建出的实例 InstanceName 按照“as-{{ 伸缩组AutoScalingGroupName }}”进行设置，并传递给 CVM。新增该属性时，必须传递云服务器的实例名称，其它未传递字段会设置为默认值。会校验实例名称(如果存在后缀则加上后缀)是否超过最大位数108。</p>
                     * @param _instanceNameSettings <p>云服务器实例名（InstanceName）的相关设置。如果用户在启动配置中设置此字段，则伸缩组创建出的实例 InstanceName 参照此字段进行设置，并传递给 CVM；如果用户未在启动配置中设置此字段，则伸缩组创建出的实例 InstanceName 按照“as-{{ 伸缩组AutoScalingGroupName }}”进行设置，并传递给 CVM。新增该属性时，必须传递云服务器的实例名称，其它未传递字段会设置为默认值。会校验实例名称(如果存在后缀则加上后缀)是否超过最大位数108。</p>
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
                     * 获取<p>云盘类型选择策略，默认取值 ORIGINAL，取值范围：<li>ORIGINAL：使用设置的云盘类型</li><li>AUTOMATIC：自动选择当前可用的云盘类型</li></p>
                     * @return DiskTypePolicy <p>云盘类型选择策略，默认取值 ORIGINAL，取值范围：<li>ORIGINAL：使用设置的云盘类型</li><li>AUTOMATIC：自动选择当前可用的云盘类型</li></p>
                     * 
                     */
                    std::string GetDiskTypePolicy() const;

                    /**
                     * 设置<p>云盘类型选择策略，默认取值 ORIGINAL，取值范围：<li>ORIGINAL：使用设置的云盘类型</li><li>AUTOMATIC：自动选择当前可用的云盘类型</li></p>
                     * @param _diskTypePolicy <p>云盘类型选择策略，默认取值 ORIGINAL，取值范围：<li>ORIGINAL：使用设置的云盘类型</li><li>AUTOMATIC：自动选择当前可用的云盘类型</li></p>
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
                     * 获取<p>高性能计算集群ID。可通过调用<a href="https://cloud.tencent.com/document/product/213/83220">DescribeHpcClusters</a>接口获取该参数。注意：此字段默认为空。</p>
                     * @return HpcClusterId <p>高性能计算集群ID。可通过调用<a href="https://cloud.tencent.com/document/product/213/83220">DescribeHpcClusters</a>接口获取该参数。注意：此字段默认为空。</p>
                     * 
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置<p>高性能计算集群ID。可通过调用<a href="https://cloud.tencent.com/document/product/213/83220">DescribeHpcClusters</a>接口获取该参数。注意：此字段默认为空。</p>
                     * @param _hpcClusterId <p>高性能计算集群ID。可通过调用<a href="https://cloud.tencent.com/document/product/213/83220">DescribeHpcClusters</a>接口获取该参数。注意：此字段默认为空。</p>
                     * 
                     */
                    void SetHpcClusterId(const std::string& _hpcClusterId);

                    /**
                     * 判断参数 HpcClusterId 是否已赋值
                     * @return HpcClusterId 是否已赋值
                     * 
                     */
                    bool HpcClusterIdHasBeenSet() const;

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

                    /**
                     * 获取<p>置放群组id，仅支持指定一个。</p>
                     * @return DisasterRecoverGroupIds <p>置放群组id，仅支持指定一个。</p>
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>置放群组id，仅支持指定一个。</p>
                     * @param _disasterRecoverGroupIds <p>置放群组id，仅支持指定一个。</p>
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>镜像族名称。镜像Id与镜像族名称，二者必填一个且只能填写一个。可通过调用<a href="https://cloud.tencent.com/document/product/213/15715">DescribeImages</a>接口获取该参数。</p>
                     * @return ImageFamily <p>镜像族名称。镜像Id与镜像族名称，二者必填一个且只能填写一个。可通过调用<a href="https://cloud.tencent.com/document/product/213/15715">DescribeImages</a>接口获取该参数。</p>
                     * 
                     */
                    std::string GetImageFamily() const;

                    /**
                     * 设置<p>镜像族名称。镜像Id与镜像族名称，二者必填一个且只能填写一个。可通过调用<a href="https://cloud.tencent.com/document/product/213/15715">DescribeImages</a>接口获取该参数。</p>
                     * @param _imageFamily <p>镜像族名称。镜像Id与镜像族名称，二者必填一个且只能填写一个。可通过调用<a href="https://cloud.tencent.com/document/product/213/15715">DescribeImages</a>接口获取该参数。</p>
                     * 
                     */
                    void SetImageFamily(const std::string& _imageFamily);

                    /**
                     * 判断参数 ImageFamily 是否已赋值
                     * @return ImageFamily 是否已赋值
                     * 
                     */
                    bool ImageFamilyHasBeenSet() const;

                    /**
                     * 获取<p>本地专用集群ID。可通过 <a href="https://cloud.tencent.com/document/product/1346/73758">DescribeDedicatedClusters</a> 接口获取该参数。</p>
                     * @return DedicatedClusterId <p>本地专用集群ID。可通过 <a href="https://cloud.tencent.com/document/product/1346/73758">DescribeDedicatedClusters</a> 接口获取该参数。</p>
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置<p>本地专用集群ID。可通过 <a href="https://cloud.tencent.com/document/product/1346/73758">DescribeDedicatedClusters</a> 接口获取该参数。</p>
                     * @param _dedicatedClusterId <p>本地专用集群ID。可通过 <a href="https://cloud.tencent.com/document/product/1346/73758">DescribeDedicatedClusters</a> 接口获取该参数。</p>
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>自定义metadata。</p>
                     * @return Metadata <p>自定义metadata。</p>
                     * 
                     */
                    Metadata GetMetadata() const;

                    /**
                     * 设置<p>自定义metadata。</p>
                     * @param _metadata <p>自定义metadata。</p>
                     * 
                     */
                    void SetMetadata(const Metadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                private:

                    /**
                     * <p>启动配置显示名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。</p>
                     */
                    std::string m_launchConfigurationName;
                    bool m_launchConfigurationNameHasBeenSet;

                    /**
                     * <p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-8toqc6s3</code>。镜像Id与镜像族名称，二者必填一个且只能填写一个。镜像类型分为四种：<br/><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br/>可通过以下方式获取可用的镜像ID：<br/><li><code>公共镜像</code>、<code>自定义镜像</code>、<code>共享镜像</code>的镜像ID可通过登录<a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">控制台</a>查询；<code>服务镜像市场</code>的镜像ID可通过<a href="https://market.cloud.tencent.com/list">云市场</a>查询。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15715">DescribeImages</a> ，取返回信息中的<code>ImageId</code>字段。</li></p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>启动配置所属项目ID。默认值为0，表示使用默认项目。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/651/78725">DescribeProject</a> 的返回值中的 projectId 字段来获取。注意：伸缩组内实例所属项目ID取伸缩组项目ID，与这里取值无关。</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>实例机型。不同实例机型指定了不同的资源规格，具体取值可通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a> 来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例类型</a>描述。<code>InstanceType</code>和<code>InstanceTypes</code>参数互斥，二者必填一个且只能填写一个。</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>实例数据盘配置信息。若不指定该参数，则默认不购买数据盘，最多支持指定11块数据盘。</p>
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * <p>公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。</p>
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * <p>实例登录设置。通过该参数可以设置实例的登录方式密码、密钥或保持镜像的原始登录设置。默认情况下会随机生成密码，并以站内信方式知会到用户。</p>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * <p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的<code>SecurityGroupId</code>字段来获取。若不指定该参数，则默认不绑定安全组。</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认开启云监控、云安全服务。</p>
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * <p>经过 Base64 编码后的自定义数据，最大长度不超过16KB。</p>
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * <p>实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。<li>POSTPAID_BY_HOUR：按小时后付费</li><li>SPOTPAID：竞价付费</li><li>PREPAID：预付费，即包年包月</li><li>CDCPAID：专用集群付费</li></p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。</p>
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * <p>实例机型列表，不同实例机型指定了不同的资源规格，最多支持10种实例机型。<code>InstanceType</code>和<code>InstanceTypes</code>参数互斥，二者必填一个且只能填写一个。具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格描述</a>。</p>
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * <p>CAM角色名称。可通过<a href="https://cloud.tencent.com/document/product/598/36223">DescribeRoleList</a>接口返回值中的roleName获取。</p>
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * <p>实例类型校验策略，取值包括 ALL 和 ANY，默认取值为ANY。该参数仅在 InstanceTypes 入参包含多个机型时生效。<li> ALL，所有实例类型（InstanceType）都可用则通过校验，否则校验报错。</li><li> ANY，存在任何一个实例类型（InstanceType）可用则通过校验，否则校验报错。</li></p><p>实例类型不可用的常见原因包括该实例类型售罄、对应云盘售罄等。如果 InstanceTypes 中一款机型不存在或者已下线，则无论 InstanceTypesCheckPolicy 采用何种取值，都会校验报错。</p>
                     */
                    std::string m_instanceTypesCheckPolicy;
                    bool m_instanceTypesCheckPolicyHasBeenSet;

                    /**
                     * <p>标签列表。通过指定该参数，可以为扩容的实例绑定标签。最多支持指定10个标签。</p>
                     */
                    std::vector<InstanceTag> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * <p>标签描述列表。通过指定该参数可以支持绑定标签到启动配置。每个启动配置最多支持30个标签。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>云服务器主机名（HostName）的相关设置。不支持windows实例设置主机名。 新增该属性时，必须传递云服务器的主机名，其它未传递字段会设置为默认值。会校验主机名(如果存在后缀则加上后缀)是否超过最大位数46。</p>
                     */
                    HostNameSettings m_hostNameSettings;
                    bool m_hostNameSettingsHasBeenSet;

                    /**
                     * <p>云服务器实例名（InstanceName）的相关设置。如果用户在启动配置中设置此字段，则伸缩组创建出的实例 InstanceName 参照此字段进行设置，并传递给 CVM；如果用户未在启动配置中设置此字段，则伸缩组创建出的实例 InstanceName 按照“as-{{ 伸缩组AutoScalingGroupName }}”进行设置，并传递给 CVM。新增该属性时，必须传递云服务器的实例名称，其它未传递字段会设置为默认值。会校验实例名称(如果存在后缀则加上后缀)是否超过最大位数108。</p>
                     */
                    InstanceNameSettings m_instanceNameSettings;
                    bool m_instanceNameSettingsHasBeenSet;

                    /**
                     * <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * <p>云盘类型选择策略，默认取值 ORIGINAL，取值范围：<li>ORIGINAL：使用设置的云盘类型</li><li>AUTOMATIC：自动选择当前可用的云盘类型</li></p>
                     */
                    std::string m_diskTypePolicy;
                    bool m_diskTypePolicyHasBeenSet;

                    /**
                     * <p>高性能计算集群ID。可通过调用<a href="https://cloud.tencent.com/document/product/213/83220">DescribeHpcClusters</a>接口获取该参数。注意：此字段默认为空。</p>
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * <p>IPv6公网带宽相关信息设置。若新建实例包含IPv6地址，该参数可为新建实例的IPv6地址分配公网带宽。关联启动配置的伸缩组Ipv6AddressCount参数为0时，该参数不会生效。</p>
                     */
                    IPv6InternetAccessible m_iPv6InternetAccessible;
                    bool m_iPv6InternetAccessibleHasBeenSet;

                    /**
                     * <p>置放群组id，仅支持指定一个。</p>
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * <p>镜像族名称。镜像Id与镜像族名称，二者必填一个且只能填写一个。可通过调用<a href="https://cloud.tencent.com/document/product/213/15715">DescribeImages</a>接口获取该参数。</p>
                     */
                    std::string m_imageFamily;
                    bool m_imageFamilyHasBeenSet;

                    /**
                     * <p>本地专用集群ID。可通过 <a href="https://cloud.tencent.com/document/product/1346/73758">DescribeDedicatedClusters</a> 接口获取该参数。</p>
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * <p>自定义metadata。</p>
                     */
                    Metadata m_metadata;
                    bool m_metadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CREATELAUNCHCONFIGURATIONREQUEST_H_
