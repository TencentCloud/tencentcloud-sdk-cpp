/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/mongodb/v20190725/model/RolePrivilege.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

RolePrivilege::RolePrivilege() :
    m_resourceHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
}

CoreInternalOutcome RolePrivilege::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RolePrivilege.Resource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resource.Deserialize(value["Resource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("Actions") && !value["Actions"].IsNull())
    {
        if (!value["Actions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RolePrivilege.Actions` is not array type"));

        const rapidjson::Value &tmpValue = value["Actions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_actions.push_back((*itr).GetString());
        }
        m_actionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RolePrivilege::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_actionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Actions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_actions.begin(); itr != m_actions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


RoleResource RolePrivilege::GetResource() const
{
    return m_resource;
}

void RolePrivilege::SetResource(const RoleResource& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool RolePrivilege::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

vector<string> RolePrivilege::GetActions() const
{
    return m_actions;
}

void RolePrivilege::SetActions(const vector<string>& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool RolePrivilege::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

