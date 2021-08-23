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

#include <tencentcloud/tke/v20180525/model/ExistedInstancesForNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ExistedInstancesForNode::ExistedInstancesForNode() :
    m_nodeRoleHasBeenSet(false),
    m_existedInstancesParaHasBeenSet(false),
    m_instanceAdvancedSettingsOverrideHasBeenSet(false),
    m_desiredPodNumbersHasBeenSet(false)
{
}

CoreInternalOutcome ExistedInstancesForNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeRole") && !value["NodeRole"].IsNull())
    {
        if (!value["NodeRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExistedInstancesForNode.NodeRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeRole = string(value["NodeRole"].GetString());
        m_nodeRoleHasBeenSet = true;
    }

    if (value.HasMember("ExistedInstancesPara") && !value["ExistedInstancesPara"].IsNull())
    {
        if (!value["ExistedInstancesPara"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExistedInstancesForNode.ExistedInstancesPara` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_existedInstancesPara.Deserialize(value["ExistedInstancesPara"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_existedInstancesParaHasBeenSet = true;
    }

    if (value.HasMember("InstanceAdvancedSettingsOverride") && !value["InstanceAdvancedSettingsOverride"].IsNull())
    {
        if (!value["InstanceAdvancedSettingsOverride"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExistedInstancesForNode.InstanceAdvancedSettingsOverride` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceAdvancedSettingsOverride.Deserialize(value["InstanceAdvancedSettingsOverride"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceAdvancedSettingsOverrideHasBeenSet = true;
    }

    if (value.HasMember("DesiredPodNumbers") && !value["DesiredPodNumbers"].IsNull())
    {
        if (!value["DesiredPodNumbers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExistedInstancesForNode.DesiredPodNumbers` is not array type"));

        const rapidjson::Value &tmpValue = value["DesiredPodNumbers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_desiredPodNumbers.push_back((*itr).GetInt64());
        }
        m_desiredPodNumbersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExistedInstancesForNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeRole.c_str(), allocator).Move(), allocator);
    }

    if (m_existedInstancesParaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExistedInstancesPara";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_existedInstancesPara.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceAdvancedSettingsOverrideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAdvancedSettingsOverride";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceAdvancedSettingsOverride.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_desiredPodNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredPodNumbers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_desiredPodNumbers.begin(); itr != m_desiredPodNumbers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string ExistedInstancesForNode::GetNodeRole() const
{
    return m_nodeRole;
}

void ExistedInstancesForNode::SetNodeRole(const string& _nodeRole)
{
    m_nodeRole = _nodeRole;
    m_nodeRoleHasBeenSet = true;
}

bool ExistedInstancesForNode::NodeRoleHasBeenSet() const
{
    return m_nodeRoleHasBeenSet;
}

ExistedInstancesPara ExistedInstancesForNode::GetExistedInstancesPara() const
{
    return m_existedInstancesPara;
}

void ExistedInstancesForNode::SetExistedInstancesPara(const ExistedInstancesPara& _existedInstancesPara)
{
    m_existedInstancesPara = _existedInstancesPara;
    m_existedInstancesParaHasBeenSet = true;
}

bool ExistedInstancesForNode::ExistedInstancesParaHasBeenSet() const
{
    return m_existedInstancesParaHasBeenSet;
}

InstanceAdvancedSettings ExistedInstancesForNode::GetInstanceAdvancedSettingsOverride() const
{
    return m_instanceAdvancedSettingsOverride;
}

void ExistedInstancesForNode::SetInstanceAdvancedSettingsOverride(const InstanceAdvancedSettings& _instanceAdvancedSettingsOverride)
{
    m_instanceAdvancedSettingsOverride = _instanceAdvancedSettingsOverride;
    m_instanceAdvancedSettingsOverrideHasBeenSet = true;
}

bool ExistedInstancesForNode::InstanceAdvancedSettingsOverrideHasBeenSet() const
{
    return m_instanceAdvancedSettingsOverrideHasBeenSet;
}

vector<int64_t> ExistedInstancesForNode::GetDesiredPodNumbers() const
{
    return m_desiredPodNumbers;
}

void ExistedInstancesForNode::SetDesiredPodNumbers(const vector<int64_t>& _desiredPodNumbers)
{
    m_desiredPodNumbers = _desiredPodNumbers;
    m_desiredPodNumbersHasBeenSet = true;
}

bool ExistedInstancesForNode::DesiredPodNumbersHasBeenSet() const
{
    return m_desiredPodNumbersHasBeenSet;
}

