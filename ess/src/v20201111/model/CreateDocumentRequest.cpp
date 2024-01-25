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

#include <tencentcloud/ess/v20201111/model/CreateDocumentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateDocumentRequest::CreateDocumentRequest() :
    m_operatorHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_fileNamesHasBeenSet(false),
    m_formFieldsHasBeenSet(false),
    m_needPreviewHasBeenSet(false),
    m_previewTypeHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

string CreateDocumentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileNames.begin(); itr != m_fileNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_formFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_formFields.begin(); itr != m_formFields.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_needPreviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedPreview";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needPreview, allocator);
    }

    if (m_previewTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_previewType, allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateDocumentRequest::GetOperator() const
{
    return m_operator;
}

void CreateDocumentRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateDocumentRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateDocumentRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateDocumentRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateDocumentRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string CreateDocumentRequest::GetFlowId() const
{
    return m_flowId;
}

void CreateDocumentRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool CreateDocumentRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

vector<string> CreateDocumentRequest::GetFileNames() const
{
    return m_fileNames;
}

void CreateDocumentRequest::SetFileNames(const vector<string>& _fileNames)
{
    m_fileNames = _fileNames;
    m_fileNamesHasBeenSet = true;
}

bool CreateDocumentRequest::FileNamesHasBeenSet() const
{
    return m_fileNamesHasBeenSet;
}

vector<FormField> CreateDocumentRequest::GetFormFields() const
{
    return m_formFields;
}

void CreateDocumentRequest::SetFormFields(const vector<FormField>& _formFields)
{
    m_formFields = _formFields;
    m_formFieldsHasBeenSet = true;
}

bool CreateDocumentRequest::FormFieldsHasBeenSet() const
{
    return m_formFieldsHasBeenSet;
}

bool CreateDocumentRequest::GetNeedPreview() const
{
    return m_needPreview;
}

void CreateDocumentRequest::SetNeedPreview(const bool& _needPreview)
{
    m_needPreview = _needPreview;
    m_needPreviewHasBeenSet = true;
}

bool CreateDocumentRequest::NeedPreviewHasBeenSet() const
{
    return m_needPreviewHasBeenSet;
}

int64_t CreateDocumentRequest::GetPreviewType() const
{
    return m_previewType;
}

void CreateDocumentRequest::SetPreviewType(const int64_t& _previewType)
{
    m_previewType = _previewType;
    m_previewTypeHasBeenSet = true;
}

bool CreateDocumentRequest::PreviewTypeHasBeenSet() const
{
    return m_previewTypeHasBeenSet;
}

Agent CreateDocumentRequest::GetAgent() const
{
    return m_agent;
}

void CreateDocumentRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateDocumentRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateDocumentRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateDocumentRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateDocumentRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}


