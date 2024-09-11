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

#include <tencentcloud/tke/v20220501/model/HealthCheckPolicyBinding.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

HealthCheckPolicyBinding::HealthCheckPolicyBinding() :
    m_nameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_nodePoolsHasBeenSet(false)
{
}

CoreInternalOutcome HealthCheckPolicyBinding::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckPolicyBinding.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckPolicyBinding.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("NodePools") && !value["NodePools"].IsNull())
    {
        if (!value["NodePools"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HealthCheckPolicyBinding.NodePools` is not array type"));

        const rapidjson::Value &tmpValue = value["NodePools"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nodePools.push_back((*itr).GetString());
        }
        m_nodePoolsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthCheckPolicyBinding::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_nodePoolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePools";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodePools.begin(); itr != m_nodePools.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string HealthCheckPolicyBinding::GetName() const
{
    return m_name;
}

void HealthCheckPolicyBinding::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HealthCheckPolicyBinding::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string HealthCheckPolicyBinding::GetCreatedAt() const
{
    return m_createdAt;
}

void HealthCheckPolicyBinding::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool HealthCheckPolicyBinding::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

vector<string> HealthCheckPolicyBinding::GetNodePools() const
{
    return m_nodePools;
}

void HealthCheckPolicyBinding::SetNodePools(const vector<string>& _nodePools)
{
    m_nodePools = _nodePools;
    m_nodePoolsHasBeenSet = true;
}

bool HealthCheckPolicyBinding::NodePoolsHasBeenSet() const
{
    return m_nodePoolsHasBeenSet;
}

