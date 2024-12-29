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

#include <tencentcloud/sqlserver/v20180328/model/AccountCreateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

AccountCreateInfo::AccountCreateInfo() :
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_dBPrivilegesHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_isAdminHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_isCamHasBeenSet(false),
    m_encryptedVersionHasBeenSet(false)
{
}

CoreInternalOutcome AccountCreateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountCreateInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountCreateInfo.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("DBPrivileges") && !value["DBPrivileges"].IsNull())
    {
        if (!value["DBPrivileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccountCreateInfo.DBPrivileges` is not array type"));

        const rapidjson::Value &tmpValue = value["DBPrivileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DBPrivilege item;
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

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountCreateInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("IsAdmin") && !value["IsAdmin"].IsNull())
    {
        if (!value["IsAdmin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccountCreateInfo.IsAdmin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAdmin = value["IsAdmin"].GetBool();
        m_isAdminHasBeenSet = true;
    }

    if (value.HasMember("Authentication") && !value["Authentication"].IsNull())
    {
        if (!value["Authentication"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountCreateInfo.Authentication` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authentication = string(value["Authentication"].GetString());
        m_authenticationHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountCreateInfo.AccountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = string(value["AccountType"].GetString());
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("IsCam") && !value["IsCam"].IsNull())
    {
        if (!value["IsCam"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccountCreateInfo.IsCam` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCam = value["IsCam"].GetBool();
        m_isCamHasBeenSet = true;
    }

    if (value.HasMember("EncryptedVersion") && !value["EncryptedVersion"].IsNull())
    {
        if (!value["EncryptedVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountCreateInfo.EncryptedVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptedVersion = value["EncryptedVersion"].GetInt64();
        m_encryptedVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountCreateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_isAdminHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAdmin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAdmin, allocator);
    }

    if (m_authenticationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authentication";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authentication.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountType.c_str(), allocator).Move(), allocator);
    }

    if (m_isCamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCam, allocator);
    }

    if (m_encryptedVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptedVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptedVersion, allocator);
    }

}


string AccountCreateInfo::GetUserName() const
{
    return m_userName;
}

void AccountCreateInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool AccountCreateInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string AccountCreateInfo::GetPassword() const
{
    return m_password;
}

void AccountCreateInfo::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool AccountCreateInfo::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

vector<DBPrivilege> AccountCreateInfo::GetDBPrivileges() const
{
    return m_dBPrivileges;
}

void AccountCreateInfo::SetDBPrivileges(const vector<DBPrivilege>& _dBPrivileges)
{
    m_dBPrivileges = _dBPrivileges;
    m_dBPrivilegesHasBeenSet = true;
}

bool AccountCreateInfo::DBPrivilegesHasBeenSet() const
{
    return m_dBPrivilegesHasBeenSet;
}

string AccountCreateInfo::GetRemark() const
{
    return m_remark;
}

void AccountCreateInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AccountCreateInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

bool AccountCreateInfo::GetIsAdmin() const
{
    return m_isAdmin;
}

void AccountCreateInfo::SetIsAdmin(const bool& _isAdmin)
{
    m_isAdmin = _isAdmin;
    m_isAdminHasBeenSet = true;
}

bool AccountCreateInfo::IsAdminHasBeenSet() const
{
    return m_isAdminHasBeenSet;
}

string AccountCreateInfo::GetAuthentication() const
{
    return m_authentication;
}

void AccountCreateInfo::SetAuthentication(const string& _authentication)
{
    m_authentication = _authentication;
    m_authenticationHasBeenSet = true;
}

bool AccountCreateInfo::AuthenticationHasBeenSet() const
{
    return m_authenticationHasBeenSet;
}

string AccountCreateInfo::GetAccountType() const
{
    return m_accountType;
}

void AccountCreateInfo::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool AccountCreateInfo::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

bool AccountCreateInfo::GetIsCam() const
{
    return m_isCam;
}

void AccountCreateInfo::SetIsCam(const bool& _isCam)
{
    m_isCam = _isCam;
    m_isCamHasBeenSet = true;
}

bool AccountCreateInfo::IsCamHasBeenSet() const
{
    return m_isCamHasBeenSet;
}

int64_t AccountCreateInfo::GetEncryptedVersion() const
{
    return m_encryptedVersion;
}

void AccountCreateInfo::SetEncryptedVersion(const int64_t& _encryptedVersion)
{
    m_encryptedVersion = _encryptedVersion;
    m_encryptedVersionHasBeenSet = true;
}

bool AccountCreateInfo::EncryptedVersionHasBeenSet() const
{
    return m_encryptedVersionHasBeenSet;
}

