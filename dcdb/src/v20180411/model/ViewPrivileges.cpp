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

#include <tencentcloud/dcdb/v20180411/model/ViewPrivileges.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

ViewPrivileges::ViewPrivileges() :
    m_databaseHasBeenSet(false),
    m_viewHasBeenSet(false),
    m_privilegesHasBeenSet(false)
{
}

CoreInternalOutcome ViewPrivileges::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewPrivileges.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("View") && !value["View"].IsNull())
    {
        if (!value["View"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewPrivileges.View` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_view = string(value["View"].GetString());
        m_viewHasBeenSet = true;
    }

    if (value.HasMember("Privileges") && !value["Privileges"].IsNull())
    {
        if (!value["Privileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ViewPrivileges.Privileges` is not array type"));

        const rapidjson::Value &tmpValue = value["Privileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privileges.push_back((*itr).GetString());
        }
        m_privilegesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ViewPrivileges::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_viewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "View";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_view.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privileges.begin(); itr != m_privileges.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ViewPrivileges::GetDatabase() const
{
    return m_database;
}

void ViewPrivileges::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool ViewPrivileges::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string ViewPrivileges::GetView() const
{
    return m_view;
}

void ViewPrivileges::SetView(const string& _view)
{
    m_view = _view;
    m_viewHasBeenSet = true;
}

bool ViewPrivileges::ViewHasBeenSet() const
{
    return m_viewHasBeenSet;
}

vector<string> ViewPrivileges::GetPrivileges() const
{
    return m_privileges;
}

void ViewPrivileges::SetPrivileges(const vector<string>& _privileges)
{
    m_privileges = _privileges;
    m_privilegesHasBeenSet = true;
}

bool ViewPrivileges::PrivilegesHasBeenSet() const
{
    return m_privilegesHasBeenSet;
}

