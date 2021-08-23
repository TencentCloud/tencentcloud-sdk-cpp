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

#include <tencentcloud/redis/v20180412/model/InstanceNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

InstanceNode::InstanceNode() :
    m_idHasBeenSet(false),
    m_instanceClusterNodeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("InstanceClusterNode") && !value["InstanceClusterNode"].IsNull())
    {
        if (!value["InstanceClusterNode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceNode.InstanceClusterNode` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceClusterNode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceClusterNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceClusterNode.push_back(item);
        }
        m_instanceClusterNodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_instanceClusterNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceClusterNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceClusterNode.begin(); itr != m_instanceClusterNode.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t InstanceNode::GetId() const
{
    return m_id;
}

void InstanceNode::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool InstanceNode::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<InstanceClusterNode> InstanceNode::GetInstanceClusterNode() const
{
    return m_instanceClusterNode;
}

void InstanceNode::SetInstanceClusterNode(const vector<InstanceClusterNode>& _instanceClusterNode)
{
    m_instanceClusterNode = _instanceClusterNode;
    m_instanceClusterNodeHasBeenSet = true;
}

bool InstanceNode::InstanceClusterNodeHasBeenSet() const
{
    return m_instanceClusterNodeHasBeenSet;
}

