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

#include <tencentcloud/csip/v20221121/model/LoginWhiteItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

LoginWhiteItem::LoginWhiteItem() :
    m_typeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_placesHasBeenSet(false),
    m_locationsHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_qUUIDSHasBeenSet(false),
    m_instanceIDsHasBeenSet(false),
    m_excludeQUUIDSHasBeenSet(false),
    m_excludeInstanceIDsHasBeenSet(false),
    m_tagItemsHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome LoginWhiteItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Places") && !value["Places"].IsNull())
    {
        if (!value["Places"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.Places` is not array type"));

        const rapidjson::Value &tmpValue = value["Places"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LoginWhitePlace item;
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

    if (value.HasMember("Locations") && !value["Locations"].IsNull())
    {
        if (!value["Locations"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.Locations` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locations = string(value["Locations"].GetString());
        m_locationsHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.Scope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scope = value["Scope"].GetInt64();
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("QUUIDS") && !value["QUUIDS"].IsNull())
    {
        if (!value["QUUIDS"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.QUUIDS` is not array type"));

        const rapidjson::Value &tmpValue = value["QUUIDS"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_qUUIDS.push_back((*itr).GetString());
        }
        m_qUUIDSHasBeenSet = true;
    }

    if (value.HasMember("InstanceIDs") && !value["InstanceIDs"].IsNull())
    {
        if (!value["InstanceIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.InstanceIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIDs.push_back((*itr).GetString());
        }
        m_instanceIDsHasBeenSet = true;
    }

    if (value.HasMember("ExcludeQUUIDS") && !value["ExcludeQUUIDS"].IsNull())
    {
        if (!value["ExcludeQUUIDS"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.ExcludeQUUIDS` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludeQUUIDS"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeQUUIDS.push_back((*itr).GetString());
        }
        m_excludeQUUIDSHasBeenSet = true;
    }

    if (value.HasMember("ExcludeInstanceIDs") && !value["ExcludeInstanceIDs"].IsNull())
    {
        if (!value["ExcludeInstanceIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.ExcludeInstanceIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludeInstanceIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeInstanceIDs.push_back((*itr).GetString());
        }
        m_excludeInstanceIDsHasBeenSet = true;
    }

    if (value.HasMember("TagItems") && !value["TagItems"].IsNull())
    {
        if (!value["TagItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.TagItems` is not array type"));

        const rapidjson::Value &tmpValue = value["TagItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EDRRuleTagItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagItems.push_back(item);
        }
        m_tagItemsHasBeenSet = true;
    }

    if (value.HasMember("HostCount") && !value["HostCount"].IsNull())
    {
        if (!value["HostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.HostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = value["HostCount"].GetInt64();
        m_hostCountHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteItem.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginWhiteItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
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

    if (m_locationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locations.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scope, allocator);
    }

    if (m_qUUIDSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QUUIDS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_qUUIDS.begin(); itr != m_qUUIDS.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIDs.begin(); itr != m_instanceIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeQUUIDSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeQUUIDS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeQUUIDS.begin(); itr != m_excludeQUUIDS.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeInstanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeInstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeInstanceIDs.begin(); itr != m_excludeInstanceIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagItems.begin(); itr != m_tagItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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

}


string LoginWhiteItem::GetType() const
{
    return m_type;
}

void LoginWhiteItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LoginWhiteItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t LoginWhiteItem::GetAppId() const
{
    return m_appId;
}

void LoginWhiteItem::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool LoginWhiteItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

uint64_t LoginWhiteItem::GetId() const
{
    return m_id;
}

void LoginWhiteItem::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool LoginWhiteItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string LoginWhiteItem::GetSrcIp() const
{
    return m_srcIp;
}

void LoginWhiteItem::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool LoginWhiteItem::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

string LoginWhiteItem::GetUserName() const
{
    return m_userName;
}

void LoginWhiteItem::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool LoginWhiteItem::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string LoginWhiteItem::GetStartTime() const
{
    return m_startTime;
}

void LoginWhiteItem::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool LoginWhiteItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string LoginWhiteItem::GetEndTime() const
{
    return m_endTime;
}

void LoginWhiteItem::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool LoginWhiteItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<LoginWhitePlace> LoginWhiteItem::GetPlaces() const
{
    return m_places;
}

void LoginWhiteItem::SetPlaces(const vector<LoginWhitePlace>& _places)
{
    m_places = _places;
    m_placesHasBeenSet = true;
}

bool LoginWhiteItem::PlacesHasBeenSet() const
{
    return m_placesHasBeenSet;
}

string LoginWhiteItem::GetLocations() const
{
    return m_locations;
}

void LoginWhiteItem::SetLocations(const string& _locations)
{
    m_locations = _locations;
    m_locationsHasBeenSet = true;
}

bool LoginWhiteItem::LocationsHasBeenSet() const
{
    return m_locationsHasBeenSet;
}

int64_t LoginWhiteItem::GetScope() const
{
    return m_scope;
}

void LoginWhiteItem::SetScope(const int64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool LoginWhiteItem::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<string> LoginWhiteItem::GetQUUIDS() const
{
    return m_qUUIDS;
}

void LoginWhiteItem::SetQUUIDS(const vector<string>& _qUUIDS)
{
    m_qUUIDS = _qUUIDS;
    m_qUUIDSHasBeenSet = true;
}

bool LoginWhiteItem::QUUIDSHasBeenSet() const
{
    return m_qUUIDSHasBeenSet;
}

vector<string> LoginWhiteItem::GetInstanceIDs() const
{
    return m_instanceIDs;
}

void LoginWhiteItem::SetInstanceIDs(const vector<string>& _instanceIDs)
{
    m_instanceIDs = _instanceIDs;
    m_instanceIDsHasBeenSet = true;
}

bool LoginWhiteItem::InstanceIDsHasBeenSet() const
{
    return m_instanceIDsHasBeenSet;
}

vector<string> LoginWhiteItem::GetExcludeQUUIDS() const
{
    return m_excludeQUUIDS;
}

void LoginWhiteItem::SetExcludeQUUIDS(const vector<string>& _excludeQUUIDS)
{
    m_excludeQUUIDS = _excludeQUUIDS;
    m_excludeQUUIDSHasBeenSet = true;
}

bool LoginWhiteItem::ExcludeQUUIDSHasBeenSet() const
{
    return m_excludeQUUIDSHasBeenSet;
}

vector<string> LoginWhiteItem::GetExcludeInstanceIDs() const
{
    return m_excludeInstanceIDs;
}

void LoginWhiteItem::SetExcludeInstanceIDs(const vector<string>& _excludeInstanceIDs)
{
    m_excludeInstanceIDs = _excludeInstanceIDs;
    m_excludeInstanceIDsHasBeenSet = true;
}

bool LoginWhiteItem::ExcludeInstanceIDsHasBeenSet() const
{
    return m_excludeInstanceIDsHasBeenSet;
}

vector<EDRRuleTagItem> LoginWhiteItem::GetTagItems() const
{
    return m_tagItems;
}

void LoginWhiteItem::SetTagItems(const vector<EDRRuleTagItem>& _tagItems)
{
    m_tagItems = _tagItems;
    m_tagItemsHasBeenSet = true;
}

bool LoginWhiteItem::TagItemsHasBeenSet() const
{
    return m_tagItemsHasBeenSet;
}

int64_t LoginWhiteItem::GetHostCount() const
{
    return m_hostCount;
}

void LoginWhiteItem::SetHostCount(const int64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool LoginWhiteItem::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

string LoginWhiteItem::GetRemark() const
{
    return m_remark;
}

void LoginWhiteItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool LoginWhiteItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string LoginWhiteItem::GetCreateTime() const
{
    return m_createTime;
}

void LoginWhiteItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LoginWhiteItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LoginWhiteItem::GetModifyTime() const
{
    return m_modifyTime;
}

void LoginWhiteItem::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool LoginWhiteItem::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

