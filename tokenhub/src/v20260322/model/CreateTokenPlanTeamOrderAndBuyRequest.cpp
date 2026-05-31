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

#include <tencentcloud/tokenhub/v20260322/model/CreateTokenPlanTeamOrderAndBuyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

CreateTokenPlanTeamOrderAndBuyRequest::CreateTokenPlanTeamOrderAndBuyRequest() :
    m_productTypeHasBeenSet(false),
    m_teamNameHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_creditOrTokenHasBeenSet(false),
    m_enableAutoRenewHasBeenSet(false)
{
}

string CreateTokenPlanTeamOrderAndBuyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productType.c_str(), allocator).Move(), allocator);
    }

    if (m_teamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teamName.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_creditOrTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditOrToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_creditOrToken, allocator);
    }

    if (m_enableAutoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableAutoRenew, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTokenPlanTeamOrderAndBuyRequest::GetProductType() const
{
    return m_productType;
}

void CreateTokenPlanTeamOrderAndBuyRequest::SetProductType(const string& _productType)
{
    m_productType = _productType;
    m_productTypeHasBeenSet = true;
}

bool CreateTokenPlanTeamOrderAndBuyRequest::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

string CreateTokenPlanTeamOrderAndBuyRequest::GetTeamName() const
{
    return m_teamName;
}

void CreateTokenPlanTeamOrderAndBuyRequest::SetTeamName(const string& _teamName)
{
    m_teamName = _teamName;
    m_teamNameHasBeenSet = true;
}

bool CreateTokenPlanTeamOrderAndBuyRequest::TeamNameHasBeenSet() const
{
    return m_teamNameHasBeenSet;
}

int64_t CreateTokenPlanTeamOrderAndBuyRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateTokenPlanTeamOrderAndBuyRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateTokenPlanTeamOrderAndBuyRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

int64_t CreateTokenPlanTeamOrderAndBuyRequest::GetCreditOrToken() const
{
    return m_creditOrToken;
}

void CreateTokenPlanTeamOrderAndBuyRequest::SetCreditOrToken(const int64_t& _creditOrToken)
{
    m_creditOrToken = _creditOrToken;
    m_creditOrTokenHasBeenSet = true;
}

bool CreateTokenPlanTeamOrderAndBuyRequest::CreditOrTokenHasBeenSet() const
{
    return m_creditOrTokenHasBeenSet;
}

bool CreateTokenPlanTeamOrderAndBuyRequest::GetEnableAutoRenew() const
{
    return m_enableAutoRenew;
}

void CreateTokenPlanTeamOrderAndBuyRequest::SetEnableAutoRenew(const bool& _enableAutoRenew)
{
    m_enableAutoRenew = _enableAutoRenew;
    m_enableAutoRenewHasBeenSet = true;
}

bool CreateTokenPlanTeamOrderAndBuyRequest::EnableAutoRenewHasBeenSet() const
{
    return m_enableAutoRenewHasBeenSet;
}


