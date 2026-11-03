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

#include <tencentcloud/csip/v20221121/model/ModifyLoginWhiteCustomEDRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyLoginWhiteCustomEDRRequest::ModifyLoginWhiteCustomEDRRequest() :
    m_idHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_placesHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_instanceIDsWithAppIdHasBeenSet(false),
    m_excludeInstanceIDsWithAppIdHasBeenSet(false),
    m_tagIDsHasBeenSet(false),
    m_targetAppIDsHasBeenSet(false),
    m_dealOldEventsHasBeenSet(false)
{
}

string ModifyLoginWhiteCustomEDRRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_placesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Places";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_places.begin(); itr != m_places.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scope, allocator);
    }

    if (m_instanceIDsWithAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIDsWithAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceIDsWithAppId.begin(); itr != m_instanceIDsWithAppId.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_excludeInstanceIDsWithAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeInstanceIDsWithAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_excludeInstanceIDsWithAppId.begin(); itr != m_excludeInstanceIDsWithAppId.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIDs.begin(); itr != m_tagIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetAppIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAppIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetAppIDs.begin(); itr != m_targetAppIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_dealOldEventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealOldEvents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dealOldEvents, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyLoginWhiteCustomEDRRequest::GetId() const
{
    return m_id;
}

void ModifyLoginWhiteCustomEDRRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyLoginWhiteCustomEDRRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<string> ModifyLoginWhiteCustomEDRRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyLoginWhiteCustomEDRRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyLoginWhiteCustomEDRRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string ModifyLoginWhiteCustomEDRRequest::GetSrcIp() const
{
    return m_srcIp;
}

void ModifyLoginWhiteCustomEDRRequest::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool ModifyLoginWhiteCustomEDRRequest::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

string ModifyLoginWhiteCustomEDRRequest::GetUserName() const
{
    return m_userName;
}

void ModifyLoginWhiteCustomEDRRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ModifyLoginWhiteCustomEDRRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ModifyLoginWhiteCustomEDRRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyLoginWhiteCustomEDRRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyLoginWhiteCustomEDRRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ModifyLoginWhiteCustomEDRRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyLoginWhiteCustomEDRRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyLoginWhiteCustomEDRRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<LoginWhitePlaceInput> ModifyLoginWhiteCustomEDRRequest::GetPlaces() const
{
    return m_places;
}

void ModifyLoginWhiteCustomEDRRequest::SetPlaces(const vector<LoginWhitePlaceInput>& _places)
{
    m_places = _places;
    m_placesHasBeenSet = true;
}

bool ModifyLoginWhiteCustomEDRRequest::PlacesHasBeenSet() const
{
    return m_placesHasBeenSet;
}

string ModifyLoginWhiteCustomEDRRequest::GetRemark() const
{
    return m_remark;
}

void ModifyLoginWhiteCustomEDRRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyLoginWhiteCustomEDRRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t ModifyLoginWhiteCustomEDRRequest::GetScope() const
{
    return m_scope;
}

void ModifyLoginWhiteCustomEDRRequest::SetScope(const int64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool ModifyLoginWhiteCustomEDRRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<InstanceIDWithAppIdItem> ModifyLoginWhiteCustomEDRRequest::GetInstanceIDsWithAppId() const
{
    return m_instanceIDsWithAppId;
}

void ModifyLoginWhiteCustomEDRRequest::SetInstanceIDsWithAppId(const vector<InstanceIDWithAppIdItem>& _instanceIDsWithAppId)
{
    m_instanceIDsWithAppId = _instanceIDsWithAppId;
    m_instanceIDsWithAppIdHasBeenSet = true;
}

bool ModifyLoginWhiteCustomEDRRequest::InstanceIDsWithAppIdHasBeenSet() const
{
    return m_instanceIDsWithAppIdHasBeenSet;
}

vector<InstanceIDWithAppIdItem> ModifyLoginWhiteCustomEDRRequest::GetExcludeInstanceIDsWithAppId() const
{
    return m_excludeInstanceIDsWithAppId;
}

void ModifyLoginWhiteCustomEDRRequest::SetExcludeInstanceIDsWithAppId(const vector<InstanceIDWithAppIdItem>& _excludeInstanceIDsWithAppId)
{
    m_excludeInstanceIDsWithAppId = _excludeInstanceIDsWithAppId;
    m_excludeInstanceIDsWithAppIdHasBeenSet = true;
}

bool ModifyLoginWhiteCustomEDRRequest::ExcludeInstanceIDsWithAppIdHasBeenSet() const
{
    return m_excludeInstanceIDsWithAppIdHasBeenSet;
}

vector<string> ModifyLoginWhiteCustomEDRRequest::GetTagIDs() const
{
    return m_tagIDs;
}

void ModifyLoginWhiteCustomEDRRequest::SetTagIDs(const vector<string>& _tagIDs)
{
    m_tagIDs = _tagIDs;
    m_tagIDsHasBeenSet = true;
}

bool ModifyLoginWhiteCustomEDRRequest::TagIDsHasBeenSet() const
{
    return m_tagIDsHasBeenSet;
}

vector<uint64_t> ModifyLoginWhiteCustomEDRRequest::GetTargetAppIDs() const
{
    return m_targetAppIDs;
}

void ModifyLoginWhiteCustomEDRRequest::SetTargetAppIDs(const vector<uint64_t>& _targetAppIDs)
{
    m_targetAppIDs = _targetAppIDs;
    m_targetAppIDsHasBeenSet = true;
}

bool ModifyLoginWhiteCustomEDRRequest::TargetAppIDsHasBeenSet() const
{
    return m_targetAppIDsHasBeenSet;
}

int64_t ModifyLoginWhiteCustomEDRRequest::GetDealOldEvents() const
{
    return m_dealOldEvents;
}

void ModifyLoginWhiteCustomEDRRequest::SetDealOldEvents(const int64_t& _dealOldEvents)
{
    m_dealOldEvents = _dealOldEvents;
    m_dealOldEventsHasBeenSet = true;
}

bool ModifyLoginWhiteCustomEDRRequest::DealOldEventsHasBeenSet() const
{
    return m_dealOldEventsHasBeenSet;
}


