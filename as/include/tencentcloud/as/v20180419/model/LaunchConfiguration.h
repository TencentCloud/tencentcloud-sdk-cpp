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
#include <tencentcloud/as/v20180419/model/HostNameSettings.h>


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
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置实例所属项目ID。
                     * @param ProjectId 实例所属项目ID。
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取启动配置ID。
                     * @return LaunchConfigurationId 启动配置ID。
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置启动配置ID。
                     * @param LaunchConfigurationId 启动配置ID。
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                    /**
                     * 获取启动配置名称。
                     * @return LaunchConfigurationName 启动配置名称。
                     */
                    std::string GetLaunchConfigurationName() const;

                    /**
                     * 设置启动配置名称。
                     * @param LaunchConfigurationName 启动配置名称。
                     */
                    void SetLaunchConfigurationName(const std::string& _launchConfigurationName);

                    /**
                     * 判断参数 LaunchConfigurationName 是否已赋值
                     * @return LaunchConfigurationName 是否已赋值
                     */
                    bool LaunchConfigurationNameHasBeenSet() const;

                    /**
                     * 获取实例机型。
                     * @return InstanceType 实例机型。
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例机型。
                     * @param InstanceType 实例机型。
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例系统盘配置信息。
                     * @return SystemDisk 实例系统盘配置信息。
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置实例系统盘配置信息。
                     * @param SystemDisk 实例系统盘配置信息。
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取实例数据盘配置信息。
                     * @return DataDisks 实例数据盘配置信息。
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置实例数据盘配置信息。
                     * @param DataDisks 实例数据盘配置信息。
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取实例登录设置。
                     * @return LoginSettings 实例登录设置。
                     */
                    LimitedLoginSettings GetLoginSettings() const;

                    /**
                     * 设置实例登录设置。
                     * @param LoginSettings 实例登录设置。
                     */
                    void SetLoginSettings(const LimitedLoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取公网带宽相关信息设置。
                     * @return InternetAccessible 公网带宽相关信息设置。
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置公网带宽相关信息设置。
                     * @param InternetAccessible 公网带宽相关信息设置。
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取实例所属安全组。
                     * @return SecurityGroupIds 实例所属安全组。
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置实例所属安全组。
                     * @param SecurityGroupIds 实例所属安全组。
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取启动配置关联的伸缩组。
                     * @return AutoScalingGroupAbstractSet 启动配置关联的伸缩组。
                     */
                    std::vector<AutoScalingGroupAbstract> GetAutoScalingGroupAbstractSet() const;

                    /**
                     * 设置启动配置关联的伸缩组。
                     * @param AutoScalingGroupAbstractSet 启动配置关联的伸缩组。
                     */
                    void SetAutoScalingGroupAbstractSet(const std::vector<AutoScalingGroupAbstract>& _autoScalingGroupAbstractSet);

                    /**
                     * 判断参数 AutoScalingGroupAbstractSet 是否已赋值
                     * @return AutoScalingGroupAbstractSet 是否已赋值
                     */
                    bool AutoScalingGroupAbstractSetHasBeenSet() const;

                    /**
                     * 获取自定义数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserData 自定义数据。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置自定义数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserData 自定义数据。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取启动配置创建时间。
                     * @return CreatedTime 启动配置创建时间。
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置启动配置创建时间。
                     * @param CreatedTime 启动配置创建时间。
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取实例的增强服务启用情况与其设置。
                     * @return EnhancedService 实例的增强服务启用情况与其设置。
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置实例的增强服务启用情况与其设置。
                     * @param EnhancedService 实例的增强服务启用情况与其设置。
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取镜像ID。
                     * @return ImageId 镜像ID。
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像ID。
                     * @param ImageId 镜像ID。
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取启动配置当前状态。取值范围：<br><li>NORMAL：正常<br><li>IMAGE_ABNORMAL：启动配置镜像异常<br><li>CBS_SNAP_ABNORMAL：启动配置数据盘快照异常<br><li>SECURITY_GROUP_ABNORMAL：启动配置安全组异常<br>
                     * @return LaunchConfigurationStatus 启动配置当前状态。取值范围：<br><li>NORMAL：正常<br><li>IMAGE_ABNORMAL：启动配置镜像异常<br><li>CBS_SNAP_ABNORMAL：启动配置数据盘快照异常<br><li>SECURITY_GROUP_ABNORMAL：启动配置安全组异常<br>
                     */
                    std::string GetLaunchConfigurationStatus() const;

                    /**
                     * 设置启动配置当前状态。取值范围：<br><li>NORMAL：正常<br><li>IMAGE_ABNORMAL：启动配置镜像异常<br><li>CBS_SNAP_ABNORMAL：启动配置数据盘快照异常<br><li>SECURITY_GROUP_ABNORMAL：启动配置安全组异常<br>
                     * @param LaunchConfigurationStatus 启动配置当前状态。取值范围：<br><li>NORMAL：正常<br><li>IMAGE_ABNORMAL：启动配置镜像异常<br><li>CBS_SNAP_ABNORMAL：启动配置数据盘快照异常<br><li>SECURITY_GROUP_ABNORMAL：启动配置安全组异常<br>
                     */
                    void SetLaunchConfigurationStatus(const std::string& _launchConfigurationStatus);

                    /**
                     * 判断参数 LaunchConfigurationStatus 是否已赋值
                     * @return LaunchConfigurationStatus 是否已赋值
                     */
                    bool LaunchConfigurationStatusHasBeenSet() const;

                    /**
                     * 获取实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。
<br><li>POSTPAID_BY_HOUR：按小时后付费
<br><li>SPOTPAID：竞价付费
                     * @return InstanceChargeType 实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。
<br><li>POSTPAID_BY_HOUR：按小时后付费
<br><li>SPOTPAID：竞价付费
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。
<br><li>POSTPAID_BY_HOUR：按小时后付费
<br><li>SPOTPAID：竞价付费
                     * @param InstanceChargeType 实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。
<br><li>POSTPAID_BY_HOUR：按小时后付费
<br><li>SPOTPAID：竞价付费
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceMarketOptions 实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceMarketOptions 实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions);

                    /**
                     * 判断参数 InstanceMarketOptions 是否已赋值
                     * @return InstanceMarketOptions 是否已赋值
                     */
                    bool InstanceMarketOptionsHasBeenSet() const;

                    /**
                     * 获取实例机型列表。
                     * @return InstanceTypes 实例机型列表。
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置实例机型列表。
                     * @param InstanceTypes 实例机型列表。
                     */
                    void SetInstanceTypes(const std::vector<std::string>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取标签列表。
                     * @return InstanceTags 标签列表。
                     */
                    std::vector<InstanceTag> GetInstanceTags() const;

                    /**
                     * 设置标签列表。
                     * @param InstanceTags 标签列表。
                     */
                    void SetInstanceTags(const std::vector<InstanceTag>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取版本号。
                     * @return VersionNumber 版本号。
                     */
                    int64_t GetVersionNumber() const;

                    /**
                     * 设置版本号。
                     * @param VersionNumber 版本号。
                     */
                    void SetVersionNumber(const int64_t& _versionNumber);

                    /**
                     * 判断参数 VersionNumber 是否已赋值
                     * @return VersionNumber 是否已赋值
                     */
                    bool VersionNumberHasBeenSet() const;

                    /**
                     * 获取更新时间。
                     * @return UpdatedTime 更新时间。
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置更新时间。
                     * @param UpdatedTime 更新时间。
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取CAM角色名称。可通过DescribeRoleList接口返回值中的roleName获取。
                     * @return CamRoleName CAM角色名称。可通过DescribeRoleList接口返回值中的roleName获取。
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置CAM角色名称。可通过DescribeRoleList接口返回值中的roleName获取。
                     * @param CamRoleName CAM角色名称。可通过DescribeRoleList接口返回值中的roleName获取。
                     */
                    void SetCamRoleName(const std::string& _camRoleName);

                    /**
                     * 判断参数 CamRoleName 是否已赋值
                     * @return CamRoleName 是否已赋值
                     */
                    bool CamRoleNameHasBeenSet() const;

                    /**
                     * 获取上次操作时，InstanceTypesCheckPolicy 取值。
                     * @return LastOperationInstanceTypesCheckPolicy 上次操作时，InstanceTypesCheckPolicy 取值。
                     */
                    std::string GetLastOperationInstanceTypesCheckPolicy() const;

                    /**
                     * 设置上次操作时，InstanceTypesCheckPolicy 取值。
                     * @param LastOperationInstanceTypesCheckPolicy 上次操作时，InstanceTypesCheckPolicy 取值。
                     */
                    void SetLastOperationInstanceTypesCheckPolicy(const std::string& _lastOperationInstanceTypesCheckPolicy);

                    /**
                     * 判断参数 LastOperationInstanceTypesCheckPolicy 是否已赋值
                     * @return LastOperationInstanceTypesCheckPolicy 是否已赋值
                     */
                    bool LastOperationInstanceTypesCheckPolicyHasBeenSet() const;

                    /**
                     * 获取云服务器主机名（HostName）的相关设置。
                     * @return HostNameSettings 云服务器主机名（HostName）的相关设置。
                     */
                    HostNameSettings GetHostNameSettings() const;

                    /**
                     * 设置云服务器主机名（HostName）的相关设置。
                     * @param HostNameSettings 云服务器主机名（HostName）的相关设置。
                     */
                    void SetHostNameSettings(const HostNameSettings& _hostNameSettings);

                    /**
                     * 判断参数 HostNameSettings 是否已赋值
                     * @return HostNameSettings 是否已赋值
                     */
                    bool HostNameSettingsHasBeenSet() const;

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
                     * 启动配置创建时间。
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
                     * 启动配置当前状态。取值范围：<br><li>NORMAL：正常<br><li>IMAGE_ABNORMAL：启动配置镜像异常<br><li>CBS_SNAP_ABNORMAL：启动配置数据盘快照异常<br><li>SECURITY_GROUP_ABNORMAL：启动配置安全组异常<br>
                     */
                    std::string m_launchConfigurationStatus;
                    bool m_launchConfigurationStatusHasBeenSet;

                    /**
                     * 实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。
<br><li>POSTPAID_BY_HOUR：按小时后付费
<br><li>SPOTPAID：竞价付费
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
                     * 标签列表。
                     */
                    std::vector<InstanceTag> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * 版本号。
                     */
                    int64_t m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * CAM角色名称。可通过DescribeRoleList接口返回值中的roleName获取。
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_LAUNCHCONFIGURATION_H_
