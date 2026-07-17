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

#include <tencentcloud/teo/v20220901/model/ModifyInferenceServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyInferenceServiceRequest::ModifyInferenceServiceRequest() :
    m_zoneIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_listenPortHasBeenSet(false),
    m_requestPathsHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string ModifyInferenceServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_listenPort, allocator);
    }

    if (m_requestPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestPaths";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_requestPaths.begin(); itr != m_requestPaths.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_containersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Containers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_containers.begin(); itr != m_containers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInferenceServiceRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyInferenceServiceRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyInferenceServiceRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyInferenceServiceRequest::GetServiceId() const
{
    return m_serviceId;
}

void ModifyInferenceServiceRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ModifyInferenceServiceRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

int64_t ModifyInferenceServiceRequest::GetListenPort() const
{
    return m_listenPort;
}

void ModifyInferenceServiceRequest::SetListenPort(const int64_t& _listenPort)
{
    m_listenPort = _listenPort;
    m_listenPortHasBeenSet = true;
}

bool ModifyInferenceServiceRequest::ListenPortHasBeenSet() const
{
    return m_listenPortHasBeenSet;
}

vector<string> ModifyInferenceServiceRequest::GetRequestPaths() const
{
    return m_requestPaths;
}

void ModifyInferenceServiceRequest::SetRequestPaths(const vector<string>& _requestPaths)
{
    m_requestPaths = _requestPaths;
    m_requestPathsHasBeenSet = true;
}

bool ModifyInferenceServiceRequest::RequestPathsHasBeenSet() const
{
    return m_requestPathsHasBeenSet;
}

vector<InferenceContainerConfigForModify> ModifyInferenceServiceRequest::GetContainers() const
{
    return m_containers;
}

void ModifyInferenceServiceRequest::SetContainers(const vector<InferenceContainerConfigForModify>& _containers)
{
    m_containers = _containers;
    m_containersHasBeenSet = true;
}

bool ModifyInferenceServiceRequest::ContainersHasBeenSet() const
{
    return m_containersHasBeenSet;
}

InferenceResourceConfigForModify ModifyInferenceServiceRequest::GetResourceConfig() const
{
    return m_resourceConfig;
}

void ModifyInferenceServiceRequest::SetResourceConfig(const InferenceResourceConfigForModify& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool ModifyInferenceServiceRequest::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string ModifyInferenceServiceRequest::GetDescription() const
{
    return m_description;
}

void ModifyInferenceServiceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyInferenceServiceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


