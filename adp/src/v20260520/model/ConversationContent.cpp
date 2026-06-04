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

#include <tencentcloud/adp/v20260520/model/ConversationContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConversationContent::ConversationContent() :
    m_textHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_customParamListHasBeenSet(false),
    m_customParamsHasBeenSet(false),
    m_customVariablesDataHasBeenSet(false),
    m_enterpriseChartsHasBeenSet(false),
    m_optionCardListHasBeenSet(false),
    m_optionCardsHasBeenSet(false),
    m_optionModeHasBeenSet(false),
    m_quoteInfoListHasBeenSet(false),
    m_quoteInfosHasBeenSet(false),
    m_referenceListHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_relatedRecordIdHasBeenSet(false),
    m_taskListHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_workflowInputHasBeenSet(false)
{
}

CoreInternalOutcome ConversationContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationContent.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationContent.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CustomParamList") && !value["CustomParamList"].IsNull())
    {
        if (!value["CustomParamList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationContent.CustomParamList` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomParamList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customParamList.push_back((*itr).GetString());
        }
        m_customParamListHasBeenSet = true;
    }

    if (value.HasMember("CustomParams") && !value["CustomParams"].IsNull())
    {
        if (!value["CustomParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationContent.CustomParams` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customParams.push_back((*itr).GetString());
        }
        m_customParamsHasBeenSet = true;
    }

    if (value.HasMember("CustomVariablesData") && !value["CustomVariablesData"].IsNull())
    {
        if (!value["CustomVariablesData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationContent.CustomVariablesData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customVariablesData = string(value["CustomVariablesData"].GetString());
        m_customVariablesDataHasBeenSet = true;
    }

    if (value.HasMember("EnterpriseCharts") && !value["EnterpriseCharts"].IsNull())
    {
        if (!value["EnterpriseCharts"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationContent.EnterpriseCharts` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enterpriseCharts = string(value["EnterpriseCharts"].GetString());
        m_enterpriseChartsHasBeenSet = true;
    }

    if (value.HasMember("OptionCardList") && !value["OptionCardList"].IsNull())
    {
        if (!value["OptionCardList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationContent.OptionCardList` is not array type"));

        const rapidjson::Value &tmpValue = value["OptionCardList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_optionCardList.push_back((*itr).GetString());
        }
        m_optionCardListHasBeenSet = true;
    }

    if (value.HasMember("OptionCards") && !value["OptionCards"].IsNull())
    {
        if (!value["OptionCards"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationContent.OptionCards` is not array type"));

        const rapidjson::Value &tmpValue = value["OptionCards"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_optionCards.push_back((*itr).GetString());
        }
        m_optionCardsHasBeenSet = true;
    }

    if (value.HasMember("OptionMode") && !value["OptionMode"].IsNull())
    {
        if (!value["OptionMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationContent.OptionMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_optionMode = value["OptionMode"].GetInt64();
        m_optionModeHasBeenSet = true;
    }

    if (value.HasMember("QuoteInfoList") && !value["QuoteInfoList"].IsNull())
    {
        if (!value["QuoteInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationContent.QuoteInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["QuoteInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConversationQuoteInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_quoteInfoList.push_back(item);
        }
        m_quoteInfoListHasBeenSet = true;
    }

    if (value.HasMember("QuoteInfos") && !value["QuoteInfos"].IsNull())
    {
        if (!value["QuoteInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationContent.QuoteInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["QuoteInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConversationQuoteInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_quoteInfos.push_back(item);
        }
        m_quoteInfosHasBeenSet = true;
    }

    if (value.HasMember("ReferenceList") && !value["ReferenceList"].IsNull())
    {
        if (!value["ReferenceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationContent.ReferenceList` is not array type"));

        const rapidjson::Value &tmpValue = value["ReferenceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConversationReference item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_referenceList.push_back(item);
        }
        m_referenceListHasBeenSet = true;
    }

    if (value.HasMember("References") && !value["References"].IsNull())
    {
        if (!value["References"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationContent.References` is not array type"));

        const rapidjson::Value &tmpValue = value["References"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConversationReference item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_references.push_back(item);
        }
        m_referencesHasBeenSet = true;
    }

    if (value.HasMember("RelatedRecordId") && !value["RelatedRecordId"].IsNull())
    {
        if (!value["RelatedRecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationContent.RelatedRecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relatedRecordId = string(value["RelatedRecordId"].GetString());
        m_relatedRecordIdHasBeenSet = true;
    }

    if (value.HasMember("TaskList") && !value["TaskList"].IsNull())
    {
        if (!value["TaskList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationContent.TaskList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConversationAgentTask item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskList.push_back(item);
        }
        m_taskListHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationContent.Tasks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConversationAgentTask item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tasks.push_back(item);
        }
        m_tasksHasBeenSet = true;
    }

    if (value.HasMember("WorkflowInput") && !value["WorkflowInput"].IsNull())
    {
        if (!value["WorkflowInput"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationContent.WorkflowInput` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowInput = string(value["WorkflowInput"].GetString());
        m_workflowInputHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConversationContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_customParamListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomParamList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customParamList.begin(); itr != m_customParamList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customParams.begin(); itr != m_customParams.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customVariablesDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomVariablesData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customVariablesData.c_str(), allocator).Move(), allocator);
    }

    if (m_enterpriseChartsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseCharts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enterpriseCharts.c_str(), allocator).Move(), allocator);
    }

    if (m_optionCardListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionCardList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_optionCardList.begin(); itr != m_optionCardList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_optionCardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionCards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_optionCards.begin(); itr != m_optionCards.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_optionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_optionMode, allocator);
    }

    if (m_quoteInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuoteInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_quoteInfoList.begin(); itr != m_quoteInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_quoteInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuoteInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_quoteInfos.begin(); itr != m_quoteInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_referenceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_referenceList.begin(); itr != m_referenceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_referencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "References";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_references.begin(); itr != m_references.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_relatedRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedRecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relatedRecordId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskList.begin(); itr != m_taskList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_workflowInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowInput.c_str(), allocator).Move(), allocator);
    }

}


string ConversationContent::GetText() const
{
    return m_text;
}

void ConversationContent::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ConversationContent::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string ConversationContent::GetType() const
{
    return m_type;
}

void ConversationContent::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ConversationContent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> ConversationContent::GetCustomParamList() const
{
    return m_customParamList;
}

void ConversationContent::SetCustomParamList(const vector<string>& _customParamList)
{
    m_customParamList = _customParamList;
    m_customParamListHasBeenSet = true;
}

bool ConversationContent::CustomParamListHasBeenSet() const
{
    return m_customParamListHasBeenSet;
}

vector<string> ConversationContent::GetCustomParams() const
{
    return m_customParams;
}

void ConversationContent::SetCustomParams(const vector<string>& _customParams)
{
    m_customParams = _customParams;
    m_customParamsHasBeenSet = true;
}

bool ConversationContent::CustomParamsHasBeenSet() const
{
    return m_customParamsHasBeenSet;
}

string ConversationContent::GetCustomVariablesData() const
{
    return m_customVariablesData;
}

void ConversationContent::SetCustomVariablesData(const string& _customVariablesData)
{
    m_customVariablesData = _customVariablesData;
    m_customVariablesDataHasBeenSet = true;
}

bool ConversationContent::CustomVariablesDataHasBeenSet() const
{
    return m_customVariablesDataHasBeenSet;
}

string ConversationContent::GetEnterpriseCharts() const
{
    return m_enterpriseCharts;
}

void ConversationContent::SetEnterpriseCharts(const string& _enterpriseCharts)
{
    m_enterpriseCharts = _enterpriseCharts;
    m_enterpriseChartsHasBeenSet = true;
}

bool ConversationContent::EnterpriseChartsHasBeenSet() const
{
    return m_enterpriseChartsHasBeenSet;
}

vector<string> ConversationContent::GetOptionCardList() const
{
    return m_optionCardList;
}

void ConversationContent::SetOptionCardList(const vector<string>& _optionCardList)
{
    m_optionCardList = _optionCardList;
    m_optionCardListHasBeenSet = true;
}

bool ConversationContent::OptionCardListHasBeenSet() const
{
    return m_optionCardListHasBeenSet;
}

vector<string> ConversationContent::GetOptionCards() const
{
    return m_optionCards;
}

void ConversationContent::SetOptionCards(const vector<string>& _optionCards)
{
    m_optionCards = _optionCards;
    m_optionCardsHasBeenSet = true;
}

bool ConversationContent::OptionCardsHasBeenSet() const
{
    return m_optionCardsHasBeenSet;
}

int64_t ConversationContent::GetOptionMode() const
{
    return m_optionMode;
}

void ConversationContent::SetOptionMode(const int64_t& _optionMode)
{
    m_optionMode = _optionMode;
    m_optionModeHasBeenSet = true;
}

bool ConversationContent::OptionModeHasBeenSet() const
{
    return m_optionModeHasBeenSet;
}

vector<ConversationQuoteInfo> ConversationContent::GetQuoteInfoList() const
{
    return m_quoteInfoList;
}

void ConversationContent::SetQuoteInfoList(const vector<ConversationQuoteInfo>& _quoteInfoList)
{
    m_quoteInfoList = _quoteInfoList;
    m_quoteInfoListHasBeenSet = true;
}

bool ConversationContent::QuoteInfoListHasBeenSet() const
{
    return m_quoteInfoListHasBeenSet;
}

vector<ConversationQuoteInfo> ConversationContent::GetQuoteInfos() const
{
    return m_quoteInfos;
}

void ConversationContent::SetQuoteInfos(const vector<ConversationQuoteInfo>& _quoteInfos)
{
    m_quoteInfos = _quoteInfos;
    m_quoteInfosHasBeenSet = true;
}

bool ConversationContent::QuoteInfosHasBeenSet() const
{
    return m_quoteInfosHasBeenSet;
}

vector<ConversationReference> ConversationContent::GetReferenceList() const
{
    return m_referenceList;
}

void ConversationContent::SetReferenceList(const vector<ConversationReference>& _referenceList)
{
    m_referenceList = _referenceList;
    m_referenceListHasBeenSet = true;
}

bool ConversationContent::ReferenceListHasBeenSet() const
{
    return m_referenceListHasBeenSet;
}

vector<ConversationReference> ConversationContent::GetReferences() const
{
    return m_references;
}

void ConversationContent::SetReferences(const vector<ConversationReference>& _references)
{
    m_references = _references;
    m_referencesHasBeenSet = true;
}

bool ConversationContent::ReferencesHasBeenSet() const
{
    return m_referencesHasBeenSet;
}

string ConversationContent::GetRelatedRecordId() const
{
    return m_relatedRecordId;
}

void ConversationContent::SetRelatedRecordId(const string& _relatedRecordId)
{
    m_relatedRecordId = _relatedRecordId;
    m_relatedRecordIdHasBeenSet = true;
}

bool ConversationContent::RelatedRecordIdHasBeenSet() const
{
    return m_relatedRecordIdHasBeenSet;
}

vector<ConversationAgentTask> ConversationContent::GetTaskList() const
{
    return m_taskList;
}

void ConversationContent::SetTaskList(const vector<ConversationAgentTask>& _taskList)
{
    m_taskList = _taskList;
    m_taskListHasBeenSet = true;
}

bool ConversationContent::TaskListHasBeenSet() const
{
    return m_taskListHasBeenSet;
}

vector<ConversationAgentTask> ConversationContent::GetTasks() const
{
    return m_tasks;
}

void ConversationContent::SetTasks(const vector<ConversationAgentTask>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool ConversationContent::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string ConversationContent::GetWorkflowInput() const
{
    return m_workflowInput;
}

void ConversationContent::SetWorkflowInput(const string& _workflowInput)
{
    m_workflowInput = _workflowInput;
    m_workflowInputHasBeenSet = true;
}

bool ConversationContent::WorkflowInputHasBeenSet() const
{
    return m_workflowInputHasBeenSet;
}

