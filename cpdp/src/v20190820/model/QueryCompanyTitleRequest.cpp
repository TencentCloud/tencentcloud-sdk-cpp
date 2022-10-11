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

#include <tencentcloud/cpdp/v20190820/model/QueryCompanyTitleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryCompanyTitleRequest::QueryCompanyTitleRequest() :
    m_companyTitleKeywordHasBeenSet(false),
    m_invoicePlatformIdHasBeenSet(false),
    m_sellerTaxpayerNumHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string QueryCompanyTitleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_companyTitleKeywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyTitleKeyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyTitleKeyword.c_str(), allocator).Move(), allocator);
    }

    if (m_invoicePlatformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoicePlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_invoicePlatformId, allocator);
    }

    if (m_sellerTaxpayerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerTaxpayerNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sellerTaxpayerNum.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryCompanyTitleRequest::GetCompanyTitleKeyword() const
{
    return m_companyTitleKeyword;
}

void QueryCompanyTitleRequest::SetCompanyTitleKeyword(const string& _companyTitleKeyword)
{
    m_companyTitleKeyword = _companyTitleKeyword;
    m_companyTitleKeywordHasBeenSet = true;
}

bool QueryCompanyTitleRequest::CompanyTitleKeywordHasBeenSet() const
{
    return m_companyTitleKeywordHasBeenSet;
}

int64_t QueryCompanyTitleRequest::GetInvoicePlatformId() const
{
    return m_invoicePlatformId;
}

void QueryCompanyTitleRequest::SetInvoicePlatformId(const int64_t& _invoicePlatformId)
{
    m_invoicePlatformId = _invoicePlatformId;
    m_invoicePlatformIdHasBeenSet = true;
}

bool QueryCompanyTitleRequest::InvoicePlatformIdHasBeenSet() const
{
    return m_invoicePlatformIdHasBeenSet;
}

string QueryCompanyTitleRequest::GetSellerTaxpayerNum() const
{
    return m_sellerTaxpayerNum;
}

void QueryCompanyTitleRequest::SetSellerTaxpayerNum(const string& _sellerTaxpayerNum)
{
    m_sellerTaxpayerNum = _sellerTaxpayerNum;
    m_sellerTaxpayerNumHasBeenSet = true;
}

bool QueryCompanyTitleRequest::SellerTaxpayerNumHasBeenSet() const
{
    return m_sellerTaxpayerNumHasBeenSet;
}

string QueryCompanyTitleRequest::GetProfile() const
{
    return m_profile;
}

void QueryCompanyTitleRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool QueryCompanyTitleRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


