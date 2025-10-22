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

#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaIntegrationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeGrafanaIntegrationsRequest::DescribeGrafanaIntegrationsRequest() :
    m_instanceIdHasBeenSet(false),
    m_integrationIdHasBeenSet(false),
    m_kindHasBeenSet(false)
{
}

string DescribeGrafanaIntegrationsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_integrationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_integrationId.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGrafanaIntegrationsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeGrafanaIntegrationsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeGrafanaIntegrationsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeGrafanaIntegrationsRequest::GetIntegrationId() const
{
    return m_integrationId;
}

void DescribeGrafanaIntegrationsRequest::SetIntegrationId(const string& _integrationId)
{
    m_integrationId = _integrationId;
    m_integrationIdHasBeenSet = true;
}

bool DescribeGrafanaIntegrationsRequest::IntegrationIdHasBeenSet() const
{
    return m_integrationIdHasBeenSet;
}

string DescribeGrafanaIntegrationsRequest::GetKind() const
{
    return m_kind;
}

void DescribeGrafanaIntegrationsRequest::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool DescribeGrafanaIntegrationsRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}


