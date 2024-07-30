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

#include <tencentcloud/lke/v20231130/model/RunNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

RunNodeInfo::RunNodeInfo() :
    m_nodeTypeHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_invokeApiHasBeenSet(false),
    m_slotValuesHasBeenSet(false)
{
}

CoreInternalOutcome RunNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RunNodeInfo.NodeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = value["NodeType"].GetInt64();
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunNodeInfo.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunNodeInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("InvokeApi") && !value["InvokeApi"].IsNull())
    {
        if (!value["InvokeApi"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RunNodeInfo.InvokeApi` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_invokeApi.Deserialize(value["InvokeApi"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_invokeApiHasBeenSet = true;
    }

    if (value.HasMember("SlotValues") && !value["SlotValues"].IsNull())
    {
        if (!value["SlotValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RunNodeInfo.SlotValues` is not array type"));

        const rapidjson::Value &tmpValue = value["SlotValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ValueInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_slotValues.push_back(item);
        }
        m_slotValuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeType, allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeApiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeApi";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_invokeApi.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_slotValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlotValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_slotValues.begin(); itr != m_slotValues.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t RunNodeInfo::GetNodeType() const
{
    return m_nodeType;
}

void RunNodeInfo::SetNodeType(const int64_t& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool RunNodeInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string RunNodeInfo::GetNodeId() const
{
    return m_nodeId;
}

void RunNodeInfo::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool RunNodeInfo::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string RunNodeInfo::GetNodeName() const
{
    return m_nodeName;
}

void RunNodeInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool RunNodeInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

InvokeAPI RunNodeInfo::GetInvokeApi() const
{
    return m_invokeApi;
}

void RunNodeInfo::SetInvokeApi(const InvokeAPI& _invokeApi)
{
    m_invokeApi = _invokeApi;
    m_invokeApiHasBeenSet = true;
}

bool RunNodeInfo::InvokeApiHasBeenSet() const
{
    return m_invokeApiHasBeenSet;
}

vector<ValueInfo> RunNodeInfo::GetSlotValues() const
{
    return m_slotValues;
}

void RunNodeInfo::SetSlotValues(const vector<ValueInfo>& _slotValues)
{
    m_slotValues = _slotValues;
    m_slotValuesHasBeenSet = true;
}

bool RunNodeInfo::SlotValuesHasBeenSet() const
{
    return m_slotValuesHasBeenSet;
}

