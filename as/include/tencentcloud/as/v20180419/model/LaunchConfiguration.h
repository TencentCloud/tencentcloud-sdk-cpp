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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_LAUNCHCONFIGURATION_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_LAUNCHCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/SystemDisk.h>
#include <tencentcloud/as/v20180419/model/DataDisk.h>
#include <tencentcloud/as/v20180419/model/LimitedLoginSettings.h>
#include <tencentcloud/as/v20180419/model/InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/AutoScalingGroupAbstract.h>
#include <tencentcloud/as/v20180419/model/EnhancedService.h>
#include <tencentcloud/as/v20180419/model/InstanceMarketOptionsRequest.h>
#include <tencentcloud/as/v20180419/model/InstanceTag.h>
#include <tencentcloud/as/v20180419/model/Tag.h>
#include <tencentcloud/as/v20180419/model/HostNameSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceNameSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceChargePrepaid.h>
#include <tencentcloud/as/v20180419/model/IPv6InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/NetworkInterface.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 符合条件的启动配置信息的集合。
                */
                class LaunchConfiguration : public AbstractModel
                {
                public:
                    LaunchConfiguration();
                    ~LaunchConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例所属项目ID。</p>
                     * @return ProjectId <p>实例所属项目ID。</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>实例所属项目ID。</p>
                     * @param _projectId <p>实例所属项目ID。</p>
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
                     * 获取<p>启动配置名称。</p>
                     * @return LaunchConfigurationName <p>启动配置名称。</p>
                     * 
                     */
                    std::string GetLaunchConfigurationName() const;

                    /**
                     * 设置<p>启动配置名称。</p>
                     * @param _launchConfigurationName <p>启动配置名称。</p>
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
                     * 获取<p>实例机型。</p>
                     * @return InstanceType <p>实例机型。</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例机型。</p>
                     * @param _instanceType <p>实例机型。</p>
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
                     * 获取<p>实例系统盘配置信息。</p>
                     * @return SystemDisk <p>实例系统盘配置信息。</p>
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置<p>实例系统盘配置信息。</p>
                     * @param _systemDisk <p>实例系统盘配置信息。</p>
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
                     * 获取<p>实例数据盘配置信息。</p>
                     * @return DataDisks <p>实例数据盘配置信息。</p>
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置<p>实例数据盘配置信息。</p>
                     * @param _dataDisks <p>实例数据盘配置信息。</p>
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
                     * 获取<p>实例登录设置。</p>
                     * @return LoginSettings <p>实例登录设置。</p>
                     * 
                     */
                    LimitedLoginSettings GetLoginSettings() const;

                    /**
                     * 设置<p>实例登录设置。</p>
                     * @param _loginSettings <p>实例登录设置。</p>
                     * 
                     */
                    void SetLoginSettings(const LimitedLoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取<p>公网带宽相关信息设置。</p>
                     * @return InternetAccessible <p>公网带宽相关信息设置。</p>
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置<p>公网带宽相关信息设置。</p>
                     * @param _internetAccessible <p>公网带宽相关信息设置。</p>
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
                     * 获取<p>实例所属安全组。</p>
                     * @return SecurityGroupIds <p>实例所属安全组。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>实例所属安全组。</p>
                     * @param _securityGroupIds <p>实例所属安全组。</p>
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
                     * 获取<p>启动配置关联的伸缩组。</p>
                     * @return AutoScalingGroupAbstractSet <p>启动配置关联的伸缩组。</p>
                     * 
                     */
                    std::vector<AutoScalingGroupAbstract> GetAutoScalingGroupAbstractSet() const;

                    /**
                     * 设置<p>启动配置关联的伸缩组。</p>
                     * @param _autoScalingGroupAbstractSet <p>启动配置关联的伸缩组。</p>
                     * 
                     */
                    void SetAutoScalingGroupAbstractSet(const std::vector<AutoScalingGroupAbstract>& _autoScalingGroupAbstractSet);

                    /**
                     * 判断参数 AutoScalingGroupAbstractSet 是否已赋值
                     * @return AutoScalingGroupAbstractSet 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupAbstractSetHasBeenSet() const;

                    /**
                     * 获取<p>自定义数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserData <p>自定义数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置<p>自定义数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userData <p>自定义数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>启动配置创建时间，为标准<code>UTC</code>时间。</p>
                     * @return CreatedTime <p>启动配置创建时间，为标准<code>UTC</code>时间。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>启动配置创建时间，为标准<code>UTC</code>时间。</p>
                     * @param _createdTime <p>启动配置创建时间，为标准<code>UTC</code>时间。</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>实例的增强服务启用情况与其设置。</p>
                     * @return EnhancedService <p>实例的增强服务启用情况与其设置。</p>
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置<p>实例的增强服务启用情况与其设置。</p>
                     * @param _enhancedService <p>实例的增强服务启用情况与其设置。</p>
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
                     * 获取<p>镜像ID。</p>
                     * @return ImageId <p>镜像ID。</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>镜像ID。</p>
                     * @param _imageId <p>镜像ID。</p>
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
                     * 获取<p>启动配置当前状态。取值范围：<li>NORMAL：正常</li><li>IMAGE_ABNORMAL：启动配置镜像异常</li><li>CBS_SNAP_ABNORMAL：启动配置数据盘快照异常</li><li>SECURITY_GROUP_ABNORMAL：启动配置安全组异常</li></p>
                     * @return LaunchConfigurationStatus <p>启动配置当前状态。取值范围：<li>NORMAL：正常</li><li>IMAGE_ABNORMAL：启动配置镜像异常</li><li>CBS_SNAP_ABNORMAL：启动配置数据盘快照异常</li><li>SECURITY_GROUP_ABNORMAL：启动配置安全组异常</li></p>
                     * 
                     */
                    std::string GetLaunchConfigurationStatus() const;

                    /**
                     * 设置<p>启动配置当前状态。取值范围：<li>NORMAL：正常</li><li>IMAGE_ABNORMAL：启动配置镜像异常</li><li>CBS_SNAP_ABNORMAL：启动配置数据盘快照异常</li><li>SECURITY_GROUP_ABNORMAL：启动配置安全组异常</li></p>
                     * @param _launchConfigurationStatus <p>启动配置当前状态。取值范围：<li>NORMAL：正常</li><li>IMAGE_ABNORMAL：启动配置镜像异常</li><li>CBS_SNAP_ABNORMAL：启动配置数据盘快照异常</li><li>SECURITY_GROUP_ABNORMAL：启动配置安全组异常</li></p>
                     * 
                     */
                    void SetLaunchConfigurationStatus(const std::string& _launchConfigurationStatus);

                    /**
                     * 判断参数 LaunchConfigurationStatus 是否已赋值
                     * @return LaunchConfigurationStatus 是否已赋值
                     * 
                     */
                    bool LaunchConfigurationStatusHasBeenSet() const;

                    /**
                     * 获取<p>实例计费类型，取值范围如下：</p><li>POSTPAID_BY_HOUR：按小时后付费</li><li>SPOTPAID：竞价付费</li><li>PREPAID：预付费，即包年包月</li><li>CDCPAID：专用集群付费</li>
                     * @return InstanceChargeType <p>实例计费类型，取值范围如下：</p><li>POSTPAID_BY_HOUR：按小时后付费</li><li>SPOTPAID：竞价付费</li><li>PREPAID：预付费，即包年包月</li><li>CDCPAID：专用集群付费</li>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>实例计费类型，取值范围如下：</p><li>POSTPAID_BY_HOUR：按小时后付费</li><li>SPOTPAID：竞价付费</li><li>PREPAID：预付费，即包年包月</li><li>CDCPAID：专用集群付费</li>
                     * @param _instanceChargeType <p>实例计费类型，取值范围如下：</p><li>POSTPAID_BY_HOUR：按小时后付费</li><li>SPOTPAID：竞价付费</li><li>PREPAID：预付费，即包年包月</li><li>CDCPAID：专用集群付费</li>
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceMarketOptions <p>实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置<p>实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceMarketOptions <p>实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>实例机型列表。</p>
                     * @return InstanceTypes <p>实例机型列表。</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置<p>实例机型列表。</p>
                     * @param _instanceTypes <p>实例机型列表。</p>
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
                     * 获取<p>实例标签列表。扩容出来的实例会自动带上标签，最多支持10个标签。</p>
                     * @return InstanceTags <p>实例标签列表。扩容出来的实例会自动带上标签，最多支持10个标签。</p>
                     * 
                     */
                    std::vector<InstanceTag> GetInstanceTags() const;

                    /**
                     * 设置<p>实例标签列表。扩容出来的实例会自动带上标签，最多支持10个标签。</p>
                     * @param _instanceTags <p>实例标签列表。扩容出来的实例会自动带上标签，最多支持10个标签。</p>
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
                     * 获取<p>标签列表，该参数内的标签仅用于绑定启动配置，不会传递给基于该启动配置扩容的 CVM 实例。</p>
                     * @return Tags <p>标签列表，该参数内的标签仅用于绑定启动配置，不会传递给基于该启动配置扩容的 CVM 实例。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表，该参数内的标签仅用于绑定启动配置，不会传递给基于该启动配置扩容的 CVM 实例。</p>
                     * @param _tags <p>标签列表，该参数内的标签仅用于绑定启动配置，不会传递给基于该启动配置扩容的 CVM 实例。</p>
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
                     * 获取<p>版本号。</p>
                     * @return VersionNumber <p>版本号。</p>
                     * 
                     */
                    int64_t GetVersionNumber() const;

                    /**
                     * 设置<p>版本号。</p>
                     * @param _versionNumber <p>版本号。</p>
                     * 
                     */
                    void SetVersionNumber(const int64_t& _versionNumber);

                    /**
                     * 判断参数 VersionNumber 是否已赋值
                     * @return VersionNumber 是否已赋值
                     * 
                     */
                    bool VersionNumberHasBeenSet() const;

                    /**
                     * 获取<p>更新时间，为标准<code>UTC</code>时间。</p>
                     * @return UpdatedTime <p>更新时间，为标准<code>UTC</code>时间。</p>
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置<p>更新时间，为标准<code>UTC</code>时间。</p>
                     * @param _updatedTime <p>更新时间，为标准<code>UTC</code>时间。</p>
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

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
                     * 获取<p>上次操作时，InstanceTypesCheckPolicy 取值。</p>
                     * @return LastOperationInstanceTypesCheckPolicy <p>上次操作时，InstanceTypesCheckPolicy 取值。</p>
                     * 
                     */
                    std::string GetLastOperationInstanceTypesCheckPolicy() const;

                    /**
                     * 设置<p>上次操作时，InstanceTypesCheckPolicy 取值。</p>
                     * @param _lastOperationInstanceTypesCheckPolicy <p>上次操作时，InstanceTypesCheckPolicy 取值。</p>
                     * 
                     */
                    void SetLastOperationInstanceTypesCheckPolicy(const std::string& _lastOperationInstanceTypesCheckPolicy);

                    /**
                     * 判断参数 LastOperationInstanceTypesCheckPolicy 是否已赋值
                     * @return LastOperationInstanceTypesCheckPolicy 是否已赋值
                     * 
                     */
                    bool LastOperationInstanceTypesCheckPolicyHasBeenSet() const;

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
                     * 获取<p>云盘类型选择策略。取值范围：<li>ORIGINAL：使用设置的云盘类型</li><li>AUTOMATIC：自动选择当前可用区下可用的云盘类型</li></p>
                     * @return DiskTypePolicy <p>云盘类型选择策略。取值范围：<li>ORIGINAL：使用设置的云盘类型</li><li>AUTOMATIC：自动选择当前可用区下可用的云盘类型</li></p>
                     * 
                     */
                    std::string GetDiskTypePolicy() const;

                    /**
                     * 设置<p>云盘类型选择策略。取值范围：<li>ORIGINAL：使用设置的云盘类型</li><li>AUTOMATIC：自动选择当前可用区下可用的云盘类型</li></p>
                     * @param _diskTypePolicy <p>云盘类型选择策略。取值范围：<li>ORIGINAL：使用设置的云盘类型</li><li>AUTOMATIC：自动选择当前可用区下可用的云盘类型</li></p>
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
                     * 获取<p>高性能计算集群ID。<br><br>注意：此字段默认为空。</p>
                     * @return HpcClusterId <p>高性能计算集群ID。<br><br>注意：此字段默认为空。</p>
                     * 
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置<p>高性能计算集群ID。<br><br>注意：此字段默认为空。</p>
                     * @param _hpcClusterId <p>高性能计算集群ID。<br><br>注意：此字段默认为空。</p>
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
                     * 获取<p>IPv6公网带宽相关信息设置。</p>
                     * @return IPv6InternetAccessible <p>IPv6公网带宽相关信息设置。</p>
                     * 
                     */
                    IPv6InternetAccessible GetIPv6InternetAccessible() const;

                    /**
                     * 设置<p>IPv6公网带宽相关信息设置。</p>
                     * @param _iPv6InternetAccessible <p>IPv6公网带宽相关信息设置。</p>
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
                     * 获取<p>镜像族名称。</p>
                     * @return ImageFamily <p>镜像族名称。</p>
                     * 
                     */
                    std::string GetImageFamily() const;

                    /**
                     * 设置<p>镜像族名称。</p>
                     * @param _imageFamily <p>镜像族名称。</p>
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
                     * 获取<p>本地专用集群 ID。</p>
                     * @return DedicatedClusterId <p>本地专用集群 ID。</p>
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置<p>本地专用集群 ID。</p>
                     * @param _dedicatedClusterId <p>本地专用集群 ID。</p>
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
                     * 获取<p>启动配置的弹性网卡配置。</p>
                     * @return NetworkInterfaces <p>启动配置的弹性网卡配置。</p>
                     * 
                     */
                    std::vector<NetworkInterface> GetNetworkInterfaces() const;

                    /**
                     * 设置<p>启动配置的弹性网卡配置。</p>
                     * @param _networkInterfaces <p>启动配置的弹性网卡配置。</p>
                     * 
                     */
                    void SetNetworkInterfaces(const std::vector<NetworkInterface>& _networkInterfaces);

                    /**
                     * 判断参数 NetworkInterfaces 是否已赋值
                     * @return NetworkInterfaces 是否已赋值
                     * 
                     */
                    bool NetworkInterfacesHasBeenSet() const;

                private:

                    /**
                     * <p>实例所属项目ID。</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>启动配置ID。</p>
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * <p>启动配置名称。</p>
                     */
                    std::string m_launchConfigurationName;
                    bool m_launchConfigurationNameHasBeenSet;

                    /**
                     * <p>实例机型。</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>实例系统盘配置信息。</p>
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>实例数据盘配置信息。</p>
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * <p>实例登录设置。</p>
                     */
                    LimitedLoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * <p>公网带宽相关信息设置。</p>
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * <p>实例所属安全组。</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>启动配置关联的伸缩组。</p>
                     */
                    std::vector<AutoScalingGroupAbstract> m_autoScalingGroupAbstractSet;
                    bool m_autoScalingGroupAbstractSetHasBeenSet;

                    /**
                     * <p>自定义数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * <p>启动配置创建时间，为标准<code>UTC</code>时间。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>实例的增强服务启用情况与其设置。</p>
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * <p>镜像ID。</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>启动配置当前状态。取值范围：<li>NORMAL：正常</li><li>IMAGE_ABNORMAL：启动配置镜像异常</li><li>CBS_SNAP_ABNORMAL：启动配置数据盘快照异常</li><li>SECURITY_GROUP_ABNORMAL：启动配置安全组异常</li></p>
                     */
                    std::string m_launchConfigurationStatus;
                    bool m_launchConfigurationStatusHasBeenSet;

                    /**
                     * <p>实例计费类型，取值范围如下：</p><li>POSTPAID_BY_HOUR：按小时后付费</li><li>SPOTPAID：竞价付费</li><li>PREPAID：预付费，即包年包月</li><li>CDCPAID：专用集群付费</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * <p>实例机型列表。</p>
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * <p>实例标签列表。扩容出来的实例会自动带上标签，最多支持10个标签。</p>
                     */
                    std::vector<InstanceTag> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * <p>标签列表，该参数内的标签仅用于绑定启动配置，不会传递给基于该启动配置扩容的 CVM 实例。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>版本号。</p>
                     */
                    int64_t m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * <p>更新时间，为标准<code>UTC</code>时间。</p>
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * <p>CAM角色名称。可通过<a href="https://cloud.tencent.com/document/product/598/36223">DescribeRoleList</a>接口返回值中的roleName获取。</p>
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * <p>上次操作时，InstanceTypesCheckPolicy 取值。</p>
                     */
                    std::string m_lastOperationInstanceTypesCheckPolicy;
                    bool m_lastOperationInstanceTypesCheckPolicyHasBeenSet;

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
                     * <p>云盘类型选择策略。取值范围：<li>ORIGINAL：使用设置的云盘类型</li><li>AUTOMATIC：自动选择当前可用区下可用的云盘类型</li></p>
                     */
                    std::string m_diskTypePolicy;
                    bool m_diskTypePolicyHasBeenSet;

                    /**
                     * <p>高性能计算集群ID。<br><br>注意：此字段默认为空。</p>
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * <p>IPv6公网带宽相关信息设置。</p>
                     */
                    IPv6InternetAccessible m_iPv6InternetAccessible;
                    bool m_iPv6InternetAccessibleHasBeenSet;

                    /**
                     * <p>置放群组id，仅支持指定一个。</p>
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * <p>镜像族名称。</p>
                     */
                    std::string m_imageFamily;
                    bool m_imageFamilyHasBeenSet;

                    /**
                     * <p>本地专用集群 ID。</p>
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * <p>启动配置的弹性网卡配置。</p>
                     */
                    std::vector<NetworkInterface> m_networkInterfaces;
                    bool m_networkInterfacesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_LAUNCHCONFIGURATION_H_
