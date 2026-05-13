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

#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetAccountPrivilegesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyDspmAssetAccountPrivilegesRequest::ModifyDspmAssetAccountPrivilegesRequest() :
    m_assetIdHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_privilegeHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_riskIdHasBeenSet(false)
{
}

string ModifyDspmAssetAccountPrivilegesRequest::ToJsonString() const
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

    if (m_privilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privilege";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_privilege.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
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


string ModifyDspmAssetAccountPrivilegesRequest::GetAssetId() const
{
    return m_assetId;
}

void ModifyDspmAssetAccountPrivilegesRequest::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool ModifyDspmAssetAccountPrivilegesRequest::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string ModifyDspmAssetAccountPrivilegesRequest::GetAccount() const
{
    return m_account;
}

void ModifyDspmAssetAccountPrivilegesRequest::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool ModifyDspmAssetAccountPrivilegesRequest::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

DspmDbAccountPrivilege ModifyDspmAssetAccountPrivilegesRequest::GetPrivilege() const
{
    return m_privilege;
}

void ModifyDspmAssetAccountPrivilegesRequest::SetPrivilege(const DspmDbAccountPrivilege& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool ModifyDspmAssetAccountPrivilegesRequest::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

string ModifyDspmAssetAccountPrivilegesRequest::GetHost() const
{
    return m_host;
}

void ModifyDspmAssetAccountPrivilegesRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool ModifyDspmAssetAccountPrivilegesRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string ModifyDspmAssetAccountPrivilegesRequest::GetRiskId() const
{
    return m_riskId;
}

void ModifyDspmAssetAccountPrivilegesRequest::SetRiskId(const string& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool ModifyDspmAssetAccountPrivilegesRequest::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}


