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

#include <tencentcloud/ess/v20201111/model/CreateDraftContractByPromptsTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateDraftContractByPromptsTaskRequest::CreateDraftContractByPromptsTaskRequest() :
    m_operatorHasBeenSet(false),
    m_requirementHasBeenSet(false),
    m_referenceTemplateIdHasBeenSet(false),
    m_requirementFileIdsHasBeenSet(false),
    m_contractLanguageHasBeenSet(false)
{
}

string CreateDraftContractByPromptsTaskRequest::ToJsonString() const
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

    if (m_requirementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Requirement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requirement.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_referenceTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_requirementFileIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequirementFileIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_requirementFileIds.begin(); itr != m_requirementFileIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_contractLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contractLanguage.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateDraftContractByPromptsTaskRequest::GetOperator() const
{
    return m_operator;
}

void CreateDraftContractByPromptsTaskRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateDraftContractByPromptsTaskRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateDraftContractByPromptsTaskRequest::GetRequirement() const
{
    return m_requirement;
}

void CreateDraftContractByPromptsTaskRequest::SetRequirement(const string& _requirement)
{
    m_requirement = _requirement;
    m_requirementHasBeenSet = true;
}

bool CreateDraftContractByPromptsTaskRequest::RequirementHasBeenSet() const
{
    return m_requirementHasBeenSet;
}

string CreateDraftContractByPromptsTaskRequest::GetReferenceTemplateId() const
{
    return m_referenceTemplateId;
}

void CreateDraftContractByPromptsTaskRequest::SetReferenceTemplateId(const string& _referenceTemplateId)
{
    m_referenceTemplateId = _referenceTemplateId;
    m_referenceTemplateIdHasBeenSet = true;
}

bool CreateDraftContractByPromptsTaskRequest::ReferenceTemplateIdHasBeenSet() const
{
    return m_referenceTemplateIdHasBeenSet;
}

vector<string> CreateDraftContractByPromptsTaskRequest::GetRequirementFileIds() const
{
    return m_requirementFileIds;
}

void CreateDraftContractByPromptsTaskRequest::SetRequirementFileIds(const vector<string>& _requirementFileIds)
{
    m_requirementFileIds = _requirementFileIds;
    m_requirementFileIdsHasBeenSet = true;
}

bool CreateDraftContractByPromptsTaskRequest::RequirementFileIdsHasBeenSet() const
{
    return m_requirementFileIdsHasBeenSet;
}

string CreateDraftContractByPromptsTaskRequest::GetContractLanguage() const
{
    return m_contractLanguage;
}

void CreateDraftContractByPromptsTaskRequest::SetContractLanguage(const string& _contractLanguage)
{
    m_contractLanguage = _contractLanguage;
    m_contractLanguageHasBeenSet = true;
}

bool CreateDraftContractByPromptsTaskRequest::ContractLanguageHasBeenSet() const
{
    return m_contractLanguageHasBeenSet;
}


