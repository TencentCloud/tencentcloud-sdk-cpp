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

#include <tencentcloud/lke/v20231130/model/NodeRunDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

NodeRunDetail::NodeRunDetail() :
    m_nodeRunIdHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_workflowRunIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_failCodeHasBeenSet(false),
    m_failMessageHasBeenSet(false),
    m_costMillisecondsHasBeenSet(false),
    m_totalTokensHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_inputRefHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_outputRefHasBeenSet(false),
    m_taskOutputHasBeenSet(false),
    m_taskOutputRefHasBeenSet(false),
    m_logHasBeenSet(false),
    m_logRefHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statisticInfosHasBeenSet(false)
{
}

CoreInternalOutcome NodeRunDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeRunId") && !value["NodeRunId"].IsNull())
    {
        if (!value["NodeRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.NodeRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeRunId = string(value["NodeRunId"].GetString());
        m_nodeRunIdHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowRunId") && !value["WorkflowRunId"].IsNull())
    {
        if (!value["WorkflowRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.WorkflowRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowRunId = string(value["WorkflowRunId"].GetString());
        m_workflowRunIdHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.NodeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = value["NodeType"].GetUint64();
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.State` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetUint64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("FailCode") && !value["FailCode"].IsNull())
    {
        if (!value["FailCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.FailCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failCode = string(value["FailCode"].GetString());
        m_failCodeHasBeenSet = true;
    }

    if (value.HasMember("FailMessage") && !value["FailMessage"].IsNull())
    {
        if (!value["FailMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.FailMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failMessage = string(value["FailMessage"].GetString());
        m_failMessageHasBeenSet = true;
    }

    if (value.HasMember("CostMilliseconds") && !value["CostMilliseconds"].IsNull())
    {
        if (!value["CostMilliseconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.CostMilliseconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_costMilliseconds = value["CostMilliseconds"].GetUint64();
        m_costMillisecondsHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.TotalTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetUint64();
        m_totalTokensHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.Input` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_input = string(value["Input"].GetString());
        m_inputHasBeenSet = true;
    }

    if (value.HasMember("InputRef") && !value["InputRef"].IsNull())
    {
        if (!value["InputRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.InputRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputRef = string(value["InputRef"].GetString());
        m_inputRefHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.Output` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_output = string(value["Output"].GetString());
        m_outputHasBeenSet = true;
    }

    if (value.HasMember("OutputRef") && !value["OutputRef"].IsNull())
    {
        if (!value["OutputRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.OutputRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputRef = string(value["OutputRef"].GetString());
        m_outputRefHasBeenSet = true;
    }

    if (value.HasMember("TaskOutput") && !value["TaskOutput"].IsNull())
    {
        if (!value["TaskOutput"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.TaskOutput` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskOutput = string(value["TaskOutput"].GetString());
        m_taskOutputHasBeenSet = true;
    }

    if (value.HasMember("TaskOutputRef") && !value["TaskOutputRef"].IsNull())
    {
        if (!value["TaskOutputRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.TaskOutputRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskOutputRef = string(value["TaskOutputRef"].GetString());
        m_taskOutputRefHasBeenSet = true;
    }

    if (value.HasMember("Log") && !value["Log"].IsNull())
    {
        if (!value["Log"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.Log` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_log = string(value["Log"].GetString());
        m_logHasBeenSet = true;
    }

    if (value.HasMember("LogRef") && !value["LogRef"].IsNull())
    {
        if (!value["LogRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.LogRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logRef = string(value["LogRef"].GetString());
        m_logRefHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("StatisticInfos") && !value["StatisticInfos"].IsNull())
    {
        if (!value["StatisticInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.StatisticInfos` is not array type"));

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

void NodeRunDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeType, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_failCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failCode.c_str(), allocator).Move(), allocator);
    }

    if (m_failMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_costMillisecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostMilliseconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costMilliseconds, allocator);
    }

    if (m_totalTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokens, allocator);
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_input.c_str(), allocator).Move(), allocator);
    }

    if (m_inputRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputRef.c_str(), allocator).Move(), allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_output.c_str(), allocator).Move(), allocator);
    }

    if (m_outputRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputRef.c_str(), allocator).Move(), allocator);
    }

    if (m_taskOutputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskOutput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskOutput.c_str(), allocator).Move(), allocator);
    }

    if (m_taskOutputRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskOutputRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskOutputRef.c_str(), allocator).Move(), allocator);
    }

    if (m_logHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Log";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_log.c_str(), allocator).Move(), allocator);
    }

    if (m_logRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logRef.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
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


string NodeRunDetail::GetNodeRunId() const
{
    return m_nodeRunId;
}

void NodeRunDetail::SetNodeRunId(const string& _nodeRunId)
{
    m_nodeRunId = _nodeRunId;
    m_nodeRunIdHasBeenSet = true;
}

bool NodeRunDetail::NodeRunIdHasBeenSet() const
{
    return m_nodeRunIdHasBeenSet;
}

string NodeRunDetail::GetNodeId() const
{
    return m_nodeId;
}

void NodeRunDetail::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool NodeRunDetail::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string NodeRunDetail::GetWorkflowRunId() const
{
    return m_workflowRunId;
}

void NodeRunDetail::SetWorkflowRunId(const string& _workflowRunId)
{
    m_workflowRunId = _workflowRunId;
    m_workflowRunIdHasBeenSet = true;
}

bool NodeRunDetail::WorkflowRunIdHasBeenSet() const
{
    return m_workflowRunIdHasBeenSet;
}

string NodeRunDetail::GetNodeName() const
{
    return m_nodeName;
}

void NodeRunDetail::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool NodeRunDetail::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

uint64_t NodeRunDetail::GetNodeType() const
{
    return m_nodeType;
}

void NodeRunDetail::SetNodeType(const uint64_t& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool NodeRunDetail::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

uint64_t NodeRunDetail::GetState() const
{
    return m_state;
}

void NodeRunDetail::SetState(const uint64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool NodeRunDetail::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string NodeRunDetail::GetFailCode() const
{
    return m_failCode;
}

void NodeRunDetail::SetFailCode(const string& _failCode)
{
    m_failCode = _failCode;
    m_failCodeHasBeenSet = true;
}

bool NodeRunDetail::FailCodeHasBeenSet() const
{
    return m_failCodeHasBeenSet;
}

string NodeRunDetail::GetFailMessage() const
{
    return m_failMessage;
}

void NodeRunDetail::SetFailMessage(const string& _failMessage)
{
    m_failMessage = _failMessage;
    m_failMessageHasBeenSet = true;
}

bool NodeRunDetail::FailMessageHasBeenSet() const
{
    return m_failMessageHasBeenSet;
}

uint64_t NodeRunDetail::GetCostMilliseconds() const
{
    return m_costMilliseconds;
}

void NodeRunDetail::SetCostMilliseconds(const uint64_t& _costMilliseconds)
{
    m_costMilliseconds = _costMilliseconds;
    m_costMillisecondsHasBeenSet = true;
}

bool NodeRunDetail::CostMillisecondsHasBeenSet() const
{
    return m_costMillisecondsHasBeenSet;
}

uint64_t NodeRunDetail::GetTotalTokens() const
{
    return m_totalTokens;
}

void NodeRunDetail::SetTotalTokens(const uint64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool NodeRunDetail::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

string NodeRunDetail::GetInput() const
{
    return m_input;
}

void NodeRunDetail::SetInput(const string& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool NodeRunDetail::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

string NodeRunDetail::GetInputRef() const
{
    return m_inputRef;
}

void NodeRunDetail::SetInputRef(const string& _inputRef)
{
    m_inputRef = _inputRef;
    m_inputRefHasBeenSet = true;
}

bool NodeRunDetail::InputRefHasBeenSet() const
{
    return m_inputRefHasBeenSet;
}

string NodeRunDetail::GetOutput() const
{
    return m_output;
}

void NodeRunDetail::SetOutput(const string& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool NodeRunDetail::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string NodeRunDetail::GetOutputRef() const
{
    return m_outputRef;
}

void NodeRunDetail::SetOutputRef(const string& _outputRef)
{
    m_outputRef = _outputRef;
    m_outputRefHasBeenSet = true;
}

bool NodeRunDetail::OutputRefHasBeenSet() const
{
    return m_outputRefHasBeenSet;
}

string NodeRunDetail::GetTaskOutput() const
{
    return m_taskOutput;
}

void NodeRunDetail::SetTaskOutput(const string& _taskOutput)
{
    m_taskOutput = _taskOutput;
    m_taskOutputHasBeenSet = true;
}

bool NodeRunDetail::TaskOutputHasBeenSet() const
{
    return m_taskOutputHasBeenSet;
}

string NodeRunDetail::GetTaskOutputRef() const
{
    return m_taskOutputRef;
}

void NodeRunDetail::SetTaskOutputRef(const string& _taskOutputRef)
{
    m_taskOutputRef = _taskOutputRef;
    m_taskOutputRefHasBeenSet = true;
}

bool NodeRunDetail::TaskOutputRefHasBeenSet() const
{
    return m_taskOutputRefHasBeenSet;
}

string NodeRunDetail::GetLog() const
{
    return m_log;
}

void NodeRunDetail::SetLog(const string& _log)
{
    m_log = _log;
    m_logHasBeenSet = true;
}

bool NodeRunDetail::LogHasBeenSet() const
{
    return m_logHasBeenSet;
}

string NodeRunDetail::GetLogRef() const
{
    return m_logRef;
}

void NodeRunDetail::SetLogRef(const string& _logRef)
{
    m_logRef = _logRef;
    m_logRefHasBeenSet = true;
}

bool NodeRunDetail::LogRefHasBeenSet() const
{
    return m_logRefHasBeenSet;
}

string NodeRunDetail::GetStartTime() const
{
    return m_startTime;
}

void NodeRunDetail::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool NodeRunDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string NodeRunDetail::GetEndTime() const
{
    return m_endTime;
}

void NodeRunDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool NodeRunDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<StatisticInfo> NodeRunDetail::GetStatisticInfos() const
{
    return m_statisticInfos;
}

void NodeRunDetail::SetStatisticInfos(const vector<StatisticInfo>& _statisticInfos)
{
    m_statisticInfos = _statisticInfos;
    m_statisticInfosHasBeenSet = true;
}

bool NodeRunDetail::StatisticInfosHasBeenSet() const
{
    return m_statisticInfosHasBeenSet;
}

