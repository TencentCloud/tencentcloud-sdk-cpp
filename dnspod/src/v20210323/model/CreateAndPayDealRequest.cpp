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

#include <tencentcloud/dnspod/v20210323/model/CreateAndPayDealRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

CreateAndPayDealRequest::CreateAndPayDealRequest() :
    m_dealTypeHasBeenSet(false),
    m_goodsTypeHasBeenSet(false),
    m_goodsChildTypeHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_newPackageTypeHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

string CreateAndPayDealRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dealTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dealType, allocator);
    }

    if (m_goodsTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsType, allocator);
    }

    if (m_goodsChildTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsChildType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_goodsChildType.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_newPackageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewPackageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newPackageType.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateAndPayDealRequest::GetDealType() const
{
    return m_dealType;
}

void CreateAndPayDealRequest::SetDealType(const uint64_t& _dealType)
{
    m_dealType = _dealType;
    m_dealTypeHasBeenSet = true;
}

bool CreateAndPayDealRequest::DealTypeHasBeenSet() const
{
    return m_dealTypeHasBeenSet;
}

uint64_t CreateAndPayDealRequest::GetGoodsType() const
{
    return m_goodsType;
}

void CreateAndPayDealRequest::SetGoodsType(const uint64_t& _goodsType)
{
    m_goodsType = _goodsType;
    m_goodsTypeHasBeenSet = true;
}

bool CreateAndPayDealRequest::GoodsTypeHasBeenSet() const
{
    return m_goodsTypeHasBeenSet;
}

string CreateAndPayDealRequest::GetGoodsChildType() const
{
    return m_goodsChildType;
}

void CreateAndPayDealRequest::SetGoodsChildType(const string& _goodsChildType)
{
    m_goodsChildType = _goodsChildType;
    m_goodsChildTypeHasBeenSet = true;
}

bool CreateAndPayDealRequest::GoodsChildTypeHasBeenSet() const
{
    return m_goodsChildTypeHasBeenSet;
}

uint64_t CreateAndPayDealRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateAndPayDealRequest::SetGoodsNum(const uint64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreateAndPayDealRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

uint64_t CreateAndPayDealRequest::GetAutoRenew() const
{
    return m_autoRenew;
}

void CreateAndPayDealRequest::SetAutoRenew(const uint64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool CreateAndPayDealRequest::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

string CreateAndPayDealRequest::GetDomain() const
{
    return m_domain;
}

void CreateAndPayDealRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateAndPayDealRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t CreateAndPayDealRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateAndPayDealRequest::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateAndPayDealRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string CreateAndPayDealRequest::GetNewPackageType() const
{
    return m_newPackageType;
}

void CreateAndPayDealRequest::SetNewPackageType(const string& _newPackageType)
{
    m_newPackageType = _newPackageType;
    m_newPackageTypeHasBeenSet = true;
}

bool CreateAndPayDealRequest::NewPackageTypeHasBeenSet() const
{
    return m_newPackageTypeHasBeenSet;
}

string CreateAndPayDealRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateAndPayDealRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateAndPayDealRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}


