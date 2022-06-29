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

#include <tencentcloud/cynosdb/v20190107/model/RollbackDatabase.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

RollbackDatabase::RollbackDatabase() :
    m_oldDatabaseHasBeenSet(false),
    m_newDatabaseHasBeenSet(false)
{
}

CoreInternalOutcome RollbackDatabase::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OldDatabase") && !value["OldDatabase"].IsNull())
    {
        if (!value["OldDatabase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackDatabase.OldDatabase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldDatabase = string(value["OldDatabase"].GetString());
        m_oldDatabaseHasBeenSet = true;
    }

    if (value.HasMember("NewDatabase") && !value["NewDatabase"].IsNull())
    {
        if (!value["NewDatabase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackDatabase.NewDatabase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newDatabase = string(value["NewDatabase"].GetString());
        m_newDatabaseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RollbackDatabase::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_oldDatabaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldDatabase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldDatabase.c_str(), allocator).Move(), allocator);
    }

    if (m_newDatabaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDatabase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newDatabase.c_str(), allocator).Move(), allocator);
    }

}


string RollbackDatabase::GetOldDatabase() const
{
    return m_oldDatabase;
}

void RollbackDatabase::SetOldDatabase(const string& _oldDatabase)
{
    m_oldDatabase = _oldDatabase;
    m_oldDatabaseHasBeenSet = true;
}

bool RollbackDatabase::OldDatabaseHasBeenSet() const
{
    return m_oldDatabaseHasBeenSet;
}

string RollbackDatabase::GetNewDatabase() const
{
    return m_newDatabase;
}

void RollbackDatabase::SetNewDatabase(const string& _newDatabase)
{
    m_newDatabase = _newDatabase;
    m_newDatabaseHasBeenSet = true;
}

bool RollbackDatabase::NewDatabaseHasBeenSet() const
{
    return m_newDatabaseHasBeenSet;
}

