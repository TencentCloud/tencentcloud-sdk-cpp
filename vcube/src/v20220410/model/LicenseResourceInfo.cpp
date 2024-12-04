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

#include <tencentcloud/vcube/v20220410/model/LicenseResourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

LicenseResourceInfo::LicenseResourceInfo() :
    m_idHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_featureIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_isUseHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isolatedTimestampHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_packageHasBeenSet(false),
    m_applicationHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false)
{
}

CoreInternalOutcome LicenseResourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseResourceInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseResourceInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseResourceInfo.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("FeatureId") && !value["FeatureId"].IsNull())
    {
        if (!value["FeatureId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseResourceInfo.FeatureId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_featureId = value["FeatureId"].GetUint64();
        m_featureIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseResourceInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseResourceInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseResourceInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseResourceInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("IsUse") && !value["IsUse"].IsNull())
    {
        if (!value["IsUse"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseResourceInfo.IsUse` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUse = value["IsUse"].GetBool();
        m_isUseHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseResourceInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsolatedTimestamp") && !value["IsolatedTimestamp"].IsNull())
    {
        if (!value["IsolatedTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseResourceInfo.IsolatedTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTimestamp = string(value["IsolatedTimestamp"].GetString());
        m_isolatedTimestampHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseResourceInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseResourceInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Package") && !value["Package"].IsNull())
    {
        if (!value["Package"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseResourceInfo.Package` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_package.Deserialize(value["Package"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_packageHasBeenSet = true;
    }

    if (value.HasMember("Application") && !value["Application"].IsNull())
    {
        if (!value["Application"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseResourceInfo.Application` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_application.Deserialize(value["Application"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_applicationHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseResourceInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseResourceInfo.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LicenseResourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_featureIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_featureId, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_isUseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUse, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isolatedTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolatedTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_packageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Package";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_package.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_applicationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Application";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_application.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

}


uint64_t LicenseResourceInfo::GetId() const
{
    return m_id;
}

void LicenseResourceInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool LicenseResourceInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string LicenseResourceInfo::GetAppId() const
{
    return m_appId;
}

void LicenseResourceInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool LicenseResourceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string LicenseResourceInfo::GetDuration() const
{
    return m_duration;
}

void LicenseResourceInfo::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool LicenseResourceInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

uint64_t LicenseResourceInfo::GetFeatureId() const
{
    return m_featureId;
}

void LicenseResourceInfo::SetFeatureId(const uint64_t& _featureId)
{
    m_featureId = _featureId;
    m_featureIdHasBeenSet = true;
}

bool LicenseResourceInfo::FeatureIdHasBeenSet() const
{
    return m_featureIdHasBeenSet;
}

string LicenseResourceInfo::GetStartTime() const
{
    return m_startTime;
}

void LicenseResourceInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool LicenseResourceInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string LicenseResourceInfo::GetEndTime() const
{
    return m_endTime;
}

void LicenseResourceInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool LicenseResourceInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string LicenseResourceInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void LicenseResourceInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool LicenseResourceInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string LicenseResourceInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void LicenseResourceInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool LicenseResourceInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

bool LicenseResourceInfo::GetIsUse() const
{
    return m_isUse;
}

void LicenseResourceInfo::SetIsUse(const bool& _isUse)
{
    m_isUse = _isUse;
    m_isUseHasBeenSet = true;
}

bool LicenseResourceInfo::IsUseHasBeenSet() const
{
    return m_isUseHasBeenSet;
}

uint64_t LicenseResourceInfo::GetStatus() const
{
    return m_status;
}

void LicenseResourceInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LicenseResourceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LicenseResourceInfo::GetIsolatedTimestamp() const
{
    return m_isolatedTimestamp;
}

void LicenseResourceInfo::SetIsolatedTimestamp(const string& _isolatedTimestamp)
{
    m_isolatedTimestamp = _isolatedTimestamp;
    m_isolatedTimestampHasBeenSet = true;
}

bool LicenseResourceInfo::IsolatedTimestampHasBeenSet() const
{
    return m_isolatedTimestampHasBeenSet;
}

string LicenseResourceInfo::GetName() const
{
    return m_name;
}

void LicenseResourceInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LicenseResourceInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LicenseResourceInfo::GetType() const
{
    return m_type;
}

void LicenseResourceInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LicenseResourceInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

Package LicenseResourceInfo::GetPackage() const
{
    return m_package;
}

void LicenseResourceInfo::SetPackage(const Package& _package)
{
    m_package = _package;
    m_packageHasBeenSet = true;
}

bool LicenseResourceInfo::PackageHasBeenSet() const
{
    return m_packageHasBeenSet;
}

AppInfo LicenseResourceInfo::GetApplication() const
{
    return m_application;
}

void LicenseResourceInfo::SetApplication(const AppInfo& _application)
{
    m_application = _application;
    m_applicationHasBeenSet = true;
}

bool LicenseResourceInfo::ApplicationHasBeenSet() const
{
    return m_applicationHasBeenSet;
}

string LicenseResourceInfo::GetResourceId() const
{
    return m_resourceId;
}

void LicenseResourceInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool LicenseResourceInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t LicenseResourceInfo::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void LicenseResourceInfo::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool LicenseResourceInfo::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

