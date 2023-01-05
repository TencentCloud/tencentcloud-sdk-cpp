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

#include <tencentcloud/hasim/v20210716/model/RuleDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hasim::V20210716::Model;
using namespace std;

RuleDetail::RuleDetail() :
    m_nameHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_deletedAtHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_isActiveHasBeenSet(false),
    m_noticeHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_dataThresholdHasBeenSet(false),
    m_districtHasBeenSet(false),
    m_distanceHasBeenSet(false),
    m_signalStrengthHasBeenSet(false),
    m_lostDayHasBeenSet(false),
    m_tagIDsHasBeenSet(false),
    m_salePlanHasBeenSet(false)
{
}

CoreInternalOutcome RuleDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetail.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetail.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetail.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("DeletedAt") && !value["DeletedAt"].IsNull())
    {
        if (!value["DeletedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetail.DeletedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deletedAt = string(value["DeletedAt"].GetString());
        m_deletedAtHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetail.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("IsActive") && !value["IsActive"].IsNull())
    {
        if (!value["IsActive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetail.IsActive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isActive = value["IsActive"].GetBool();
        m_isActiveHasBeenSet = true;
    }

    if (value.HasMember("Notice") && !value["Notice"].IsNull())
    {
        if (!value["Notice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetail.Notice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notice = value["Notice"].GetInt64();
        m_noticeHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetail.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetail.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("DataThreshold") && !value["DataThreshold"].IsNull())
    {
        if (!value["DataThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetail.DataThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataThreshold = value["DataThreshold"].GetInt64();
        m_dataThresholdHasBeenSet = true;
    }

    if (value.HasMember("District") && !value["District"].IsNull())
    {
        if (!value["District"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetail.District` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_district = value["District"].GetInt64();
        m_districtHasBeenSet = true;
    }

    if (value.HasMember("Distance") && !value["Distance"].IsNull())
    {
        if (!value["Distance"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetail.Distance` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_distance = value["Distance"].GetInt64();
        m_distanceHasBeenSet = true;
    }

    if (value.HasMember("SignalStrength") && !value["SignalStrength"].IsNull())
    {
        if (!value["SignalStrength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetail.SignalStrength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_signalStrength = value["SignalStrength"].GetInt64();
        m_signalStrengthHasBeenSet = true;
    }

    if (value.HasMember("LostDay") && !value["LostDay"].IsNull())
    {
        if (!value["LostDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetail.LostDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lostDay = value["LostDay"].GetInt64();
        m_lostDayHasBeenSet = true;
    }

    if (value.HasMember("TagIDs") && !value["TagIDs"].IsNull())
    {
        if (!value["TagIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleDetail.TagIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["TagIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagIDs.push_back((*itr).GetInt64());
        }
        m_tagIDsHasBeenSet = true;
    }

    if (value.HasMember("SalePlan") && !value["SalePlan"].IsNull())
    {
        if (!value["SalePlan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetail.SalePlan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salePlan = string(value["SalePlan"].GetString());
        m_salePlanHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
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

    if (m_deletedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deletedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_isActiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isActive, allocator);
    }

    if (m_noticeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notice, allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_dataThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataThreshold, allocator);
    }

    if (m_districtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "District";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_district, allocator);
    }

    if (m_distanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Distance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_distance, allocator);
    }

    if (m_signalStrengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignalStrength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signalStrength, allocator);
    }

    if (m_lostDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LostDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lostDay, allocator);
    }

    if (m_tagIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIDs.begin(); itr != m_tagIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_salePlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalePlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_salePlan.c_str(), allocator).Move(), allocator);
    }

}


string RuleDetail::GetName() const
{
    return m_name;
}

void RuleDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RuleDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t RuleDetail::GetID() const
{
    return m_iD;
}

void RuleDetail::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool RuleDetail::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string RuleDetail::GetCreatedAt() const
{
    return m_createdAt;
}

void RuleDetail::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool RuleDetail::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string RuleDetail::GetUpdatedAt() const
{
    return m_updatedAt;
}

void RuleDetail::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool RuleDetail::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string RuleDetail::GetDeletedAt() const
{
    return m_deletedAt;
}

void RuleDetail::SetDeletedAt(const string& _deletedAt)
{
    m_deletedAt = _deletedAt;
    m_deletedAtHasBeenSet = true;
}

bool RuleDetail::DeletedAtHasBeenSet() const
{
    return m_deletedAtHasBeenSet;
}

int64_t RuleDetail::GetType() const
{
    return m_type;
}

void RuleDetail::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RuleDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool RuleDetail::GetIsActive() const
{
    return m_isActive;
}

void RuleDetail::SetIsActive(const bool& _isActive)
{
    m_isActive = _isActive;
    m_isActiveHasBeenSet = true;
}

bool RuleDetail::IsActiveHasBeenSet() const
{
    return m_isActiveHasBeenSet;
}

int64_t RuleDetail::GetNotice() const
{
    return m_notice;
}

void RuleDetail::SetNotice(const int64_t& _notice)
{
    m_notice = _notice;
    m_noticeHasBeenSet = true;
}

bool RuleDetail::NoticeHasBeenSet() const
{
    return m_noticeHasBeenSet;
}

string RuleDetail::GetEmail() const
{
    return m_email;
}

void RuleDetail::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool RuleDetail::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string RuleDetail::GetUrl() const
{
    return m_url;
}

void RuleDetail::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool RuleDetail::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

int64_t RuleDetail::GetDataThreshold() const
{
    return m_dataThreshold;
}

void RuleDetail::SetDataThreshold(const int64_t& _dataThreshold)
{
    m_dataThreshold = _dataThreshold;
    m_dataThresholdHasBeenSet = true;
}

bool RuleDetail::DataThresholdHasBeenSet() const
{
    return m_dataThresholdHasBeenSet;
}

int64_t RuleDetail::GetDistrict() const
{
    return m_district;
}

void RuleDetail::SetDistrict(const int64_t& _district)
{
    m_district = _district;
    m_districtHasBeenSet = true;
}

bool RuleDetail::DistrictHasBeenSet() const
{
    return m_districtHasBeenSet;
}

int64_t RuleDetail::GetDistance() const
{
    return m_distance;
}

void RuleDetail::SetDistance(const int64_t& _distance)
{
    m_distance = _distance;
    m_distanceHasBeenSet = true;
}

bool RuleDetail::DistanceHasBeenSet() const
{
    return m_distanceHasBeenSet;
}

int64_t RuleDetail::GetSignalStrength() const
{
    return m_signalStrength;
}

void RuleDetail::SetSignalStrength(const int64_t& _signalStrength)
{
    m_signalStrength = _signalStrength;
    m_signalStrengthHasBeenSet = true;
}

bool RuleDetail::SignalStrengthHasBeenSet() const
{
    return m_signalStrengthHasBeenSet;
}

int64_t RuleDetail::GetLostDay() const
{
    return m_lostDay;
}

void RuleDetail::SetLostDay(const int64_t& _lostDay)
{
    m_lostDay = _lostDay;
    m_lostDayHasBeenSet = true;
}

bool RuleDetail::LostDayHasBeenSet() const
{
    return m_lostDayHasBeenSet;
}

vector<int64_t> RuleDetail::GetTagIDs() const
{
    return m_tagIDs;
}

void RuleDetail::SetTagIDs(const vector<int64_t>& _tagIDs)
{
    m_tagIDs = _tagIDs;
    m_tagIDsHasBeenSet = true;
}

bool RuleDetail::TagIDsHasBeenSet() const
{
    return m_tagIDsHasBeenSet;
}

string RuleDetail::GetSalePlan() const
{
    return m_salePlan;
}

void RuleDetail::SetSalePlan(const string& _salePlan)
{
    m_salePlan = _salePlan;
    m_salePlanHasBeenSet = true;
}

bool RuleDetail::SalePlanHasBeenSet() const
{
    return m_salePlanHasBeenSet;
}

