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

#include <tencentcloud/vcube/v20220410/model/License.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

License::License() :
    m_typeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_featureIdHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_renewalHasBeenSet(false),
    m_licenseIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_updateHasBeenSet(false),
    m_oldLicenseUrlHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_expiredHasBeenSet(false),
    m_restTimeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_isVestHasBeenSet(false)
{
}

CoreInternalOutcome License::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("FeatureId") && !value["FeatureId"].IsNull())
    {
        if (!value["FeatureId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `License.FeatureId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_featureId = value["FeatureId"].GetUint64();
        m_featureIdHasBeenSet = true;
    }

    if (value.HasMember("LicenseType") && !value["LicenseType"].IsNull())
    {
        if (!value["LicenseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.LicenseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseType = string(value["LicenseType"].GetString());
        m_licenseTypeHasBeenSet = true;
    }

    if (value.HasMember("Renewal") && !value["Renewal"].IsNull())
    {
        if (!value["Renewal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `License.Renewal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_renewal = value["Renewal"].GetBool();
        m_renewalHasBeenSet = true;
    }

    if (value.HasMember("LicenseId") && !value["LicenseId"].IsNull())
    {
        if (!value["LicenseId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `License.LicenseId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseId = value["LicenseId"].GetUint64();
        m_licenseIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Update") && !value["Update"].IsNull())
    {
        if (!value["Update"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `License.Update` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_update = value["Update"].GetBool();
        m_updateHasBeenSet = true;
    }

    if (value.HasMember("OldLicenseUrl") && !value["OldLicenseUrl"].IsNull())
    {
        if (!value["OldLicenseUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.OldLicenseUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldLicenseUrl = string(value["OldLicenseUrl"].GetString());
        m_oldLicenseUrlHasBeenSet = true;
    }

    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `License.Group` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_group = value["Group"].GetUint64();
        m_groupHasBeenSet = true;
    }

    if (value.HasMember("Expired") && !value["Expired"].IsNull())
    {
        if (!value["Expired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `License.Expired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_expired = value["Expired"].GetBool();
        m_expiredHasBeenSet = true;
    }

    if (value.HasMember("RestTime") && !value["RestTime"].IsNull())
    {
        if (!value["RestTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `License.RestTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_restTime = value["RestTime"].GetUint64();
        m_restTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `License.Resource` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `License.IsVest` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVest = value["IsVest"].GetBool();
        m_isVestHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void License::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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

    if (m_renewalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Renewal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewal, allocator);
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

    if (m_updateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Update";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_update, allocator);
    }

    if (m_oldLicenseUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldLicenseUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldLicenseUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_group, allocator);
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


string License::GetType() const
{
    return m_type;
}

void License::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool License::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string License::GetRemark() const
{
    return m_remark;
}

void License::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool License::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string License::GetStartTime() const
{
    return m_startTime;
}

void License::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool License::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string License::GetEndTime() const
{
    return m_endTime;
}

void License::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool License::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t License::GetFeatureId() const
{
    return m_featureId;
}

void License::SetFeatureId(const uint64_t& _featureId)
{
    m_featureId = _featureId;
    m_featureIdHasBeenSet = true;
}

bool License::FeatureIdHasBeenSet() const
{
    return m_featureIdHasBeenSet;
}

string License::GetLicenseType() const
{
    return m_licenseType;
}

void License::SetLicenseType(const string& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool License::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

bool License::GetRenewal() const
{
    return m_renewal;
}

void License::SetRenewal(const bool& _renewal)
{
    m_renewal = _renewal;
    m_renewalHasBeenSet = true;
}

bool License::RenewalHasBeenSet() const
{
    return m_renewalHasBeenSet;
}

uint64_t License::GetLicenseId() const
{
    return m_licenseId;
}

void License::SetLicenseId(const uint64_t& _licenseId)
{
    m_licenseId = _licenseId;
    m_licenseIdHasBeenSet = true;
}

bool License::LicenseIdHasBeenSet() const
{
    return m_licenseIdHasBeenSet;
}

string License::GetName() const
{
    return m_name;
}

void License::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool License::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool License::GetUpdate() const
{
    return m_update;
}

void License::SetUpdate(const bool& _update)
{
    m_update = _update;
    m_updateHasBeenSet = true;
}

bool License::UpdateHasBeenSet() const
{
    return m_updateHasBeenSet;
}

string License::GetOldLicenseUrl() const
{
    return m_oldLicenseUrl;
}

void License::SetOldLicenseUrl(const string& _oldLicenseUrl)
{
    m_oldLicenseUrl = _oldLicenseUrl;
    m_oldLicenseUrlHasBeenSet = true;
}

bool License::OldLicenseUrlHasBeenSet() const
{
    return m_oldLicenseUrlHasBeenSet;
}

uint64_t License::GetGroup() const
{
    return m_group;
}

void License::SetGroup(const uint64_t& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool License::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

bool License::GetExpired() const
{
    return m_expired;
}

void License::SetExpired(const bool& _expired)
{
    m_expired = _expired;
    m_expiredHasBeenSet = true;
}

bool License::ExpiredHasBeenSet() const
{
    return m_expiredHasBeenSet;
}

uint64_t License::GetRestTime() const
{
    return m_restTime;
}

void License::SetRestTime(const uint64_t& _restTime)
{
    m_restTime = _restTime;
    m_restTimeHasBeenSet = true;
}

bool License::RestTimeHasBeenSet() const
{
    return m_restTimeHasBeenSet;
}

string License::GetCreatedAt() const
{
    return m_createdAt;
}

void License::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool License::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string License::GetUpdatedAt() const
{
    return m_updatedAt;
}

void License::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool License::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

RenewResource License::GetResource() const
{
    return m_resource;
}

void License::SetResource(const RenewResource& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool License::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

bool License::GetIsVest() const
{
    return m_isVest;
}

void License::SetIsVest(const bool& _isVest)
{
    m_isVest = _isVest;
    m_isVestHasBeenSet = true;
}

bool License::IsVestHasBeenSet() const
{
    return m_isVestHasBeenSet;
}

