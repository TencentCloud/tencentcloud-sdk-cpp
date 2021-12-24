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

#include <tencentcloud/iecp/v20210914/model/NodeUnitInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

NodeUnitInfo::NodeUnitInfo() :
    m_idHasBeenSet(false),
    m_nodeUnitNameHasBeenSet(false),
    m_nodeListHasBeenSet(false)
{
}

CoreInternalOutcome NodeUnitInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeUnitInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("NodeUnitName") && !value["NodeUnitName"].IsNull())
    {
        if (!value["NodeUnitName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeUnitInfo.NodeUnitName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUnitName = string(value["NodeUnitName"].GetString());
        m_nodeUnitNameHasBeenSet = true;
    }

    if (value.HasMember("NodeList") && !value["NodeList"].IsNull())
    {
        if (!value["NodeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeUnitInfo.NodeList` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeUnitNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeList.push_back(item);
        }
        m_nodeListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeUnitInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nodeUnitNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUnitName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeUnitName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeList.begin(); itr != m_nodeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t NodeUnitInfo::GetId() const
{
    return m_id;
}

void NodeUnitInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool NodeUnitInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string NodeUnitInfo::GetNodeUnitName() const
{
    return m_nodeUnitName;
}

void NodeUnitInfo::SetNodeUnitName(const string& _nodeUnitName)
{
    m_nodeUnitName = _nodeUnitName;
    m_nodeUnitNameHasBeenSet = true;
}

bool NodeUnitInfo::NodeUnitNameHasBeenSet() const
{
    return m_nodeUnitNameHasBeenSet;
}

vector<NodeUnitNodeInfo> NodeUnitInfo::GetNodeList() const
{
    return m_nodeList;
}

void NodeUnitInfo::SetNodeList(const vector<NodeUnitNodeInfo>& _nodeList)
{
    m_nodeList = _nodeList;
    m_nodeListHasBeenSet = true;
}

bool NodeUnitInfo::NodeListHasBeenSet() const
{
    return m_nodeListHasBeenSet;
}

