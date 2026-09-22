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

#include <tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

CreateAgentVersionRequest::CreateAgentVersionRequest() :
    m_agentIdHasBeenSet(false),
    m_manifestHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sandboxTemplateIdHasBeenSet(false)
{
}

string CreateAgentVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_manifestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manifest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_manifest.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_sandboxTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SandboxTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sandboxTemplateId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAgentVersionRequest::GetAgentId() const
{
    return m_agentId;
}

void CreateAgentVersionRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool CreateAgentVersionRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string CreateAgentVersionRequest::GetManifest() const
{
    return m_manifest;
}

void CreateAgentVersionRequest::SetManifest(const string& _manifest)
{
    m_manifest = _manifest;
    m_manifestHasBeenSet = true;
}

bool CreateAgentVersionRequest::ManifestHasBeenSet() const
{
    return m_manifestHasBeenSet;
}

string CreateAgentVersionRequest::GetModel() const
{
    return m_model;
}

void CreateAgentVersionRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool CreateAgentVersionRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string CreateAgentVersionRequest::GetDescription() const
{
    return m_description;
}

void CreateAgentVersionRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAgentVersionRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateAgentVersionRequest::GetSandboxTemplateId() const
{
    return m_sandboxTemplateId;
}

void CreateAgentVersionRequest::SetSandboxTemplateId(const string& _sandboxTemplateId)
{
    m_sandboxTemplateId = _sandboxTemplateId;
    m_sandboxTemplateIdHasBeenSet = true;
}

bool CreateAgentVersionRequest::SandboxTemplateIdHasBeenSet() const
{
    return m_sandboxTemplateIdHasBeenSet;
}


