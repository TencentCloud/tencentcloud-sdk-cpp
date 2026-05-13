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

#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyDspmAssetAccountRequest::ModifyDspmAssetAccountRequest() :
    m_assetIdHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_riskIdHasBeenSet(false)
{
}

string ModifyDspmAssetAccountRequest::ToJsonString() const
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

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accountType, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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


string ModifyDspmAssetAccountRequest::GetAssetId() const
{
    return m_assetId;
}

void ModifyDspmAssetAccountRequest::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool ModifyDspmAssetAccountRequest::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string ModifyDspmAssetAccountRequest::GetAccount() const
{
    return m_account;
}

void ModifyDspmAssetAccountRequest::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool ModifyDspmAssetAccountRequest::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

vector<string> ModifyDspmAssetAccountRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyDspmAssetAccountRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyDspmAssetAccountRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string ModifyDspmAssetAccountRequest::GetHost() const
{
    return m_host;
}

void ModifyDspmAssetAccountRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool ModifyDspmAssetAccountRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

int64_t ModifyDspmAssetAccountRequest::GetAccountType() const
{
    return m_accountType;
}

void ModifyDspmAssetAccountRequest::SetAccountType(const int64_t& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool ModifyDspmAssetAccountRequest::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string ModifyDspmAssetAccountRequest::GetRemark() const
{
    return m_remark;
}

void ModifyDspmAssetAccountRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyDspmAssetAccountRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ModifyDspmAssetAccountRequest::GetRiskId() const
{
    return m_riskId;
}

void ModifyDspmAssetAccountRequest::SetRiskId(const string& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool ModifyDspmAssetAccountRequest::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}


