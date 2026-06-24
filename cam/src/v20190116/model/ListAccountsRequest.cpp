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

#include <tencentcloud/cam/v20190116/model/ListAccountsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

ListAccountsRequest::ListAccountsRequest() :
    m_maxItemsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_userTypeHasBeenSet(false)
{
}

string ListAccountsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_maxItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxItems, allocator);
    }

    if (m_markerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Marker";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_marker.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ListAccountsRequest::GetMaxItems() const
{
    return m_maxItems;
}

void ListAccountsRequest::SetMaxItems(const int64_t& _maxItems)
{
    m_maxItems = _maxItems;
    m_maxItemsHasBeenSet = true;
}

bool ListAccountsRequest::MaxItemsHasBeenSet() const
{
    return m_maxItemsHasBeenSet;
}

string ListAccountsRequest::GetMarker() const
{
    return m_marker;
}

void ListAccountsRequest::SetMarker(const string& _marker)
{
    m_marker = _marker;
    m_markerHasBeenSet = true;
}

bool ListAccountsRequest::MarkerHasBeenSet() const
{
    return m_markerHasBeenSet;
}

string ListAccountsRequest::GetUserType() const
{
    return m_userType;
}

void ListAccountsRequest::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool ListAccountsRequest::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}


