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

#include <tencentcloud/config/v20220802/model/UpdateRemediationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

UpdateRemediationRequest::UpdateRemediationRequest() :
    m_remediationIdHasBeenSet(false),
    m_remediationTypeHasBeenSet(false),
    m_remediationTemplateIdHasBeenSet(false),
    m_invokeTypeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false)
{
}

string UpdateRemediationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_remediationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemediationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remediationId.c_str(), allocator).Move(), allocator);
    }

    if (m_remediationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemediationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remediationType.c_str(), allocator).Move(), allocator);
    }

    if (m_remediationTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemediationTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remediationTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_invokeType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateRemediationRequest::GetRemediationId() const
{
    return m_remediationId;
}

void UpdateRemediationRequest::SetRemediationId(const string& _remediationId)
{
    m_remediationId = _remediationId;
    m_remediationIdHasBeenSet = true;
}

bool UpdateRemediationRequest::RemediationIdHasBeenSet() const
{
    return m_remediationIdHasBeenSet;
}

string UpdateRemediationRequest::GetRemediationType() const
{
    return m_remediationType;
}

void UpdateRemediationRequest::SetRemediationType(const string& _remediationType)
{
    m_remediationType = _remediationType;
    m_remediationTypeHasBeenSet = true;
}

bool UpdateRemediationRequest::RemediationTypeHasBeenSet() const
{
    return m_remediationTypeHasBeenSet;
}

string UpdateRemediationRequest::GetRemediationTemplateId() const
{
    return m_remediationTemplateId;
}

void UpdateRemediationRequest::SetRemediationTemplateId(const string& _remediationTemplateId)
{
    m_remediationTemplateId = _remediationTemplateId;
    m_remediationTemplateIdHasBeenSet = true;
}

bool UpdateRemediationRequest::RemediationTemplateIdHasBeenSet() const
{
    return m_remediationTemplateIdHasBeenSet;
}

string UpdateRemediationRequest::GetInvokeType() const
{
    return m_invokeType;
}

void UpdateRemediationRequest::SetInvokeType(const string& _invokeType)
{
    m_invokeType = _invokeType;
    m_invokeTypeHasBeenSet = true;
}

bool UpdateRemediationRequest::InvokeTypeHasBeenSet() const
{
    return m_invokeTypeHasBeenSet;
}

string UpdateRemediationRequest::GetSourceType() const
{
    return m_sourceType;
}

void UpdateRemediationRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool UpdateRemediationRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}


