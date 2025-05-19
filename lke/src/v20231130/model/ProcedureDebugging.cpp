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

#include <tencentcloud/lke/v20231130/model/ProcedureDebugging.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ProcedureDebugging::ProcedureDebugging() :
    m_contentHasBeenSet(false),
    m_systemHasBeenSet(false),
    m_historiesHasBeenSet(false),
    m_knowledgeHasBeenSet(false),
    m_taskFlowHasBeenSet(false),
    m_workFlowHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_customVariablesHasBeenSet(false)
{
}

CoreInternalOutcome ProcedureDebugging::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureDebugging.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("System") && !value["System"].IsNull())
    {
        if (!value["System"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureDebugging.System` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_system = string(value["System"].GetString());
        m_systemHasBeenSet = true;
    }

    if (value.HasMember("Histories") && !value["Histories"].IsNull())
    {
        if (!value["Histories"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProcedureDebugging.Histories` is not array type"));

        const rapidjson::Value &tmpValue = value["Histories"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HistorySummary item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_histories.push_back(item);
        }
        m_historiesHasBeenSet = true;
    }

    if (value.HasMember("Knowledge") && !value["Knowledge"].IsNull())
    {
        if (!value["Knowledge"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProcedureDebugging.Knowledge` is not array type"));

        const rapidjson::Value &tmpValue = value["Knowledge"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KnowledgeSummary item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_knowledge.push_back(item);
        }
        m_knowledgeHasBeenSet = true;
    }

    if (value.HasMember("TaskFlow") && !value["TaskFlow"].IsNull())
    {
        if (!value["TaskFlow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureDebugging.TaskFlow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskFlow.Deserialize(value["TaskFlow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskFlowHasBeenSet = true;
    }

    if (value.HasMember("WorkFlow") && !value["WorkFlow"].IsNull())
    {
        if (!value["WorkFlow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureDebugging.WorkFlow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workFlow.Deserialize(value["WorkFlow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workFlowHasBeenSet = true;
    }

    if (value.HasMember("Agent") && !value["Agent"].IsNull())
    {
        if (!value["Agent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureDebugging.Agent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_agent.Deserialize(value["Agent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_agentHasBeenSet = true;
    }

    if (value.HasMember("CustomVariables") && !value["CustomVariables"].IsNull())
    {
        if (!value["CustomVariables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProcedureDebugging.CustomVariables` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomVariables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customVariables.push_back((*itr).GetString());
        }
        m_customVariablesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcedureDebugging::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_systemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "System";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_system.c_str(), allocator).Move(), allocator);
    }

    if (m_historiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Histories";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_histories.begin(); itr != m_histories.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_knowledgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Knowledge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_knowledge.begin(); itr != m_knowledge.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskFlow.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workFlow.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customVariablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomVariables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customVariables.begin(); itr != m_customVariables.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ProcedureDebugging::GetContent() const
{
    return m_content;
}

void ProcedureDebugging::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ProcedureDebugging::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ProcedureDebugging::GetSystem() const
{
    return m_system;
}

void ProcedureDebugging::SetSystem(const string& _system)
{
    m_system = _system;
    m_systemHasBeenSet = true;
}

bool ProcedureDebugging::SystemHasBeenSet() const
{
    return m_systemHasBeenSet;
}

vector<HistorySummary> ProcedureDebugging::GetHistories() const
{
    return m_histories;
}

void ProcedureDebugging::SetHistories(const vector<HistorySummary>& _histories)
{
    m_histories = _histories;
    m_historiesHasBeenSet = true;
}

bool ProcedureDebugging::HistoriesHasBeenSet() const
{
    return m_historiesHasBeenSet;
}

vector<KnowledgeSummary> ProcedureDebugging::GetKnowledge() const
{
    return m_knowledge;
}

void ProcedureDebugging::SetKnowledge(const vector<KnowledgeSummary>& _knowledge)
{
    m_knowledge = _knowledge;
    m_knowledgeHasBeenSet = true;
}

bool ProcedureDebugging::KnowledgeHasBeenSet() const
{
    return m_knowledgeHasBeenSet;
}

TaskFlowSummary ProcedureDebugging::GetTaskFlow() const
{
    return m_taskFlow;
}

void ProcedureDebugging::SetTaskFlow(const TaskFlowSummary& _taskFlow)
{
    m_taskFlow = _taskFlow;
    m_taskFlowHasBeenSet = true;
}

bool ProcedureDebugging::TaskFlowHasBeenSet() const
{
    return m_taskFlowHasBeenSet;
}

WorkFlowSummary ProcedureDebugging::GetWorkFlow() const
{
    return m_workFlow;
}

void ProcedureDebugging::SetWorkFlow(const WorkFlowSummary& _workFlow)
{
    m_workFlow = _workFlow;
    m_workFlowHasBeenSet = true;
}

bool ProcedureDebugging::WorkFlowHasBeenSet() const
{
    return m_workFlowHasBeenSet;
}

AgentDebugInfo ProcedureDebugging::GetAgent() const
{
    return m_agent;
}

void ProcedureDebugging::SetAgent(const AgentDebugInfo& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ProcedureDebugging::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<string> ProcedureDebugging::GetCustomVariables() const
{
    return m_customVariables;
}

void ProcedureDebugging::SetCustomVariables(const vector<string>& _customVariables)
{
    m_customVariables = _customVariables;
    m_customVariablesHasBeenSet = true;
}

bool ProcedureDebugging::CustomVariablesHasBeenSet() const
{
    return m_customVariablesHasBeenSet;
}

