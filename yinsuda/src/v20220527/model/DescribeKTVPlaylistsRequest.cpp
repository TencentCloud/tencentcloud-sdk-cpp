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

#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVPlaylistsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

DescribeKTVPlaylistsRequest::DescribeKTVPlaylistsRequest() :
    m_appNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_typesHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeKTVPlaylistsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_typesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Types";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_types.begin(); itr != m_types.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeKTVPlaylistsRequest::GetAppName() const
{
    return m_appName;
}

void DescribeKTVPlaylistsRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool DescribeKTVPlaylistsRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string DescribeKTVPlaylistsRequest::GetUserId() const
{
    return m_userId;
}

void DescribeKTVPlaylistsRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeKTVPlaylistsRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

vector<string> DescribeKTVPlaylistsRequest::GetTypes() const
{
    return m_types;
}

void DescribeKTVPlaylistsRequest::SetTypes(const vector<string>& _types)
{
    m_types = _types;
    m_typesHasBeenSet = true;
}

bool DescribeKTVPlaylistsRequest::TypesHasBeenSet() const
{
    return m_typesHasBeenSet;
}

int64_t DescribeKTVPlaylistsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeKTVPlaylistsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeKTVPlaylistsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeKTVPlaylistsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeKTVPlaylistsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeKTVPlaylistsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


