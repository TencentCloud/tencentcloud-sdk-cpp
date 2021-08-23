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

#include <tencentcloud/mariadb/v20170312/model/ProcedurePrivilege.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

ProcedurePrivilege::ProcedurePrivilege() :
    m_databaseHasBeenSet(false),
    m_procedureHasBeenSet(false),
    m_privilegesHasBeenSet(false)
{
}

CoreInternalOutcome ProcedurePrivilege::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedurePrivilege.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("Procedure") && !value["Procedure"].IsNull())
    {
        if (!value["Procedure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedurePrivilege.Procedure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procedure = string(value["Procedure"].GetString());
        m_procedureHasBeenSet = true;
    }

    if (value.HasMember("Privileges") && !value["Privileges"].IsNull())
    {
        if (!value["Privileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProcedurePrivilege.Privileges` is not array type"));

        const rapidjson::Value &tmpValue = value["Privileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privileges.push_back((*itr).GetString());
        }
        m_privilegesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcedurePrivilege::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_procedureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Procedure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procedure.c_str(), allocator).Move(), allocator);
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


string ProcedurePrivilege::GetDatabase() const
{
    return m_database;
}

void ProcedurePrivilege::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool ProcedurePrivilege::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string ProcedurePrivilege::GetProcedure() const
{
    return m_procedure;
}

void ProcedurePrivilege::SetProcedure(const string& _procedure)
{
    m_procedure = _procedure;
    m_procedureHasBeenSet = true;
}

bool ProcedurePrivilege::ProcedureHasBeenSet() const
{
    return m_procedureHasBeenSet;
}

vector<string> ProcedurePrivilege::GetPrivileges() const
{
    return m_privileges;
}

void ProcedurePrivilege::SetPrivileges(const vector<string>& _privileges)
{
    m_privileges = _privileges;
    m_privilegesHasBeenSet = true;
}

bool ProcedurePrivilege::PrivilegesHasBeenSet() const
{
    return m_privilegesHasBeenSet;
}

