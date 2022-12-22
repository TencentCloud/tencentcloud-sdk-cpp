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

#include <tencentcloud/gs/v20191118/model/DescribeInstancesCountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

DescribeInstancesCountRequest::DescribeInstancesCountRequest() :
    m_gameIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_gameRegionHasBeenSet(false),
    m_gameTypeHasBeenSet(false)
{
}

string DescribeInstancesCountRequest::ToJsonString() const
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

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_gameRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_gameTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstancesCountRequest::GetGameId() const
{
    return m_gameId;
}

void DescribeInstancesCountRequest::SetGameId(const string& _gameId)
{
    m_gameId = _gameId;
    m_gameIdHasBeenSet = true;
}

bool DescribeInstancesCountRequest::GameIdHasBeenSet() const
{
    return m_gameIdHasBeenSet;
}

string DescribeInstancesCountRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeInstancesCountRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeInstancesCountRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeInstancesCountRequest::GetGameRegion() const
{
    return m_gameRegion;
}

void DescribeInstancesCountRequest::SetGameRegion(const string& _gameRegion)
{
    m_gameRegion = _gameRegion;
    m_gameRegionHasBeenSet = true;
}

bool DescribeInstancesCountRequest::GameRegionHasBeenSet() const
{
    return m_gameRegionHasBeenSet;
}

string DescribeInstancesCountRequest::GetGameType() const
{
    return m_gameType;
}

void DescribeInstancesCountRequest::SetGameType(const string& _gameType)
{
    m_gameType = _gameType;
    m_gameTypeHasBeenSet = true;
}

bool DescribeInstancesCountRequest::GameTypeHasBeenSet() const
{
    return m_gameTypeHasBeenSet;
}


