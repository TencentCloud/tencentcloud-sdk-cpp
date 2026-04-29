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

#include <tencentcloud/ess/v20201111/model/ImportContractReviewChecklistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ImportContractReviewChecklistRequest::ImportContractReviewChecklistRequest() :
    m_operatorHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_categoriesHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_checklistIDHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

string ImportContractReviewChecklistRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_categoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Categories";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categories.begin(); itr != m_categories.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
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

    if (m_checklistIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChecklistID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checklistID.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo ImportContractReviewChecklistRequest::GetOperator() const
{
    return m_operator;
}

void ImportContractReviewChecklistRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ImportContractReviewChecklistRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string ImportContractReviewChecklistRequest::GetName() const
{
    return m_name;
}

void ImportContractReviewChecklistRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImportContractReviewChecklistRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<ChecklistCategory> ImportContractReviewChecklistRequest::GetCategories() const
{
    return m_categories;
}

void ImportContractReviewChecklistRequest::SetCategories(const vector<ChecklistCategory>& _categories)
{
    m_categories = _categories;
    m_categoriesHasBeenSet = true;
}

bool ImportContractReviewChecklistRequest::CategoriesHasBeenSet() const
{
    return m_categoriesHasBeenSet;
}

Agent ImportContractReviewChecklistRequest::GetAgent() const
{
    return m_agent;
}

void ImportContractReviewChecklistRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ImportContractReviewChecklistRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ImportContractReviewChecklistRequest::GetChecklistID() const
{
    return m_checklistID;
}

void ImportContractReviewChecklistRequest::SetChecklistID(const string& _checklistID)
{
    m_checklistID = _checklistID;
    m_checklistIDHasBeenSet = true;
}

bool ImportContractReviewChecklistRequest::ChecklistIDHasBeenSet() const
{
    return m_checklistIDHasBeenSet;
}

bool ImportContractReviewChecklistRequest::GetEnabled() const
{
    return m_enabled;
}

void ImportContractReviewChecklistRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ImportContractReviewChecklistRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}


