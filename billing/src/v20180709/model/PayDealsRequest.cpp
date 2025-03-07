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

#include <tencentcloud/billing/v20180709/model/PayDealsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

PayDealsRequest::PayDealsRequest() :
    m_orderIdsHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_voucherIdsHasBeenSet(false),
    m_bigDealIdsHasBeenSet(false),
    m_agentPayHasBeenSet(false),
    m_cpsUinHasBeenSet(false)
{
}

string PayDealsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_orderIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_orderIds.begin(); itr != m_orderIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_voucherIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_voucherIds.begin(); itr != m_voucherIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bigDealIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigDealIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bigDealIds.begin(); itr != m_bigDealIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_agentPayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentPay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_agentPay, allocator);
    }

    if (m_cpsUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpsUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cpsUin.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> PayDealsRequest::GetOrderIds() const
{
    return m_orderIds;
}

void PayDealsRequest::SetOrderIds(const vector<string>& _orderIds)
{
    m_orderIds = _orderIds;
    m_orderIdsHasBeenSet = true;
}

bool PayDealsRequest::OrderIdsHasBeenSet() const
{
    return m_orderIdsHasBeenSet;
}

int64_t PayDealsRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void PayDealsRequest::SetAutoVoucher(const int64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool PayDealsRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> PayDealsRequest::GetVoucherIds() const
{
    return m_voucherIds;
}

void PayDealsRequest::SetVoucherIds(const vector<string>& _voucherIds)
{
    m_voucherIds = _voucherIds;
    m_voucherIdsHasBeenSet = true;
}

bool PayDealsRequest::VoucherIdsHasBeenSet() const
{
    return m_voucherIdsHasBeenSet;
}

vector<string> PayDealsRequest::GetBigDealIds() const
{
    return m_bigDealIds;
}

void PayDealsRequest::SetBigDealIds(const vector<string>& _bigDealIds)
{
    m_bigDealIds = _bigDealIds;
    m_bigDealIdsHasBeenSet = true;
}

bool PayDealsRequest::BigDealIdsHasBeenSet() const
{
    return m_bigDealIdsHasBeenSet;
}

int64_t PayDealsRequest::GetAgentPay() const
{
    return m_agentPay;
}

void PayDealsRequest::SetAgentPay(const int64_t& _agentPay)
{
    m_agentPay = _agentPay;
    m_agentPayHasBeenSet = true;
}

bool PayDealsRequest::AgentPayHasBeenSet() const
{
    return m_agentPayHasBeenSet;
}

string PayDealsRequest::GetCpsUin() const
{
    return m_cpsUin;
}

void PayDealsRequest::SetCpsUin(const string& _cpsUin)
{
    m_cpsUin = _cpsUin;
    m_cpsUinHasBeenSet = true;
}

bool PayDealsRequest::CpsUinHasBeenSet() const
{
    return m_cpsUinHasBeenSet;
}


