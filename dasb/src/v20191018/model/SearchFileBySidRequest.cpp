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

#include <tencentcloud/dasb/v20191018/model/SearchFileBySidRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

SearchFileBySidRequest::SearchFileBySidRequest() :
    m_sidHasBeenSet(false),
    m_auditLogHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_auditActionHasBeenSet(false),
    m_typeFiltersHasBeenSet(false)
{
}

string SearchFileBySidRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sid.c_str(), allocator).Move(), allocator);
    }

    if (m_auditLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditLog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_auditLog, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_auditActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_auditAction, allocator);
    }

    if (m_typeFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_typeFilters.begin(); itr != m_typeFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchFileBySidRequest::GetSid() const
{
    return m_sid;
}

void SearchFileBySidRequest::SetSid(const string& _sid)
{
    m_sid = _sid;
    m_sidHasBeenSet = true;
}

bool SearchFileBySidRequest::SidHasBeenSet() const
{
    return m_sidHasBeenSet;
}

bool SearchFileBySidRequest::GetAuditLog() const
{
    return m_auditLog;
}

void SearchFileBySidRequest::SetAuditLog(const bool& _auditLog)
{
    m_auditLog = _auditLog;
    m_auditLogHasBeenSet = true;
}

bool SearchFileBySidRequest::AuditLogHasBeenSet() const
{
    return m_auditLogHasBeenSet;
}

uint64_t SearchFileBySidRequest::GetLimit() const
{
    return m_limit;
}

void SearchFileBySidRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchFileBySidRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string SearchFileBySidRequest::GetFileName() const
{
    return m_fileName;
}

void SearchFileBySidRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool SearchFileBySidRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

uint64_t SearchFileBySidRequest::GetOffset() const
{
    return m_offset;
}

void SearchFileBySidRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SearchFileBySidRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t SearchFileBySidRequest::GetAuditAction() const
{
    return m_auditAction;
}

void SearchFileBySidRequest::SetAuditAction(const int64_t& _auditAction)
{
    m_auditAction = _auditAction;
    m_auditActionHasBeenSet = true;
}

bool SearchFileBySidRequest::AuditActionHasBeenSet() const
{
    return m_auditActionHasBeenSet;
}

vector<SearchFileTypeFilter> SearchFileBySidRequest::GetTypeFilters() const
{
    return m_typeFilters;
}

void SearchFileBySidRequest::SetTypeFilters(const vector<SearchFileTypeFilter>& _typeFilters)
{
    m_typeFilters = _typeFilters;
    m_typeFiltersHasBeenSet = true;
}

bool SearchFileBySidRequest::TypeFiltersHasBeenSet() const
{
    return m_typeFiltersHasBeenSet;
}


