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

#include <tencentcloud/adp/v20260520/model/WorkflowRunMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

WorkflowRunMetadata::WorkflowRunMetadata() :
    m_queryHasBeenSet(false),
    m_mainModelNameHasBeenSet(false),
    m_customVariableListHasBeenSet(false),
    m_workflowGraphHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowRunMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunMetadata.Query` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_query = string(value["Query"].GetString());
        m_queryHasBeenSet = true;
    }

    if (value.HasMember("MainModelName") && !value["MainModelName"].IsNull())
    {
        if (!value["MainModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunMetadata.MainModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainModelName = string(value["MainModelName"].GetString());
        m_mainModelNameHasBeenSet = true;
    }

    if (value.HasMember("CustomVariableList") && !value["CustomVariableList"].IsNull())
    {
        if (!value["CustomVariableList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowRunMetadata.CustomVariableList` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomVariableList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomVariable item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customVariableList.push_back(item);
        }
        m_customVariableListHasBeenSet = true;
    }

    if (value.HasMember("WorkflowGraph") && !value["WorkflowGraph"].IsNull())
    {
        if (!value["WorkflowGraph"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunMetadata.WorkflowGraph` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowGraph = string(value["WorkflowGraph"].GetString());
        m_workflowGraphHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowRunMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_mainModelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainModelName.c_str(), allocator).Move(), allocator);
    }

    if (m_customVariableListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomVariableList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customVariableList.begin(); itr != m_customVariableList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_workflowGraphHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowGraph";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowGraph.c_str(), allocator).Move(), allocator);
    }

}


string WorkflowRunMetadata::GetQuery() const
{
    return m_query;
}

void WorkflowRunMetadata::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool WorkflowRunMetadata::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

string WorkflowRunMetadata::GetMainModelName() const
{
    return m_mainModelName;
}

void WorkflowRunMetadata::SetMainModelName(const string& _mainModelName)
{
    m_mainModelName = _mainModelName;
    m_mainModelNameHasBeenSet = true;
}

bool WorkflowRunMetadata::MainModelNameHasBeenSet() const
{
    return m_mainModelNameHasBeenSet;
}

vector<CustomVariable> WorkflowRunMetadata::GetCustomVariableList() const
{
    return m_customVariableList;
}

void WorkflowRunMetadata::SetCustomVariableList(const vector<CustomVariable>& _customVariableList)
{
    m_customVariableList = _customVariableList;
    m_customVariableListHasBeenSet = true;
}

bool WorkflowRunMetadata::CustomVariableListHasBeenSet() const
{
    return m_customVariableListHasBeenSet;
}

string WorkflowRunMetadata::GetWorkflowGraph() const
{
    return m_workflowGraph;
}

void WorkflowRunMetadata::SetWorkflowGraph(const string& _workflowGraph)
{
    m_workflowGraph = _workflowGraph;
    m_workflowGraphHasBeenSet = true;
}

bool WorkflowRunMetadata::WorkflowGraphHasBeenSet() const
{
    return m_workflowGraphHasBeenSet;
}

