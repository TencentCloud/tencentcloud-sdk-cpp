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

#include <tencentcloud/vcube/v20220410/model/OverviewLicense.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

OverviewLicense::OverviewLicense() :
    m_applicationHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_featureIdHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_licenseIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_restTimeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_planHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome OverviewLicense::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Application") && !value["Application"].IsNull())
    {
        if (!value["Application"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLicense.Application` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_application.Deserialize(value["Application"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_applicationHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLicense.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLicense.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("FeatureId") && !value["FeatureId"].IsNull())
    {
        if (!value["FeatureId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLicense.FeatureId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_featureId = value["FeatureId"].GetUint64();
        m_featureIdHasBeenSet = true;
    }

    if (value.HasMember("LicenseType") && !value["LicenseType"].IsNull())
    {
        if (!value["LicenseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLicense.LicenseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseType = string(value["LicenseType"].GetString());
        m_licenseTypeHasBeenSet = true;
    }

    if (value.HasMember("LicenseId") && !value["LicenseId"].IsNull())
    {
        if (!value["LicenseId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLicense.LicenseId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseId = value["LicenseId"].GetUint64();
        m_licenseIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLicense.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RestTime") && !value["RestTime"].IsNull())
    {
        if (!value["RestTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLicense.RestTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_restTime = value["RestTime"].GetUint64();
        m_restTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLicense.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLicense.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("Plan") && !value["Plan"].IsNull())
    {
        if (!value["Plan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLicense.Plan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plan = string(value["Plan"].GetString());
        m_planHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLicense.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewLicense::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Application";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_application.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_featureIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_featureId, allocator);
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_restTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restTime, allocator);
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

    if (m_planHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Plan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plan.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


OverviewAppInfo OverviewLicense::GetApplication() const
{
    return m_application;
}

void OverviewLicense::SetApplication(const OverviewAppInfo& _application)
{
    m_application = _application;
    m_applicationHasBeenSet = true;
}

bool OverviewLicense::ApplicationHasBeenSet() const
{
    return m_applicationHasBeenSet;
}

string OverviewLicense::GetStartTime() const
{
    return m_startTime;
}

void OverviewLicense::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool OverviewLicense::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string OverviewLicense::GetEndTime() const
{
    return m_endTime;
}

void OverviewLicense::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool OverviewLicense::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t OverviewLicense::GetFeatureId() const
{
    return m_featureId;
}

void OverviewLicense::SetFeatureId(const uint64_t& _featureId)
{
    m_featureId = _featureId;
    m_featureIdHasBeenSet = true;
}

bool OverviewLicense::FeatureIdHasBeenSet() const
{
    return m_featureIdHasBeenSet;
}

string OverviewLicense::GetLicenseType() const
{
    return m_licenseType;
}

void OverviewLicense::SetLicenseType(const string& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool OverviewLicense::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

uint64_t OverviewLicense::GetLicenseId() const
{
    return m_licenseId;
}

void OverviewLicense::SetLicenseId(const uint64_t& _licenseId)
{
    m_licenseId = _licenseId;
    m_licenseIdHasBeenSet = true;
}

bool OverviewLicense::LicenseIdHasBeenSet() const
{
    return m_licenseIdHasBeenSet;
}

string OverviewLicense::GetName() const
{
    return m_name;
}

void OverviewLicense::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OverviewLicense::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t OverviewLicense::GetRestTime() const
{
    return m_restTime;
}

void OverviewLicense::SetRestTime(const uint64_t& _restTime)
{
    m_restTime = _restTime;
    m_restTimeHasBeenSet = true;
}

bool OverviewLicense::RestTimeHasBeenSet() const
{
    return m_restTimeHasBeenSet;
}

string OverviewLicense::GetCreatedAt() const
{
    return m_createdAt;
}

void OverviewLicense::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool OverviewLicense::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string OverviewLicense::GetUpdatedAt() const
{
    return m_updatedAt;
}

void OverviewLicense::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool OverviewLicense::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string OverviewLicense::GetPlan() const
{
    return m_plan;
}

void OverviewLicense::SetPlan(const string& _plan)
{
    m_plan = _plan;
    m_planHasBeenSet = true;
}

bool OverviewLicense::PlanHasBeenSet() const
{
    return m_planHasBeenSet;
}

string OverviewLicense::GetType() const
{
    return m_type;
}

void OverviewLicense::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool OverviewLicense::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

