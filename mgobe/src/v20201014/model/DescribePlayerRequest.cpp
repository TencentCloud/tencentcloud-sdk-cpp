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

#include <tencentcloud/mgobe/v20201014/model/DescribePlayerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mgobe::V20201014::Model;
using namespace std;

DescribePlayerRequest::DescribePlayerRequest() :
    m_gameIdHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_playerIdHasBeenSet(false)
{
}

string DescribePlayerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gameIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameId.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_playerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_playerId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePlayerRequest::GetGameId() const
{
    return m_gameId;
}

void DescribePlayerRequest::SetGameId(const string& _gameId)
{
    m_gameId = _gameId;
    m_gameIdHasBeenSet = true;
}

bool DescribePlayerRequest::GameIdHasBeenSet() const
{
    return m_gameIdHasBeenSet;
}

string DescribePlayerRequest::GetOpenId() const
{
    return m_openId;
}

void DescribePlayerRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool DescribePlayerRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string DescribePlayerRequest::GetPlayerId() const
{
    return m_playerId;
}

void DescribePlayerRequest::SetPlayerId(const string& _playerId)
{
    m_playerId = _playerId;
    m_playerIdHasBeenSet = true;
}

bool DescribePlayerRequest::PlayerIdHasBeenSet() const
{
    return m_playerIdHasBeenSet;
}


