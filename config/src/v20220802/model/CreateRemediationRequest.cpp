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

#include <tencentcloud/config/v20220802/model/CreateRemediationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

CreateRemediationRequest::CreateRemediationRequest() :
    m_ruleIdHasBeenSet(false),
    m_remediationTypeHasBeenSet(false),
    m_remediationTemplateIdHasBeenSet(false),
    m_invokeTypeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false)
{
}

string CreateRemediationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
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


string CreateRemediationRequest::GetRuleId() const
{
    return m_ruleId;
}

void CreateRemediationRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool CreateRemediationRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string CreateRemediationRequest::GetRemediationType() const
{
    return m_remediationType;
}

void CreateRemediationRequest::SetRemediationType(const string& _remediationType)
{
    m_remediationType = _remediationType;
    m_remediationTypeHasBeenSet = true;
}

bool CreateRemediationRequest::RemediationTypeHasBeenSet() const
{
    return m_remediationTypeHasBeenSet;
}

string CreateRemediationRequest::GetRemediationTemplateId() const
{
    return m_remediationTemplateId;
}

void CreateRemediationRequest::SetRemediationTemplateId(const string& _remediationTemplateId)
{
    m_remediationTemplateId = _remediationTemplateId;
    m_remediationTemplateIdHasBeenSet = true;
}

bool CreateRemediationRequest::RemediationTemplateIdHasBeenSet() const
{
    return m_remediationTemplateIdHasBeenSet;
}

string CreateRemediationRequest::GetInvokeType() const
{
    return m_invokeType;
}

void CreateRemediationRequest::SetInvokeType(const string& _invokeType)
{
    m_invokeType = _invokeType;
    m_invokeTypeHasBeenSet = true;
}

bool CreateRemediationRequest::InvokeTypeHasBeenSet() const
{
    return m_invokeTypeHasBeenSet;
}

string CreateRemediationRequest::GetSourceType() const
{
    return m_sourceType;
}

void CreateRemediationRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CreateRemediationRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}


