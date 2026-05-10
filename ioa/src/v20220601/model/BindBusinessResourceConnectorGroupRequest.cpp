/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ioa/v20220601/model/BindBusinessResourceConnectorGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

BindBusinessResourceConnectorGroupRequest::BindBusinessResourceConnectorGroupRequest() :
    m_serviceIdHasBeenSet(false),
    m_connectorGroupIdHasBeenSet(false)
{
}

string BindBusinessResourceConnectorGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceId, allocator);
    }

    if (m_connectorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectorGroupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t BindBusinessResourceConnectorGroupRequest::GetServiceId() const
{
    return m_serviceId;
}

void BindBusinessResourceConnectorGroupRequest::SetServiceId(const int64_t& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool BindBusinessResourceConnectorGroupRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string BindBusinessResourceConnectorGroupRequest::GetConnectorGroupId() const
{
    return m_connectorGroupId;
}

void BindBusinessResourceConnectorGroupRequest::SetConnectorGroupId(const string& _connectorGroupId)
{
    m_connectorGroupId = _connectorGroupId;
    m_connectorGroupIdHasBeenSet = true;
}

bool BindBusinessResourceConnectorGroupRequest::ConnectorGroupIdHasBeenSet() const
{
    return m_connectorGroupIdHasBeenSet;
}


