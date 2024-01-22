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

#include <tencentcloud/tke/v20220501/model/ExternalNodePoolInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

ExternalNodePoolInfo::ExternalNodePoolInfo() :
    m_runtimeConfigHasBeenSet(false),
    m_nodesNumHasBeenSet(false)
{
}

CoreInternalOutcome ExternalNodePoolInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuntimeConfig") && !value["RuntimeConfig"].IsNull())
    {
        if (!value["RuntimeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalNodePoolInfo.RuntimeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_runtimeConfig.Deserialize(value["RuntimeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_runtimeConfigHasBeenSet = true;
    }

    if (value.HasMember("NodesNum") && !value["NodesNum"].IsNull())
    {
        if (!value["NodesNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalNodePoolInfo.NodesNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodesNum = value["NodesNum"].GetUint64();
        m_nodesNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalNodePoolInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_runtimeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_runtimeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nodesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodesNum, allocator);
    }

}


RuntimeConfig ExternalNodePoolInfo::GetRuntimeConfig() const
{
    return m_runtimeConfig;
}

void ExternalNodePoolInfo::SetRuntimeConfig(const RuntimeConfig& _runtimeConfig)
{
    m_runtimeConfig = _runtimeConfig;
    m_runtimeConfigHasBeenSet = true;
}

bool ExternalNodePoolInfo::RuntimeConfigHasBeenSet() const
{
    return m_runtimeConfigHasBeenSet;
}

uint64_t ExternalNodePoolInfo::GetNodesNum() const
{
    return m_nodesNum;
}

void ExternalNodePoolInfo::SetNodesNum(const uint64_t& _nodesNum)
{
    m_nodesNum = _nodesNum;
    m_nodesNumHasBeenSet = true;
}

bool ExternalNodePoolInfo::NodesNumHasBeenSet() const
{
    return m_nodesNumHasBeenSet;
}

