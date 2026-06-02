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

#include <tencentcloud/apis/v20240801/model/CreateAgentAppServicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

CreateAgentAppServicesRequest::CreateAgentAppServicesRequest() :
    m_instanceIDHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_servicesHasBeenSet(false)
{
}

string CreateAgentAppServicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_servicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Services";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_services.begin(); itr != m_services.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAgentAppServicesRequest::GetInstanceID() const
{
    return m_instanceID;
}

void CreateAgentAppServicesRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool CreateAgentAppServicesRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string CreateAgentAppServicesRequest::GetID() const
{
    return m_iD;
}

void CreateAgentAppServicesRequest::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool CreateAgentAppServicesRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

vector<AgentAppServiceDTO> CreateAgentAppServicesRequest::GetServices() const
{
    return m_services;
}

void CreateAgentAppServicesRequest::SetServices(const vector<AgentAppServiceDTO>& _services)
{
    m_services = _services;
    m_servicesHasBeenSet = true;
}

bool CreateAgentAppServicesRequest::ServicesHasBeenSet() const
{
    return m_servicesHasBeenSet;
}


