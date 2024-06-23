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

#include <tencentcloud/cdb/v20170320/model/ClusterTopology.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ClusterTopology::ClusterTopology() :
    m_readWriteNodeHasBeenSet(false),
    m_readOnlyNodesHasBeenSet(false)
{
}

CoreInternalOutcome ClusterTopology::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReadWriteNode") && !value["ReadWriteNode"].IsNull())
    {
        if (!value["ReadWriteNode"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterTopology.ReadWriteNode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_readWriteNode.Deserialize(value["ReadWriteNode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_readWriteNodeHasBeenSet = true;
    }

    if (value.HasMember("ReadOnlyNodes") && !value["ReadOnlyNodes"].IsNull())
    {
        if (!value["ReadOnlyNodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterTopology.ReadOnlyNodes` is not array type"));

        const rapidjson::Value &tmpValue = value["ReadOnlyNodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReadonlyNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_readOnlyNodes.push_back(item);
        }
        m_readOnlyNodesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterTopology::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_readWriteNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadWriteNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_readWriteNode.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_readOnlyNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_readOnlyNodes.begin(); itr != m_readOnlyNodes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


ReadWriteNode ClusterTopology::GetReadWriteNode() const
{
    return m_readWriteNode;
}

void ClusterTopology::SetReadWriteNode(const ReadWriteNode& _readWriteNode)
{
    m_readWriteNode = _readWriteNode;
    m_readWriteNodeHasBeenSet = true;
}

bool ClusterTopology::ReadWriteNodeHasBeenSet() const
{
    return m_readWriteNodeHasBeenSet;
}

vector<ReadonlyNode> ClusterTopology::GetReadOnlyNodes() const
{
    return m_readOnlyNodes;
}

void ClusterTopology::SetReadOnlyNodes(const vector<ReadonlyNode>& _readOnlyNodes)
{
    m_readOnlyNodes = _readOnlyNodes;
    m_readOnlyNodesHasBeenSet = true;
}

bool ClusterTopology::ReadOnlyNodesHasBeenSet() const
{
    return m_readOnlyNodesHasBeenSet;
}

