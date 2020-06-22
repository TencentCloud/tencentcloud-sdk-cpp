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

#include <tencentcloud/gs/v20191118/model/EnterQueueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace rapidjson;
using namespace std;

EnterQueueRequest::EnterQueueRequest() :
    m_firstHasBeenSet(false),
    m_gameIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_setNumberHasBeenSet(false),
    m_userIpHasBeenSet(false)
{
}

string EnterQueueRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_firstHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "First";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_first, allocator);
    }

    if (m_gameIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GameId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_gameId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_setNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SetNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_setNumber, allocator);
    }

    if (m_userIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_userIp.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool EnterQueueRequest::GetFirst() const
{
    return m_first;
}

void EnterQueueRequest::SetFirst(const bool& _first)
{
    m_first = _first;
    m_firstHasBeenSet = true;
}

bool EnterQueueRequest::FirstHasBeenSet() const
{
    return m_firstHasBeenSet;
}

string EnterQueueRequest::GetGameId() const
{
    return m_gameId;
}

void EnterQueueRequest::SetGameId(const string& _gameId)
{
    m_gameId = _gameId;
    m_gameIdHasBeenSet = true;
}

bool EnterQueueRequest::GameIdHasBeenSet() const
{
    return m_gameIdHasBeenSet;
}

string EnterQueueRequest::GetUserId() const
{
    return m_userId;
}

void EnterQueueRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool EnterQueueRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t EnterQueueRequest::GetSetNumber() const
{
    return m_setNumber;
}

void EnterQueueRequest::SetSetNumber(const uint64_t& _setNumber)
{
    m_setNumber = _setNumber;
    m_setNumberHasBeenSet = true;
}

bool EnterQueueRequest::SetNumberHasBeenSet() const
{
    return m_setNumberHasBeenSet;
}

string EnterQueueRequest::GetUserIp() const
{
    return m_userIp;
}

void EnterQueueRequest::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool EnterQueueRequest::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}


