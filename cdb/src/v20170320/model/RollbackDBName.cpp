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

#include <tencentcloud/cdb/v20170320/model/RollbackDBName.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

RollbackDBName::RollbackDBName() :
    m_databaseNameHasBeenSet(false),
    m_newDatabaseNameHasBeenSet(false)
{
}

CoreInternalOutcome RollbackDBName::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackDBName.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("NewDatabaseName") && !value["NewDatabaseName"].IsNull())
    {
        if (!value["NewDatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackDBName.NewDatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newDatabaseName = string(value["NewDatabaseName"].GetString());
        m_newDatabaseNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RollbackDBName::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_newDatabaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newDatabaseName.c_str(), allocator).Move(), allocator);
    }

}


string RollbackDBName::GetDatabaseName() const
{
    return m_databaseName;
}

void RollbackDBName::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool RollbackDBName::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string RollbackDBName::GetNewDatabaseName() const
{
    return m_newDatabaseName;
}

void RollbackDBName::SetNewDatabaseName(const string& _newDatabaseName)
{
    m_newDatabaseName = _newDatabaseName;
    m_newDatabaseNameHasBeenSet = true;
}

bool RollbackDBName::NewDatabaseNameHasBeenSet() const
{
    return m_newDatabaseNameHasBeenSet;
}

