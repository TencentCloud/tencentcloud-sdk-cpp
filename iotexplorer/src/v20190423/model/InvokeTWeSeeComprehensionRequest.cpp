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

#include <tencentcloud/iotexplorer/v20190423/model/InvokeTWeSeeComprehensionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

InvokeTWeSeeComprehensionRequest::InvokeTWeSeeComprehensionRequest() :
    m_inputURLHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_comprehensionConfigHasBeenSet(false),
    m_waitResultTimeoutHasBeenSet(false),
    m_callbackIdHasBeenSet(false)
{
}

string InvokeTWeSeeComprehensionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_inputURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputURL.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metadata.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_comprehensionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComprehensionConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_comprehensionConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_waitResultTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitResultTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_waitResultTimeout, allocator);
    }

    if (m_callbackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InvokeTWeSeeComprehensionRequest::GetInputURL() const
{
    return m_inputURL;
}

void InvokeTWeSeeComprehensionRequest::SetInputURL(const string& _inputURL)
{
    m_inputURL = _inputURL;
    m_inputURLHasBeenSet = true;
}

bool InvokeTWeSeeComprehensionRequest::InputURLHasBeenSet() const
{
    return m_inputURLHasBeenSet;
}

string InvokeTWeSeeComprehensionRequest::GetServiceType() const
{
    return m_serviceType;
}

void InvokeTWeSeeComprehensionRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool InvokeTWeSeeComprehensionRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

SeeTaskMetadata InvokeTWeSeeComprehensionRequest::GetMetadata() const
{
    return m_metadata;
}

void InvokeTWeSeeComprehensionRequest::SetMetadata(const SeeTaskMetadata& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool InvokeTWeSeeComprehensionRequest::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

SeeComprehensionConfig InvokeTWeSeeComprehensionRequest::GetComprehensionConfig() const
{
    return m_comprehensionConfig;
}

void InvokeTWeSeeComprehensionRequest::SetComprehensionConfig(const SeeComprehensionConfig& _comprehensionConfig)
{
    m_comprehensionConfig = _comprehensionConfig;
    m_comprehensionConfigHasBeenSet = true;
}

bool InvokeTWeSeeComprehensionRequest::ComprehensionConfigHasBeenSet() const
{
    return m_comprehensionConfigHasBeenSet;
}

int64_t InvokeTWeSeeComprehensionRequest::GetWaitResultTimeout() const
{
    return m_waitResultTimeout;
}

void InvokeTWeSeeComprehensionRequest::SetWaitResultTimeout(const int64_t& _waitResultTimeout)
{
    m_waitResultTimeout = _waitResultTimeout;
    m_waitResultTimeoutHasBeenSet = true;
}

bool InvokeTWeSeeComprehensionRequest::WaitResultTimeoutHasBeenSet() const
{
    return m_waitResultTimeoutHasBeenSet;
}

string InvokeTWeSeeComprehensionRequest::GetCallbackId() const
{
    return m_callbackId;
}

void InvokeTWeSeeComprehensionRequest::SetCallbackId(const string& _callbackId)
{
    m_callbackId = _callbackId;
    m_callbackIdHasBeenSet = true;
}

bool InvokeTWeSeeComprehensionRequest::CallbackIdHasBeenSet() const
{
    return m_callbackIdHasBeenSet;
}


