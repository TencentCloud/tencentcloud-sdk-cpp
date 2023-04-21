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

#include <tencentcloud/dbbrain/v20210527/model/DeleteAuditLogFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DeleteAuditLogFileRequest::DeleteAuditLogFileRequest() :
    m_productHasBeenSet(false),
    m_nodeRequestTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_asyncRequestIdHasBeenSet(false)
{
}

string DeleteAuditLogFileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeRequestTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRequestType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeRequestType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_asyncRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRequestId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_asyncRequestId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteAuditLogFileRequest::GetProduct() const
{
    return m_product;
}

void DeleteAuditLogFileRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DeleteAuditLogFileRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DeleteAuditLogFileRequest::GetNodeRequestType() const
{
    return m_nodeRequestType;
}

void DeleteAuditLogFileRequest::SetNodeRequestType(const string& _nodeRequestType)
{
    m_nodeRequestType = _nodeRequestType;
    m_nodeRequestTypeHasBeenSet = true;
}

bool DeleteAuditLogFileRequest::NodeRequestTypeHasBeenSet() const
{
    return m_nodeRequestTypeHasBeenSet;
}

string DeleteAuditLogFileRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeleteAuditLogFileRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeleteAuditLogFileRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DeleteAuditLogFileRequest::GetAsyncRequestId() const
{
    return m_asyncRequestId;
}

void DeleteAuditLogFileRequest::SetAsyncRequestId(const int64_t& _asyncRequestId)
{
    m_asyncRequestId = _asyncRequestId;
    m_asyncRequestIdHasBeenSet = true;
}

bool DeleteAuditLogFileRequest::AsyncRequestIdHasBeenSet() const
{
    return m_asyncRequestIdHasBeenSet;
}


