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

#include <tencentcloud/tke/v20180525/model/NodePoolOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

NodePoolOption::NodePoolOption() :
    m_addToNodePoolHasBeenSet(false),
    m_nodePoolIdHasBeenSet(false),
    m_inheritConfigurationFromNodePoolHasBeenSet(false)
{
}

CoreInternalOutcome NodePoolOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddToNodePool") && !value["AddToNodePool"].IsNull())
    {
        if (!value["AddToNodePool"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NodePoolOption.AddToNodePool` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_addToNodePool = value["AddToNodePool"].GetBool();
        m_addToNodePoolHasBeenSet = true;
    }

    if (value.HasMember("NodePoolId") && !value["NodePoolId"].IsNull())
    {
        if (!value["NodePoolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePoolOption.NodePoolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodePoolId = string(value["NodePoolId"].GetString());
        m_nodePoolIdHasBeenSet = true;
    }

    if (value.HasMember("InheritConfigurationFromNodePool") && !value["InheritConfigurationFromNodePool"].IsNull())
    {
        if (!value["InheritConfigurationFromNodePool"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NodePoolOption.InheritConfigurationFromNodePool` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_inheritConfigurationFromNodePool = value["InheritConfigurationFromNodePool"].GetBool();
        m_inheritConfigurationFromNodePoolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodePoolOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addToNodePoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddToNodePool";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addToNodePool, allocator);
    }

    if (m_nodePoolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePoolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodePoolId.c_str(), allocator).Move(), allocator);
    }

    if (m_inheritConfigurationFromNodePoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InheritConfigurationFromNodePool";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inheritConfigurationFromNodePool, allocator);
    }

}


bool NodePoolOption::GetAddToNodePool() const
{
    return m_addToNodePool;
}

void NodePoolOption::SetAddToNodePool(const bool& _addToNodePool)
{
    m_addToNodePool = _addToNodePool;
    m_addToNodePoolHasBeenSet = true;
}

bool NodePoolOption::AddToNodePoolHasBeenSet() const
{
    return m_addToNodePoolHasBeenSet;
}

string NodePoolOption::GetNodePoolId() const
{
    return m_nodePoolId;
}

void NodePoolOption::SetNodePoolId(const string& _nodePoolId)
{
    m_nodePoolId = _nodePoolId;
    m_nodePoolIdHasBeenSet = true;
}

bool NodePoolOption::NodePoolIdHasBeenSet() const
{
    return m_nodePoolIdHasBeenSet;
}

bool NodePoolOption::GetInheritConfigurationFromNodePool() const
{
    return m_inheritConfigurationFromNodePool;
}

void NodePoolOption::SetInheritConfigurationFromNodePool(const bool& _inheritConfigurationFromNodePool)
{
    m_inheritConfigurationFromNodePool = _inheritConfigurationFromNodePool;
    m_inheritConfigurationFromNodePoolHasBeenSet = true;
}

bool NodePoolOption::InheritConfigurationFromNodePoolHasBeenSet() const
{
    return m_inheritConfigurationFromNodePoolHasBeenSet;
}

