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

#include <tencentcloud/vcube/v20220410/model/XMagicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

XMagicInfo::XMagicInfo() :
    m_idHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_companyPermitHasBeenSet(false),
    m_companyTypeHasBeenSet(false),
    m_planHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_updateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_renewalCountHasBeenSet(false),
    m_replyHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_expiredHasBeenSet(false),
    m_restTimeHasBeenSet(false),
    m_xMagicTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_isVestHasBeenSet(false)
{
}

CoreInternalOutcome XMagicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("CompanyName") && !value["CompanyName"].IsNull())
    {
        if (!value["CompanyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.CompanyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyName = string(value["CompanyName"].GetString());
        m_companyNameHasBeenSet = true;
    }

    if (value.HasMember("CompanyPermit") && !value["CompanyPermit"].IsNull())
    {
        if (!value["CompanyPermit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.CompanyPermit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyPermit = string(value["CompanyPermit"].GetString());
        m_companyPermitHasBeenSet = true;
    }

    if (value.HasMember("CompanyType") && !value["CompanyType"].IsNull())
    {
        if (!value["CompanyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.CompanyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyType = string(value["CompanyType"].GetString());
        m_companyTypeHasBeenSet = true;
    }

    if (value.HasMember("Plan") && !value["Plan"].IsNull())
    {
        if (!value["Plan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.Plan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plan = string(value["Plan"].GetString());
        m_planHasBeenSet = true;
    }

    if (value.HasMember("LicenseType") && !value["LicenseType"].IsNull())
    {
        if (!value["LicenseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.LicenseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseType = string(value["LicenseType"].GetString());
        m_licenseTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Update") && !value["Update"].IsNull())
    {
        if (!value["Update"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.Update` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_update = value["Update"].GetBool();
        m_updateHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("RenewalCount") && !value["RenewalCount"].IsNull())
    {
        if (!value["RenewalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.RenewalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_renewalCount = value["RenewalCount"].GetUint64();
        m_renewalCountHasBeenSet = true;
    }

    if (value.HasMember("Reply") && !value["Reply"].IsNull())
    {
        if (!value["Reply"].IsArray())
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.Reply` is not array type"));

        const rapidjson::Value &tmpValue = value["Reply"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_reply.push_back((*itr).GetString());
        }
        m_replyHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Expired") && !value["Expired"].IsNull())
    {
        if (!value["Expired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.Expired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_expired = value["Expired"].GetBool();
        m_expiredHasBeenSet = true;
    }

    if (value.HasMember("RestTime") && !value["RestTime"].IsNull())
    {
        if (!value["RestTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.RestTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_restTime = value["RestTime"].GetUint64();
        m_restTimeHasBeenSet = true;
    }

    if (value.HasMember("XMagicType") && !value["XMagicType"].IsNull())
    {
        if (!value["XMagicType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.XMagicType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xMagicType = string(value["XMagicType"].GetString());
        m_xMagicTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.Resource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resource.Deserialize(value["Resource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("IsVest") && !value["IsVest"].IsNull())
    {
        if (!value["IsVest"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicInfo.IsVest` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVest = value["IsVest"].GetBool();
        m_isVestHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void XMagicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_companyPermitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyPermit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyPermit.c_str(), allocator).Move(), allocator);
    }

    if (m_companyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyType.c_str(), allocator).Move(), allocator);
    }

    if (m_planHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Plan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plan.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_updateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Update";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_update, allocator);
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

    if (m_renewalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewalCount, allocator);
    }

    if (m_replyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reply";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reply.begin(); itr != m_reply.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expired, allocator);
    }

    if (m_restTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restTime, allocator);
    }

    if (m_xMagicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMagicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_xMagicType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isVestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isVest, allocator);
    }

}


uint64_t XMagicInfo::GetId() const
{
    return m_id;
}

void XMagicInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool XMagicInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string XMagicInfo::GetCompanyName() const
{
    return m_companyName;
}

void XMagicInfo::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool XMagicInfo::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

string XMagicInfo::GetCompanyPermit() const
{
    return m_companyPermit;
}

void XMagicInfo::SetCompanyPermit(const string& _companyPermit)
{
    m_companyPermit = _companyPermit;
    m_companyPermitHasBeenSet = true;
}

bool XMagicInfo::CompanyPermitHasBeenSet() const
{
    return m_companyPermitHasBeenSet;
}

string XMagicInfo::GetCompanyType() const
{
    return m_companyType;
}

void XMagicInfo::SetCompanyType(const string& _companyType)
{
    m_companyType = _companyType;
    m_companyTypeHasBeenSet = true;
}

bool XMagicInfo::CompanyTypeHasBeenSet() const
{
    return m_companyTypeHasBeenSet;
}

string XMagicInfo::GetPlan() const
{
    return m_plan;
}

void XMagicInfo::SetPlan(const string& _plan)
{
    m_plan = _plan;
    m_planHasBeenSet = true;
}

bool XMagicInfo::PlanHasBeenSet() const
{
    return m_planHasBeenSet;
}

string XMagicInfo::GetLicenseType() const
{
    return m_licenseType;
}

void XMagicInfo::SetLicenseType(const string& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool XMagicInfo::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

uint64_t XMagicInfo::GetStatus() const
{
    return m_status;
}

void XMagicInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool XMagicInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool XMagicInfo::GetUpdate() const
{
    return m_update;
}

void XMagicInfo::SetUpdate(const bool& _update)
{
    m_update = _update;
    m_updateHasBeenSet = true;
}

bool XMagicInfo::UpdateHasBeenSet() const
{
    return m_updateHasBeenSet;
}

string XMagicInfo::GetStartTime() const
{
    return m_startTime;
}

void XMagicInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool XMagicInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string XMagicInfo::GetEndTime() const
{
    return m_endTime;
}

void XMagicInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool XMagicInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t XMagicInfo::GetRenewalCount() const
{
    return m_renewalCount;
}

void XMagicInfo::SetRenewalCount(const uint64_t& _renewalCount)
{
    m_renewalCount = _renewalCount;
    m_renewalCountHasBeenSet = true;
}

bool XMagicInfo::RenewalCountHasBeenSet() const
{
    return m_renewalCountHasBeenSet;
}

vector<string> XMagicInfo::GetReply() const
{
    return m_reply;
}

void XMagicInfo::SetReply(const vector<string>& _reply)
{
    m_reply = _reply;
    m_replyHasBeenSet = true;
}

bool XMagicInfo::ReplyHasBeenSet() const
{
    return m_replyHasBeenSet;
}

string XMagicInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void XMagicInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool XMagicInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string XMagicInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void XMagicInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool XMagicInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string XMagicInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void XMagicInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool XMagicInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

bool XMagicInfo::GetExpired() const
{
    return m_expired;
}

void XMagicInfo::SetExpired(const bool& _expired)
{
    m_expired = _expired;
    m_expiredHasBeenSet = true;
}

bool XMagicInfo::ExpiredHasBeenSet() const
{
    return m_expiredHasBeenSet;
}

uint64_t XMagicInfo::GetRestTime() const
{
    return m_restTime;
}

void XMagicInfo::SetRestTime(const uint64_t& _restTime)
{
    m_restTime = _restTime;
    m_restTimeHasBeenSet = true;
}

bool XMagicInfo::RestTimeHasBeenSet() const
{
    return m_restTimeHasBeenSet;
}

string XMagicInfo::GetXMagicType() const
{
    return m_xMagicType;
}

void XMagicInfo::SetXMagicType(const string& _xMagicType)
{
    m_xMagicType = _xMagicType;
    m_xMagicTypeHasBeenSet = true;
}

bool XMagicInfo::XMagicTypeHasBeenSet() const
{
    return m_xMagicTypeHasBeenSet;
}

string XMagicInfo::GetName() const
{
    return m_name;
}

void XMagicInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool XMagicInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

RenewResource XMagicInfo::GetResource() const
{
    return m_resource;
}

void XMagicInfo::SetResource(const RenewResource& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool XMagicInfo::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

bool XMagicInfo::GetIsVest() const
{
    return m_isVest;
}

void XMagicInfo::SetIsVest(const bool& _isVest)
{
    m_isVest = _isVest;
    m_isVestHasBeenSet = true;
}

bool XMagicInfo::IsVestHasBeenSet() const
{
    return m_isVestHasBeenSet;
}

