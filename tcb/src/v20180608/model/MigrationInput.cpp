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

#include <tencentcloud/tcb/v20180608/model/MigrationInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

MigrationInput::MigrationInput() :
    m_versionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_rollbackHasBeenSet(false)
{
}

CoreInternalOutcome MigrationInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationInput.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationInput.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationInput.Query` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_query = string(value["Query"].GetString());
        m_queryHasBeenSet = true;
    }

    if (value.HasMember("Rollback") && !value["Rollback"].IsNull())
    {
        if (!value["Rollback"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationInput.Rollback` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rollback = string(value["Rollback"].GetString());
        m_rollbackHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrationInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rollback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rollback.c_str(), allocator).Move(), allocator);
    }

}


string MigrationInput::GetVersion() const
{
    return m_version;
}

void MigrationInput::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool MigrationInput::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string MigrationInput::GetName() const
{
    return m_name;
}

void MigrationInput::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MigrationInput::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MigrationInput::GetQuery() const
{
    return m_query;
}

void MigrationInput::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool MigrationInput::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

string MigrationInput::GetRollback() const
{
    return m_rollback;
}

void MigrationInput::SetRollback(const string& _rollback)
{
    m_rollback = _rollback;
    m_rollbackHasBeenSet = true;
}

bool MigrationInput::RollbackHasBeenSet() const
{
    return m_rollbackHasBeenSet;
}

