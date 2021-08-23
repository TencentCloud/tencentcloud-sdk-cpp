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

#include <tencentcloud/cdb/v20170320/model/DatabasesWithCharacterLists.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DatabasesWithCharacterLists::DatabasesWithCharacterLists() :
    m_databaseNameHasBeenSet(false),
    m_characterSetHasBeenSet(false)
{
}

CoreInternalOutcome DatabasesWithCharacterLists::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabasesWithCharacterLists.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("CharacterSet") && !value["CharacterSet"].IsNull())
    {
        if (!value["CharacterSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabasesWithCharacterLists.CharacterSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_characterSet = string(value["CharacterSet"].GetString());
        m_characterSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatabasesWithCharacterLists::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_characterSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CharacterSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_characterSet.c_str(), allocator).Move(), allocator);
    }

}


string DatabasesWithCharacterLists::GetDatabaseName() const
{
    return m_databaseName;
}

void DatabasesWithCharacterLists::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DatabasesWithCharacterLists::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string DatabasesWithCharacterLists::GetCharacterSet() const
{
    return m_characterSet;
}

void DatabasesWithCharacterLists::SetCharacterSet(const string& _characterSet)
{
    m_characterSet = _characterSet;
    m_characterSetHasBeenSet = true;
}

bool DatabasesWithCharacterLists::CharacterSetHasBeenSet() const
{
    return m_characterSetHasBeenSet;
}

