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

#include <tencentcloud/cwp/v20180228/model/LoginWhiteCombinedInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

LoginWhiteCombinedInfo::LoginWhiteCombinedInfo() :
    m_placesHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_idHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_locationsHasBeenSet(false)
{
}

CoreInternalOutcome LoginWhiteCombinedInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Places") && !value["Places"].IsNull())
    {
        if (!value["Places"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoginWhiteCombinedInfo.Places` is not array type"));

        const rapidjson::Value &tmpValue = value["Places"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Place item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_places.push_back(item);
        }
        m_placesHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteCombinedInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteCombinedInfo.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("Locale") && !value["Locale"].IsNull())
    {
        if (!value["Locale"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteCombinedInfo.Locale` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locale = string(value["Locale"].GetString());
        m_localeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteCombinedInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteCombinedInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteCombinedInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("IsGlobal") && !value["IsGlobal"].IsNull())
    {
        if (!value["IsGlobal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteCombinedInfo.IsGlobal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobal = value["IsGlobal"].GetUint64();
        m_isGlobalHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteCombinedInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteCombinedInfo.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteCombinedInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteCombinedInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteCombinedInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteCombinedInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Locations") && !value["Locations"].IsNull())
    {
        if (!value["Locations"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteCombinedInfo.Locations` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locations = string(value["Locations"].GetString());
        m_locationsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginWhiteCombinedInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_placesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Places";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_places.begin(); itr != m_places.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_localeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locale.c_str(), allocator).Move(), allocator);
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

    if (m_isGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGlobal, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_locationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locations.c_str(), allocator).Move(), allocator);
    }

}


vector<Place> LoginWhiteCombinedInfo::GetPlaces() const
{
    return m_places;
}

void LoginWhiteCombinedInfo::SetPlaces(const vector<Place>& _places)
{
    m_places = _places;
    m_placesHasBeenSet = true;
}

bool LoginWhiteCombinedInfo::PlacesHasBeenSet() const
{
    return m_placesHasBeenSet;
}

string LoginWhiteCombinedInfo::GetUserName() const
{
    return m_userName;
}

void LoginWhiteCombinedInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool LoginWhiteCombinedInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string LoginWhiteCombinedInfo::GetSrcIp() const
{
    return m_srcIp;
}

void LoginWhiteCombinedInfo::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool LoginWhiteCombinedInfo::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

string LoginWhiteCombinedInfo::GetLocale() const
{
    return m_locale;
}

void LoginWhiteCombinedInfo::SetLocale(const string& _locale)
{
    m_locale = _locale;
    m_localeHasBeenSet = true;
}

bool LoginWhiteCombinedInfo::LocaleHasBeenSet() const
{
    return m_localeHasBeenSet;
}

string LoginWhiteCombinedInfo::GetRemark() const
{
    return m_remark;
}

void LoginWhiteCombinedInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool LoginWhiteCombinedInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string LoginWhiteCombinedInfo::GetStartTime() const
{
    return m_startTime;
}

void LoginWhiteCombinedInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool LoginWhiteCombinedInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string LoginWhiteCombinedInfo::GetEndTime() const
{
    return m_endTime;
}

void LoginWhiteCombinedInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool LoginWhiteCombinedInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t LoginWhiteCombinedInfo::GetIsGlobal() const
{
    return m_isGlobal;
}

void LoginWhiteCombinedInfo::SetIsGlobal(const uint64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool LoginWhiteCombinedInfo::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

string LoginWhiteCombinedInfo::GetName() const
{
    return m_name;
}

void LoginWhiteCombinedInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LoginWhiteCombinedInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LoginWhiteCombinedInfo::GetDesc() const
{
    return m_desc;
}

void LoginWhiteCombinedInfo::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool LoginWhiteCombinedInfo::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

uint64_t LoginWhiteCombinedInfo::GetId() const
{
    return m_id;
}

void LoginWhiteCombinedInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool LoginWhiteCombinedInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string LoginWhiteCombinedInfo::GetCreateTime() const
{
    return m_createTime;
}

void LoginWhiteCombinedInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LoginWhiteCombinedInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LoginWhiteCombinedInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void LoginWhiteCombinedInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool LoginWhiteCombinedInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string LoginWhiteCombinedInfo::GetUuid() const
{
    return m_uuid;
}

void LoginWhiteCombinedInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool LoginWhiteCombinedInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string LoginWhiteCombinedInfo::GetLocations() const
{
    return m_locations;
}

void LoginWhiteCombinedInfo::SetLocations(const string& _locations)
{
    m_locations = _locations;
    m_locationsHasBeenSet = true;
}

bool LoginWhiteCombinedInfo::LocationsHasBeenSet() const
{
    return m_locationsHasBeenSet;
}

