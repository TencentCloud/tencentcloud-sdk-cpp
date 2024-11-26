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

#include <tencentcloud/lke/v20231130/model/WorkflowRunNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

WorkflowRunNodeInfo::WorkflowRunNodeInfo() :
    m_nodeIdHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_taskOutputHasBeenSet(false),
    m_failMessageHasBeenSet(false),
    m_costMilliSecondsHasBeenSet(false),
    m_statisticInfosHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowRunNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunNodeInfo.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunNodeInfo.NodeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = value["NodeType"].GetUint64();
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunNodeInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunNodeInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunNodeInfo.Input` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_input = string(value["Input"].GetString());
        m_inputHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunNodeInfo.Output` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_output = string(value["Output"].GetString());
        m_outputHasBeenSet = true;
    }

    if (value.HasMember("TaskOutput") && !value["TaskOutput"].IsNull())
    {
        if (!value["TaskOutput"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunNodeInfo.TaskOutput` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskOutput = string(value["TaskOutput"].GetString());
        m_taskOutputHasBeenSet = true;
    }

    if (value.HasMember("FailMessage") && !value["FailMessage"].IsNull())
    {
        if (!value["FailMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunNodeInfo.FailMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failMessage = string(value["FailMessage"].GetString());
        m_failMessageHasBeenSet = true;
    }

    if (value.HasMember("CostMilliSeconds") && !value["CostMilliSeconds"].IsNull())
    {
        if (!value["CostMilliSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunNodeInfo.CostMilliSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_costMilliSeconds = value["CostMilliSeconds"].GetUint64();
        m_costMilliSecondsHasBeenSet = true;
    }

    if (value.HasMember("StatisticInfos") && !value["StatisticInfos"].IsNull())
    {
        if (!value["StatisticInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowRunNodeInfo.StatisticInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["StatisticInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatisticInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statisticInfos.push_back(item);
        }
        m_statisticInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowRunNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeType, allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_input.c_str(), allocator).Move(), allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_output.c_str(), allocator).Move(), allocator);
    }

    if (m_taskOutputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskOutput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskOutput.c_str(), allocator).Move(), allocator);
    }

    if (m_failMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_costMilliSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostMilliSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costMilliSeconds, allocator);
    }

    if (m_statisticInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statisticInfos.begin(); itr != m_statisticInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string WorkflowRunNodeInfo::GetNodeId() const
{
    return m_nodeId;
}

void WorkflowRunNodeInfo::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool WorkflowRunNodeInfo::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

uint64_t WorkflowRunNodeInfo::GetNodeType() const
{
    return m_nodeType;
}

void WorkflowRunNodeInfo::SetNodeType(const uint64_t& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool WorkflowRunNodeInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string WorkflowRunNodeInfo::GetNodeName() const
{
    return m_nodeName;
}

void WorkflowRunNodeInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool WorkflowRunNodeInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

uint64_t WorkflowRunNodeInfo::GetStatus() const
{
    return m_status;
}

void WorkflowRunNodeInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WorkflowRunNodeInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string WorkflowRunNodeInfo::GetInput() const
{
    return m_input;
}

void WorkflowRunNodeInfo::SetInput(const string& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool WorkflowRunNodeInfo::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

string WorkflowRunNodeInfo::GetOutput() const
{
    return m_output;
}

void WorkflowRunNodeInfo::SetOutput(const string& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool WorkflowRunNodeInfo::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string WorkflowRunNodeInfo::GetTaskOutput() const
{
    return m_taskOutput;
}

void WorkflowRunNodeInfo::SetTaskOutput(const string& _taskOutput)
{
    m_taskOutput = _taskOutput;
    m_taskOutputHasBeenSet = true;
}

bool WorkflowRunNodeInfo::TaskOutputHasBeenSet() const
{
    return m_taskOutputHasBeenSet;
}

string WorkflowRunNodeInfo::GetFailMessage() const
{
    return m_failMessage;
}

void WorkflowRunNodeInfo::SetFailMessage(const string& _failMessage)
{
    m_failMessage = _failMessage;
    m_failMessageHasBeenSet = true;
}

bool WorkflowRunNodeInfo::FailMessageHasBeenSet() const
{
    return m_failMessageHasBeenSet;
}

uint64_t WorkflowRunNodeInfo::GetCostMilliSeconds() const
{
    return m_costMilliSeconds;
}

void WorkflowRunNodeInfo::SetCostMilliSeconds(const uint64_t& _costMilliSeconds)
{
    m_costMilliSeconds = _costMilliSeconds;
    m_costMilliSecondsHasBeenSet = true;
}

bool WorkflowRunNodeInfo::CostMilliSecondsHasBeenSet() const
{
    return m_costMilliSecondsHasBeenSet;
}

vector<StatisticInfo> WorkflowRunNodeInfo::GetStatisticInfos() const
{
    return m_statisticInfos;
}

void WorkflowRunNodeInfo::SetStatisticInfos(const vector<StatisticInfo>& _statisticInfos)
{
    m_statisticInfos = _statisticInfos;
    m_statisticInfosHasBeenSet = true;
}

bool WorkflowRunNodeInfo::StatisticInfosHasBeenSet() const
{
    return m_statisticInfosHasBeenSet;
}

