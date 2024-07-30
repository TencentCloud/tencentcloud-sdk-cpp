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

#include <tencentcloud/lke/v20231130/model/TaskFlowSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

TaskFlowSummary::TaskFlowSummary() :
    m_intentNameHasBeenSet(false),
    m_updatedSlotValuesHasBeenSet(false),
    m_runNodesHasBeenSet(false),
    m_purposesHasBeenSet(false)
{
}

CoreInternalOutcome TaskFlowSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IntentName") && !value["IntentName"].IsNull())
    {
        if (!value["IntentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowSummary.IntentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intentName = string(value["IntentName"].GetString());
        m_intentNameHasBeenSet = true;
    }

    if (value.HasMember("UpdatedSlotValues") && !value["UpdatedSlotValues"].IsNull())
    {
        if (!value["UpdatedSlotValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskFlowSummary.UpdatedSlotValues` is not array type"));

        const rapidjson::Value &tmpValue = value["UpdatedSlotValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ValueInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_updatedSlotValues.push_back(item);
        }
        m_updatedSlotValuesHasBeenSet = true;
    }

    if (value.HasMember("RunNodes") && !value["RunNodes"].IsNull())
    {
        if (!value["RunNodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskFlowSummary.RunNodes` is not array type"));

        const rapidjson::Value &tmpValue = value["RunNodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RunNodeInfo item;
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

    if (value.HasMember("Purposes") && !value["Purposes"].IsNull())
    {
        if (!value["Purposes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskFlowSummary.Purposes` is not array type"));

        const rapidjson::Value &tmpValue = value["Purposes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_purposes.push_back((*itr).GetString());
        }
        m_purposesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskFlowSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_intentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intentName.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedSlotValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedSlotValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_updatedSlotValues.begin(); itr != m_updatedSlotValues.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_purposesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Purposes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_purposes.begin(); itr != m_purposes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TaskFlowSummary::GetIntentName() const
{
    return m_intentName;
}

void TaskFlowSummary::SetIntentName(const string& _intentName)
{
    m_intentName = _intentName;
    m_intentNameHasBeenSet = true;
}

bool TaskFlowSummary::IntentNameHasBeenSet() const
{
    return m_intentNameHasBeenSet;
}

vector<ValueInfo> TaskFlowSummary::GetUpdatedSlotValues() const
{
    return m_updatedSlotValues;
}

void TaskFlowSummary::SetUpdatedSlotValues(const vector<ValueInfo>& _updatedSlotValues)
{
    m_updatedSlotValues = _updatedSlotValues;
    m_updatedSlotValuesHasBeenSet = true;
}

bool TaskFlowSummary::UpdatedSlotValuesHasBeenSet() const
{
    return m_updatedSlotValuesHasBeenSet;
}

vector<RunNodeInfo> TaskFlowSummary::GetRunNodes() const
{
    return m_runNodes;
}

void TaskFlowSummary::SetRunNodes(const vector<RunNodeInfo>& _runNodes)
{
    m_runNodes = _runNodes;
    m_runNodesHasBeenSet = true;
}

bool TaskFlowSummary::RunNodesHasBeenSet() const
{
    return m_runNodesHasBeenSet;
}

vector<string> TaskFlowSummary::GetPurposes() const
{
    return m_purposes;
}

void TaskFlowSummary::SetPurposes(const vector<string>& _purposes)
{
    m_purposes = _purposes;
    m_purposesHasBeenSet = true;
}

bool TaskFlowSummary::PurposesHasBeenSet() const
{
    return m_purposesHasBeenSet;
}

