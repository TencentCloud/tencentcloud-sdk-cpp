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

#include <tencentcloud/vod/v20180717/model/ListFilesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ListFilesRequest::ListFilesRequest() :
    m_subAppIdHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_maxKeysHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_categoriesHasBeenSet(false)
{
}

string ListFilesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_prefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prefix.c_str(), allocator).Move(), allocator);
    }

    if (m_delimiterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delimiter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_delimiter.c_str(), allocator).Move(), allocator);
    }

    if (m_maxKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxKeys, allocator);
    }

    if (m_markerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Marker";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_marker.c_str(), allocator).Move(), allocator);
    }

    if (m_categoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Categories";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categories.begin(); itr != m_categories.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListFilesRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ListFilesRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ListFilesRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string ListFilesRequest::GetPrefix() const
{
    return m_prefix;
}

void ListFilesRequest::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool ListFilesRequest::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

string ListFilesRequest::GetDelimiter() const
{
    return m_delimiter;
}

void ListFilesRequest::SetDelimiter(const string& _delimiter)
{
    m_delimiter = _delimiter;
    m_delimiterHasBeenSet = true;
}

bool ListFilesRequest::DelimiterHasBeenSet() const
{
    return m_delimiterHasBeenSet;
}

int64_t ListFilesRequest::GetMaxKeys() const
{
    return m_maxKeys;
}

void ListFilesRequest::SetMaxKeys(const int64_t& _maxKeys)
{
    m_maxKeys = _maxKeys;
    m_maxKeysHasBeenSet = true;
}

bool ListFilesRequest::MaxKeysHasBeenSet() const
{
    return m_maxKeysHasBeenSet;
}

string ListFilesRequest::GetMarker() const
{
    return m_marker;
}

void ListFilesRequest::SetMarker(const string& _marker)
{
    m_marker = _marker;
    m_markerHasBeenSet = true;
}

bool ListFilesRequest::MarkerHasBeenSet() const
{
    return m_markerHasBeenSet;
}

vector<string> ListFilesRequest::GetCategories() const
{
    return m_categories;
}

void ListFilesRequest::SetCategories(const vector<string>& _categories)
{
    m_categories = _categories;
    m_categoriesHasBeenSet = true;
}

bool ListFilesRequest::CategoriesHasBeenSet() const
{
    return m_categoriesHasBeenSet;
}


