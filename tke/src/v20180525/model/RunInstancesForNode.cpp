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

#include <tencentcloud/tke/v20180525/model/RunInstancesForNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

RunInstancesForNode::RunInstancesForNode() :
    m_nodeRoleHasBeenSet(false),
    m_runInstancesParaHasBeenSet(false),
    m_instanceAdvancedSettingsOverridesHasBeenSet(false)
{
}

CoreInternalOutcome RunInstancesForNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeRole") && !value["NodeRole"].IsNull())
    {
        if (!value["NodeRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunInstancesForNode.NodeRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeRole = string(value["NodeRole"].GetString());
        m_nodeRoleHasBeenSet = true;
    }

    if (value.HasMember("RunInstancesPara") && !value["RunInstancesPara"].IsNull())
    {
        if (!value["RunInstancesPara"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RunInstancesForNode.RunInstancesPara` is not array type"));

        const rapidjson::Value &tmpValue = value["RunInstancesPara"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_runInstancesPara.push_back((*itr).GetString());
        }
        m_runInstancesParaHasBeenSet = true;
    }

    if (value.HasMember("InstanceAdvancedSettingsOverrides") && !value["InstanceAdvancedSettingsOverrides"].IsNull())
    {
        if (!value["InstanceAdvancedSettingsOverrides"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RunInstancesForNode.InstanceAdvancedSettingsOverrides` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceAdvancedSettingsOverrides"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceAdvancedSettings item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceAdvancedSettingsOverrides.push_back(item);
        }
        m_instanceAdvancedSettingsOverridesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunInstancesForNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeRole.c_str(), allocator).Move(), allocator);
    }

    if (m_runInstancesParaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunInstancesPara";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_runInstancesPara.begin(); itr != m_runInstancesPara.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceAdvancedSettingsOverridesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAdvancedSettingsOverrides";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceAdvancedSettingsOverrides.begin(); itr != m_instanceAdvancedSettingsOverrides.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RunInstancesForNode::GetNodeRole() const
{
    return m_nodeRole;
}

void RunInstancesForNode::SetNodeRole(const string& _nodeRole)
{
    m_nodeRole = _nodeRole;
    m_nodeRoleHasBeenSet = true;
}

bool RunInstancesForNode::NodeRoleHasBeenSet() const
{
    return m_nodeRoleHasBeenSet;
}

vector<string> RunInstancesForNode::GetRunInstancesPara() const
{
    return m_runInstancesPara;
}

void RunInstancesForNode::SetRunInstancesPara(const vector<string>& _runInstancesPara)
{
    m_runInstancesPara = _runInstancesPara;
    m_runInstancesParaHasBeenSet = true;
}

bool RunInstancesForNode::RunInstancesParaHasBeenSet() const
{
    return m_runInstancesParaHasBeenSet;
}

vector<InstanceAdvancedSettings> RunInstancesForNode::GetInstanceAdvancedSettingsOverrides() const
{
    return m_instanceAdvancedSettingsOverrides;
}

void RunInstancesForNode::SetInstanceAdvancedSettingsOverrides(const vector<InstanceAdvancedSettings>& _instanceAdvancedSettingsOverrides)
{
    m_instanceAdvancedSettingsOverrides = _instanceAdvancedSettingsOverrides;
    m_instanceAdvancedSettingsOverridesHasBeenSet = true;
}

bool RunInstancesForNode::InstanceAdvancedSettingsOverridesHasBeenSet() const
{
    return m_instanceAdvancedSettingsOverridesHasBeenSet;
}

