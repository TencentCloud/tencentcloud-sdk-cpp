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

#include <tencentcloud/postgres/v20170312/model/ModifyPrivilege.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ModifyPrivilege::ModifyPrivilege() :
    m_databasePrivilegeHasBeenSet(false),
    m_modifyTypeHasBeenSet(false),
    m_isCascadeHasBeenSet(false)
{
}

CoreInternalOutcome ModifyPrivilege::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabasePrivilege") && !value["DatabasePrivilege"].IsNull())
    {
        if (!value["DatabasePrivilege"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyPrivilege.DatabasePrivilege` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_databasePrivilege.Deserialize(value["DatabasePrivilege"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_databasePrivilegeHasBeenSet = true;
    }

    if (value.HasMember("ModifyType") && !value["ModifyType"].IsNull())
    {
        if (!value["ModifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyPrivilege.ModifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyType = string(value["ModifyType"].GetString());
        m_modifyTypeHasBeenSet = true;
    }

    if (value.HasMember("IsCascade") && !value["IsCascade"].IsNull())
    {
        if (!value["IsCascade"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyPrivilege.IsCascade` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCascade = value["IsCascade"].GetBool();
        m_isCascadeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyPrivilege::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databasePrivilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabasePrivilege";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_databasePrivilege.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_isCascadeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCascade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCascade, allocator);
    }

}


DatabasePrivilege ModifyPrivilege::GetDatabasePrivilege() const
{
    return m_databasePrivilege;
}

void ModifyPrivilege::SetDatabasePrivilege(const DatabasePrivilege& _databasePrivilege)
{
    m_databasePrivilege = _databasePrivilege;
    m_databasePrivilegeHasBeenSet = true;
}

bool ModifyPrivilege::DatabasePrivilegeHasBeenSet() const
{
    return m_databasePrivilegeHasBeenSet;
}

string ModifyPrivilege::GetModifyType() const
{
    return m_modifyType;
}

void ModifyPrivilege::SetModifyType(const string& _modifyType)
{
    m_modifyType = _modifyType;
    m_modifyTypeHasBeenSet = true;
}

bool ModifyPrivilege::ModifyTypeHasBeenSet() const
{
    return m_modifyTypeHasBeenSet;
}

bool ModifyPrivilege::GetIsCascade() const
{
    return m_isCascade;
}

void ModifyPrivilege::SetIsCascade(const bool& _isCascade)
{
    m_isCascade = _isCascade;
    m_isCascadeHasBeenSet = true;
}

bool ModifyPrivilege::IsCascadeHasBeenSet() const
{
    return m_isCascadeHasBeenSet;
}

