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

#include <tencentcloud/cpdp/v20190820/model/RefundRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

RefundRequest::RefundRequest() :
    m_userIdHasBeenSet(false),
    m_refundIdHasBeenSet(false),
    m_midasAppIdHasBeenSet(false),
    m_totalRefundAmtHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasSignatureHasBeenSet(false),
    m_outTradeNoHasBeenSet(false),
    m_mchRefundAmtHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_platformRefundAmtHasBeenSet(false),
    m_subOrderRefundListHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false)
{
}

string RefundRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_refundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_refundId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalRefundAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRefundAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_totalRefundAmt, allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSignature.c_str(), allocator).Move(), allocator);
    }

    if (m_outTradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutTradeNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outTradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_mchRefundAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MchRefundAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mchRefundAmt, allocator);
    }

    if (m_transactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transactionId.c_str(), allocator).Move(), allocator);
    }

    if (m_platformRefundAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformRefundAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_platformRefundAmt, allocator);
    }

    if (m_subOrderRefundListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOrderRefundList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subOrderRefundList.begin(); itr != m_subOrderRefundList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RefundRequest::GetUserId() const
{
    return m_userId;
}

void RefundRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool RefundRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string RefundRequest::GetRefundId() const
{
    return m_refundId;
}

void RefundRequest::SetRefundId(const string& _refundId)
{
    m_refundId = _refundId;
    m_refundIdHasBeenSet = true;
}

bool RefundRequest::RefundIdHasBeenSet() const
{
    return m_refundIdHasBeenSet;
}

string RefundRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void RefundRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool RefundRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

int64_t RefundRequest::GetTotalRefundAmt() const
{
    return m_totalRefundAmt;
}

void RefundRequest::SetTotalRefundAmt(const int64_t& _totalRefundAmt)
{
    m_totalRefundAmt = _totalRefundAmt;
    m_totalRefundAmtHasBeenSet = true;
}

bool RefundRequest::TotalRefundAmtHasBeenSet() const
{
    return m_totalRefundAmtHasBeenSet;
}

string RefundRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void RefundRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool RefundRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string RefundRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void RefundRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool RefundRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

string RefundRequest::GetOutTradeNo() const
{
    return m_outTradeNo;
}

void RefundRequest::SetOutTradeNo(const string& _outTradeNo)
{
    m_outTradeNo = _outTradeNo;
    m_outTradeNoHasBeenSet = true;
}

bool RefundRequest::OutTradeNoHasBeenSet() const
{
    return m_outTradeNoHasBeenSet;
}

int64_t RefundRequest::GetMchRefundAmt() const
{
    return m_mchRefundAmt;
}

void RefundRequest::SetMchRefundAmt(const int64_t& _mchRefundAmt)
{
    m_mchRefundAmt = _mchRefundAmt;
    m_mchRefundAmtHasBeenSet = true;
}

bool RefundRequest::MchRefundAmtHasBeenSet() const
{
    return m_mchRefundAmtHasBeenSet;
}

string RefundRequest::GetTransactionId() const
{
    return m_transactionId;
}

void RefundRequest::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool RefundRequest::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

int64_t RefundRequest::GetPlatformRefundAmt() const
{
    return m_platformRefundAmt;
}

void RefundRequest::SetPlatformRefundAmt(const int64_t& _platformRefundAmt)
{
    m_platformRefundAmt = _platformRefundAmt;
    m_platformRefundAmtHasBeenSet = true;
}

bool RefundRequest::PlatformRefundAmtHasBeenSet() const
{
    return m_platformRefundAmtHasBeenSet;
}

vector<RefundOutSubOrderRefundList> RefundRequest::GetSubOrderRefundList() const
{
    return m_subOrderRefundList;
}

void RefundRequest::SetSubOrderRefundList(const vector<RefundOutSubOrderRefundList>& _subOrderRefundList)
{
    m_subOrderRefundList = _subOrderRefundList;
    m_subOrderRefundListHasBeenSet = true;
}

bool RefundRequest::SubOrderRefundListHasBeenSet() const
{
    return m_subOrderRefundListHasBeenSet;
}

string RefundRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void RefundRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool RefundRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}


