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

#include <tencentcloud/dbbrain/v20210527/model/CreateAuditLogFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

CreateAuditLogFileRequest::CreateAuditLogFileRequest() :
    m_productHasBeenSet(false),
    m_nodeRequestTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

string CreateAuditLogFileRequest::ToJsonString() const
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAuditLogFileRequest::GetProduct() const
{
    return m_product;
}

void CreateAuditLogFileRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool CreateAuditLogFileRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string CreateAuditLogFileRequest::GetNodeRequestType() const
{
    return m_nodeRequestType;
}

void CreateAuditLogFileRequest::SetNodeRequestType(const string& _nodeRequestType)
{
    m_nodeRequestType = _nodeRequestType;
    m_nodeRequestTypeHasBeenSet = true;
}

bool CreateAuditLogFileRequest::NodeRequestTypeHasBeenSet() const
{
    return m_nodeRequestTypeHasBeenSet;
}

string CreateAuditLogFileRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateAuditLogFileRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateAuditLogFileRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateAuditLogFileRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateAuditLogFileRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateAuditLogFileRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CreateAuditLogFileRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateAuditLogFileRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateAuditLogFileRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

AuditLogFilter CreateAuditLogFileRequest::GetFilter() const
{
    return m_filter;
}

void CreateAuditLogFileRequest::SetFilter(const AuditLogFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool CreateAuditLogFileRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}


