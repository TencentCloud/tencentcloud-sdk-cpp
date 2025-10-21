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

#include <tencentcloud/lowcode/v20210108/model/DescribeAppsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

DescribeAppsRequest::DescribeAppsRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_appIdsHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_favoriteHasBeenSet(false)
{
}

string DescribeAppsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_appIds.begin(); itr != m_appIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_favoriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Favorite";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_favorite, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAppsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAppsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAppsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeAppsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAppsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAppsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeAppsRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeAppsRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeAppsRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeAppsRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeAppsRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeAppsRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

vector<string> DescribeAppsRequest::GetAppIds() const
{
    return m_appIds;
}

void DescribeAppsRequest::SetAppIds(const vector<string>& _appIds)
{
    m_appIds = _appIds;
    m_appIdsHasBeenSet = true;
}

bool DescribeAppsRequest::AppIdsHasBeenSet() const
{
    return m_appIdsHasBeenSet;
}

string DescribeAppsRequest::GetChannel() const
{
    return m_channel;
}

void DescribeAppsRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool DescribeAppsRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

int64_t DescribeAppsRequest::GetType() const
{
    return m_type;
}

void DescribeAppsRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeAppsRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool DescribeAppsRequest::GetFavorite() const
{
    return m_favorite;
}

void DescribeAppsRequest::SetFavorite(const bool& _favorite)
{
    m_favorite = _favorite;
    m_favoriteHasBeenSet = true;
}

bool DescribeAppsRequest::FavoriteHasBeenSet() const
{
    return m_favoriteHasBeenSet;
}


