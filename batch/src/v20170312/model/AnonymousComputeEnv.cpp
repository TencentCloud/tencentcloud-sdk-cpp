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

#include <tencentcloud/batch/v20170312/model/AnonymousComputeEnv.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

AnonymousComputeEnv::AnonymousComputeEnv() :
    m_envTypeHasBeenSet(false),
    m_envDataHasBeenSet(false),
    m_mountDataDisksHasBeenSet(false),
    m_agentRunningModeHasBeenSet(false)
{
}

CoreInternalOutcome AnonymousComputeEnv::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvType") && !value["EnvType"].IsNull())
    {
        if (!value["EnvType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnonymousComputeEnv.EnvType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envType = string(value["EnvType"].GetString());
        m_envTypeHasBeenSet = true;
    }

    if (value.HasMember("EnvData") && !value["EnvData"].IsNull())
    {
        if (!value["EnvData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AnonymousComputeEnv.EnvData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_envData.Deserialize(value["EnvData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_envDataHasBeenSet = true;
    }

    if (value.HasMember("MountDataDisks") && !value["MountDataDisks"].IsNull())
    {
        if (!value["MountDataDisks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnonymousComputeEnv.MountDataDisks` is not array type"));

        const rapidjson::Value &tmpValue = value["MountDataDisks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MountDataDisk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mountDataDisks.push_back(item);
        }
        m_mountDataDisksHasBeenSet = true;
    }

    if (value.HasMember("AgentRunningMode") && !value["AgentRunningMode"].IsNull())
    {
        if (!value["AgentRunningMode"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AnonymousComputeEnv.AgentRunningMode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_agentRunningMode.Deserialize(value["AgentRunningMode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_agentRunningModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnonymousComputeEnv::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_envTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envType.c_str(), allocator).Move(), allocator);
    }

    if (m_envDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_envData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mountDataDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountDataDisks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mountDataDisks.begin(); itr != m_mountDataDisks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_agentRunningModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentRunningMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agentRunningMode.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AnonymousComputeEnv::GetEnvType() const
{
    return m_envType;
}

void AnonymousComputeEnv::SetEnvType(const string& _envType)
{
    m_envType = _envType;
    m_envTypeHasBeenSet = true;
}

bool AnonymousComputeEnv::EnvTypeHasBeenSet() const
{
    return m_envTypeHasBeenSet;
}

EnvData AnonymousComputeEnv::GetEnvData() const
{
    return m_envData;
}

void AnonymousComputeEnv::SetEnvData(const EnvData& _envData)
{
    m_envData = _envData;
    m_envDataHasBeenSet = true;
}

bool AnonymousComputeEnv::EnvDataHasBeenSet() const
{
    return m_envDataHasBeenSet;
}

vector<MountDataDisk> AnonymousComputeEnv::GetMountDataDisks() const
{
    return m_mountDataDisks;
}

void AnonymousComputeEnv::SetMountDataDisks(const vector<MountDataDisk>& _mountDataDisks)
{
    m_mountDataDisks = _mountDataDisks;
    m_mountDataDisksHasBeenSet = true;
}

bool AnonymousComputeEnv::MountDataDisksHasBeenSet() const
{
    return m_mountDataDisksHasBeenSet;
}

AgentRunningMode AnonymousComputeEnv::GetAgentRunningMode() const
{
    return m_agentRunningMode;
}

void AnonymousComputeEnv::SetAgentRunningMode(const AgentRunningMode& _agentRunningMode)
{
    m_agentRunningMode = _agentRunningMode;
    m_agentRunningModeHasBeenSet = true;
}

bool AnonymousComputeEnv::AgentRunningModeHasBeenSet() const
{
    return m_agentRunningModeHasBeenSet;
}

