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

#include <tencentcloud/dbbrain/v20210527/model/DeleteSecurityAuditLogExportTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DeleteSecurityAuditLogExportTasksRequest::DeleteSecurityAuditLogExportTasksRequest() :
    m_secAuditGroupIdHasBeenSet(false),
    m_asyncRequestIdsHasBeenSet(false),
    m_productHasBeenSet(false)
{
}

string DeleteSecurityAuditLogExportTasksRequest::ToJsonString() const
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

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteSecurityAuditLogExportTasksRequest::GetSecAuditGroupId() const
{
    return m_secAuditGroupId;
}

void DeleteSecurityAuditLogExportTasksRequest::SetSecAuditGroupId(const string& _secAuditGroupId)
{
    m_secAuditGroupId = _secAuditGroupId;
    m_secAuditGroupIdHasBeenSet = true;
}

bool DeleteSecurityAuditLogExportTasksRequest::SecAuditGroupIdHasBeenSet() const
{
    return m_secAuditGroupIdHasBeenSet;
}

vector<uint64_t> DeleteSecurityAuditLogExportTasksRequest::GetAsyncRequestIds() const
{
    return m_asyncRequestIds;
}

void DeleteSecurityAuditLogExportTasksRequest::SetAsyncRequestIds(const vector<uint64_t>& _asyncRequestIds)
{
    m_asyncRequestIds = _asyncRequestIds;
    m_asyncRequestIdsHasBeenSet = true;
}

bool DeleteSecurityAuditLogExportTasksRequest::AsyncRequestIdsHasBeenSet() const
{
    return m_asyncRequestIdsHasBeenSet;
}

string DeleteSecurityAuditLogExportTasksRequest::GetProduct() const
{
    return m_product;
}

void DeleteSecurityAuditLogExportTasksRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DeleteSecurityAuditLogExportTasksRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}


