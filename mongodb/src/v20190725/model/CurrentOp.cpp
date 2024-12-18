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

#include <tencentcloud/mongodb/v20190725/model/CurrentOp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

CurrentOp::CurrentOp() :
    m_opIdHasBeenSet(false),
    m_nsHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_opHasBeenSet(false),
    m_replicaSetNameHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_microsecsRunningHasBeenSet(false),
    m_execNodeHasBeenSet(false)
{
}

CoreInternalOutcome CurrentOp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OpId") && !value["OpId"].IsNull())
    {
        if (!value["OpId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentOp.OpId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_opId = value["OpId"].GetInt64();
        m_opIdHasBeenSet = true;
    }

    if (value.HasMember("Ns") && !value["Ns"].IsNull())
    {
        if (!value["Ns"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentOp.Ns` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ns = string(value["Ns"].GetString());
        m_nsHasBeenSet = true;
    }

    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentOp.Query` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_query = string(value["Query"].GetString());
        m_queryHasBeenSet = true;
    }

    if (value.HasMember("Op") && !value["Op"].IsNull())
    {
        if (!value["Op"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentOp.Op` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_op = string(value["Op"].GetString());
        m_opHasBeenSet = true;
    }

    if (value.HasMember("ReplicaSetName") && !value["ReplicaSetName"].IsNull())
    {
        if (!value["ReplicaSetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentOp.ReplicaSetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicaSetName = string(value["ReplicaSetName"].GetString());
        m_replicaSetNameHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentOp.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentOp.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentOp.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("MicrosecsRunning") && !value["MicrosecsRunning"].IsNull())
    {
        if (!value["MicrosecsRunning"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentOp.MicrosecsRunning` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_microsecsRunning = value["MicrosecsRunning"].GetUint64();
        m_microsecsRunningHasBeenSet = true;
    }

    if (value.HasMember("ExecNode") && !value["ExecNode"].IsNull())
    {
        if (!value["ExecNode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentOp.ExecNode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execNode = string(value["ExecNode"].GetString());
        m_execNodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CurrentOp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_opIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_opId, allocator);
    }

    if (m_nsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ns.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_opHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Op";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_op.c_str(), allocator).Move(), allocator);
    }

    if (m_replicaSetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaSetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicaSetName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_microsecsRunningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicrosecsRunning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_microsecsRunning, allocator);
    }

    if (m_execNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_execNode.c_str(), allocator).Move(), allocator);
    }

}


int64_t CurrentOp::GetOpId() const
{
    return m_opId;
}

void CurrentOp::SetOpId(const int64_t& _opId)
{
    m_opId = _opId;
    m_opIdHasBeenSet = true;
}

bool CurrentOp::OpIdHasBeenSet() const
{
    return m_opIdHasBeenSet;
}

string CurrentOp::GetNs() const
{
    return m_ns;
}

void CurrentOp::SetNs(const string& _ns)
{
    m_ns = _ns;
    m_nsHasBeenSet = true;
}

bool CurrentOp::NsHasBeenSet() const
{
    return m_nsHasBeenSet;
}

string CurrentOp::GetQuery() const
{
    return m_query;
}

void CurrentOp::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool CurrentOp::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

string CurrentOp::GetOp() const
{
    return m_op;
}

void CurrentOp::SetOp(const string& _op)
{
    m_op = _op;
    m_opHasBeenSet = true;
}

bool CurrentOp::OpHasBeenSet() const
{
    return m_opHasBeenSet;
}

string CurrentOp::GetReplicaSetName() const
{
    return m_replicaSetName;
}

void CurrentOp::SetReplicaSetName(const string& _replicaSetName)
{
    m_replicaSetName = _replicaSetName;
    m_replicaSetNameHasBeenSet = true;
}

bool CurrentOp::ReplicaSetNameHasBeenSet() const
{
    return m_replicaSetNameHasBeenSet;
}

string CurrentOp::GetNodeName() const
{
    return m_nodeName;
}

void CurrentOp::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool CurrentOp::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string CurrentOp::GetOperation() const
{
    return m_operation;
}

void CurrentOp::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool CurrentOp::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string CurrentOp::GetState() const
{
    return m_state;
}

void CurrentOp::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool CurrentOp::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t CurrentOp::GetMicrosecsRunning() const
{
    return m_microsecsRunning;
}

void CurrentOp::SetMicrosecsRunning(const uint64_t& _microsecsRunning)
{
    m_microsecsRunning = _microsecsRunning;
    m_microsecsRunningHasBeenSet = true;
}

bool CurrentOp::MicrosecsRunningHasBeenSet() const
{
    return m_microsecsRunningHasBeenSet;
}

string CurrentOp::GetExecNode() const
{
    return m_execNode;
}

void CurrentOp::SetExecNode(const string& _execNode)
{
    m_execNode = _execNode;
    m_execNodeHasBeenSet = true;
}

bool CurrentOp::ExecNodeHasBeenSet() const
{
    return m_execNodeHasBeenSet;
}

