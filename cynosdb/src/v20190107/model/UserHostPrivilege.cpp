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

#include <tencentcloud/cynosdb/v20190107/model/UserHostPrivilege.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

UserHostPrivilege::UserHostPrivilege() :
    m_dbUserNameHasBeenSet(false),
    m_dbHostHasBeenSet(false),
    m_dbPrivilegeHasBeenSet(false)
{
}

CoreInternalOutcome UserHostPrivilege::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbUserName") && !value["DbUserName"].IsNull())
    {
        if (!value["DbUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserHostPrivilege.DbUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbUserName = string(value["DbUserName"].GetString());
        m_dbUserNameHasBeenSet = true;
    }

    if (value.HasMember("DbHost") && !value["DbHost"].IsNull())
    {
        if (!value["DbHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserHostPrivilege.DbHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbHost = string(value["DbHost"].GetString());
        m_dbHostHasBeenSet = true;
    }

    if (value.HasMember("DbPrivilege") && !value["DbPrivilege"].IsNull())
    {
        if (!value["DbPrivilege"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserHostPrivilege.DbPrivilege` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbPrivilege = string(value["DbPrivilege"].GetString());
        m_dbPrivilegeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserHostPrivilege::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_dbHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbHost.c_str(), allocator).Move(), allocator);
    }

    if (m_dbPrivilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbPrivilege";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbPrivilege.c_str(), allocator).Move(), allocator);
    }

}


string UserHostPrivilege::GetDbUserName() const
{
    return m_dbUserName;
}

void UserHostPrivilege::SetDbUserName(const string& _dbUserName)
{
    m_dbUserName = _dbUserName;
    m_dbUserNameHasBeenSet = true;
}

bool UserHostPrivilege::DbUserNameHasBeenSet() const
{
    return m_dbUserNameHasBeenSet;
}

string UserHostPrivilege::GetDbHost() const
{
    return m_dbHost;
}

void UserHostPrivilege::SetDbHost(const string& _dbHost)
{
    m_dbHost = _dbHost;
    m_dbHostHasBeenSet = true;
}

bool UserHostPrivilege::DbHostHasBeenSet() const
{
    return m_dbHostHasBeenSet;
}

string UserHostPrivilege::GetDbPrivilege() const
{
    return m_dbPrivilege;
}

void UserHostPrivilege::SetDbPrivilege(const string& _dbPrivilege)
{
    m_dbPrivilege = _dbPrivilege;
    m_dbPrivilegeHasBeenSet = true;
}

bool UserHostPrivilege::DbPrivilegeHasBeenSet() const
{
    return m_dbPrivilegeHasBeenSet;
}

