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

#include <tencentcloud/dbbrain/v20191016/model/DescribeSecurityAuditLogExportTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

DescribeSecurityAuditLogExportTasksRequest::DescribeSecurityAuditLogExportTasksRequest() :
    m_secAuditGroupIdHasBeenSet(false),
    m_productHasBeenSet(false),
    m_asyncRequestIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeSecurityAuditLogExportTasksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_secAuditGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecAuditGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secAuditGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_asyncRequestIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRequestIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_asyncRequestIds.begin(); itr != m_asyncRequestIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSecurityAuditLogExportTasksRequest::GetSecAuditGroupId() const
{
    return m_secAuditGroupId;
}

void DescribeSecurityAuditLogExportTasksRequest::SetSecAuditGroupId(const string& _secAuditGroupId)
{
    m_secAuditGroupId = _secAuditGroupId;
    m_secAuditGroupIdHasBeenSet = true;
}

bool DescribeSecurityAuditLogExportTasksRequest::SecAuditGroupIdHasBeenSet() const
{
    return m_secAuditGroupIdHasBeenSet;
}

string DescribeSecurityAuditLogExportTasksRequest::GetProduct() const
{
    return m_product;
}

void DescribeSecurityAuditLogExportTasksRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeSecurityAuditLogExportTasksRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

vector<uint64_t> DescribeSecurityAuditLogExportTasksRequest::GetAsyncRequestIds() const
{
    return m_asyncRequestIds;
}

void DescribeSecurityAuditLogExportTasksRequest::SetAsyncRequestIds(const vector<uint64_t>& _asyncRequestIds)
{
    m_asyncRequestIds = _asyncRequestIds;
    m_asyncRequestIdsHasBeenSet = true;
}

bool DescribeSecurityAuditLogExportTasksRequest::AsyncRequestIdsHasBeenSet() const
{
    return m_asyncRequestIdsHasBeenSet;
}

uint64_t DescribeSecurityAuditLogExportTasksRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSecurityAuditLogExportTasksRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSecurityAuditLogExportTasksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeSecurityAuditLogExportTasksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSecurityAuditLogExportTasksRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSecurityAuditLogExportTasksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


