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

#include <tencentcloud/tem/v20210701/model/ModifyApplicationAutoscalerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

ModifyApplicationAutoscalerRequest::ModifyApplicationAutoscalerRequest() :
    m_applicationIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_autoscalerIdHasBeenSet(false),
    m_autoscalerHasBeenSet(false),
    m_sourceChannelHasBeenSet(false)
{
}

string ModifyApplicationAutoscalerRequest::ToJsonString() const
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

    if (m_autoscalerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoscalerId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoscalerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Autoscaler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoscaler.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sourceChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceChannel, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApplicationAutoscalerRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ModifyApplicationAutoscalerRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ModifyApplicationAutoscalerRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ModifyApplicationAutoscalerRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void ModifyApplicationAutoscalerRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool ModifyApplicationAutoscalerRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string ModifyApplicationAutoscalerRequest::GetAutoscalerId() const
{
    return m_autoscalerId;
}

void ModifyApplicationAutoscalerRequest::SetAutoscalerId(const string& _autoscalerId)
{
    m_autoscalerId = _autoscalerId;
    m_autoscalerIdHasBeenSet = true;
}

bool ModifyApplicationAutoscalerRequest::AutoscalerIdHasBeenSet() const
{
    return m_autoscalerIdHasBeenSet;
}

Autoscaler ModifyApplicationAutoscalerRequest::GetAutoscaler() const
{
    return m_autoscaler;
}

void ModifyApplicationAutoscalerRequest::SetAutoscaler(const Autoscaler& _autoscaler)
{
    m_autoscaler = _autoscaler;
    m_autoscalerHasBeenSet = true;
}

bool ModifyApplicationAutoscalerRequest::AutoscalerHasBeenSet() const
{
    return m_autoscalerHasBeenSet;
}

int64_t ModifyApplicationAutoscalerRequest::GetSourceChannel() const
{
    return m_sourceChannel;
}

void ModifyApplicationAutoscalerRequest::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool ModifyApplicationAutoscalerRequest::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}


