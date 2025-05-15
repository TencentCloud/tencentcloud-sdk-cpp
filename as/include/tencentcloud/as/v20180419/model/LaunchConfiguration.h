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
                     * 获取实例所属项目ID。
                     * @return ProjectId 实例所属项目ID。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置实例所属项目ID。
                     * @param _projectId 实例所属项目ID。
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
                     * 获取启动配置ID。
                     * @return LaunchConfigurationId 启动配置ID。
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置启动配置ID。
                     * @param _launchConfigurationId 启动配置ID。
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
                     * 获取启动配置名称。
                     * @return LaunchConfigurationName 启动配置名称。
                     * 
                     */
                    std::string GetLaunchConfigurationName() const;

                    /**
                     * 设置启动配置名称。
                     * @param _launchConfigurationName 启动配置名称。
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
                     * 获取实例机型。
                     * @return InstanceType 实例机型。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例机型。
                     * @param _instanceType 实例机型。
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
                     * 获取实例系统盘配置信息。
                     * @return SystemDisk 实例系统盘配置信息。
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置实例系统盘配置信息。
                     * @param _systemDisk 实例系统盘配置信息。
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
                     * 获取实例数据盘配置信息。
                     * @return DataDisks 实例数据盘配置信息。
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置实例数据盘配置信息。
                     * @param _dataDisks 实例数据盘配置信息。
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
                     * 获取实例登录设置。
                     * @return LoginSettings 实例登录设置。
                     * 
                     */
                    LimitedLoginSettings GetLoginSettings() const;

                    /**
                     * 设置实例登录设置。
                     * @param _loginSettings 实例登录设置。
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
                     * 获取公网带宽相关信息设置。
                     * @return InternetAccessible 公网带宽相关信息设置。
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置公网带宽相关信息设置。
                     * @param _internetAccessible 公网带宽相关信息设置。
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
                     * 获取实例所属安全组。
                     * @return SecurityGroupIds 实例所属安全组。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置实例所属安全组。
                     * @param _securityGroupIds 实例所属安全组。
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
                     * 获取启动配置关联的伸缩组。
                     * @return AutoScalingGroupAbstractSet 启动配置关联的伸缩组。
                     * 
                     */
                    std::vector<AutoScalingGroupAbstract> GetAutoScalingGroupAbstractSet() const;

                    /**
                     * 设置启动配置关联的伸缩组。
                     * @param _autoScalingGroupAbstractSet 启动配置关联的伸缩组。
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
                     * 获取自定义数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserData 自定义数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置自定义数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userData 自定义数据。
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
                     * 获取启动配置创建时间，为标准`UTC`时间。
                     * @return CreatedTime 启动配置创建时间，为标准`UTC`时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置启动配置创建时间，为标准`UTC`时间。
                     * @param _createdTime 启动配置创建时间，为标准`UTC`时间。
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
                     * 获取实例的增强服务启用情况与其设置。
                     * @return EnhancedService 实例的增强服务启用情况与其设置。
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置实例的增强服务启用情况与其设置。
                     * @param _enhancedService 实例的增强服务启用情况与其设置。
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
                     * 获取镜像ID。
                     * @return ImageId 镜像ID。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像ID。
                     * @param _imageId 镜像ID。
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
                     * 获取启动配置当前状态。取值范围：<li>NORMAL：正常</li><li>IMAGE_ABNORMAL：启动配置镜像异常</li><li>CBS_SNAP_ABNORMAL：启动配置数据盘快照异常</li><li>SECURITY_GROUP_ABNORMAL：启动配置安全组异常</li>
                     * @return LaunchConfigurationStatus 启动配置当前状态。取值范围：<li>NORMAL：正常</li><li>IMAGE_ABNORMAL：启动配置镜像异常</li><li>CBS_SNAP_ABNORMAL：启动配置数据盘快照异常</li><li>SECURITY_GROUP_ABNORMAL：启动配置安全组异常</li>
                     * 
                     */
                    std::string GetLaunchConfigurationStatus() const;

                    /**
                     * 设置启动配置当前状态。取值范围：<li>NORMAL：正常</li><li>IMAGE_ABNORMAL：启动配置镜像异常</li><li>CBS_SNAP_ABNORMAL：启动配置数据盘快照异常</li><li>SECURITY_GROUP_ABNORMAL：启动配置安全组异常</li>
                     * @param _launchConfigurationStatus 启动配置当前状态。取值范围：<li>NORMAL：正常</li><li>IMAGE_ABNORMAL：启动配置镜像异常</li><li>CBS_SNAP_ABNORMAL：启动配置数据盘快照异常</li><li>SECURITY_GROUP_ABNORMAL：启动配置安全组异常</li>
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
                     * 获取实例计费类型，取值范围如下：
<li>POSTPAID_BY_HOUR：按小时后付费</li>
<li>SPOTPAID：竞价付费</li>
<li>PREPAID：预付费，即包年包月</li>
<li>CDCPAID：专用集群付费</li>
                     * @return InstanceChargeType 实例计费类型，取值范围如下：
<li>POSTPAID_BY_HOUR：按小时后付费</li>
<li>SPOTPAID：竞价付费</li>
<li>PREPAID：预付费，即包年包月</li>
<li>CDCPAID：专用集群付费</li>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费类型，取值范围如下：
<li>POSTPAID_BY_HOUR：按小时后付费</li>
<li>SPOTPAID：竞价付费</li>
<li>PREPAID：预付费，即包年包月</li>
<li>CDCPAID：专用集群付费</li>
                     * @param _instanceChargeType 实例计费类型，取值范围如下：
<li>POSTPAID_BY_HOUR：按小时后付费</li>
<li>SPOTPAID：竞价付费</li>
<li>PREPAID：预付费，即包年包月</li>
<li>CDCPAID：专用集群付费</li>
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
                     * 获取实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceMarketOptions 实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceMarketOptions 实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
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
                     * 获取实例机型列表。
                     * @return InstanceTypes 实例机型列表。
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置实例机型列表。
                     * @param _instanceTypes 实例机型列表。
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
                     * 获取实例标签列表。扩容出来的实例会自动带上标签，最多支持10个标签。
                     * @return InstanceTags 实例标签列表。扩容出来的实例会自动带上标签，最多支持10个标签。
                     * 
                     */
                    std::vector<InstanceTag> GetInstanceTags() const;

                    /**
                     * 设置实例标签列表。扩容出来的实例会自动带上标签，最多支持10个标签。
                     * @param _instanceTags 实例标签列表。扩容出来的实例会自动带上标签，最多支持10个标签。
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
                     * 获取标签列表，该参数内的标签仅用于绑定启动配置，不会传递给基于该启动配置扩容的 CVM 实例。
                     * @return Tags 标签列表，该参数内的标签仅用于绑定启动配置，不会传递给基于该启动配置扩容的 CVM 实例。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表，该参数内的标签仅用于绑定启动配置，不会传递给基于该启动配置扩容的 CVM 实例。
                     * @param _tags 标签列表，该参数内的标签仅用于绑定启动配置，不会传递给基于该启动配置扩容的 CVM 实例。
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
                     * 获取版本号。
                     * @return VersionNumber 版本号。
                     * 
                     */
                    int64_t GetVersionNumber() const;

                    /**
                     * 设置版本号。
                     * @param _versionNumber 版本号。
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
                     * 获取更新时间，为标准`UTC`时间。
                     * @return UpdatedTime 更新时间，为标准`UTC`时间。
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置更新时间，为标准`UTC`时间。
                     * @param _updatedTime 更新时间，为标准`UTC`时间。
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
                     * 获取CAM角色名称。可通过[DescribeRoleList](https://cloud.tencent.com/document/product/598/36223)接口返回值中的roleName获取。
                     * @return CamRoleName CAM角色名称。可通过[DescribeRoleList](https://cloud.tencent.com/document/product/598/36223)接口返回值中的roleName获取。
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置CAM角色名称。可通过[DescribeRoleList](https://cloud.tencent.com/document/product/598/36223)接口返回值中的roleName获取。
                     * @param _camRoleName CAM角色名称。可通过[DescribeRoleList](https://cloud.tencent.com/document/product/598/36223)接口返回值中的roleName获取。
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
                     * 获取上次操作时，InstanceTypesCheckPolicy 取值。
                     * @return LastOperationInstanceTypesCheckPolicy 上次操作时，InstanceTypesCheckPolicy 取值。
                     * 
                     */
                    std::string GetLastOperationInstanceTypesCheckPolicy() const;

                    /**
                     * 设置上次操作时，InstanceTypesCheckPolicy 取值。
                     * @param _lastOperationInstanceTypesCheckPolicy 上次操作时，InstanceTypesCheckPolicy 取值。
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
                     * 获取云服务器主机名（HostName）的相关设置。
                     * @return HostNameSettings 云服务器主机名（HostName）的相关设置。
                     * 
                     */
                    HostNameSettings GetHostNameSettings() const;

                    /**
                     * 设置云服务器主机名（HostName）的相关设置。
                     * @param _hostNameSettings 云服务器主机名（HostName）的相关设置。
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
                     * 获取云服务器实例名（InstanceName）的相关设置。
                     * @return InstanceNameSettings 云服务器实例名（InstanceName）的相关设置。
                     * 
                     */
                    InstanceNameSettings GetInstanceNameSettings() const;

                    /**
                     * 设置云服务器实例名（InstanceName）的相关设置。
                     * @param _instanceNameSettings 云服务器实例名（InstanceName）的相关设置。
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
                     * 获取预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @return InstanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @param _instanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
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
                     * 获取云盘类型选择策略。取值范围：<li>ORIGINAL：使用设置的云盘类型</li><li>AUTOMATIC：自动选择当前可用区下可用的云盘类型</li>
                     * @return DiskTypePolicy 云盘类型选择策略。取值范围：<li>ORIGINAL：使用设置的云盘类型</li><li>AUTOMATIC：自动选择当前可用区下可用的云盘类型</li>
                     * 
                     */
                    std::string GetDiskTypePolicy() const;

                    /**
                     * 设置云盘类型选择策略。取值范围：<li>ORIGINAL：使用设置的云盘类型</li><li>AUTOMATIC：自动选择当前可用区下可用的云盘类型</li>
                     * @param _diskTypePolicy 云盘类型选择策略。取值范围：<li>ORIGINAL：使用设置的云盘类型</li><li>AUTOMATIC：自动选择当前可用区下可用的云盘类型</li>
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
                     * 获取高性能计算集群ID。<br>
注意：此字段默认为空。
                     * @return HpcClusterId 高性能计算集群ID。<br>
注意：此字段默认为空。
                     * 
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置高性能计算集群ID。<br>
注意：此字段默认为空。
                     * @param _hpcClusterId 高性能计算集群ID。<br>
注意：此字段默认为空。
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
                     * 获取IPv6公网带宽相关信息设置。
                     * @return IPv6InternetAccessible IPv6公网带宽相关信息设置。
                     * 
                     */
                    IPv6InternetAccessible GetIPv6InternetAccessible() const;

                    /**
                     * 设置IPv6公网带宽相关信息设置。
                     * @param _iPv6InternetAccessible IPv6公网带宽相关信息设置。
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
                     * 获取置放群组id，仅支持指定一个。
                     * @return DisasterRecoverGroupIds 置放群组id，仅支持指定一个。
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置置放群组id，仅支持指定一个。
                     * @param _disasterRecoverGroupIds 置放群组id，仅支持指定一个。
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
                     * 获取镜像族名称。
                     * @return ImageFamily 镜像族名称。
                     * 
                     */
                    std::string GetImageFamily() const;

                    /**
                     * 设置镜像族名称。
                     * @param _imageFamily 镜像族名称。
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
                     * 获取本地专用集群 ID。
                     * @return DedicatedClusterId 本地专用集群 ID。
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置本地专用集群 ID。
                     * @param _dedicatedClusterId 本地专用集群 ID。
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                private:

                    /**
                     * 实例所属项目ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 启动配置ID。
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * 启动配置名称。
                     */
                    std::string m_launchConfigurationName;
                    bool m_launchConfigurationNameHasBeenSet;

                    /**
                     * 实例机型。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例系统盘配置信息。
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 实例数据盘配置信息。
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * 实例登录设置。
                     */
                    LimitedLoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * 公网带宽相关信息设置。
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * 实例所属安全组。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 启动配置关联的伸缩组。
                     */
                    std::vector<AutoScalingGroupAbstract> m_autoScalingGroupAbstractSet;
                    bool m_autoScalingGroupAbstractSetHasBeenSet;

                    /**
                     * 自定义数据。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 启动配置创建时间，为标准`UTC`时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 实例的增强服务启用情况与其设置。
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * 镜像ID。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 启动配置当前状态。取值范围：<li>NORMAL：正常</li><li>IMAGE_ABNORMAL：启动配置镜像异常</li><li>CBS_SNAP_ABNORMAL：启动配置数据盘快照异常</li><li>SECURITY_GROUP_ABNORMAL：启动配置安全组异常</li>
                     */
                    std::string m_launchConfigurationStatus;
                    bool m_launchConfigurationStatusHasBeenSet;

                    /**
                     * 实例计费类型，取值范围如下：
<li>POSTPAID_BY_HOUR：按小时后付费</li>
<li>SPOTPAID：竞价付费</li>
<li>PREPAID：预付费，即包年包月</li>
<li>CDCPAID：专用集群付费</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * 实例机型列表。
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * 实例标签列表。扩容出来的实例会自动带上标签，最多支持10个标签。
                     */
                    std::vector<InstanceTag> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * 标签列表，该参数内的标签仅用于绑定启动配置，不会传递给基于该启动配置扩容的 CVM 实例。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 版本号。
                     */
                    int64_t m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * 更新时间，为标准`UTC`时间。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * CAM角色名称。可通过[DescribeRoleList](https://cloud.tencent.com/document/product/598/36223)接口返回值中的roleName获取。
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * 上次操作时，InstanceTypesCheckPolicy 取值。
                     */
                    std::string m_lastOperationInstanceTypesCheckPolicy;
                    bool m_lastOperationInstanceTypesCheckPolicyHasBeenSet;

                    /**
                     * 云服务器主机名（HostName）的相关设置。
                     */
                    HostNameSettings m_hostNameSettings;
                    bool m_hostNameSettingsHasBeenSet;

                    /**
                     * 云服务器实例名（InstanceName）的相关设置。
                     */
                    InstanceNameSettings m_instanceNameSettings;
                    bool m_instanceNameSettingsHasBeenSet;

                    /**
                     * 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * 云盘类型选择策略。取值范围：<li>ORIGINAL：使用设置的云盘类型</li><li>AUTOMATIC：自动选择当前可用区下可用的云盘类型</li>
                     */
                    std::string m_diskTypePolicy;
                    bool m_diskTypePolicyHasBeenSet;

                    /**
                     * 高性能计算集群ID。<br>
注意：此字段默认为空。
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * IPv6公网带宽相关信息设置。
                     */
                    IPv6InternetAccessible m_iPv6InternetAccessible;
                    bool m_iPv6InternetAccessibleHasBeenSet;

                    /**
                     * 置放群组id，仅支持指定一个。
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * 镜像族名称。
                     */
                    std::string m_imageFamily;
                    bool m_imageFamilyHasBeenSet;

                    /**
                     * 本地专用集群 ID。
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_LAUNCHCONFIGURATION_H_
