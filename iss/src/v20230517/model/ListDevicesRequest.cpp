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

#include <tencentcloud/iss/v20230517/model/ListDevicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ListDevicesRequest::ListDevicesRequest() :
    m_organizationIdHasBeenSet(false),
    m_isContainSubLevelHasBeenSet(false),
    m_isContainUserHasBeenSet(false),
    m_accessProtocolHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_currentUinHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string ListDevicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_organizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_isContainSubLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsContainSubLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isContainSubLevel, allocator);
    }

    if (m_isContainUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsContainUser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isContainUser, allocator);
    }

    if (m_accessProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accessProtocol, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_currentUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_currentUin, allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListDevicesRequest::GetOrganizationId() const
{
    return m_organizationId;
}

void ListDevicesRequest::SetOrganizationId(const string& _organizationId)
{
    m_organizationId = _organizationId;
    m_organizationIdHasBeenSet = true;
}

bool ListDevicesRequest::OrganizationIdHasBeenSet() const
{
    return m_organizationIdHasBeenSet;
}

bool ListDevicesRequest::GetIsContainSubLevel() const
{
    return m_isContainSubLevel;
}

void ListDevicesRequest::SetIsContainSubLevel(const bool& _isContainSubLevel)
{
    m_isContainSubLevel = _isContainSubLevel;
    m_isContainSubLevelHasBeenSet = true;
}

bool ListDevicesRequest::IsContainSubLevelHasBeenSet() const
{
    return m_isContainSubLevelHasBeenSet;
}

bool ListDevicesRequest::GetIsContainUser() const
{
    return m_isContainUser;
}

void ListDevicesRequest::SetIsContainUser(const bool& _isContainUser)
{
    m_isContainUser = _isContainUser;
    m_isContainUserHasBeenSet = true;
}

bool ListDevicesRequest::IsContainUserHasBeenSet() const
{
    return m_isContainUserHasBeenSet;
}

uint64_t ListDevicesRequest::GetAccessProtocol() const
{
    return m_accessProtocol;
}

void ListDevicesRequest::SetAccessProtocol(const uint64_t& _accessProtocol)
{
    m_accessProtocol = _accessProtocol;
    m_accessProtocolHasBeenSet = true;
}

bool ListDevicesRequest::AccessProtocolHasBeenSet() const
{
    return m_accessProtocolHasBeenSet;
}

uint64_t ListDevicesRequest::GetType() const
{
    return m_type;
}

void ListDevicesRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ListDevicesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t ListDevicesRequest::GetStatus() const
{
    return m_status;
}

void ListDevicesRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListDevicesRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ListDevicesRequest::GetClusterId() const
{
    return m_clusterId;
}

void ListDevicesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ListDevicesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ListDevicesRequest::GetKeyword() const
{
    return m_keyword;
}

void ListDevicesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool ListDevicesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

uint64_t ListDevicesRequest::GetCurrentUin() const
{
    return m_currentUin;
}

void ListDevicesRequest::SetCurrentUin(const uint64_t& _currentUin)
{
    m_currentUin = _currentUin;
    m_currentUinHasBeenSet = true;
}

bool ListDevicesRequest::CurrentUinHasBeenSet() const
{
    return m_currentUinHasBeenSet;
}

uint64_t ListDevicesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListDevicesRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListDevicesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t ListDevicesRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListDevicesRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListDevicesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


