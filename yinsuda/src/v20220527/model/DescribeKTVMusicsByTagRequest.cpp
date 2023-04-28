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

#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVMusicsByTagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

DescribeKTVMusicsByTagRequest::DescribeKTVMusicsByTagRequest() :
    m_appNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_tagIdHasBeenSet(false),
    m_scrollTokenHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_rightFiltersHasBeenSet(false),
    m_materialFiltersHasBeenSet(false)
{
}

string DescribeKTVMusicsByTagRequest::ToJsonString() const
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

    if (m_tagIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagId.c_str(), allocator).Move(), allocator);
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


string DescribeKTVMusicsByTagRequest::GetAppName() const
{
    return m_appName;
}

void DescribeKTVMusicsByTagRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool DescribeKTVMusicsByTagRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string DescribeKTVMusicsByTagRequest::GetUserId() const
{
    return m_userId;
}

void DescribeKTVMusicsByTagRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeKTVMusicsByTagRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeKTVMusicsByTagRequest::GetTagId() const
{
    return m_tagId;
}

void DescribeKTVMusicsByTagRequest::SetTagId(const string& _tagId)
{
    m_tagId = _tagId;
    m_tagIdHasBeenSet = true;
}

bool DescribeKTVMusicsByTagRequest::TagIdHasBeenSet() const
{
    return m_tagIdHasBeenSet;
}

string DescribeKTVMusicsByTagRequest::GetScrollToken() const
{
    return m_scrollToken;
}

void DescribeKTVMusicsByTagRequest::SetScrollToken(const string& _scrollToken)
{
    m_scrollToken = _scrollToken;
    m_scrollTokenHasBeenSet = true;
}

bool DescribeKTVMusicsByTagRequest::ScrollTokenHasBeenSet() const
{
    return m_scrollTokenHasBeenSet;
}

int64_t DescribeKTVMusicsByTagRequest::GetLimit() const
{
    return m_limit;
}

void DescribeKTVMusicsByTagRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeKTVMusicsByTagRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeKTVMusicsByTagRequest::GetRightFilters() const
{
    return m_rightFilters;
}

void DescribeKTVMusicsByTagRequest::SetRightFilters(const vector<string>& _rightFilters)
{
    m_rightFilters = _rightFilters;
    m_rightFiltersHasBeenSet = true;
}

bool DescribeKTVMusicsByTagRequest::RightFiltersHasBeenSet() const
{
    return m_rightFiltersHasBeenSet;
}

vector<string> DescribeKTVMusicsByTagRequest::GetMaterialFilters() const
{
    return m_materialFilters;
}

void DescribeKTVMusicsByTagRequest::SetMaterialFilters(const vector<string>& _materialFilters)
{
    m_materialFilters = _materialFilters;
    m_materialFiltersHasBeenSet = true;
}

bool DescribeKTVMusicsByTagRequest::MaterialFiltersHasBeenSet() const
{
    return m_materialFiltersHasBeenSet;
}


