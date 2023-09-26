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

#include <tencentcloud/bi/v20220105/model/PermissionGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

PermissionGroup::PermissionGroup() :
    m_moduleGroupHasBeenSet(false),
    m_componentsHasBeenSet(false)
{
}

CoreInternalOutcome PermissionGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModuleGroup") && !value["ModuleGroup"].IsNull())
    {
        if (!value["ModuleGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionGroup.ModuleGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleGroup = string(value["ModuleGroup"].GetString());
        m_moduleGroupHasBeenSet = true;
    }

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PermissionGroup.Components` is not array type"));

        const rapidjson::Value &tmpValue = value["Components"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PermissionComponent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_components.push_back(item);
        }
        m_componentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PermissionGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_moduleGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PermissionGroup::GetModuleGroup() const
{
    return m_moduleGroup;
}

void PermissionGroup::SetModuleGroup(const string& _moduleGroup)
{
    m_moduleGroup = _moduleGroup;
    m_moduleGroupHasBeenSet = true;
}

bool PermissionGroup::ModuleGroupHasBeenSet() const
{
    return m_moduleGroupHasBeenSet;
}

vector<PermissionComponent> PermissionGroup::GetComponents() const
{
    return m_components;
}

void PermissionGroup::SetComponents(const vector<PermissionComponent>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool PermissionGroup::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

