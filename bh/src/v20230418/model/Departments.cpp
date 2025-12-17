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

#include <tencentcloud/bh/v20230418/model/Departments.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

Departments::Departments() :
    m_departmentSetHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_rootManagerHasBeenSet(false)
{
}

CoreInternalOutcome Departments::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DepartmentSet") && !value["DepartmentSet"].IsNull())
    {
        if (!value["DepartmentSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Departments.DepartmentSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DepartmentSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Department item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_departmentSet.push_back(item);
        }
        m_departmentSetHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Departments.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("RootManager") && !value["RootManager"].IsNull())
    {
        if (!value["RootManager"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Departments.RootManager` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rootManager = value["RootManager"].GetBool();
        m_rootManagerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Departments::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_departmentSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_departmentSet.begin(); itr != m_departmentSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_rootManagerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootManager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rootManager, allocator);
    }

}


vector<Department> Departments::GetDepartmentSet() const
{
    return m_departmentSet;
}

void Departments::SetDepartmentSet(const vector<Department>& _departmentSet)
{
    m_departmentSet = _departmentSet;
    m_departmentSetHasBeenSet = true;
}

bool Departments::DepartmentSetHasBeenSet() const
{
    return m_departmentSetHasBeenSet;
}

bool Departments::GetEnabled() const
{
    return m_enabled;
}

void Departments::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool Departments::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

bool Departments::GetRootManager() const
{
    return m_rootManager;
}

void Departments::SetRootManager(const bool& _rootManager)
{
    m_rootManager = _rootManager;
    m_rootManagerHasBeenSet = true;
}

bool Departments::RootManagerHasBeenSet() const
{
    return m_rootManagerHasBeenSet;
}

