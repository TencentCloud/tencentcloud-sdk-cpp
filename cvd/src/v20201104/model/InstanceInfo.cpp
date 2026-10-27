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

#include <tencentcloud/cvd/v20201104/model/InstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

InstanceInfo::InstanceInfo() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_sysDiskHasBeenSet(false),
    m_dataDiskListHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_bindStatusHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_userVpcIdHasBeenSet(false),
    m_userSubnetIdHasBeenSet(false),
    m_userPrivateIpHasBeenSet(false),
    m_isolatedTimeHasBeenSet(false),
    m_lastStatusChangeReasonHasBeenSet(false),
    m_latestOperationHasBeenSet(false),
    m_latestOperationStateHasBeenSet(false),
    m_latestOperationRequestIDHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_setIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_downGradeTimesHasBeenSet(false),
    m_domainControlPoliciesHasBeenSet(false),
    m_waterMarkPolicyHasBeenSet(false),
    m_screenRecordingPolicyHasBeenSet(false),
    m_domainControlPolicyTypeHasBeenSet(false),
    m_runControlPolicyHasBeenSet(false),
    m_installControlPolicyHasBeenSet(false),
    m_anonymousAccessHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome InstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("SysDisk") && !value["SysDisk"].IsNull())
    {
        if (!value["SysDisk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SysDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sysDisk.Deserialize(value["SysDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sysDiskHasBeenSet = true;
    }

    if (value.HasMember("DataDiskList") && !value["DataDiskList"].IsNull())
    {
        if (!value["DataDiskList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DataDiskList` is not array type"));

        const rapidjson::Value &tmpValue = value["DataDiskList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Disk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataDiskList.push_back(item);
        }
        m_dataDiskListHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AutoRenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = string(value["AutoRenewFlag"].GetString());
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("BindStatus") && !value["BindStatus"].IsNull())
    {
        if (!value["BindStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.BindStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindStatus = string(value["BindStatus"].GetString());
        m_bindStatusHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("UserVpcId") && !value["UserVpcId"].IsNull())
    {
        if (!value["UserVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.UserVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userVpcId = string(value["UserVpcId"].GetString());
        m_userVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UserSubnetId") && !value["UserSubnetId"].IsNull())
    {
        if (!value["UserSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.UserSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userSubnetId = string(value["UserSubnetId"].GetString());
        m_userSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("UserPrivateIp") && !value["UserPrivateIp"].IsNull())
    {
        if (!value["UserPrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.UserPrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userPrivateIp = string(value["UserPrivateIp"].GetString());
        m_userPrivateIpHasBeenSet = true;
    }

    if (value.HasMember("IsolatedTime") && !value["IsolatedTime"].IsNull())
    {
        if (!value["IsolatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.IsolatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTime = string(value["IsolatedTime"].GetString());
        m_isolatedTimeHasBeenSet = true;
    }

    if (value.HasMember("LastStatusChangeReason") && !value["LastStatusChangeReason"].IsNull())
    {
        if (!value["LastStatusChangeReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.LastStatusChangeReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastStatusChangeReason = string(value["LastStatusChangeReason"].GetString());
        m_lastStatusChangeReasonHasBeenSet = true;
    }

    if (value.HasMember("LatestOperation") && !value["LatestOperation"].IsNull())
    {
        if (!value["LatestOperation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.LatestOperation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperation = string(value["LatestOperation"].GetString());
        m_latestOperationHasBeenSet = true;
    }

    if (value.HasMember("LatestOperationState") && !value["LatestOperationState"].IsNull())
    {
        if (!value["LatestOperationState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.LatestOperationState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperationState = string(value["LatestOperationState"].GetString());
        m_latestOperationStateHasBeenSet = true;
    }

    if (value.HasMember("LatestOperationRequestID") && !value["LatestOperationRequestID"].IsNull())
    {
        if (!value["LatestOperationRequestID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.LatestOperationRequestID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperationRequestID = string(value["LatestOperationRequestID"].GetString());
        m_latestOperationRequestIDHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("SetId") && !value["SetId"].IsNull())
    {
        if (!value["SetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_setId = string(value["SetId"].GetString());
        m_setIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroups") && !value["SecurityGroups"].IsNull())
    {
        if (!value["SecurityGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SecurityGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroups.push_back((*itr).GetString());
        }
        m_securityGroupsHasBeenSet = true;
    }

    if (value.HasMember("DownGradeTimes") && !value["DownGradeTimes"].IsNull())
    {
        if (!value["DownGradeTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DownGradeTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_downGradeTimes = value["DownGradeTimes"].GetInt64();
        m_downGradeTimesHasBeenSet = true;
    }

    if (value.HasMember("DomainControlPolicies") && !value["DomainControlPolicies"].IsNull())
    {
        if (!value["DomainControlPolicies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DomainControlPolicies` is not array type"));

        const rapidjson::Value &tmpValue = value["DomainControlPolicies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domainControlPolicies.push_back((*itr).GetString());
        }
        m_domainControlPoliciesHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkPolicy") && !value["WaterMarkPolicy"].IsNull())
    {
        if (!value["WaterMarkPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.WaterMarkPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_waterMarkPolicy = string(value["WaterMarkPolicy"].GetString());
        m_waterMarkPolicyHasBeenSet = true;
    }

    if (value.HasMember("ScreenRecordingPolicy") && !value["ScreenRecordingPolicy"].IsNull())
    {
        if (!value["ScreenRecordingPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ScreenRecordingPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_screenRecordingPolicy = string(value["ScreenRecordingPolicy"].GetString());
        m_screenRecordingPolicyHasBeenSet = true;
    }

    if (value.HasMember("DomainControlPolicyType") && !value["DomainControlPolicyType"].IsNull())
    {
        if (!value["DomainControlPolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DomainControlPolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainControlPolicyType = string(value["DomainControlPolicyType"].GetString());
        m_domainControlPolicyTypeHasBeenSet = true;
    }

    if (value.HasMember("RunControlPolicy") && !value["RunControlPolicy"].IsNull())
    {
        if (!value["RunControlPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RunControlPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runControlPolicy = string(value["RunControlPolicy"].GetString());
        m_runControlPolicyHasBeenSet = true;
    }

    if (value.HasMember("InstallControlPolicy") && !value["InstallControlPolicy"].IsNull())
    {
        if (!value["InstallControlPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstallControlPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_installControlPolicy = string(value["InstallControlPolicy"].GetString());
        m_installControlPolicyHasBeenSet = true;
    }

    if (value.HasMember("AnonymousAccess") && !value["AnonymousAccess"].IsNull())
    {
        if (!value["AnonymousAccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AnonymousAccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_anonymousAccess = value["AnonymousAccess"].GetBool();
        m_anonymousAccessHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Tags` is not array type"));

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


    return CoreInternalOutcome(true);
}

void InstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sysDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sysDisk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataDiskListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDiskList.begin(); itr != m_dataDiskList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoRenewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_bindStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_userVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_userSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_userPrivateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userPrivateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_isolatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastStatusChangeReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastStatusChangeReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastStatusChangeReason.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperationState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperationState.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationRequestIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperationRequestID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperationRequestID.c_str(), allocator).Move(), allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_setIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_setId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroups.begin(); itr != m_securityGroups.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_downGradeTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownGradeTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_downGradeTimes, allocator);
    }

    if (m_domainControlPoliciesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainControlPolicies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainControlPolicies.begin(); itr != m_domainControlPolicies.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_waterMarkPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_waterMarkPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_screenRecordingPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScreenRecordingPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_screenRecordingPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_domainControlPolicyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainControlPolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainControlPolicyType.c_str(), allocator).Move(), allocator);
    }

    if (m_runControlPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunControlPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runControlPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_installControlPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallControlPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_installControlPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_anonymousAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnonymousAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_anonymousAccess, allocator);
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

}


string InstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceInfo::GetName() const
{
    return m_name;
}

void InstanceInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool InstanceInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string InstanceInfo::GetStatus() const
{
    return m_status;
}

void InstanceInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InstanceInfo::GetUserName() const
{
    return m_userName;
}

void InstanceInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool InstanceInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string InstanceInfo::GetUserId() const
{
    return m_userId;
}

void InstanceInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool InstanceInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string InstanceInfo::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

Disk InstanceInfo::GetSysDisk() const
{
    return m_sysDisk;
}

void InstanceInfo::SetSysDisk(const Disk& _sysDisk)
{
    m_sysDisk = _sysDisk;
    m_sysDiskHasBeenSet = true;
}

bool InstanceInfo::SysDiskHasBeenSet() const
{
    return m_sysDiskHasBeenSet;
}

vector<Disk> InstanceInfo::GetDataDiskList() const
{
    return m_dataDiskList;
}

void InstanceInfo::SetDataDiskList(const vector<Disk>& _dataDiskList)
{
    m_dataDiskList = _dataDiskList;
    m_dataDiskListHasBeenSet = true;
}

bool InstanceInfo::DataDiskListHasBeenSet() const
{
    return m_dataDiskListHasBeenSet;
}

string InstanceInfo::GetRegion() const
{
    return m_region;
}

void InstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string InstanceInfo::GetChargeType() const
{
    return m_chargeType;
}

void InstanceInfo::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool InstanceInfo::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string InstanceInfo::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void InstanceInfo::SetAutoRenewFlag(const string& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool InstanceInfo::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string InstanceInfo::GetCreateTime() const
{
    return m_createTime;
}

void InstanceInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InstanceInfo::GetExpiredTime() const
{
    return m_expiredTime;
}

void InstanceInfo::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool InstanceInfo::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string InstanceInfo::GetDescription() const
{
    return m_description;
}

void InstanceInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool InstanceInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string InstanceInfo::GetHostName() const
{
    return m_hostName;
}

void InstanceInfo::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool InstanceInfo::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string InstanceInfo::GetDisplayName() const
{
    return m_displayName;
}

void InstanceInfo::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool InstanceInfo::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string InstanceInfo::GetBindStatus() const
{
    return m_bindStatus;
}

void InstanceInfo::SetBindStatus(const string& _bindStatus)
{
    m_bindStatus = _bindStatus;
    m_bindStatusHasBeenSet = true;
}

bool InstanceInfo::BindStatusHasBeenSet() const
{
    return m_bindStatusHasBeenSet;
}

string InstanceInfo::GetImageId() const
{
    return m_imageId;
}

void InstanceInfo::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool InstanceInfo::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string InstanceInfo::GetUserVpcId() const
{
    return m_userVpcId;
}

void InstanceInfo::SetUserVpcId(const string& _userVpcId)
{
    m_userVpcId = _userVpcId;
    m_userVpcIdHasBeenSet = true;
}

bool InstanceInfo::UserVpcIdHasBeenSet() const
{
    return m_userVpcIdHasBeenSet;
}

string InstanceInfo::GetUserSubnetId() const
{
    return m_userSubnetId;
}

void InstanceInfo::SetUserSubnetId(const string& _userSubnetId)
{
    m_userSubnetId = _userSubnetId;
    m_userSubnetIdHasBeenSet = true;
}

bool InstanceInfo::UserSubnetIdHasBeenSet() const
{
    return m_userSubnetIdHasBeenSet;
}

string InstanceInfo::GetUserPrivateIp() const
{
    return m_userPrivateIp;
}

void InstanceInfo::SetUserPrivateIp(const string& _userPrivateIp)
{
    m_userPrivateIp = _userPrivateIp;
    m_userPrivateIpHasBeenSet = true;
}

bool InstanceInfo::UserPrivateIpHasBeenSet() const
{
    return m_userPrivateIpHasBeenSet;
}

string InstanceInfo::GetIsolatedTime() const
{
    return m_isolatedTime;
}

void InstanceInfo::SetIsolatedTime(const string& _isolatedTime)
{
    m_isolatedTime = _isolatedTime;
    m_isolatedTimeHasBeenSet = true;
}

bool InstanceInfo::IsolatedTimeHasBeenSet() const
{
    return m_isolatedTimeHasBeenSet;
}

string InstanceInfo::GetLastStatusChangeReason() const
{
    return m_lastStatusChangeReason;
}

void InstanceInfo::SetLastStatusChangeReason(const string& _lastStatusChangeReason)
{
    m_lastStatusChangeReason = _lastStatusChangeReason;
    m_lastStatusChangeReasonHasBeenSet = true;
}

bool InstanceInfo::LastStatusChangeReasonHasBeenSet() const
{
    return m_lastStatusChangeReasonHasBeenSet;
}

string InstanceInfo::GetLatestOperation() const
{
    return m_latestOperation;
}

void InstanceInfo::SetLatestOperation(const string& _latestOperation)
{
    m_latestOperation = _latestOperation;
    m_latestOperationHasBeenSet = true;
}

bool InstanceInfo::LatestOperationHasBeenSet() const
{
    return m_latestOperationHasBeenSet;
}

string InstanceInfo::GetLatestOperationState() const
{
    return m_latestOperationState;
}

void InstanceInfo::SetLatestOperationState(const string& _latestOperationState)
{
    m_latestOperationState = _latestOperationState;
    m_latestOperationStateHasBeenSet = true;
}

bool InstanceInfo::LatestOperationStateHasBeenSet() const
{
    return m_latestOperationStateHasBeenSet;
}

string InstanceInfo::GetLatestOperationRequestID() const
{
    return m_latestOperationRequestID;
}

void InstanceInfo::SetLatestOperationRequestID(const string& _latestOperationRequestID)
{
    m_latestOperationRequestID = _latestOperationRequestID;
    m_latestOperationRequestIDHasBeenSet = true;
}

bool InstanceInfo::LatestOperationRequestIDHasBeenSet() const
{
    return m_latestOperationRequestIDHasBeenSet;
}

string InstanceInfo::GetOsName() const
{
    return m_osName;
}

void InstanceInfo::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool InstanceInfo::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string InstanceInfo::GetSetId() const
{
    return m_setId;
}

void InstanceInfo::SetSetId(const string& _setId)
{
    m_setId = _setId;
    m_setIdHasBeenSet = true;
}

bool InstanceInfo::SetIdHasBeenSet() const
{
    return m_setIdHasBeenSet;
}

int64_t InstanceInfo::GetAppId() const
{
    return m_appId;
}

void InstanceInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool InstanceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string InstanceInfo::GetUin() const
{
    return m_uin;
}

void InstanceInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool InstanceInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

vector<string> InstanceInfo::GetSecurityGroups() const
{
    return m_securityGroups;
}

void InstanceInfo::SetSecurityGroups(const vector<string>& _securityGroups)
{
    m_securityGroups = _securityGroups;
    m_securityGroupsHasBeenSet = true;
}

bool InstanceInfo::SecurityGroupsHasBeenSet() const
{
    return m_securityGroupsHasBeenSet;
}

int64_t InstanceInfo::GetDownGradeTimes() const
{
    return m_downGradeTimes;
}

void InstanceInfo::SetDownGradeTimes(const int64_t& _downGradeTimes)
{
    m_downGradeTimes = _downGradeTimes;
    m_downGradeTimesHasBeenSet = true;
}

bool InstanceInfo::DownGradeTimesHasBeenSet() const
{
    return m_downGradeTimesHasBeenSet;
}

vector<string> InstanceInfo::GetDomainControlPolicies() const
{
    return m_domainControlPolicies;
}

void InstanceInfo::SetDomainControlPolicies(const vector<string>& _domainControlPolicies)
{
    m_domainControlPolicies = _domainControlPolicies;
    m_domainControlPoliciesHasBeenSet = true;
}

bool InstanceInfo::DomainControlPoliciesHasBeenSet() const
{
    return m_domainControlPoliciesHasBeenSet;
}

string InstanceInfo::GetWaterMarkPolicy() const
{
    return m_waterMarkPolicy;
}

void InstanceInfo::SetWaterMarkPolicy(const string& _waterMarkPolicy)
{
    m_waterMarkPolicy = _waterMarkPolicy;
    m_waterMarkPolicyHasBeenSet = true;
}

bool InstanceInfo::WaterMarkPolicyHasBeenSet() const
{
    return m_waterMarkPolicyHasBeenSet;
}

string InstanceInfo::GetScreenRecordingPolicy() const
{
    return m_screenRecordingPolicy;
}

void InstanceInfo::SetScreenRecordingPolicy(const string& _screenRecordingPolicy)
{
    m_screenRecordingPolicy = _screenRecordingPolicy;
    m_screenRecordingPolicyHasBeenSet = true;
}

bool InstanceInfo::ScreenRecordingPolicyHasBeenSet() const
{
    return m_screenRecordingPolicyHasBeenSet;
}

string InstanceInfo::GetDomainControlPolicyType() const
{
    return m_domainControlPolicyType;
}

void InstanceInfo::SetDomainControlPolicyType(const string& _domainControlPolicyType)
{
    m_domainControlPolicyType = _domainControlPolicyType;
    m_domainControlPolicyTypeHasBeenSet = true;
}

bool InstanceInfo::DomainControlPolicyTypeHasBeenSet() const
{
    return m_domainControlPolicyTypeHasBeenSet;
}

string InstanceInfo::GetRunControlPolicy() const
{
    return m_runControlPolicy;
}

void InstanceInfo::SetRunControlPolicy(const string& _runControlPolicy)
{
    m_runControlPolicy = _runControlPolicy;
    m_runControlPolicyHasBeenSet = true;
}

bool InstanceInfo::RunControlPolicyHasBeenSet() const
{
    return m_runControlPolicyHasBeenSet;
}

string InstanceInfo::GetInstallControlPolicy() const
{
    return m_installControlPolicy;
}

void InstanceInfo::SetInstallControlPolicy(const string& _installControlPolicy)
{
    m_installControlPolicy = _installControlPolicy;
    m_installControlPolicyHasBeenSet = true;
}

bool InstanceInfo::InstallControlPolicyHasBeenSet() const
{
    return m_installControlPolicyHasBeenSet;
}

bool InstanceInfo::GetAnonymousAccess() const
{
    return m_anonymousAccess;
}

void InstanceInfo::SetAnonymousAccess(const bool& _anonymousAccess)
{
    m_anonymousAccess = _anonymousAccess;
    m_anonymousAccessHasBeenSet = true;
}

bool InstanceInfo::AnonymousAccessHasBeenSet() const
{
    return m_anonymousAccessHasBeenSet;
}

vector<Tag> InstanceInfo::GetTags() const
{
    return m_tags;
}

void InstanceInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool InstanceInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

