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

#include <tencentcloud/cpdp/v20190820/model/OpenBankRefundOrderApplyResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OpenBankRefundOrderApplyResult::OpenBankRefundOrderApplyResult() :
    m_channelOrderIdHasBeenSet(false),
    m_channelRefundIdHasBeenSet(false),
    m_outRefundIdHasBeenSet(false),
    m_outOrderIdHasBeenSet(false),
    m_refundMessageHasBeenSet(false),
    m_refundAmountHasBeenSet(false),
    m_feeAmountHasBeenSet(false),
    m_refundStatusHasBeenSet(false)
{
}

CoreInternalOutcome OpenBankRefundOrderApplyResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelOrderId") && !value["ChannelOrderId"].IsNull())
    {
        if (!value["ChannelOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankRefundOrderApplyResult.ChannelOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelOrderId = string(value["ChannelOrderId"].GetString());
        m_channelOrderIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelRefundId") && !value["ChannelRefundId"].IsNull())
    {
        if (!value["ChannelRefundId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankRefundOrderApplyResult.ChannelRefundId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelRefundId = string(value["ChannelRefundId"].GetString());
        m_channelRefundIdHasBeenSet = true;
    }

    if (value.HasMember("OutRefundId") && !value["OutRefundId"].IsNull())
    {
        if (!value["OutRefundId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankRefundOrderApplyResult.OutRefundId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outRefundId = string(value["OutRefundId"].GetString());
        m_outRefundIdHasBeenSet = true;
    }

    if (value.HasMember("OutOrderId") && !value["OutOrderId"].IsNull())
    {
        if (!value["OutOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankRefundOrderApplyResult.OutOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outOrderId = string(value["OutOrderId"].GetString());
        m_outOrderIdHasBeenSet = true;
    }

    if (value.HasMember("RefundMessage") && !value["RefundMessage"].IsNull())
    {
        if (!value["RefundMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankRefundOrderApplyResult.RefundMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundMessage = string(value["RefundMessage"].GetString());
        m_refundMessageHasBeenSet = true;
    }

    if (value.HasMember("RefundAmount") && !value["RefundAmount"].IsNull())
    {
        if (!value["RefundAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankRefundOrderApplyResult.RefundAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_refundAmount = value["RefundAmount"].GetInt64();
        m_refundAmountHasBeenSet = true;
    }

    if (value.HasMember("FeeAmount") && !value["FeeAmount"].IsNull())
    {
        if (!value["FeeAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankRefundOrderApplyResult.FeeAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_feeAmount = value["FeeAmount"].GetInt64();
        m_feeAmountHasBeenSet = true;
    }

    if (value.HasMember("RefundStatus") && !value["RefundStatus"].IsNull())
    {
        if (!value["RefundStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankRefundOrderApplyResult.RefundStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundStatus = string(value["RefundStatus"].GetString());
        m_refundStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenBankRefundOrderApplyResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelRefundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelRefundId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelRefundId.c_str(), allocator).Move(), allocator);
    }

    if (m_outRefundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutRefundId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outRefundId.c_str(), allocator).Move(), allocator);
    }

    if (m_outOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_refundMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_refundAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refundAmount, allocator);
    }

    if (m_feeAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_feeAmount, allocator);
    }

    if (m_refundStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundStatus.c_str(), allocator).Move(), allocator);
    }

}


string OpenBankRefundOrderApplyResult::GetChannelOrderId() const
{
    return m_channelOrderId;
}

void OpenBankRefundOrderApplyResult::SetChannelOrderId(const string& _channelOrderId)
{
    m_channelOrderId = _channelOrderId;
    m_channelOrderIdHasBeenSet = true;
}

bool OpenBankRefundOrderApplyResult::ChannelOrderIdHasBeenSet() const
{
    return m_channelOrderIdHasBeenSet;
}

string OpenBankRefundOrderApplyResult::GetChannelRefundId() const
{
    return m_channelRefundId;
}

void OpenBankRefundOrderApplyResult::SetChannelRefundId(const string& _channelRefundId)
{
    m_channelRefundId = _channelRefundId;
    m_channelRefundIdHasBeenSet = true;
}

bool OpenBankRefundOrderApplyResult::ChannelRefundIdHasBeenSet() const
{
    return m_channelRefundIdHasBeenSet;
}

string OpenBankRefundOrderApplyResult::GetOutRefundId() const
{
    return m_outRefundId;
}

void OpenBankRefundOrderApplyResult::SetOutRefundId(const string& _outRefundId)
{
    m_outRefundId = _outRefundId;
    m_outRefundIdHasBeenSet = true;
}

bool OpenBankRefundOrderApplyResult::OutRefundIdHasBeenSet() const
{
    return m_outRefundIdHasBeenSet;
}

string OpenBankRefundOrderApplyResult::GetOutOrderId() const
{
    return m_outOrderId;
}

void OpenBankRefundOrderApplyResult::SetOutOrderId(const string& _outOrderId)
{
    m_outOrderId = _outOrderId;
    m_outOrderIdHasBeenSet = true;
}

bool OpenBankRefundOrderApplyResult::OutOrderIdHasBeenSet() const
{
    return m_outOrderIdHasBeenSet;
}

string OpenBankRefundOrderApplyResult::GetRefundMessage() const
{
    return m_refundMessage;
}

void OpenBankRefundOrderApplyResult::SetRefundMessage(const string& _refundMessage)
{
    m_refundMessage = _refundMessage;
    m_refundMessageHasBeenSet = true;
}

bool OpenBankRefundOrderApplyResult::RefundMessageHasBeenSet() const
{
    return m_refundMessageHasBeenSet;
}

int64_t OpenBankRefundOrderApplyResult::GetRefundAmount() const
{
    return m_refundAmount;
}

void OpenBankRefundOrderApplyResult::SetRefundAmount(const int64_t& _refundAmount)
{
    m_refundAmount = _refundAmount;
    m_refundAmountHasBeenSet = true;
}

bool OpenBankRefundOrderApplyResult::RefundAmountHasBeenSet() const
{
    return m_refundAmountHasBeenSet;
}

int64_t OpenBankRefundOrderApplyResult::GetFeeAmount() const
{
    return m_feeAmount;
}

void OpenBankRefundOrderApplyResult::SetFeeAmount(const int64_t& _feeAmount)
{
    m_feeAmount = _feeAmount;
    m_feeAmountHasBeenSet = true;
}

bool OpenBankRefundOrderApplyResult::FeeAmountHasBeenSet() const
{
    return m_feeAmountHasBeenSet;
}

string OpenBankRefundOrderApplyResult::GetRefundStatus() const
{
    return m_refundStatus;
}

void OpenBankRefundOrderApplyResult::SetRefundStatus(const string& _refundStatus)
{
    m_refundStatus = _refundStatus;
    m_refundStatusHasBeenSet = true;
}

bool OpenBankRefundOrderApplyResult::RefundStatusHasBeenSet() const
{
    return m_refundStatusHasBeenSet;
}

