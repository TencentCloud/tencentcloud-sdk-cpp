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

#include <tencentcloud/sqlserver/v20180328/model/AccountPrivilegeModifyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

AccountPrivilegeModifyInfo::AccountPrivilegeModifyInfo() :
    m_userNameHasBeenSet(false),
    m_dBPrivilegesHasBeenSet(false),
    m_isAdminHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_accAllDBHasBeenSet(false)
{
}

CoreInternalOutcome AccountPrivilegeModifyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountPrivilegeModifyInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("DBPrivileges") && !value["DBPrivileges"].IsNull())
    {
        if (!value["DBPrivileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccountPrivilegeModifyInfo.DBPrivileges` is not array type"));

        const rapidjson::Value &tmpValue = value["DBPrivileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DBPrivilegeModifyInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dBPrivileges.push_back(item);
        }
        m_dBPrivilegesHasBeenSet = true;
    }

    if (value.HasMember("IsAdmin") && !value["IsAdmin"].IsNull())
    {
        if (!value["IsAdmin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccountPrivilegeModifyInfo.IsAdmin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAdmin = value["IsAdmin"].GetBool();
        m_isAdminHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountPrivilegeModifyInfo.AccountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = string(value["AccountType"].GetString());
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("AccAllDB") && !value["AccAllDB"].IsNull())
    {
        if (!value["AccAllDB"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccountPrivilegeModifyInfo.AccAllDB` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accAllDB.Deserialize(value["AccAllDB"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accAllDBHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountPrivilegeModifyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_dBPrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBPrivileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dBPrivileges.begin(); itr != m_dBPrivileges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isAdminHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAdmin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAdmin, allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountType.c_str(), allocator).Move(), allocator);
    }

    if (m_accAllDBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccAllDB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accAllDB.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AccountPrivilegeModifyInfo::GetUserName() const
{
    return m_userName;
}

void AccountPrivilegeModifyInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool AccountPrivilegeModifyInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

vector<DBPrivilegeModifyInfo> AccountPrivilegeModifyInfo::GetDBPrivileges() const
{
    return m_dBPrivileges;
}

void AccountPrivilegeModifyInfo::SetDBPrivileges(const vector<DBPrivilegeModifyInfo>& _dBPrivileges)
{
    m_dBPrivileges = _dBPrivileges;
    m_dBPrivilegesHasBeenSet = true;
}

bool AccountPrivilegeModifyInfo::DBPrivilegesHasBeenSet() const
{
    return m_dBPrivilegesHasBeenSet;
}

bool AccountPrivilegeModifyInfo::GetIsAdmin() const
{
    return m_isAdmin;
}

void AccountPrivilegeModifyInfo::SetIsAdmin(const bool& _isAdmin)
{
    m_isAdmin = _isAdmin;
    m_isAdminHasBeenSet = true;
}

bool AccountPrivilegeModifyInfo::IsAdminHasBeenSet() const
{
    return m_isAdminHasBeenSet;
}

string AccountPrivilegeModifyInfo::GetAccountType() const
{
    return m_accountType;
}

void AccountPrivilegeModifyInfo::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool AccountPrivilegeModifyInfo::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

SelectAllDB AccountPrivilegeModifyInfo::GetAccAllDB() const
{
    return m_accAllDB;
}

void AccountPrivilegeModifyInfo::SetAccAllDB(const SelectAllDB& _accAllDB)
{
    m_accAllDB = _accAllDB;
    m_accAllDBHasBeenSet = true;
}

bool AccountPrivilegeModifyInfo::AccAllDBHasBeenSet() const
{
    return m_accAllDBHasBeenSet;
}

