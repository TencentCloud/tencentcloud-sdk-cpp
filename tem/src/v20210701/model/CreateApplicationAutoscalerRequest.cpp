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

#include <tencentcloud/tem/v20210701/model/CreateApplicationAutoscalerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

CreateApplicationAutoscalerRequest::CreateApplicationAutoscalerRequest() :
    m_applicationIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_autoscalerHasBeenSet(false),
    m_sourceChannelHasBeenSet(false)
{
}

string CreateApplicationAutoscalerRequest::ToJsonString() const
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


string CreateApplicationAutoscalerRequest::GetApplicationId() const
{
    return m_applicationId;
}

void CreateApplicationAutoscalerRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool CreateApplicationAutoscalerRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string CreateApplicationAutoscalerRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void CreateApplicationAutoscalerRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool CreateApplicationAutoscalerRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

Autoscaler CreateApplicationAutoscalerRequest::GetAutoscaler() const
{
    return m_autoscaler;
}

void CreateApplicationAutoscalerRequest::SetAutoscaler(const Autoscaler& _autoscaler)
{
    m_autoscaler = _autoscaler;
    m_autoscalerHasBeenSet = true;
}

bool CreateApplicationAutoscalerRequest::AutoscalerHasBeenSet() const
{
    return m_autoscalerHasBeenSet;
}

int64_t CreateApplicationAutoscalerRequest::GetSourceChannel() const
{
    return m_sourceChannel;
}

void CreateApplicationAutoscalerRequest::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool CreateApplicationAutoscalerRequest::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}


