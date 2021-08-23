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

#include <tencentcloud/sqlserver/v20180328/model/DBPrivilegeModifyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DBPrivilegeModifyInfo::DBPrivilegeModifyInfo() :
    m_dBNameHasBeenSet(false),
    m_privilegeHasBeenSet(false)
{
}

CoreInternalOutcome DBPrivilegeModifyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DBName") && !value["DBName"].IsNull())
    {
        if (!value["DBName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBPrivilegeModifyInfo.DBName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBName = string(value["DBName"].GetString());
        m_dBNameHasBeenSet = true;
    }

    if (value.HasMember("Privilege") && !value["Privilege"].IsNull())
    {
        if (!value["Privilege"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBPrivilegeModifyInfo.Privilege` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privilege = string(value["Privilege"].GetString());
        m_privilegeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBPrivilegeModifyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBName.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privilege";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privilege.c_str(), allocator).Move(), allocator);
    }

}


string DBPrivilegeModifyInfo::GetDBName() const
{
    return m_dBName;
}

void DBPrivilegeModifyInfo::SetDBName(const string& _dBName)
{
    m_dBName = _dBName;
    m_dBNameHasBeenSet = true;
}

bool DBPrivilegeModifyInfo::DBNameHasBeenSet() const
{
    return m_dBNameHasBeenSet;
}

string DBPrivilegeModifyInfo::GetPrivilege() const
{
    return m_privilege;
}

void DBPrivilegeModifyInfo::SetPrivilege(const string& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool DBPrivilegeModifyInfo::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

