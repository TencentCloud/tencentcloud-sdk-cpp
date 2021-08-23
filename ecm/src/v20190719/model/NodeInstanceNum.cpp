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

#include <tencentcloud/ecm/v20190719/model/NodeInstanceNum.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

NodeInstanceNum::NodeInstanceNum() :
    m_nodeNumHasBeenSet(false),
    m_instanceNumHasBeenSet(false)
{
}

CoreInternalOutcome NodeInstanceNum::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeNum") && !value["NodeNum"].IsNull())
    {
        if (!value["NodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInstanceNum.NodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeNum = value["NodeNum"].GetInt64();
        m_nodeNumHasBeenSet = true;
    }

    if (value.HasMember("InstanceNum") && !value["InstanceNum"].IsNull())
    {
        if (!value["InstanceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInstanceNum.InstanceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNum = value["InstanceNum"].GetInt64();
        m_instanceNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeInstanceNum::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeNum, allocator);
    }

    if (m_instanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceNum, allocator);
    }

}


int64_t NodeInstanceNum::GetNodeNum() const
{
    return m_nodeNum;
}

void NodeInstanceNum::SetNodeNum(const int64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool NodeInstanceNum::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

int64_t NodeInstanceNum::GetInstanceNum() const
{
    return m_instanceNum;
}

void NodeInstanceNum::SetInstanceNum(const int64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool NodeInstanceNum::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

