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

#include <tencentcloud/mongodb/v20190725/model/Operation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

Operation::Operation() :
    m_replicaSetNameHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_opIdHasBeenSet(false)
{
}

CoreInternalOutcome Operation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReplicaSetName") && !value["ReplicaSetName"].IsNull())
    {
        if (!value["ReplicaSetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Operation.ReplicaSetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicaSetName = string(value["ReplicaSetName"].GetString());
        m_replicaSetNameHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Operation.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("OpId") && !value["OpId"].IsNull())
    {
        if (!value["OpId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Operation.OpId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_opId = value["OpId"].GetInt64();
        m_opIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Operation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_opIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_opId, allocator);
    }

}


string Operation::GetReplicaSetName() const
{
    return m_replicaSetName;
}

void Operation::SetReplicaSetName(const string& _replicaSetName)
{
    m_replicaSetName = _replicaSetName;
    m_replicaSetNameHasBeenSet = true;
}

bool Operation::ReplicaSetNameHasBeenSet() const
{
    return m_replicaSetNameHasBeenSet;
}

string Operation::GetNodeName() const
{
    return m_nodeName;
}

void Operation::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool Operation::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

int64_t Operation::GetOpId() const
{
    return m_opId;
}

void Operation::SetOpId(const int64_t& _opId)
{
    m_opId = _opId;
    m_opIdHasBeenSet = true;
}

bool Operation::OpIdHasBeenSet() const
{
    return m_opIdHasBeenSet;
}

