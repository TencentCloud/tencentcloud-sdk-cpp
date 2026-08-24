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

#include <tencentcloud/csip/v20221121/model/DescribeDspmSessionListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeDspmSessionListRequest::DescribeDspmSessionListRequest() :
    m_memberIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_loginTypeHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_dbPortHasBeenSet(false),
    m_dbIpHasBeenSet(false),
    m_assetsIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_clientSideIpHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_sourceTypesHasBeenSet(false),
    m_dbTypesHasBeenSet(false)
{
}

string DescribeDspmSessionListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_loginTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_loginType, allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_dbPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dbPort, allocator);
    }

    if (m_dbIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbIp.c_str(), allocator).Move(), allocator);
    }

    if (m_assetsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetsId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_assetsId, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientSideIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientSideIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientSideIp.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_sourceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceTypes.begin(); itr != m_sourceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dbTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dbTypes.begin(); itr != m_dbTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeDspmSessionListRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeDspmSessionListRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeDspmSessionListRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

int64_t DescribeDspmSessionListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDspmSessionListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDspmSessionListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeDspmSessionListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDspmSessionListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDspmSessionListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDspmSessionListRequest::GetLoginType() const
{
    return m_loginType;
}

void DescribeDspmSessionListRequest::SetLoginType(const int64_t& _loginType)
{
    m_loginType = _loginType;
    m_loginTypeHasBeenSet = true;
}

bool DescribeDspmSessionListRequest::LoginTypeHasBeenSet() const
{
    return m_loginTypeHasBeenSet;
}

string DescribeDspmSessionListRequest::GetDbName() const
{
    return m_dbName;
}

void DescribeDspmSessionListRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DescribeDspmSessionListRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

int64_t DescribeDspmSessionListRequest::GetDbPort() const
{
    return m_dbPort;
}

void DescribeDspmSessionListRequest::SetDbPort(const int64_t& _dbPort)
{
    m_dbPort = _dbPort;
    m_dbPortHasBeenSet = true;
}

bool DescribeDspmSessionListRequest::DbPortHasBeenSet() const
{
    return m_dbPortHasBeenSet;
}

string DescribeDspmSessionListRequest::GetDbIp() const
{
    return m_dbIp;
}

void DescribeDspmSessionListRequest::SetDbIp(const string& _dbIp)
{
    m_dbIp = _dbIp;
    m_dbIpHasBeenSet = true;
}

bool DescribeDspmSessionListRequest::DbIpHasBeenSet() const
{
    return m_dbIpHasBeenSet;
}

int64_t DescribeDspmSessionListRequest::GetAssetsId() const
{
    return m_assetsId;
}

void DescribeDspmSessionListRequest::SetAssetsId(const int64_t& _assetsId)
{
    m_assetsId = _assetsId;
    m_assetsIdHasBeenSet = true;
}

bool DescribeDspmSessionListRequest::AssetsIdHasBeenSet() const
{
    return m_assetsIdHasBeenSet;
}

string DescribeDspmSessionListRequest::GetSessionId() const
{
    return m_sessionId;
}

void DescribeDspmSessionListRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DescribeDspmSessionListRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string DescribeDspmSessionListRequest::GetClientSideIp() const
{
    return m_clientSideIp;
}

void DescribeDspmSessionListRequest::SetClientSideIp(const string& _clientSideIp)
{
    m_clientSideIp = _clientSideIp;
    m_clientSideIpHasBeenSet = true;
}

bool DescribeDspmSessionListRequest::ClientSideIpHasBeenSet() const
{
    return m_clientSideIpHasBeenSet;
}

string DescribeDspmSessionListRequest::GetUserName() const
{
    return m_userName;
}

void DescribeDspmSessionListRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeDspmSessionListRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

int64_t DescribeDspmSessionListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDspmSessionListRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDspmSessionListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeDspmSessionListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDspmSessionListRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDspmSessionListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

vector<string> DescribeDspmSessionListRequest::GetSourceTypes() const
{
    return m_sourceTypes;
}

void DescribeDspmSessionListRequest::SetSourceTypes(const vector<string>& _sourceTypes)
{
    m_sourceTypes = _sourceTypes;
    m_sourceTypesHasBeenSet = true;
}

bool DescribeDspmSessionListRequest::SourceTypesHasBeenSet() const
{
    return m_sourceTypesHasBeenSet;
}

vector<string> DescribeDspmSessionListRequest::GetDbTypes() const
{
    return m_dbTypes;
}

void DescribeDspmSessionListRequest::SetDbTypes(const vector<string>& _dbTypes)
{
    m_dbTypes = _dbTypes;
    m_dbTypesHasBeenSet = true;
}

bool DescribeDspmSessionListRequest::DbTypesHasBeenSet() const
{
    return m_dbTypesHasBeenSet;
}


