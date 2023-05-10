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

#include <tencentcloud/live/v20180801/model/XP2PDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

XP2PDetailInfo::XP2PDetailInfo() :
    m_cdnBytesHasBeenSet(false),
    m_p2pBytesHasBeenSet(false),
    m_stuckPeopleHasBeenSet(false),
    m_stuckTimesHasBeenSet(false),
    m_onlinePeopleHasBeenSet(false),
    m_requestHasBeenSet(false),
    m_requestSuccessHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome XP2PDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CdnBytes") && !value["CdnBytes"].IsNull())
    {
        if (!value["CdnBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `XP2PDetailInfo.CdnBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cdnBytes = value["CdnBytes"].GetInt64();
        m_cdnBytesHasBeenSet = true;
    }

    if (value.HasMember("P2pBytes") && !value["P2pBytes"].IsNull())
    {
        if (!value["P2pBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `XP2PDetailInfo.P2pBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_p2pBytes = value["P2pBytes"].GetInt64();
        m_p2pBytesHasBeenSet = true;
    }

    if (value.HasMember("StuckPeople") && !value["StuckPeople"].IsNull())
    {
        if (!value["StuckPeople"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `XP2PDetailInfo.StuckPeople` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stuckPeople = value["StuckPeople"].GetInt64();
        m_stuckPeopleHasBeenSet = true;
    }

    if (value.HasMember("StuckTimes") && !value["StuckTimes"].IsNull())
    {
        if (!value["StuckTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `XP2PDetailInfo.StuckTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stuckTimes = value["StuckTimes"].GetInt64();
        m_stuckTimesHasBeenSet = true;
    }

    if (value.HasMember("OnlinePeople") && !value["OnlinePeople"].IsNull())
    {
        if (!value["OnlinePeople"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `XP2PDetailInfo.OnlinePeople` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_onlinePeople = value["OnlinePeople"].GetInt64();
        m_onlinePeopleHasBeenSet = true;
    }

    if (value.HasMember("Request") && !value["Request"].IsNull())
    {
        if (!value["Request"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `XP2PDetailInfo.Request` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_request = value["Request"].GetInt64();
        m_requestHasBeenSet = true;
    }

    if (value.HasMember("RequestSuccess") && !value["RequestSuccess"].IsNull())
    {
        if (!value["RequestSuccess"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `XP2PDetailInfo.RequestSuccess` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_requestSuccess = value["RequestSuccess"].GetInt64();
        m_requestSuccessHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XP2PDetailInfo.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XP2PDetailInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XP2PDetailInfo.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XP2PDetailInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void XP2PDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cdnBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdnBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cdnBytes, allocator);
    }

    if (m_p2pBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P2pBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p2pBytes, allocator);
    }

    if (m_stuckPeopleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StuckPeople";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stuckPeople, allocator);
    }

    if (m_stuckTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StuckTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stuckTimes, allocator);
    }

    if (m_onlinePeopleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlinePeople";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlinePeople, allocator);
    }

    if (m_requestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Request";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_request, allocator);
    }

    if (m_requestSuccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestSuccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestSuccess, allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

}


int64_t XP2PDetailInfo::GetCdnBytes() const
{
    return m_cdnBytes;
}

void XP2PDetailInfo::SetCdnBytes(const int64_t& _cdnBytes)
{
    m_cdnBytes = _cdnBytes;
    m_cdnBytesHasBeenSet = true;
}

bool XP2PDetailInfo::CdnBytesHasBeenSet() const
{
    return m_cdnBytesHasBeenSet;
}

int64_t XP2PDetailInfo::GetP2pBytes() const
{
    return m_p2pBytes;
}

void XP2PDetailInfo::SetP2pBytes(const int64_t& _p2pBytes)
{
    m_p2pBytes = _p2pBytes;
    m_p2pBytesHasBeenSet = true;
}

bool XP2PDetailInfo::P2pBytesHasBeenSet() const
{
    return m_p2pBytesHasBeenSet;
}

int64_t XP2PDetailInfo::GetStuckPeople() const
{
    return m_stuckPeople;
}

void XP2PDetailInfo::SetStuckPeople(const int64_t& _stuckPeople)
{
    m_stuckPeople = _stuckPeople;
    m_stuckPeopleHasBeenSet = true;
}

bool XP2PDetailInfo::StuckPeopleHasBeenSet() const
{
    return m_stuckPeopleHasBeenSet;
}

int64_t XP2PDetailInfo::GetStuckTimes() const
{
    return m_stuckTimes;
}

void XP2PDetailInfo::SetStuckTimes(const int64_t& _stuckTimes)
{
    m_stuckTimes = _stuckTimes;
    m_stuckTimesHasBeenSet = true;
}

bool XP2PDetailInfo::StuckTimesHasBeenSet() const
{
    return m_stuckTimesHasBeenSet;
}

int64_t XP2PDetailInfo::GetOnlinePeople() const
{
    return m_onlinePeople;
}

void XP2PDetailInfo::SetOnlinePeople(const int64_t& _onlinePeople)
{
    m_onlinePeople = _onlinePeople;
    m_onlinePeopleHasBeenSet = true;
}

bool XP2PDetailInfo::OnlinePeopleHasBeenSet() const
{
    return m_onlinePeopleHasBeenSet;
}

int64_t XP2PDetailInfo::GetRequest() const
{
    return m_request;
}

void XP2PDetailInfo::SetRequest(const int64_t& _request)
{
    m_request = _request;
    m_requestHasBeenSet = true;
}

bool XP2PDetailInfo::RequestHasBeenSet() const
{
    return m_requestHasBeenSet;
}

int64_t XP2PDetailInfo::GetRequestSuccess() const
{
    return m_requestSuccess;
}

void XP2PDetailInfo::SetRequestSuccess(const int64_t& _requestSuccess)
{
    m_requestSuccess = _requestSuccess;
    m_requestSuccessHasBeenSet = true;
}

bool XP2PDetailInfo::RequestSuccessHasBeenSet() const
{
    return m_requestSuccessHasBeenSet;
}

string XP2PDetailInfo::GetTime() const
{
    return m_time;
}

void XP2PDetailInfo::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool XP2PDetailInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string XP2PDetailInfo::GetType() const
{
    return m_type;
}

void XP2PDetailInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool XP2PDetailInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string XP2PDetailInfo::GetStreamName() const
{
    return m_streamName;
}

void XP2PDetailInfo::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool XP2PDetailInfo::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

string XP2PDetailInfo::GetAppId() const
{
    return m_appId;
}

void XP2PDetailInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool XP2PDetailInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

