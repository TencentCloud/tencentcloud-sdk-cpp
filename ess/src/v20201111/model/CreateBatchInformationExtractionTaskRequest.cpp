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

#include <tencentcloud/ess/v20201111/model/CreateBatchInformationExtractionTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateBatchInformationExtractionTaskRequest::CreateBatchInformationExtractionTaskRequest() :
    m_operatorHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_fieldTemplateIdHasBeenSet(false),
    m_fieldsHasBeenSet(false)
{
}

string CreateBatchInformationExtractionTaskRequest::ToJsonString() const
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

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_fieldTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fieldTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fields.begin(); itr != m_fields.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateBatchInformationExtractionTaskRequest::GetOperator() const
{
    return m_operator;
}

void CreateBatchInformationExtractionTaskRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateBatchInformationExtractionTaskRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<string> CreateBatchInformationExtractionTaskRequest::GetResourceIds() const
{
    return m_resourceIds;
}

void CreateBatchInformationExtractionTaskRequest::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool CreateBatchInformationExtractionTaskRequest::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

Agent CreateBatchInformationExtractionTaskRequest::GetAgent() const
{
    return m_agent;
}

void CreateBatchInformationExtractionTaskRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateBatchInformationExtractionTaskRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateBatchInformationExtractionTaskRequest::GetFieldTemplateId() const
{
    return m_fieldTemplateId;
}

void CreateBatchInformationExtractionTaskRequest::SetFieldTemplateId(const string& _fieldTemplateId)
{
    m_fieldTemplateId = _fieldTemplateId;
    m_fieldTemplateIdHasBeenSet = true;
}

bool CreateBatchInformationExtractionTaskRequest::FieldTemplateIdHasBeenSet() const
{
    return m_fieldTemplateIdHasBeenSet;
}

vector<ExtractionField> CreateBatchInformationExtractionTaskRequest::GetFields() const
{
    return m_fields;
}

void CreateBatchInformationExtractionTaskRequest::SetFields(const vector<ExtractionField>& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool CreateBatchInformationExtractionTaskRequest::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}


