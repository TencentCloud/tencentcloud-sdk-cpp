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

#include <tencentcloud/cdb/v20170320/model/DescribeAuditInstanceListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeAuditInstanceListRequest::DescribeAuditInstanceListRequest() :
    m_auditSwitchHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_auditModeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeAuditInstanceListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_auditSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_auditSwitch, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_auditModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_auditMode, allocator);
    }

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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAuditInstanceListRequest::GetAuditSwitch() const
{
    return m_auditSwitch;
}

void DescribeAuditInstanceListRequest::SetAuditSwitch(const int64_t& _auditSwitch)
{
    m_auditSwitch = _auditSwitch;
    m_auditSwitchHasBeenSet = true;
}

bool DescribeAuditInstanceListRequest::AuditSwitchHasBeenSet() const
{
    return m_auditSwitchHasBeenSet;
}

vector<AuditInstanceFilters> DescribeAuditInstanceListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeAuditInstanceListRequest::SetFilters(const vector<AuditInstanceFilters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeAuditInstanceListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeAuditInstanceListRequest::GetAuditMode() const
{
    return m_auditMode;
}

void DescribeAuditInstanceListRequest::SetAuditMode(const int64_t& _auditMode)
{
    m_auditMode = _auditMode;
    m_auditModeHasBeenSet = true;
}

bool DescribeAuditInstanceListRequest::AuditModeHasBeenSet() const
{
    return m_auditModeHasBeenSet;
}

uint64_t DescribeAuditInstanceListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAuditInstanceListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAuditInstanceListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeAuditInstanceListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAuditInstanceListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAuditInstanceListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


