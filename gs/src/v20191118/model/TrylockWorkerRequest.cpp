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

#include <tencentcloud/gs/v20191118/model/TrylockWorkerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

TrylockWorkerRequest::TrylockWorkerRequest() :
    m_userIdHasBeenSet(false),
    m_gameIdHasBeenSet(false),
    m_gameRegionHasBeenSet(false),
    m_setNoHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

string TrylockWorkerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_gameIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameId.c_str(), allocator).Move(), allocator);
    }

    if (m_gameRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_setNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_setNo, allocator);
    }

    if (m_userIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TrylockWorkerRequest::GetUserId() const
{
    return m_userId;
}

void TrylockWorkerRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool TrylockWorkerRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string TrylockWorkerRequest::GetGameId() const
{
    return m_gameId;
}

void TrylockWorkerRequest::SetGameId(const string& _gameId)
{
    m_gameId = _gameId;
    m_gameIdHasBeenSet = true;
}

bool TrylockWorkerRequest::GameIdHasBeenSet() const
{
    return m_gameIdHasBeenSet;
}

string TrylockWorkerRequest::GetGameRegion() const
{
    return m_gameRegion;
}

void TrylockWorkerRequest::SetGameRegion(const string& _gameRegion)
{
    m_gameRegion = _gameRegion;
    m_gameRegionHasBeenSet = true;
}

bool TrylockWorkerRequest::GameRegionHasBeenSet() const
{
    return m_gameRegionHasBeenSet;
}

uint64_t TrylockWorkerRequest::GetSetNo() const
{
    return m_setNo;
}

void TrylockWorkerRequest::SetSetNo(const uint64_t& _setNo)
{
    m_setNo = _setNo;
    m_setNoHasBeenSet = true;
}

bool TrylockWorkerRequest::SetNoHasBeenSet() const
{
    return m_setNoHasBeenSet;
}

string TrylockWorkerRequest::GetUserIp() const
{
    return m_userIp;
}

void TrylockWorkerRequest::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool TrylockWorkerRequest::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

string TrylockWorkerRequest::GetGroupId() const
{
    return m_groupId;
}

void TrylockWorkerRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool TrylockWorkerRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}


