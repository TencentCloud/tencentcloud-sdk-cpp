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

#include <tencentcloud/gs/v20191118/model/SwitchGameArchiveRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

SwitchGameArchiveRequest::SwitchGameArchiveRequest() :
    m_userIdHasBeenSet(false),
    m_gameIdHasBeenSet(false),
    m_gameArchiveUrlHasBeenSet(false),
    m_gameContextHasBeenSet(false)
{
}

string SwitchGameArchiveRequest::ToJsonString() const
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

    if (m_gameArchiveUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameArchiveUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameArchiveUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_gameContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameContext.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SwitchGameArchiveRequest::GetUserId() const
{
    return m_userId;
}

void SwitchGameArchiveRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool SwitchGameArchiveRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string SwitchGameArchiveRequest::GetGameId() const
{
    return m_gameId;
}

void SwitchGameArchiveRequest::SetGameId(const string& _gameId)
{
    m_gameId = _gameId;
    m_gameIdHasBeenSet = true;
}

bool SwitchGameArchiveRequest::GameIdHasBeenSet() const
{
    return m_gameIdHasBeenSet;
}

string SwitchGameArchiveRequest::GetGameArchiveUrl() const
{
    return m_gameArchiveUrl;
}

void SwitchGameArchiveRequest::SetGameArchiveUrl(const string& _gameArchiveUrl)
{
    m_gameArchiveUrl = _gameArchiveUrl;
    m_gameArchiveUrlHasBeenSet = true;
}

bool SwitchGameArchiveRequest::GameArchiveUrlHasBeenSet() const
{
    return m_gameArchiveUrlHasBeenSet;
}

string SwitchGameArchiveRequest::GetGameContext() const
{
    return m_gameContext;
}

void SwitchGameArchiveRequest::SetGameContext(const string& _gameContext)
{
    m_gameContext = _gameContext;
    m_gameContextHasBeenSet = true;
}

bool SwitchGameArchiveRequest::GameContextHasBeenSet() const
{
    return m_gameContextHasBeenSet;
}


