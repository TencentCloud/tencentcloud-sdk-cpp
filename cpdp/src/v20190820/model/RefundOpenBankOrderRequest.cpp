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

#include <tencentcloud/cpdp/v20190820/model/RefundOpenBankOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

RefundOpenBankOrderRequest::RefundOpenBankOrderRequest() :
    m_outRefundIdHasBeenSet(false),
    m_refundAmountHasBeenSet(false),
    m_channelMerchantIdHasBeenSet(false),
    m_outOrderIdHasBeenSet(false),
    m_channelOrderIdHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_refundReasonHasBeenSet(false),
    m_externalRefundDataHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_profitShareInfoListHasBeenSet(false)
{
}

string RefundOpenBankOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_outRefundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutRefundId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outRefundId.c_str(), allocator).Move(), allocator);
    }

    if (m_refundAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_refundAmount, allocator);
    }

    if (m_channelMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_outOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_refundReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundReason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_refundReason.c_str(), allocator).Move(), allocator);
    }

    if (m_externalRefundDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalRefundData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalRefundData.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }

    if (m_profitShareInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfitShareInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_profitShareInfoList.begin(); itr != m_profitShareInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RefundOpenBankOrderRequest::GetOutRefundId() const
{
    return m_outRefundId;
}

void RefundOpenBankOrderRequest::SetOutRefundId(const string& _outRefundId)
{
    m_outRefundId = _outRefundId;
    m_outRefundIdHasBeenSet = true;
}

bool RefundOpenBankOrderRequest::OutRefundIdHasBeenSet() const
{
    return m_outRefundIdHasBeenSet;
}

int64_t RefundOpenBankOrderRequest::GetRefundAmount() const
{
    return m_refundAmount;
}

void RefundOpenBankOrderRequest::SetRefundAmount(const int64_t& _refundAmount)
{
    m_refundAmount = _refundAmount;
    m_refundAmountHasBeenSet = true;
}

bool RefundOpenBankOrderRequest::RefundAmountHasBeenSet() const
{
    return m_refundAmountHasBeenSet;
}

string RefundOpenBankOrderRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void RefundOpenBankOrderRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool RefundOpenBankOrderRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string RefundOpenBankOrderRequest::GetOutOrderId() const
{
    return m_outOrderId;
}

void RefundOpenBankOrderRequest::SetOutOrderId(const string& _outOrderId)
{
    m_outOrderId = _outOrderId;
    m_outOrderIdHasBeenSet = true;
}

bool RefundOpenBankOrderRequest::OutOrderIdHasBeenSet() const
{
    return m_outOrderIdHasBeenSet;
}

string RefundOpenBankOrderRequest::GetChannelOrderId() const
{
    return m_channelOrderId;
}

void RefundOpenBankOrderRequest::SetChannelOrderId(const string& _channelOrderId)
{
    m_channelOrderId = _channelOrderId;
    m_channelOrderIdHasBeenSet = true;
}

bool RefundOpenBankOrderRequest::ChannelOrderIdHasBeenSet() const
{
    return m_channelOrderIdHasBeenSet;
}

string RefundOpenBankOrderRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void RefundOpenBankOrderRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool RefundOpenBankOrderRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

string RefundOpenBankOrderRequest::GetRefundReason() const
{
    return m_refundReason;
}

void RefundOpenBankOrderRequest::SetRefundReason(const string& _refundReason)
{
    m_refundReason = _refundReason;
    m_refundReasonHasBeenSet = true;
}

bool RefundOpenBankOrderRequest::RefundReasonHasBeenSet() const
{
    return m_refundReasonHasBeenSet;
}

string RefundOpenBankOrderRequest::GetExternalRefundData() const
{
    return m_externalRefundData;
}

void RefundOpenBankOrderRequest::SetExternalRefundData(const string& _externalRefundData)
{
    m_externalRefundData = _externalRefundData;
    m_externalRefundDataHasBeenSet = true;
}

bool RefundOpenBankOrderRequest::ExternalRefundDataHasBeenSet() const
{
    return m_externalRefundDataHasBeenSet;
}

string RefundOpenBankOrderRequest::GetRemark() const
{
    return m_remark;
}

void RefundOpenBankOrderRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RefundOpenBankOrderRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RefundOpenBankOrderRequest::GetEnvironment() const
{
    return m_environment;
}

void RefundOpenBankOrderRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool RefundOpenBankOrderRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

vector<OpenBankProfitShareInfo> RefundOpenBankOrderRequest::GetProfitShareInfoList() const
{
    return m_profitShareInfoList;
}

void RefundOpenBankOrderRequest::SetProfitShareInfoList(const vector<OpenBankProfitShareInfo>& _profitShareInfoList)
{
    m_profitShareInfoList = _profitShareInfoList;
    m_profitShareInfoListHasBeenSet = true;
}

bool RefundOpenBankOrderRequest::ProfitShareInfoListHasBeenSet() const
{
    return m_profitShareInfoListHasBeenSet;
}


