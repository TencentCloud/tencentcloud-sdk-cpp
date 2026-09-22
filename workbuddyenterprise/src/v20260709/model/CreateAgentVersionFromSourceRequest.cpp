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

#include <tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentVersionFromSourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

CreateAgentVersionFromSourceRequest::CreateAgentVersionFromSourceRequest() :
    m_agentIdHasBeenSet(false),
    m_sourceVersionIdHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_manifestHasBeenSet(false),
    m_sandboxTemplateIdHasBeenSet(false)
{
}

string CreateAgentVersionFromSourceRequest::ToJsonString() const
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

    if (m_sourceVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceVersionId.c_str(), allocator).Move(), allocator);
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

    if (m_manifestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manifest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_manifest.c_str(), allocator).Move(), allocator);
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


string CreateAgentVersionFromSourceRequest::GetAgentId() const
{
    return m_agentId;
}

void CreateAgentVersionFromSourceRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool CreateAgentVersionFromSourceRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string CreateAgentVersionFromSourceRequest::GetSourceVersionId() const
{
    return m_sourceVersionId;
}

void CreateAgentVersionFromSourceRequest::SetSourceVersionId(const string& _sourceVersionId)
{
    m_sourceVersionId = _sourceVersionId;
    m_sourceVersionIdHasBeenSet = true;
}

bool CreateAgentVersionFromSourceRequest::SourceVersionIdHasBeenSet() const
{
    return m_sourceVersionIdHasBeenSet;
}

string CreateAgentVersionFromSourceRequest::GetModel() const
{
    return m_model;
}

void CreateAgentVersionFromSourceRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool CreateAgentVersionFromSourceRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string CreateAgentVersionFromSourceRequest::GetDescription() const
{
    return m_description;
}

void CreateAgentVersionFromSourceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAgentVersionFromSourceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateAgentVersionFromSourceRequest::GetManifest() const
{
    return m_manifest;
}

void CreateAgentVersionFromSourceRequest::SetManifest(const string& _manifest)
{
    m_manifest = _manifest;
    m_manifestHasBeenSet = true;
}

bool CreateAgentVersionFromSourceRequest::ManifestHasBeenSet() const
{
    return m_manifestHasBeenSet;
}

string CreateAgentVersionFromSourceRequest::GetSandboxTemplateId() const
{
    return m_sandboxTemplateId;
}

void CreateAgentVersionFromSourceRequest::SetSandboxTemplateId(const string& _sandboxTemplateId)
{
    m_sandboxTemplateId = _sandboxTemplateId;
    m_sandboxTemplateIdHasBeenSet = true;
}

bool CreateAgentVersionFromSourceRequest::SandboxTemplateIdHasBeenSet() const
{
    return m_sandboxTemplateIdHasBeenSet;
}


