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

#include <tencentcloud/cls/v20201016/model/CreateConsoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateConsoleRequest::CreateConsoleRequest() :
    m_accessModeHasBeenSet(false),
    m_loginModeHasBeenSet(false),
    m_domainPrefixHasBeenSet(false),
    m_accountsHasBeenSet(false),
    m_anonymousLoginHasBeenSet(false),
    m_intranetTypeHasBeenSet(false),
    m_intranetRegionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_authRolesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_hideParamsHasBeenSet(false),
    m_accessControlRulesHasBeenSet(false),
    m_remarksHasBeenSet(false),
    m_menusHasBeenSet(false)
{
}

string CreateConsoleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accessMode.begin(); itr != m_accessMode.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_loginModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_loginMode, allocator);
    }

    if (m_domainPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainPrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_accountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Accounts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accounts.begin(); itr != m_accounts.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_anonymousLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnonymousLogin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_anonymousLogin.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_intranetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_intranetType, allocator);
    }

    if (m_intranetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_intranetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_authRolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthRoles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authRoles.begin(); itr != m_authRoles.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_hideParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hideParams.begin(); itr != m_hideParams.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_accessControlRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessControlRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accessControlRules.begin(); itr != m_accessControlRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_remarksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remarks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remarks.c_str(), allocator).Move(), allocator);
    }

    if (m_menusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Menus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_menus.begin(); itr != m_menus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateConsoleRequest::GetAccessMode() const
{
    return m_accessMode;
}

void CreateConsoleRequest::SetAccessMode(const vector<string>& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool CreateConsoleRequest::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}

uint64_t CreateConsoleRequest::GetLoginMode() const
{
    return m_loginMode;
}

void CreateConsoleRequest::SetLoginMode(const uint64_t& _loginMode)
{
    m_loginMode = _loginMode;
    m_loginModeHasBeenSet = true;
}

bool CreateConsoleRequest::LoginModeHasBeenSet() const
{
    return m_loginModeHasBeenSet;
}

string CreateConsoleRequest::GetDomainPrefix() const
{
    return m_domainPrefix;
}

void CreateConsoleRequest::SetDomainPrefix(const string& _domainPrefix)
{
    m_domainPrefix = _domainPrefix;
    m_domainPrefixHasBeenSet = true;
}

bool CreateConsoleRequest::DomainPrefixHasBeenSet() const
{
    return m_domainPrefixHasBeenSet;
}

vector<ConsoleAccount> CreateConsoleRequest::GetAccounts() const
{
    return m_accounts;
}

void CreateConsoleRequest::SetAccounts(const vector<ConsoleAccount>& _accounts)
{
    m_accounts = _accounts;
    m_accountsHasBeenSet = true;
}

bool CreateConsoleRequest::AccountsHasBeenSet() const
{
    return m_accountsHasBeenSet;
}

AnonymousLoginInfo CreateConsoleRequest::GetAnonymousLogin() const
{
    return m_anonymousLogin;
}

void CreateConsoleRequest::SetAnonymousLogin(const AnonymousLoginInfo& _anonymousLogin)
{
    m_anonymousLogin = _anonymousLogin;
    m_anonymousLoginHasBeenSet = true;
}

bool CreateConsoleRequest::AnonymousLoginHasBeenSet() const
{
    return m_anonymousLoginHasBeenSet;
}

uint64_t CreateConsoleRequest::GetIntranetType() const
{
    return m_intranetType;
}

void CreateConsoleRequest::SetIntranetType(const uint64_t& _intranetType)
{
    m_intranetType = _intranetType;
    m_intranetTypeHasBeenSet = true;
}

bool CreateConsoleRequest::IntranetTypeHasBeenSet() const
{
    return m_intranetTypeHasBeenSet;
}

string CreateConsoleRequest::GetIntranetRegion() const
{
    return m_intranetRegion;
}

void CreateConsoleRequest::SetIntranetRegion(const string& _intranetRegion)
{
    m_intranetRegion = _intranetRegion;
    m_intranetRegionHasBeenSet = true;
}

bool CreateConsoleRequest::IntranetRegionHasBeenSet() const
{
    return m_intranetRegionHasBeenSet;
}

string CreateConsoleRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateConsoleRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateConsoleRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateConsoleRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateConsoleRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateConsoleRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<AuthRoleInfo> CreateConsoleRequest::GetAuthRoles() const
{
    return m_authRoles;
}

void CreateConsoleRequest::SetAuthRoles(const vector<AuthRoleInfo>& _authRoles)
{
    m_authRoles = _authRoles;
    m_authRolesHasBeenSet = true;
}

bool CreateConsoleRequest::AuthRolesHasBeenSet() const
{
    return m_authRolesHasBeenSet;
}

vector<Tag> CreateConsoleRequest::GetTags() const
{
    return m_tags;
}

void CreateConsoleRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateConsoleRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> CreateConsoleRequest::GetHideParams() const
{
    return m_hideParams;
}

void CreateConsoleRequest::SetHideParams(const vector<string>& _hideParams)
{
    m_hideParams = _hideParams;
    m_hideParamsHasBeenSet = true;
}

bool CreateConsoleRequest::HideParamsHasBeenSet() const
{
    return m_hideParamsHasBeenSet;
}

vector<AccessControlRule> CreateConsoleRequest::GetAccessControlRules() const
{
    return m_accessControlRules;
}

void CreateConsoleRequest::SetAccessControlRules(const vector<AccessControlRule>& _accessControlRules)
{
    m_accessControlRules = _accessControlRules;
    m_accessControlRulesHasBeenSet = true;
}

bool CreateConsoleRequest::AccessControlRulesHasBeenSet() const
{
    return m_accessControlRulesHasBeenSet;
}

string CreateConsoleRequest::GetRemarks() const
{
    return m_remarks;
}

void CreateConsoleRequest::SetRemarks(const string& _remarks)
{
    m_remarks = _remarks;
    m_remarksHasBeenSet = true;
}

bool CreateConsoleRequest::RemarksHasBeenSet() const
{
    return m_remarksHasBeenSet;
}

vector<string> CreateConsoleRequest::GetMenus() const
{
    return m_menus;
}

void CreateConsoleRequest::SetMenus(const vector<string>& _menus)
{
    m_menus = _menus;
    m_menusHasBeenSet = true;
}

bool CreateConsoleRequest::MenusHasBeenSet() const
{
    return m_menusHasBeenSet;
}


