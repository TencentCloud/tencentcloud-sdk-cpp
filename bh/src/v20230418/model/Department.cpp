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

#include <tencentcloud/bh/v20230418/model/Department.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

Department::Department() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_managersHasBeenSet(false),
    m_managerUsersHasBeenSet(false)
{
}

CoreInternalOutcome Department::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Department.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Department.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Managers") && !value["Managers"].IsNull())
    {
        if (!value["Managers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Department.Managers` is not array type"));

        const rapidjson::Value &tmpValue = value["Managers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_managers.push_back((*itr).GetString());
        }
        m_managersHasBeenSet = true;
    }

    if (value.HasMember("ManagerUsers") && !value["ManagerUsers"].IsNull())
    {
        if (!value["ManagerUsers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Department.ManagerUsers` is not array type"));

        const rapidjson::Value &tmpValue = value["ManagerUsers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DepartmentManagerUser item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_managerUsers.push_back(item);
        }
        m_managerUsersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Department::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_managersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Managers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_managers.begin(); itr != m_managers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_managerUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_managerUsers.begin(); itr != m_managerUsers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Department::GetId() const
{
    return m_id;
}

void Department::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Department::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Department::GetName() const
{
    return m_name;
}

void Department::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Department::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> Department::GetManagers() const
{
    return m_managers;
}

void Department::SetManagers(const vector<string>& _managers)
{
    m_managers = _managers;
    m_managersHasBeenSet = true;
}

bool Department::ManagersHasBeenSet() const
{
    return m_managersHasBeenSet;
}

vector<DepartmentManagerUser> Department::GetManagerUsers() const
{
    return m_managerUsers;
}

void Department::SetManagerUsers(const vector<DepartmentManagerUser>& _managerUsers)
{
    m_managerUsers = _managerUsers;
    m_managerUsersHasBeenSet = true;
}

bool Department::ManagerUsersHasBeenSet() const
{
    return m_managerUsersHasBeenSet;
}

