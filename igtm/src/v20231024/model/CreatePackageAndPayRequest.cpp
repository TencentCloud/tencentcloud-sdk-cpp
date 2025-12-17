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

#include <tencentcloud/igtm/v20231024/model/CreatePackageAndPayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

CreatePackageAndPayRequest::CreatePackageAndPayRequest() :
    m_dealTypeHasBeenSet(false),
    m_goodsTypeHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_newPackageTypeHasBeenSet(false),
    m_autoVoucherHasBeenSet(false)
{
}

string CreatePackageAndPayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dealTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dealType.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_goodsType.c_str(), allocator).Move(), allocator);
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

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
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

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePackageAndPayRequest::GetDealType() const
{
    return m_dealType;
}

void CreatePackageAndPayRequest::SetDealType(const string& _dealType)
{
    m_dealType = _dealType;
    m_dealTypeHasBeenSet = true;
}

bool CreatePackageAndPayRequest::DealTypeHasBeenSet() const
{
    return m_dealTypeHasBeenSet;
}

string CreatePackageAndPayRequest::GetGoodsType() const
{
    return m_goodsType;
}

void CreatePackageAndPayRequest::SetGoodsType(const string& _goodsType)
{
    m_goodsType = _goodsType;
    m_goodsTypeHasBeenSet = true;
}

bool CreatePackageAndPayRequest::GoodsTypeHasBeenSet() const
{
    return m_goodsTypeHasBeenSet;
}

uint64_t CreatePackageAndPayRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreatePackageAndPayRequest::SetGoodsNum(const uint64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreatePackageAndPayRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

uint64_t CreatePackageAndPayRequest::GetAutoRenew() const
{
    return m_autoRenew;
}

void CreatePackageAndPayRequest::SetAutoRenew(const uint64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool CreatePackageAndPayRequest::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

string CreatePackageAndPayRequest::GetResourceId() const
{
    return m_resourceId;
}

void CreatePackageAndPayRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CreatePackageAndPayRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t CreatePackageAndPayRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreatePackageAndPayRequest::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreatePackageAndPayRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string CreatePackageAndPayRequest::GetNewPackageType() const
{
    return m_newPackageType;
}

void CreatePackageAndPayRequest::SetNewPackageType(const string& _newPackageType)
{
    m_newPackageType = _newPackageType;
    m_newPackageTypeHasBeenSet = true;
}

bool CreatePackageAndPayRequest::NewPackageTypeHasBeenSet() const
{
    return m_newPackageTypeHasBeenSet;
}

uint64_t CreatePackageAndPayRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreatePackageAndPayRequest::SetAutoVoucher(const uint64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreatePackageAndPayRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}


