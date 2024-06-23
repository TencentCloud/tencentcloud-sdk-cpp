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

#include <tencentcloud/cdb/v20170320/model/NodeDistribution.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

NodeDistribution::NodeDistribution() :
    m_nodeHasBeenSet(false),
    m_slaveNodeOneHasBeenSet(false),
    m_slaveNodeTwoHasBeenSet(false)
{
}

CoreInternalOutcome NodeDistribution::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Node") && !value["Node"].IsNull())
    {
        if (!value["Node"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeDistribution.Node` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_node = string(value["Node"].GetString());
        m_nodeHasBeenSet = true;
    }

    if (value.HasMember("SlaveNodeOne") && !value["SlaveNodeOne"].IsNull())
    {
        if (!value["SlaveNodeOne"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeDistribution.SlaveNodeOne` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slaveNodeOne = string(value["SlaveNodeOne"].GetString());
        m_slaveNodeOneHasBeenSet = true;
    }

    if (value.HasMember("SlaveNodeTwo") && !value["SlaveNodeTwo"].IsNull())
    {
        if (!value["SlaveNodeTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeDistribution.SlaveNodeTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slaveNodeTwo = string(value["SlaveNodeTwo"].GetString());
        m_slaveNodeTwoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeDistribution::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Node";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_node.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveNodeOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveNodeOne";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slaveNodeOne.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveNodeTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveNodeTwo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slaveNodeTwo.c_str(), allocator).Move(), allocator);
    }

}


string NodeDistribution::GetNode() const
{
    return m_node;
}

void NodeDistribution::SetNode(const string& _node)
{
    m_node = _node;
    m_nodeHasBeenSet = true;
}

bool NodeDistribution::NodeHasBeenSet() const
{
    return m_nodeHasBeenSet;
}

string NodeDistribution::GetSlaveNodeOne() const
{
    return m_slaveNodeOne;
}

void NodeDistribution::SetSlaveNodeOne(const string& _slaveNodeOne)
{
    m_slaveNodeOne = _slaveNodeOne;
    m_slaveNodeOneHasBeenSet = true;
}

bool NodeDistribution::SlaveNodeOneHasBeenSet() const
{
    return m_slaveNodeOneHasBeenSet;
}

string NodeDistribution::GetSlaveNodeTwo() const
{
    return m_slaveNodeTwo;
}

void NodeDistribution::SetSlaveNodeTwo(const string& _slaveNodeTwo)
{
    m_slaveNodeTwo = _slaveNodeTwo;
    m_slaveNodeTwoHasBeenSet = true;
}

bool NodeDistribution::SlaveNodeTwoHasBeenSet() const
{
    return m_slaveNodeTwoHasBeenSet;
}

