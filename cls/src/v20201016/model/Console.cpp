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

#include <tencentcloud/cls/v20201016/model/Console.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

Console::Console() :
    m_consoleIdHasBeenSet(false),
    m_accessModeHasBeenSet(false),
    m_loginModeHasBeenSet(false),
    m_domainPrefixHasBeenSet(false),
    m_accountsHasBeenSet(false),
    m_intranetTypeHasBeenSet(false),
    m_intranetRegionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_anonymousLoginHasBeenSet(false),
    m_authRolesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_hideParamsHasBeenSet(false),
    m_accessControlRulesHasBeenSet(false),
    m_remarksHasBeenSet(false),
    m_menusHasBeenSet(false)
{
}

CoreInternalOutcome Console::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConsoleId") && !value["ConsoleId"].IsNull())
    {
        if (!value["ConsoleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Console.ConsoleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consoleId = string(value["ConsoleId"].GetString());
        m_consoleIdHasBeenSet = true;
    }

    if (value.HasMember("AccessMode") && !value["AccessMode"].IsNull())
    {
        if (!value["AccessMode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Console.AccessMode` is not array type"));

        const rapidjson::Value &tmpValue = value["AccessMode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_accessMode.push_back((*itr).GetString());
        }
        m_accessModeHasBeenSet = true;
    }

    if (value.HasMember("LoginMode") && !value["LoginMode"].IsNull())
    {
        if (!value["LoginMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Console.LoginMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loginMode = value["LoginMode"].GetUint64();
        m_loginModeHasBeenSet = true;
    }

    if (value.HasMember("DomainPrefix") && !value["DomainPrefix"].IsNull())
    {
        if (!value["DomainPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Console.DomainPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainPrefix = string(value["DomainPrefix"].GetString());
        m_domainPrefixHasBeenSet = true;
    }

    if (value.HasMember("Accounts") && !value["Accounts"].IsNull())
    {
        if (!value["Accounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Console.Accounts` is not array type"));

        const rapidjson::Value &tmpValue = value["Accounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConsoleAccount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accounts.push_back(item);
        }
        m_accountsHasBeenSet = true;
    }

    if (value.HasMember("IntranetType") && !value["IntranetType"].IsNull())
    {
        if (!value["IntranetType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Console.IntranetType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intranetType = value["IntranetType"].GetUint64();
        m_intranetTypeHasBeenSet = true;
    }

    if (value.HasMember("IntranetRegion") && !value["IntranetRegion"].IsNull())
    {
        if (!value["IntranetRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Console.IntranetRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intranetRegion = string(value["IntranetRegion"].GetString());
        m_intranetRegionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Console.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Console.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("AnonymousLogin") && !value["AnonymousLogin"].IsNull())
    {
        if (!value["AnonymousLogin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Console.AnonymousLogin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_anonymousLogin.Deserialize(value["AnonymousLogin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_anonymousLoginHasBeenSet = true;
    }

    if (value.HasMember("AuthRoles") && !value["AuthRoles"].IsNull())
    {
        if (!value["AuthRoles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Console.AuthRoles` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthRoles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AuthRoleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_authRoles.push_back(item);
        }
        m_authRolesHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Console.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("HideParams") && !value["HideParams"].IsNull())
    {
        if (!value["HideParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Console.HideParams` is not array type"));

        const rapidjson::Value &tmpValue = value["HideParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hideParams.push_back((*itr).GetString());
        }
        m_hideParamsHasBeenSet = true;
    }

    if (value.HasMember("AccessControlRules") && !value["AccessControlRules"].IsNull())
    {
        if (!value["AccessControlRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Console.AccessControlRules` is not array type"));

        const rapidjson::Value &tmpValue = value["AccessControlRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessControlRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accessControlRules.push_back(item);
        }
        m_accessControlRulesHasBeenSet = true;
    }

    if (value.HasMember("Remarks") && !value["Remarks"].IsNull())
    {
        if (!value["Remarks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Console.Remarks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remarks = string(value["Remarks"].GetString());
        m_remarksHasBeenSet = true;
    }

    if (value.HasMember("Menus") && !value["Menus"].IsNull())
    {
        if (!value["Menus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Console.Menus` is not array type"));

        const rapidjson::Value &tmpValue = value["Menus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_menus.push_back((*itr).GetString());
        }
        m_menusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Console::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_consoleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consoleId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accessMode.begin(); itr != m_accessMode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_loginModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginMode, allocator);
    }

    if (m_domainPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_accountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Accounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accounts.begin(); itr != m_accounts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_intranetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intranetType, allocator);
    }

    if (m_intranetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intranetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_anonymousLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnonymousLogin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_anonymousLogin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_authRolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthRoles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authRoles.begin(); itr != m_authRoles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hideParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hideParams.begin(); itr != m_hideParams.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_accessControlRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessControlRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accessControlRules.begin(); itr != m_accessControlRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_remarksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remarks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remarks.c_str(), allocator).Move(), allocator);
    }

    if (m_menusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Menus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_menus.begin(); itr != m_menus.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string Console::GetConsoleId() const
{
    return m_consoleId;
}

void Console::SetConsoleId(const string& _consoleId)
{
    m_consoleId = _consoleId;
    m_consoleIdHasBeenSet = true;
}

bool Console::ConsoleIdHasBeenSet() const
{
    return m_consoleIdHasBeenSet;
}

vector<string> Console::GetAccessMode() const
{
    return m_accessMode;
}

void Console::SetAccessMode(const vector<string>& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool Console::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}

uint64_t Console::GetLoginMode() const
{
    return m_loginMode;
}

void Console::SetLoginMode(const uint64_t& _loginMode)
{
    m_loginMode = _loginMode;
    m_loginModeHasBeenSet = true;
}

bool Console::LoginModeHasBeenSet() const
{
    return m_loginModeHasBeenSet;
}

string Console::GetDomainPrefix() const
{
    return m_domainPrefix;
}

void Console::SetDomainPrefix(const string& _domainPrefix)
{
    m_domainPrefix = _domainPrefix;
    m_domainPrefixHasBeenSet = true;
}

bool Console::DomainPrefixHasBeenSet() const
{
    return m_domainPrefixHasBeenSet;
}

vector<ConsoleAccount> Console::GetAccounts() const
{
    return m_accounts;
}

void Console::SetAccounts(const vector<ConsoleAccount>& _accounts)
{
    m_accounts = _accounts;
    m_accountsHasBeenSet = true;
}

bool Console::AccountsHasBeenSet() const
{
    return m_accountsHasBeenSet;
}

uint64_t Console::GetIntranetType() const
{
    return m_intranetType;
}

void Console::SetIntranetType(const uint64_t& _intranetType)
{
    m_intranetType = _intranetType;
    m_intranetTypeHasBeenSet = true;
}

bool Console::IntranetTypeHasBeenSet() const
{
    return m_intranetTypeHasBeenSet;
}

string Console::GetIntranetRegion() const
{
    return m_intranetRegion;
}

void Console::SetIntranetRegion(const string& _intranetRegion)
{
    m_intranetRegion = _intranetRegion;
    m_intranetRegionHasBeenSet = true;
}

bool Console::IntranetRegionHasBeenSet() const
{
    return m_intranetRegionHasBeenSet;
}

string Console::GetVpcId() const
{
    return m_vpcId;
}

void Console::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool Console::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string Console::GetSubnetId() const
{
    return m_subnetId;
}

void Console::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool Console::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

AnonymousLoginInfo Console::GetAnonymousLogin() const
{
    return m_anonymousLogin;
}

void Console::SetAnonymousLogin(const AnonymousLoginInfo& _anonymousLogin)
{
    m_anonymousLogin = _anonymousLogin;
    m_anonymousLoginHasBeenSet = true;
}

bool Console::AnonymousLoginHasBeenSet() const
{
    return m_anonymousLoginHasBeenSet;
}

vector<AuthRoleInfo> Console::GetAuthRoles() const
{
    return m_authRoles;
}

void Console::SetAuthRoles(const vector<AuthRoleInfo>& _authRoles)
{
    m_authRoles = _authRoles;
    m_authRolesHasBeenSet = true;
}

bool Console::AuthRolesHasBeenSet() const
{
    return m_authRolesHasBeenSet;
}

vector<Tag> Console::GetTags() const
{
    return m_tags;
}

void Console::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Console::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> Console::GetHideParams() const
{
    return m_hideParams;
}

void Console::SetHideParams(const vector<string>& _hideParams)
{
    m_hideParams = _hideParams;
    m_hideParamsHasBeenSet = true;
}

bool Console::HideParamsHasBeenSet() const
{
    return m_hideParamsHasBeenSet;
}

vector<AccessControlRule> Console::GetAccessControlRules() const
{
    return m_accessControlRules;
}

void Console::SetAccessControlRules(const vector<AccessControlRule>& _accessControlRules)
{
    m_accessControlRules = _accessControlRules;
    m_accessControlRulesHasBeenSet = true;
}

bool Console::AccessControlRulesHasBeenSet() const
{
    return m_accessControlRulesHasBeenSet;
}

string Console::GetRemarks() const
{
    return m_remarks;
}

void Console::SetRemarks(const string& _remarks)
{
    m_remarks = _remarks;
    m_remarksHasBeenSet = true;
}

bool Console::RemarksHasBeenSet() const
{
    return m_remarksHasBeenSet;
}

vector<string> Console::GetMenus() const
{
    return m_menus;
}

void Console::SetMenus(const vector<string>& _menus)
{
    m_menus = _menus;
    m_menusHasBeenSet = true;
}

bool Console::MenusHasBeenSet() const
{
    return m_menusHasBeenSet;
}

