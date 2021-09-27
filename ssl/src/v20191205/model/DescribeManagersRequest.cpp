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

#include <tencentcloud/ssl/v20191205/model/DescribeManagersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DescribeManagersRequest::DescribeManagersRequest() :
    m_companyIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_managerNameHasBeenSet(false),
    m_managerMailHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_searchKeyHasBeenSet(false)
{
}

string DescribeManagersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_companyId, allocator);
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

    if (m_managerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_managerName.c_str(), allocator).Move(), allocator);
    }

    if (m_managerMailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerMail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_managerMail.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeManagersRequest::GetCompanyId() const
{
    return m_companyId;
}

void DescribeManagersRequest::SetCompanyId(const int64_t& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool DescribeManagersRequest::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

int64_t DescribeManagersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeManagersRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeManagersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeManagersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeManagersRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeManagersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeManagersRequest::GetManagerName() const
{
    return m_managerName;
}

void DescribeManagersRequest::SetManagerName(const string& _managerName)
{
    m_managerName = _managerName;
    m_managerNameHasBeenSet = true;
}

bool DescribeManagersRequest::ManagerNameHasBeenSet() const
{
    return m_managerNameHasBeenSet;
}

string DescribeManagersRequest::GetManagerMail() const
{
    return m_managerMail;
}

void DescribeManagersRequest::SetManagerMail(const string& _managerMail)
{
    m_managerMail = _managerMail;
    m_managerMailHasBeenSet = true;
}

bool DescribeManagersRequest::ManagerMailHasBeenSet() const
{
    return m_managerMailHasBeenSet;
}

string DescribeManagersRequest::GetStatus() const
{
    return m_status;
}

void DescribeManagersRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeManagersRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeManagersRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeManagersRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeManagersRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}


