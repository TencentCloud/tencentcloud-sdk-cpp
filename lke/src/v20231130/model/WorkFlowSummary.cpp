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

#include <tencentcloud/lke/v20231130/model/WorkFlowSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

WorkFlowSummary::WorkFlowSummary() :
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_workflowRunIdHasBeenSet(false),
    m_runNodesHasBeenSet(false),
    m_optionCardsHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_workflowReleaseTimeHasBeenSet(false)
{
}

CoreInternalOutcome WorkFlowSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkFlowSummary.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkFlowSummary.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowRunId") && !value["WorkflowRunId"].IsNull())
    {
        if (!value["WorkflowRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkFlowSummary.WorkflowRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowRunId = string(value["WorkflowRunId"].GetString());
        m_workflowRunIdHasBeenSet = true;
    }

    if (value.HasMember("RunNodes") && !value["RunNodes"].IsNull())
    {
        if (!value["RunNodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkFlowSummary.RunNodes` is not array type"));

        const rapidjson::Value &tmpValue = value["RunNodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkflowRunNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_runNodes.push_back(item);
        }
        m_runNodesHasBeenSet = true;
    }

    if (value.HasMember("OptionCards") && !value["OptionCards"].IsNull())
    {
        if (!value["OptionCards"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkFlowSummary.OptionCards` is not array type"));

        const rapidjson::Value &tmpValue = value["OptionCards"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_optionCards.push_back((*itr).GetString());
        }
        m_optionCardsHasBeenSet = true;
    }

    if (value.HasMember("Outputs") && !value["Outputs"].IsNull())
    {
        if (!value["Outputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkFlowSummary.Outputs` is not array type"));

        const rapidjson::Value &tmpValue = value["Outputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_outputs.push_back((*itr).GetString());
        }
        m_outputsHasBeenSet = true;
    }

    if (value.HasMember("WorkflowReleaseTime") && !value["WorkflowReleaseTime"].IsNull())
    {
        if (!value["WorkflowReleaseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkFlowSummary.WorkflowReleaseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowReleaseTime = string(value["WorkflowReleaseTime"].GetString());
        m_workflowReleaseTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkFlowSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_runNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_runNodes.begin(); itr != m_runNodes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
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

    if (m_outputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_outputs.begin(); itr != m_outputs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_workflowReleaseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowReleaseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowReleaseTime.c_str(), allocator).Move(), allocator);
    }

}


string WorkFlowSummary::GetWorkflowId() const
{
    return m_workflowId;
}

void WorkFlowSummary::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool WorkFlowSummary::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string WorkFlowSummary::GetWorkflowName() const
{
    return m_workflowName;
}

void WorkFlowSummary::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool WorkFlowSummary::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string WorkFlowSummary::GetWorkflowRunId() const
{
    return m_workflowRunId;
}

void WorkFlowSummary::SetWorkflowRunId(const string& _workflowRunId)
{
    m_workflowRunId = _workflowRunId;
    m_workflowRunIdHasBeenSet = true;
}

bool WorkFlowSummary::WorkflowRunIdHasBeenSet() const
{
    return m_workflowRunIdHasBeenSet;
}

vector<WorkflowRunNodeInfo> WorkFlowSummary::GetRunNodes() const
{
    return m_runNodes;
}

void WorkFlowSummary::SetRunNodes(const vector<WorkflowRunNodeInfo>& _runNodes)
{
    m_runNodes = _runNodes;
    m_runNodesHasBeenSet = true;
}

bool WorkFlowSummary::RunNodesHasBeenSet() const
{
    return m_runNodesHasBeenSet;
}

vector<string> WorkFlowSummary::GetOptionCards() const
{
    return m_optionCards;
}

void WorkFlowSummary::SetOptionCards(const vector<string>& _optionCards)
{
    m_optionCards = _optionCards;
    m_optionCardsHasBeenSet = true;
}

bool WorkFlowSummary::OptionCardsHasBeenSet() const
{
    return m_optionCardsHasBeenSet;
}

vector<string> WorkFlowSummary::GetOutputs() const
{
    return m_outputs;
}

void WorkFlowSummary::SetOutputs(const vector<string>& _outputs)
{
    m_outputs = _outputs;
    m_outputsHasBeenSet = true;
}

bool WorkFlowSummary::OutputsHasBeenSet() const
{
    return m_outputsHasBeenSet;
}

string WorkFlowSummary::GetWorkflowReleaseTime() const
{
    return m_workflowReleaseTime;
}

void WorkFlowSummary::SetWorkflowReleaseTime(const string& _workflowReleaseTime)
{
    m_workflowReleaseTime = _workflowReleaseTime;
    m_workflowReleaseTimeHasBeenSet = true;
}

bool WorkFlowSummary::WorkflowReleaseTimeHasBeenSet() const
{
    return m_workflowReleaseTimeHasBeenSet;
}

