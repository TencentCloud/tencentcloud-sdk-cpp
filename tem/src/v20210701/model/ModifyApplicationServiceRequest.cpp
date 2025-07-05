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

#include <tencentcloud/tem/v20210701/model/ModifyApplicationServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

ModifyApplicationServiceRequest::ModifyApplicationServiceRequest() :
    m_applicationIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_sourceChannelHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

string ModifyApplicationServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceChannel, allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_service.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_data.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApplicationServiceRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ModifyApplicationServiceRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ModifyApplicationServiceRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ModifyApplicationServiceRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void ModifyApplicationServiceRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool ModifyApplicationServiceRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

int64_t ModifyApplicationServiceRequest::GetSourceChannel() const
{
    return m_sourceChannel;
}

void ModifyApplicationServiceRequest::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool ModifyApplicationServiceRequest::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}

EksService ModifyApplicationServiceRequest::GetService() const
{
    return m_service;
}

void ModifyApplicationServiceRequest::SetService(const EksService& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool ModifyApplicationServiceRequest::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

ServicePortMapping ModifyApplicationServiceRequest::GetData() const
{
    return m_data;
}

void ModifyApplicationServiceRequest::SetData(const ServicePortMapping& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool ModifyApplicationServiceRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}


