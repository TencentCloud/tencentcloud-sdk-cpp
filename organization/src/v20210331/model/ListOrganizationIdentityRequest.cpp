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

#include <tencentcloud/organization/v20210331/model/ListOrganizationIdentityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ListOrganizationIdentityRequest::ListOrganizationIdentityRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_identityIdHasBeenSet(false),
    m_identityTypeHasBeenSet(false)
{
}

string ListOrganizationIdentityRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_identityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_identityId, allocator);
    }

    if (m_identityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_identityType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListOrganizationIdentityRequest::GetOffset() const
{
    return m_offset;
}

void ListOrganizationIdentityRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListOrganizationIdentityRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t ListOrganizationIdentityRequest::GetLimit() const
{
    return m_limit;
}

void ListOrganizationIdentityRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListOrganizationIdentityRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string ListOrganizationIdentityRequest::GetSearchKey() const
{
    return m_searchKey;
}

void ListOrganizationIdentityRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool ListOrganizationIdentityRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

uint64_t ListOrganizationIdentityRequest::GetIdentityId() const
{
    return m_identityId;
}

void ListOrganizationIdentityRequest::SetIdentityId(const uint64_t& _identityId)
{
    m_identityId = _identityId;
    m_identityIdHasBeenSet = true;
}

bool ListOrganizationIdentityRequest::IdentityIdHasBeenSet() const
{
    return m_identityIdHasBeenSet;
}

uint64_t ListOrganizationIdentityRequest::GetIdentityType() const
{
    return m_identityType;
}

void ListOrganizationIdentityRequest::SetIdentityType(const uint64_t& _identityType)
{
    m_identityType = _identityType;
    m_identityTypeHasBeenSet = true;
}

bool ListOrganizationIdentityRequest::IdentityTypeHasBeenSet() const
{
    return m_identityTypeHasBeenSet;
}


