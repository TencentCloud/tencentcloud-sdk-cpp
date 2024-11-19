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

#include <tencentcloud/as/v20180419/model/LaunchConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

LaunchConfiguration::LaunchConfiguration() :
    m_projectIdHasBeenSet(false),
    m_launchConfigurationIdHasBeenSet(false),
    m_launchConfigurationNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_autoScalingGroupAbstractSetHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_enhancedServiceHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_launchConfigurationStatusHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_instanceMarketOptionsHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_instanceTagsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_versionNumberHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_camRoleNameHasBeenSet(false),
    m_lastOperationInstanceTypesCheckPolicyHasBeenSet(false),
    m_hostNameSettingsHasBeenSet(false),
    m_instanceNameSettingsHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_diskTypePolicyHasBeenSet(false),
    m_hpcClusterIdHasBeenSet(false),
    m_iPv6InternetAccessibleHasBeenSet(false),
    m_disasterRecoverGroupIdsHasBeenSet(false),
    m_imageFamilyHasBeenSet(false),
    m_dedicatedClusterIdHasBeenSet(false)
{
}

CoreInternalOutcome LaunchConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("LaunchConfigurationId") && !value["LaunchConfigurationId"].IsNull())
    {
        if (!value["LaunchConfigurationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.LaunchConfigurationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchConfigurationId = string(value["LaunchConfigurationId"].GetString());
        m_launchConfigurationIdHasBeenSet = true;
    }

    if (value.HasMember("LaunchConfigurationName") && !value["LaunchConfigurationName"].IsNull())
    {
        if (!value["LaunchConfigurationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.LaunchConfigurationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchConfigurationName = string(value["LaunchConfigurationName"].GetString());
        m_launchConfigurationNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("SystemDisk") && !value["SystemDisk"].IsNull())
    {
        if (!value["SystemDisk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.SystemDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemDisk.Deserialize(value["SystemDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemDiskHasBeenSet = true;
    }

    if (value.HasMember("DataDisks") && !value["DataDisks"].IsNull())
    {
        if (!value["DataDisks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.DataDisks` is not array type"));

        const rapidjson::Value &tmpValue = value["DataDisks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataDisk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataDisks.push_back(item);
        }
        m_dataDisksHasBeenSet = true;
    }

    if (value.HasMember("LoginSettings") && !value["LoginSettings"].IsNull())
    {
        if (!value["LoginSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.LoginSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loginSettings.Deserialize(value["LoginSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loginSettingsHasBeenSet = true;
    }

    if (value.HasMember("InternetAccessible") && !value["InternetAccessible"].IsNull())
    {
        if (!value["InternetAccessible"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.InternetAccessible` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internetAccessible.Deserialize(value["InternetAccessible"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internetAccessibleHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.SecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingGroupAbstractSet") && !value["AutoScalingGroupAbstractSet"].IsNull())
    {
        if (!value["AutoScalingGroupAbstractSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.AutoScalingGroupAbstractSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AutoScalingGroupAbstractSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AutoScalingGroupAbstract item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_autoScalingGroupAbstractSet.push_back(item);
        }
        m_autoScalingGroupAbstractSetHasBeenSet = true;
    }

    if (value.HasMember("UserData") && !value["UserData"].IsNull())
    {
        if (!value["UserData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.UserData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userData = string(value["UserData"].GetString());
        m_userDataHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("EnhancedService") && !value["EnhancedService"].IsNull())
    {
        if (!value["EnhancedService"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.EnhancedService` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_enhancedService.Deserialize(value["EnhancedService"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_enhancedServiceHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("LaunchConfigurationStatus") && !value["LaunchConfigurationStatus"].IsNull())
    {
        if (!value["LaunchConfigurationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.LaunchConfigurationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchConfigurationStatus = string(value["LaunchConfigurationStatus"].GetString());
        m_launchConfigurationStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceMarketOptions") && !value["InstanceMarketOptions"].IsNull())
    {
        if (!value["InstanceMarketOptions"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.InstanceMarketOptions` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceMarketOptions.Deserialize(value["InstanceMarketOptions"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceMarketOptionsHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypes") && !value["InstanceTypes"].IsNull())
    {
        if (!value["InstanceTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.InstanceTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceTypes.push_back((*itr).GetString());
        }
        m_instanceTypesHasBeenSet = true;
    }

    if (value.HasMember("InstanceTags") && !value["InstanceTags"].IsNull())
    {
        if (!value["InstanceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.InstanceTags` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceTags.push_back(item);
        }
        m_instanceTagsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("VersionNumber") && !value["VersionNumber"].IsNull())
    {
        if (!value["VersionNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.VersionNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionNumber = value["VersionNumber"].GetInt64();
        m_versionNumberHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("CamRoleName") && !value["CamRoleName"].IsNull())
    {
        if (!value["CamRoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.CamRoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_camRoleName = string(value["CamRoleName"].GetString());
        m_camRoleNameHasBeenSet = true;
    }

    if (value.HasMember("LastOperationInstanceTypesCheckPolicy") && !value["LastOperationInstanceTypesCheckPolicy"].IsNull())
    {
        if (!value["LastOperationInstanceTypesCheckPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.LastOperationInstanceTypesCheckPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastOperationInstanceTypesCheckPolicy = string(value["LastOperationInstanceTypesCheckPolicy"].GetString());
        m_lastOperationInstanceTypesCheckPolicyHasBeenSet = true;
    }

    if (value.HasMember("HostNameSettings") && !value["HostNameSettings"].IsNull())
    {
        if (!value["HostNameSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.HostNameSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostNameSettings.Deserialize(value["HostNameSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostNameSettingsHasBeenSet = true;
    }

    if (value.HasMember("InstanceNameSettings") && !value["InstanceNameSettings"].IsNull())
    {
        if (!value["InstanceNameSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.InstanceNameSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceNameSettings.Deserialize(value["InstanceNameSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceNameSettingsHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargePrepaid") && !value["InstanceChargePrepaid"].IsNull())
    {
        if (!value["InstanceChargePrepaid"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.InstanceChargePrepaid` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceChargePrepaid.Deserialize(value["InstanceChargePrepaid"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceChargePrepaidHasBeenSet = true;
    }

    if (value.HasMember("DiskTypePolicy") && !value["DiskTypePolicy"].IsNull())
    {
        if (!value["DiskTypePolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.DiskTypePolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskTypePolicy = string(value["DiskTypePolicy"].GetString());
        m_diskTypePolicyHasBeenSet = true;
    }

    if (value.HasMember("HpcClusterId") && !value["HpcClusterId"].IsNull())
    {
        if (!value["HpcClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.HpcClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hpcClusterId = string(value["HpcClusterId"].GetString());
        m_hpcClusterIdHasBeenSet = true;
    }

    if (value.HasMember("IPv6InternetAccessible") && !value["IPv6InternetAccessible"].IsNull())
    {
        if (!value["IPv6InternetAccessible"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.IPv6InternetAccessible` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iPv6InternetAccessible.Deserialize(value["IPv6InternetAccessible"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iPv6InternetAccessibleHasBeenSet = true;
    }

    if (value.HasMember("DisasterRecoverGroupIds") && !value["DisasterRecoverGroupIds"].IsNull())
    {
        if (!value["DisasterRecoverGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.DisasterRecoverGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["DisasterRecoverGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_disasterRecoverGroupIds.push_back((*itr).GetString());
        }
        m_disasterRecoverGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("ImageFamily") && !value["ImageFamily"].IsNull())
    {
        if (!value["ImageFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.ImageFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageFamily = string(value["ImageFamily"].GetString());
        m_imageFamilyHasBeenSet = true;
    }

    if (value.HasMember("DedicatedClusterId") && !value["DedicatedClusterId"].IsNull())
    {
        if (!value["DedicatedClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchConfiguration.DedicatedClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dedicatedClusterId = string(value["DedicatedClusterId"].GetString());
        m_dedicatedClusterIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LaunchConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_launchConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_launchConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_launchConfigurationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchConfigurationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_launchConfigurationName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDisks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDisks.begin(); itr != m_dataDisks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_loginSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_internetAccessibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoScalingGroupAbstractSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupAbstractSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_autoScalingGroupAbstractSet.begin(); itr != m_autoScalingGroupAbstractSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enhancedServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhancedService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enhancedService.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_launchConfigurationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchConfigurationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_launchConfigurationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceMarketOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceMarketOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceMarketOptions.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceTypes.begin(); itr != m_instanceTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceTags.begin(); itr != m_instanceTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_versionNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionNumber, allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_camRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamRoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_camRoleName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastOperationInstanceTypesCheckPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOperationInstanceTypesCheckPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastOperationInstanceTypesCheckPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostNameSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostNameSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceNameSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNameSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceNameSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diskTypePolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskTypePolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskTypePolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_hpcClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HpcClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hpcClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_iPv6InternetAccessibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iPv6InternetAccessible.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_disasterRecoverGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoverGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_disasterRecoverGroupIds.begin(); itr != m_disasterRecoverGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_imageFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_dedicatedClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dedicatedClusterId.c_str(), allocator).Move(), allocator);
    }

}


int64_t LaunchConfiguration::GetProjectId() const
{
    return m_projectId;
}

void LaunchConfiguration::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool LaunchConfiguration::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string LaunchConfiguration::GetLaunchConfigurationId() const
{
    return m_launchConfigurationId;
}

void LaunchConfiguration::SetLaunchConfigurationId(const string& _launchConfigurationId)
{
    m_launchConfigurationId = _launchConfigurationId;
    m_launchConfigurationIdHasBeenSet = true;
}

bool LaunchConfiguration::LaunchConfigurationIdHasBeenSet() const
{
    return m_launchConfigurationIdHasBeenSet;
}

string LaunchConfiguration::GetLaunchConfigurationName() const
{
    return m_launchConfigurationName;
}

void LaunchConfiguration::SetLaunchConfigurationName(const string& _launchConfigurationName)
{
    m_launchConfigurationName = _launchConfigurationName;
    m_launchConfigurationNameHasBeenSet = true;
}

bool LaunchConfiguration::LaunchConfigurationNameHasBeenSet() const
{
    return m_launchConfigurationNameHasBeenSet;
}

string LaunchConfiguration::GetInstanceType() const
{
    return m_instanceType;
}

void LaunchConfiguration::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool LaunchConfiguration::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

SystemDisk LaunchConfiguration::GetSystemDisk() const
{
    return m_systemDisk;
}

void LaunchConfiguration::SetSystemDisk(const SystemDisk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool LaunchConfiguration::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<DataDisk> LaunchConfiguration::GetDataDisks() const
{
    return m_dataDisks;
}

void LaunchConfiguration::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool LaunchConfiguration::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

LimitedLoginSettings LaunchConfiguration::GetLoginSettings() const
{
    return m_loginSettings;
}

void LaunchConfiguration::SetLoginSettings(const LimitedLoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool LaunchConfiguration::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

InternetAccessible LaunchConfiguration::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void LaunchConfiguration::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool LaunchConfiguration::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

vector<string> LaunchConfiguration::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void LaunchConfiguration::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool LaunchConfiguration::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

vector<AutoScalingGroupAbstract> LaunchConfiguration::GetAutoScalingGroupAbstractSet() const
{
    return m_autoScalingGroupAbstractSet;
}

void LaunchConfiguration::SetAutoScalingGroupAbstractSet(const vector<AutoScalingGroupAbstract>& _autoScalingGroupAbstractSet)
{
    m_autoScalingGroupAbstractSet = _autoScalingGroupAbstractSet;
    m_autoScalingGroupAbstractSetHasBeenSet = true;
}

bool LaunchConfiguration::AutoScalingGroupAbstractSetHasBeenSet() const
{
    return m_autoScalingGroupAbstractSetHasBeenSet;
}

string LaunchConfiguration::GetUserData() const
{
    return m_userData;
}

void LaunchConfiguration::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool LaunchConfiguration::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

string LaunchConfiguration::GetCreatedTime() const
{
    return m_createdTime;
}

void LaunchConfiguration::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool LaunchConfiguration::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

EnhancedService LaunchConfiguration::GetEnhancedService() const
{
    return m_enhancedService;
}

void LaunchConfiguration::SetEnhancedService(const EnhancedService& _enhancedService)
{
    m_enhancedService = _enhancedService;
    m_enhancedServiceHasBeenSet = true;
}

bool LaunchConfiguration::EnhancedServiceHasBeenSet() const
{
    return m_enhancedServiceHasBeenSet;
}

string LaunchConfiguration::GetImageId() const
{
    return m_imageId;
}

void LaunchConfiguration::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool LaunchConfiguration::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string LaunchConfiguration::GetLaunchConfigurationStatus() const
{
    return m_launchConfigurationStatus;
}

void LaunchConfiguration::SetLaunchConfigurationStatus(const string& _launchConfigurationStatus)
{
    m_launchConfigurationStatus = _launchConfigurationStatus;
    m_launchConfigurationStatusHasBeenSet = true;
}

bool LaunchConfiguration::LaunchConfigurationStatusHasBeenSet() const
{
    return m_launchConfigurationStatusHasBeenSet;
}

string LaunchConfiguration::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void LaunchConfiguration::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool LaunchConfiguration::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

InstanceMarketOptionsRequest LaunchConfiguration::GetInstanceMarketOptions() const
{
    return m_instanceMarketOptions;
}

void LaunchConfiguration::SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions)
{
    m_instanceMarketOptions = _instanceMarketOptions;
    m_instanceMarketOptionsHasBeenSet = true;
}

bool LaunchConfiguration::InstanceMarketOptionsHasBeenSet() const
{
    return m_instanceMarketOptionsHasBeenSet;
}

vector<string> LaunchConfiguration::GetInstanceTypes() const
{
    return m_instanceTypes;
}

void LaunchConfiguration::SetInstanceTypes(const vector<string>& _instanceTypes)
{
    m_instanceTypes = _instanceTypes;
    m_instanceTypesHasBeenSet = true;
}

bool LaunchConfiguration::InstanceTypesHasBeenSet() const
{
    return m_instanceTypesHasBeenSet;
}

vector<InstanceTag> LaunchConfiguration::GetInstanceTags() const
{
    return m_instanceTags;
}

void LaunchConfiguration::SetInstanceTags(const vector<InstanceTag>& _instanceTags)
{
    m_instanceTags = _instanceTags;
    m_instanceTagsHasBeenSet = true;
}

bool LaunchConfiguration::InstanceTagsHasBeenSet() const
{
    return m_instanceTagsHasBeenSet;
}

vector<Tag> LaunchConfiguration::GetTags() const
{
    return m_tags;
}

void LaunchConfiguration::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool LaunchConfiguration::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t LaunchConfiguration::GetVersionNumber() const
{
    return m_versionNumber;
}

void LaunchConfiguration::SetVersionNumber(const int64_t& _versionNumber)
{
    m_versionNumber = _versionNumber;
    m_versionNumberHasBeenSet = true;
}

bool LaunchConfiguration::VersionNumberHasBeenSet() const
{
    return m_versionNumberHasBeenSet;
}

string LaunchConfiguration::GetUpdatedTime() const
{
    return m_updatedTime;
}

void LaunchConfiguration::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool LaunchConfiguration::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

string LaunchConfiguration::GetCamRoleName() const
{
    return m_camRoleName;
}

void LaunchConfiguration::SetCamRoleName(const string& _camRoleName)
{
    m_camRoleName = _camRoleName;
    m_camRoleNameHasBeenSet = true;
}

bool LaunchConfiguration::CamRoleNameHasBeenSet() const
{
    return m_camRoleNameHasBeenSet;
}

string LaunchConfiguration::GetLastOperationInstanceTypesCheckPolicy() const
{
    return m_lastOperationInstanceTypesCheckPolicy;
}

void LaunchConfiguration::SetLastOperationInstanceTypesCheckPolicy(const string& _lastOperationInstanceTypesCheckPolicy)
{
    m_lastOperationInstanceTypesCheckPolicy = _lastOperationInstanceTypesCheckPolicy;
    m_lastOperationInstanceTypesCheckPolicyHasBeenSet = true;
}

bool LaunchConfiguration::LastOperationInstanceTypesCheckPolicyHasBeenSet() const
{
    return m_lastOperationInstanceTypesCheckPolicyHasBeenSet;
}

HostNameSettings LaunchConfiguration::GetHostNameSettings() const
{
    return m_hostNameSettings;
}

void LaunchConfiguration::SetHostNameSettings(const HostNameSettings& _hostNameSettings)
{
    m_hostNameSettings = _hostNameSettings;
    m_hostNameSettingsHasBeenSet = true;
}

bool LaunchConfiguration::HostNameSettingsHasBeenSet() const
{
    return m_hostNameSettingsHasBeenSet;
}

InstanceNameSettings LaunchConfiguration::GetInstanceNameSettings() const
{
    return m_instanceNameSettings;
}

void LaunchConfiguration::SetInstanceNameSettings(const InstanceNameSettings& _instanceNameSettings)
{
    m_instanceNameSettings = _instanceNameSettings;
    m_instanceNameSettingsHasBeenSet = true;
}

bool LaunchConfiguration::InstanceNameSettingsHasBeenSet() const
{
    return m_instanceNameSettingsHasBeenSet;
}

InstanceChargePrepaid LaunchConfiguration::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void LaunchConfiguration::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool LaunchConfiguration::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

string LaunchConfiguration::GetDiskTypePolicy() const
{
    return m_diskTypePolicy;
}

void LaunchConfiguration::SetDiskTypePolicy(const string& _diskTypePolicy)
{
    m_diskTypePolicy = _diskTypePolicy;
    m_diskTypePolicyHasBeenSet = true;
}

bool LaunchConfiguration::DiskTypePolicyHasBeenSet() const
{
    return m_diskTypePolicyHasBeenSet;
}

string LaunchConfiguration::GetHpcClusterId() const
{
    return m_hpcClusterId;
}

void LaunchConfiguration::SetHpcClusterId(const string& _hpcClusterId)
{
    m_hpcClusterId = _hpcClusterId;
    m_hpcClusterIdHasBeenSet = true;
}

bool LaunchConfiguration::HpcClusterIdHasBeenSet() const
{
    return m_hpcClusterIdHasBeenSet;
}

IPv6InternetAccessible LaunchConfiguration::GetIPv6InternetAccessible() const
{
    return m_iPv6InternetAccessible;
}

void LaunchConfiguration::SetIPv6InternetAccessible(const IPv6InternetAccessible& _iPv6InternetAccessible)
{
    m_iPv6InternetAccessible = _iPv6InternetAccessible;
    m_iPv6InternetAccessibleHasBeenSet = true;
}

bool LaunchConfiguration::IPv6InternetAccessibleHasBeenSet() const
{
    return m_iPv6InternetAccessibleHasBeenSet;
}

vector<string> LaunchConfiguration::GetDisasterRecoverGroupIds() const
{
    return m_disasterRecoverGroupIds;
}

void LaunchConfiguration::SetDisasterRecoverGroupIds(const vector<string>& _disasterRecoverGroupIds)
{
    m_disasterRecoverGroupIds = _disasterRecoverGroupIds;
    m_disasterRecoverGroupIdsHasBeenSet = true;
}

bool LaunchConfiguration::DisasterRecoverGroupIdsHasBeenSet() const
{
    return m_disasterRecoverGroupIdsHasBeenSet;
}

string LaunchConfiguration::GetImageFamily() const
{
    return m_imageFamily;
}

void LaunchConfiguration::SetImageFamily(const string& _imageFamily)
{
    m_imageFamily = _imageFamily;
    m_imageFamilyHasBeenSet = true;
}

bool LaunchConfiguration::ImageFamilyHasBeenSet() const
{
    return m_imageFamilyHasBeenSet;
}

string LaunchConfiguration::GetDedicatedClusterId() const
{
    return m_dedicatedClusterId;
}

void LaunchConfiguration::SetDedicatedClusterId(const string& _dedicatedClusterId)
{
    m_dedicatedClusterId = _dedicatedClusterId;
    m_dedicatedClusterIdHasBeenSet = true;
}

bool LaunchConfiguration::DedicatedClusterIdHasBeenSet() const
{
    return m_dedicatedClusterIdHasBeenSet;
}

