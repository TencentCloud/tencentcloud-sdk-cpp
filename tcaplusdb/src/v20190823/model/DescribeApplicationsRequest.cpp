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

#include <tencentcloud/tcaplusdb/v20190823/model/DescribeApplicationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

DescribeApplicationsRequest::DescribeApplicationsRequest() :
    m_clusterIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_censorStatusHasBeenSet(false),
    m_tableGroupIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_applicantHasBeenSet(false),
    m_applyTypeHasBeenSet(false)
{
}

string DescribeApplicationsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
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

    if (m_censorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CensorStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_censorStatus, allocator);
    }

    if (m_tableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Applicant";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicant.c_str(), allocator).Move(), allocator);
    }

    if (m_applyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applyType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeApplicationsRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeApplicationsRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeApplicationsRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t DescribeApplicationsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeApplicationsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeApplicationsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeApplicationsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeApplicationsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeApplicationsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeApplicationsRequest::GetCensorStatus() const
{
    return m_censorStatus;
}

void DescribeApplicationsRequest::SetCensorStatus(const int64_t& _censorStatus)
{
    m_censorStatus = _censorStatus;
    m_censorStatusHasBeenSet = true;
}

bool DescribeApplicationsRequest::CensorStatusHasBeenSet() const
{
    return m_censorStatusHasBeenSet;
}

string DescribeApplicationsRequest::GetTableGroupId() const
{
    return m_tableGroupId;
}

void DescribeApplicationsRequest::SetTableGroupId(const string& _tableGroupId)
{
    m_tableGroupId = _tableGroupId;
    m_tableGroupIdHasBeenSet = true;
}

bool DescribeApplicationsRequest::TableGroupIdHasBeenSet() const
{
    return m_tableGroupIdHasBeenSet;
}

string DescribeApplicationsRequest::GetTableName() const
{
    return m_tableName;
}

void DescribeApplicationsRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DescribeApplicationsRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string DescribeApplicationsRequest::GetApplicant() const
{
    return m_applicant;
}

void DescribeApplicationsRequest::SetApplicant(const string& _applicant)
{
    m_applicant = _applicant;
    m_applicantHasBeenSet = true;
}

bool DescribeApplicationsRequest::ApplicantHasBeenSet() const
{
    return m_applicantHasBeenSet;
}

int64_t DescribeApplicationsRequest::GetApplyType() const
{
    return m_applyType;
}

void DescribeApplicationsRequest::SetApplyType(const int64_t& _applyType)
{
    m_applyType = _applyType;
    m_applyTypeHasBeenSet = true;
}

bool DescribeApplicationsRequest::ApplyTypeHasBeenSet() const
{
    return m_applyTypeHasBeenSet;
}


