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

#include <tencentcloud/gse/v20191112/model/UpdateRuntimeConfigurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

UpdateRuntimeConfigurationRequest::UpdateRuntimeConfigurationRequest() :
    m_fleetIdHasBeenSet(false),
    m_runtimeConfigurationHasBeenSet(false)
{
}

string UpdateRuntimeConfigurationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fleetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_runtimeConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateRuntimeConfigurationRequest::GetFleetId() const
{
    return m_fleetId;
}

void UpdateRuntimeConfigurationRequest::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool UpdateRuntimeConfigurationRequest::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

RuntimeConfiguration UpdateRuntimeConfigurationRequest::GetRuntimeConfiguration() const
{
    return m_runtimeConfiguration;
}

void UpdateRuntimeConfigurationRequest::SetRuntimeConfiguration(const RuntimeConfiguration& _runtimeConfiguration)
{
    m_runtimeConfiguration = _runtimeConfiguration;
    m_runtimeConfigurationHasBeenSet = true;
}

bool UpdateRuntimeConfigurationRequest::RuntimeConfigurationHasBeenSet() const
{
    return m_runtimeConfigurationHasBeenSet;
}


