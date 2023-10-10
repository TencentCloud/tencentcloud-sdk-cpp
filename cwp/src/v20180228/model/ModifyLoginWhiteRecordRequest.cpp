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

#include <tencentcloud/cwp/v20180228/model/ModifyLoginWhiteRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyLoginWhiteRecordRequest::ModifyLoginWhiteRecordRequest() :
    m_userNameHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_idHasBeenSet(false),
    m_hostsHasBeenSet(false),
    m_placesHasBeenSet(false)
{
}

string ModifyLoginWhiteRecordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_isGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isGlobal, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_hostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hosts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hosts.begin(); itr != m_hosts.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLoginWhiteRecordRequest::GetUserName() const
{
    return m_userName;
}

void ModifyLoginWhiteRecordRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ModifyLoginWhiteRecordRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ModifyLoginWhiteRecordRequest::GetSrcIp() const
{
    return m_srcIp;
}

void ModifyLoginWhiteRecordRequest::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool ModifyLoginWhiteRecordRequest::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

string ModifyLoginWhiteRecordRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyLoginWhiteRecordRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyLoginWhiteRecordRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ModifyLoginWhiteRecordRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyLoginWhiteRecordRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyLoginWhiteRecordRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ModifyLoginWhiteRecordRequest::GetRemark() const
{
    return m_remark;
}

void ModifyLoginWhiteRecordRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyLoginWhiteRecordRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t ModifyLoginWhiteRecordRequest::GetIsGlobal() const
{
    return m_isGlobal;
}

void ModifyLoginWhiteRecordRequest::SetIsGlobal(const uint64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool ModifyLoginWhiteRecordRequest::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

uint64_t ModifyLoginWhiteRecordRequest::GetId() const
{
    return m_id;
}

void ModifyLoginWhiteRecordRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyLoginWhiteRecordRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<HostInfo> ModifyLoginWhiteRecordRequest::GetHosts() const
{
    return m_hosts;
}

void ModifyLoginWhiteRecordRequest::SetHosts(const vector<HostInfo>& _hosts)
{
    m_hosts = _hosts;
    m_hostsHasBeenSet = true;
}

bool ModifyLoginWhiteRecordRequest::HostsHasBeenSet() const
{
    return m_hostsHasBeenSet;
}

vector<Place> ModifyLoginWhiteRecordRequest::GetPlaces() const
{
    return m_places;
}

void ModifyLoginWhiteRecordRequest::SetPlaces(const vector<Place>& _places)
{
    m_places = _places;
    m_placesHasBeenSet = true;
}

bool ModifyLoginWhiteRecordRequest::PlacesHasBeenSet() const
{
    return m_placesHasBeenSet;
}


