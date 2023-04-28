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

#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVPlaylistDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

DescribeKTVPlaylistDetailRequest::DescribeKTVPlaylistDetailRequest() :
    m_appNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_playlistIdHasBeenSet(false),
    m_scrollTokenHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_rightFiltersHasBeenSet(false),
    m_playSceneHasBeenSet(false),
    m_materialFiltersHasBeenSet(false)
{
}

string DescribeKTVPlaylistDetailRequest::ToJsonString() const
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

    if (m_playlistIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaylistId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_playlistId.c_str(), allocator).Move(), allocator);
    }

    if (m_scrollTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrollToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scrollToken.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_rightFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rightFilters.begin(); itr != m_rightFilters.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_playSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayScene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_playScene.c_str(), allocator).Move(), allocator);
    }

    if (m_materialFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_materialFilters.begin(); itr != m_materialFilters.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeKTVPlaylistDetailRequest::GetAppName() const
{
    return m_appName;
}

void DescribeKTVPlaylistDetailRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool DescribeKTVPlaylistDetailRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string DescribeKTVPlaylistDetailRequest::GetUserId() const
{
    return m_userId;
}

void DescribeKTVPlaylistDetailRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeKTVPlaylistDetailRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeKTVPlaylistDetailRequest::GetPlaylistId() const
{
    return m_playlistId;
}

void DescribeKTVPlaylistDetailRequest::SetPlaylistId(const string& _playlistId)
{
    m_playlistId = _playlistId;
    m_playlistIdHasBeenSet = true;
}

bool DescribeKTVPlaylistDetailRequest::PlaylistIdHasBeenSet() const
{
    return m_playlistIdHasBeenSet;
}

string DescribeKTVPlaylistDetailRequest::GetScrollToken() const
{
    return m_scrollToken;
}

void DescribeKTVPlaylistDetailRequest::SetScrollToken(const string& _scrollToken)
{
    m_scrollToken = _scrollToken;
    m_scrollTokenHasBeenSet = true;
}

bool DescribeKTVPlaylistDetailRequest::ScrollTokenHasBeenSet() const
{
    return m_scrollTokenHasBeenSet;
}

int64_t DescribeKTVPlaylistDetailRequest::GetLimit() const
{
    return m_limit;
}

void DescribeKTVPlaylistDetailRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeKTVPlaylistDetailRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeKTVPlaylistDetailRequest::GetRightFilters() const
{
    return m_rightFilters;
}

void DescribeKTVPlaylistDetailRequest::SetRightFilters(const vector<string>& _rightFilters)
{
    m_rightFilters = _rightFilters;
    m_rightFiltersHasBeenSet = true;
}

bool DescribeKTVPlaylistDetailRequest::RightFiltersHasBeenSet() const
{
    return m_rightFiltersHasBeenSet;
}

string DescribeKTVPlaylistDetailRequest::GetPlayScene() const
{
    return m_playScene;
}

void DescribeKTVPlaylistDetailRequest::SetPlayScene(const string& _playScene)
{
    m_playScene = _playScene;
    m_playSceneHasBeenSet = true;
}

bool DescribeKTVPlaylistDetailRequest::PlaySceneHasBeenSet() const
{
    return m_playSceneHasBeenSet;
}

vector<string> DescribeKTVPlaylistDetailRequest::GetMaterialFilters() const
{
    return m_materialFilters;
}

void DescribeKTVPlaylistDetailRequest::SetMaterialFilters(const vector<string>& _materialFilters)
{
    m_materialFilters = _materialFilters;
    m_materialFiltersHasBeenSet = true;
}

bool DescribeKTVPlaylistDetailRequest::MaterialFiltersHasBeenSet() const
{
    return m_materialFiltersHasBeenSet;
}


