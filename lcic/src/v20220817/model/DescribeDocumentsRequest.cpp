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

#include <tencentcloud/lcic/v20220817/model/DescribeDocumentsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

DescribeDocumentsRequest::DescribeDocumentsRequest() :
    m_schoolIdHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_documentIdHasBeenSet(false)
{
}

string DescribeDocumentsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_schoolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchoolId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_schoolId, allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_permission.begin(); itr != m_permission.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_documentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_documentId.begin(); itr != m_documentId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeDocumentsRequest::GetSchoolId() const
{
    return m_schoolId;
}

void DescribeDocumentsRequest::SetSchoolId(const uint64_t& _schoolId)
{
    m_schoolId = _schoolId;
    m_schoolIdHasBeenSet = true;
}

bool DescribeDocumentsRequest::SchoolIdHasBeenSet() const
{
    return m_schoolIdHasBeenSet;
}

int64_t DescribeDocumentsRequest::GetPage() const
{
    return m_page;
}

void DescribeDocumentsRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeDocumentsRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeDocumentsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDocumentsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDocumentsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<uint64_t> DescribeDocumentsRequest::GetPermission() const
{
    return m_permission;
}

void DescribeDocumentsRequest::SetPermission(const vector<uint64_t>& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool DescribeDocumentsRequest::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string DescribeDocumentsRequest::GetOwner() const
{
    return m_owner;
}

void DescribeDocumentsRequest::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool DescribeDocumentsRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string DescribeDocumentsRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeDocumentsRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeDocumentsRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

vector<string> DescribeDocumentsRequest::GetDocumentId() const
{
    return m_documentId;
}

void DescribeDocumentsRequest::SetDocumentId(const vector<string>& _documentId)
{
    m_documentId = _documentId;
    m_documentIdHasBeenSet = true;
}

bool DescribeDocumentsRequest::DocumentIdHasBeenSet() const
{
    return m_documentIdHasBeenSet;
}


