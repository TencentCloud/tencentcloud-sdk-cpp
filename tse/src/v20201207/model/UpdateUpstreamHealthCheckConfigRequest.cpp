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

#include <tencentcloud/tse/v20201207/model/UpdateUpstreamHealthCheckConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

UpdateUpstreamHealthCheckConfigRequest::UpdateUpstreamHealthCheckConfigRequest() :
    m_gatewayIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_healthCheckConfigHasBeenSet(false)
{
}

string UpdateUpstreamHealthCheckConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheckConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateUpstreamHealthCheckConfigRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void UpdateUpstreamHealthCheckConfigRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool UpdateUpstreamHealthCheckConfigRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string UpdateUpstreamHealthCheckConfigRequest::GetName() const
{
    return m_name;
}

void UpdateUpstreamHealthCheckConfigRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateUpstreamHealthCheckConfigRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

UpstreamHealthCheckConfig UpdateUpstreamHealthCheckConfigRequest::GetHealthCheckConfig() const
{
    return m_healthCheckConfig;
}

void UpdateUpstreamHealthCheckConfigRequest::SetHealthCheckConfig(const UpstreamHealthCheckConfig& _healthCheckConfig)
{
    m_healthCheckConfig = _healthCheckConfig;
    m_healthCheckConfigHasBeenSet = true;
}

bool UpdateUpstreamHealthCheckConfigRequest::HealthCheckConfigHasBeenSet() const
{
    return m_healthCheckConfigHasBeenSet;
}


