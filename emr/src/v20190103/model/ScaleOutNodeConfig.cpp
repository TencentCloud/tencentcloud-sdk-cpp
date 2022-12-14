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

#include <tencentcloud/emr/v20190103/model/ScaleOutNodeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ScaleOutNodeConfig::ScaleOutNodeConfig() :
    m_nodeFlagHasBeenSet(false),
    m_nodeCountHasBeenSet(false)
{
}

CoreInternalOutcome ScaleOutNodeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeFlag") && !value["NodeFlag"].IsNull())
    {
        if (!value["NodeFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScaleOutNodeConfig.NodeFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeFlag = string(value["NodeFlag"].GetString());
        m_nodeFlagHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScaleOutNodeConfig.NodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetUint64();
        m_nodeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScaleOutNodeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

}


string ScaleOutNodeConfig::GetNodeFlag() const
{
    return m_nodeFlag;
}

void ScaleOutNodeConfig::SetNodeFlag(const string& _nodeFlag)
{
    m_nodeFlag = _nodeFlag;
    m_nodeFlagHasBeenSet = true;
}

bool ScaleOutNodeConfig::NodeFlagHasBeenSet() const
{
    return m_nodeFlagHasBeenSet;
}

uint64_t ScaleOutNodeConfig::GetNodeCount() const
{
    return m_nodeCount;
}

void ScaleOutNodeConfig::SetNodeCount(const uint64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool ScaleOutNodeConfig::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

