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

#include <tencentcloud/csip/v20221121/model/RevertDspmAssetAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RevertDspmAssetAccountRequest::RevertDspmAssetAccountRequest() :
    m_assetIdHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_privilegeFlagHasBeenSet(false),
    m_passwordFlagHasBeenSet(false),
    m_riskIdHasBeenSet(false)
{
}

string RevertDspmAssetAccountRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegeFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_privilegeFlag, allocator);
    }

    if (m_passwordFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswordFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_passwordFlag, allocator);
    }

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RevertDspmAssetAccountRequest::GetAssetId() const
{
    return m_assetId;
}

void RevertDspmAssetAccountRequest::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool RevertDspmAssetAccountRequest::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string RevertDspmAssetAccountRequest::GetAccount() const
{
    return m_account;
}

void RevertDspmAssetAccountRequest::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool RevertDspmAssetAccountRequest::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string RevertDspmAssetAccountRequest::GetHost() const
{
    return m_host;
}

void RevertDspmAssetAccountRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool RevertDspmAssetAccountRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

int64_t RevertDspmAssetAccountRequest::GetPrivilegeFlag() const
{
    return m_privilegeFlag;
}

void RevertDspmAssetAccountRequest::SetPrivilegeFlag(const int64_t& _privilegeFlag)
{
    m_privilegeFlag = _privilegeFlag;
    m_privilegeFlagHasBeenSet = true;
}

bool RevertDspmAssetAccountRequest::PrivilegeFlagHasBeenSet() const
{
    return m_privilegeFlagHasBeenSet;
}

int64_t RevertDspmAssetAccountRequest::GetPasswordFlag() const
{
    return m_passwordFlag;
}

void RevertDspmAssetAccountRequest::SetPasswordFlag(const int64_t& _passwordFlag)
{
    m_passwordFlag = _passwordFlag;
    m_passwordFlagHasBeenSet = true;
}

bool RevertDspmAssetAccountRequest::PasswordFlagHasBeenSet() const
{
    return m_passwordFlagHasBeenSet;
}

string RevertDspmAssetAccountRequest::GetRiskId() const
{
    return m_riskId;
}

void RevertDspmAssetAccountRequest::SetRiskId(const string& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool RevertDspmAssetAccountRequest::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}


