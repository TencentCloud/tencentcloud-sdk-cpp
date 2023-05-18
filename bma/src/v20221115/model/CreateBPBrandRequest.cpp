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

#include <tencentcloud/bma/v20221115/model/CreateBPBrandRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20221115::Model;
using namespace std;

CreateBPBrandRequest::CreateBPBrandRequest() :
    m_brandNameHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_brandLogoHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_licenseHasBeenSet(false),
    m_authorizationHasBeenSet(false),
    m_trademarkNamesHasBeenSet(false),
    m_trademarksHasBeenSet(false),
    m_isTransfersHasBeenSet(false),
    m_transfersHasBeenSet(false),
    m_protectURLsHasBeenSet(false),
    m_protectAPPsHasBeenSet(false),
    m_protectOfficialAccountsHasBeenSet(false),
    m_protectMiniProgramsHasBeenSet(false),
    m_aPISourceHasBeenSet(false)
{
}

string CreateBPBrandRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_brandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brandName.c_str(), allocator).Move(), allocator);
    }

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_brandLogoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandLogo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brandLogo.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "License";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_license.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authorization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authorization.c_str(), allocator).Move(), allocator);
    }

    if (m_trademarkNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrademarkNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_trademarkNames.begin(); itr != m_trademarkNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_trademarksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trademarks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_trademarks.begin(); itr != m_trademarks.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isTransfersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTransfers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_isTransfers.begin(); itr != m_isTransfers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_transfersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transfers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_transfers.begin(); itr != m_transfers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protectURLsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectURLs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_protectURLs.begin(); itr != m_protectURLs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protectAPPsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectAPPs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_protectAPPs.begin(); itr != m_protectAPPs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protectOfficialAccountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectOfficialAccounts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_protectOfficialAccounts.begin(); itr != m_protectOfficialAccounts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protectMiniProgramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectMiniPrograms";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_protectMiniPrograms.begin(); itr != m_protectMiniPrograms.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_aPISourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APISource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aPISource, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBPBrandRequest::GetBrandName() const
{
    return m_brandName;
}

void CreateBPBrandRequest::SetBrandName(const string& _brandName)
{
    m_brandName = _brandName;
    m_brandNameHasBeenSet = true;
}

bool CreateBPBrandRequest::BrandNameHasBeenSet() const
{
    return m_brandNameHasBeenSet;
}

string CreateBPBrandRequest::GetCompanyName() const
{
    return m_companyName;
}

void CreateBPBrandRequest::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool CreateBPBrandRequest::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

string CreateBPBrandRequest::GetBrandLogo() const
{
    return m_brandLogo;
}

void CreateBPBrandRequest::SetBrandLogo(const string& _brandLogo)
{
    m_brandLogo = _brandLogo;
    m_brandLogoHasBeenSet = true;
}

bool CreateBPBrandRequest::BrandLogoHasBeenSet() const
{
    return m_brandLogoHasBeenSet;
}

string CreateBPBrandRequest::GetPhone() const
{
    return m_phone;
}

void CreateBPBrandRequest::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool CreateBPBrandRequest::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string CreateBPBrandRequest::GetLicense() const
{
    return m_license;
}

void CreateBPBrandRequest::SetLicense(const string& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool CreateBPBrandRequest::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

string CreateBPBrandRequest::GetAuthorization() const
{
    return m_authorization;
}

void CreateBPBrandRequest::SetAuthorization(const string& _authorization)
{
    m_authorization = _authorization;
    m_authorizationHasBeenSet = true;
}

bool CreateBPBrandRequest::AuthorizationHasBeenSet() const
{
    return m_authorizationHasBeenSet;
}

vector<string> CreateBPBrandRequest::GetTrademarkNames() const
{
    return m_trademarkNames;
}

void CreateBPBrandRequest::SetTrademarkNames(const vector<string>& _trademarkNames)
{
    m_trademarkNames = _trademarkNames;
    m_trademarkNamesHasBeenSet = true;
}

bool CreateBPBrandRequest::TrademarkNamesHasBeenSet() const
{
    return m_trademarkNamesHasBeenSet;
}

vector<string> CreateBPBrandRequest::GetTrademarks() const
{
    return m_trademarks;
}

void CreateBPBrandRequest::SetTrademarks(const vector<string>& _trademarks)
{
    m_trademarks = _trademarks;
    m_trademarksHasBeenSet = true;
}

bool CreateBPBrandRequest::TrademarksHasBeenSet() const
{
    return m_trademarksHasBeenSet;
}

vector<string> CreateBPBrandRequest::GetIsTransfers() const
{
    return m_isTransfers;
}

void CreateBPBrandRequest::SetIsTransfers(const vector<string>& _isTransfers)
{
    m_isTransfers = _isTransfers;
    m_isTransfersHasBeenSet = true;
}

bool CreateBPBrandRequest::IsTransfersHasBeenSet() const
{
    return m_isTransfersHasBeenSet;
}

vector<string> CreateBPBrandRequest::GetTransfers() const
{
    return m_transfers;
}

void CreateBPBrandRequest::SetTransfers(const vector<string>& _transfers)
{
    m_transfers = _transfers;
    m_transfersHasBeenSet = true;
}

bool CreateBPBrandRequest::TransfersHasBeenSet() const
{
    return m_transfersHasBeenSet;
}

vector<string> CreateBPBrandRequest::GetProtectURLs() const
{
    return m_protectURLs;
}

void CreateBPBrandRequest::SetProtectURLs(const vector<string>& _protectURLs)
{
    m_protectURLs = _protectURLs;
    m_protectURLsHasBeenSet = true;
}

bool CreateBPBrandRequest::ProtectURLsHasBeenSet() const
{
    return m_protectURLsHasBeenSet;
}

vector<string> CreateBPBrandRequest::GetProtectAPPs() const
{
    return m_protectAPPs;
}

void CreateBPBrandRequest::SetProtectAPPs(const vector<string>& _protectAPPs)
{
    m_protectAPPs = _protectAPPs;
    m_protectAPPsHasBeenSet = true;
}

bool CreateBPBrandRequest::ProtectAPPsHasBeenSet() const
{
    return m_protectAPPsHasBeenSet;
}

vector<string> CreateBPBrandRequest::GetProtectOfficialAccounts() const
{
    return m_protectOfficialAccounts;
}

void CreateBPBrandRequest::SetProtectOfficialAccounts(const vector<string>& _protectOfficialAccounts)
{
    m_protectOfficialAccounts = _protectOfficialAccounts;
    m_protectOfficialAccountsHasBeenSet = true;
}

bool CreateBPBrandRequest::ProtectOfficialAccountsHasBeenSet() const
{
    return m_protectOfficialAccountsHasBeenSet;
}

vector<string> CreateBPBrandRequest::GetProtectMiniPrograms() const
{
    return m_protectMiniPrograms;
}

void CreateBPBrandRequest::SetProtectMiniPrograms(const vector<string>& _protectMiniPrograms)
{
    m_protectMiniPrograms = _protectMiniPrograms;
    m_protectMiniProgramsHasBeenSet = true;
}

bool CreateBPBrandRequest::ProtectMiniProgramsHasBeenSet() const
{
    return m_protectMiniProgramsHasBeenSet;
}

int64_t CreateBPBrandRequest::GetAPISource() const
{
    return m_aPISource;
}

void CreateBPBrandRequest::SetAPISource(const int64_t& _aPISource)
{
    m_aPISource = _aPISource;
    m_aPISourceHasBeenSet = true;
}

bool CreateBPBrandRequest::APISourceHasBeenSet() const
{
    return m_aPISourceHasBeenSet;
}


