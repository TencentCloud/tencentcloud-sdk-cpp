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

#include <tencentcloud/cpdp/v20190820/model/OpenBankQueryRefundOrderResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OpenBankQueryRefundOrderResult::OpenBankQueryRefundOrderResult() :
    m_outRefundIdHasBeenSet(false),
    m_channelRefundIdHasBeenSet(false),
    m_refundReasonHasBeenSet(false),
    m_refundAmountHasBeenSet(false),
    m_realRefundAmountHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_timeFinishHasBeenSet(false),
    m_refundStatusHasBeenSet(false),
    m_refundInfoHasBeenSet(false),
    m_feeAmountHasBeenSet(false),
    m_refundMessageHasBeenSet(false),
    m_profitShareRespInfoListHasBeenSet(false)
{
}

CoreInternalOutcome OpenBankQueryRefundOrderResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutRefundId") && !value["OutRefundId"].IsNull())
    {
        if (!value["OutRefundId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankQueryRefundOrderResult.OutRefundId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outRefundId = string(value["OutRefundId"].GetString());
        m_outRefundIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelRefundId") && !value["ChannelRefundId"].IsNull())
    {
        if (!value["ChannelRefundId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankQueryRefundOrderResult.ChannelRefundId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelRefundId = string(value["ChannelRefundId"].GetString());
        m_channelRefundIdHasBeenSet = true;
    }

    if (value.HasMember("RefundReason") && !value["RefundReason"].IsNull())
    {
        if (!value["RefundReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankQueryRefundOrderResult.RefundReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundReason = string(value["RefundReason"].GetString());
        m_refundReasonHasBeenSet = true;
    }

    if (value.HasMember("RefundAmount") && !value["RefundAmount"].IsNull())
    {
        if (!value["RefundAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankQueryRefundOrderResult.RefundAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_refundAmount = value["RefundAmount"].GetInt64();
        m_refundAmountHasBeenSet = true;
    }

    if (value.HasMember("RealRefundAmount") && !value["RealRefundAmount"].IsNull())
    {
        if (!value["RealRefundAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankQueryRefundOrderResult.RealRefundAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_realRefundAmount = value["RealRefundAmount"].GetInt64();
        m_realRefundAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalAmount") && !value["TotalAmount"].IsNull())
    {
        if (!value["TotalAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankQueryRefundOrderResult.TotalAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAmount = value["TotalAmount"].GetInt64();
        m_totalAmountHasBeenSet = true;
    }

    if (value.HasMember("TimeFinish") && !value["TimeFinish"].IsNull())
    {
        if (!value["TimeFinish"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankQueryRefundOrderResult.TimeFinish` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeFinish = string(value["TimeFinish"].GetString());
        m_timeFinishHasBeenSet = true;
    }

    if (value.HasMember("RefundStatus") && !value["RefundStatus"].IsNull())
    {
        if (!value["RefundStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankQueryRefundOrderResult.RefundStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundStatus = string(value["RefundStatus"].GetString());
        m_refundStatusHasBeenSet = true;
    }

    if (value.HasMember("RefundInfo") && !value["RefundInfo"].IsNull())
    {
        if (!value["RefundInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankQueryRefundOrderResult.RefundInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundInfo = string(value["RefundInfo"].GetString());
        m_refundInfoHasBeenSet = true;
    }

    if (value.HasMember("FeeAmount") && !value["FeeAmount"].IsNull())
    {
        if (!value["FeeAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankQueryRefundOrderResult.FeeAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_feeAmount = value["FeeAmount"].GetInt64();
        m_feeAmountHasBeenSet = true;
    }

    if (value.HasMember("RefundMessage") && !value["RefundMessage"].IsNull())
    {
        if (!value["RefundMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankQueryRefundOrderResult.RefundMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundMessage = string(value["RefundMessage"].GetString());
        m_refundMessageHasBeenSet = true;
    }

    if (value.HasMember("ProfitShareRespInfoList") && !value["ProfitShareRespInfoList"].IsNull())
    {
        if (!value["ProfitShareRespInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OpenBankQueryRefundOrderResult.ProfitShareRespInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["ProfitShareRespInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OpenBankProfitShareRespInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_profitShareRespInfoList.push_back(item);
        }
        m_profitShareRespInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenBankQueryRefundOrderResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outRefundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutRefundId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outRefundId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelRefundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelRefundId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelRefundId.c_str(), allocator).Move(), allocator);
    }

    if (m_refundReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundReason.c_str(), allocator).Move(), allocator);
    }

    if (m_refundAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refundAmount, allocator);
    }

    if (m_realRefundAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealRefundAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realRefundAmount, allocator);
    }

    if (m_totalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAmount, allocator);
    }

    if (m_timeFinishHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeFinish";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeFinish.c_str(), allocator).Move(), allocator);
    }

    if (m_refundStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_refundInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_feeAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_feeAmount, allocator);
    }

    if (m_refundMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_profitShareRespInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfitShareRespInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_profitShareRespInfoList.begin(); itr != m_profitShareRespInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string OpenBankQueryRefundOrderResult::GetOutRefundId() const
{
    return m_outRefundId;
}

void OpenBankQueryRefundOrderResult::SetOutRefundId(const string& _outRefundId)
{
    m_outRefundId = _outRefundId;
    m_outRefundIdHasBeenSet = true;
}

bool OpenBankQueryRefundOrderResult::OutRefundIdHasBeenSet() const
{
    return m_outRefundIdHasBeenSet;
}

string OpenBankQueryRefundOrderResult::GetChannelRefundId() const
{
    return m_channelRefundId;
}

void OpenBankQueryRefundOrderResult::SetChannelRefundId(const string& _channelRefundId)
{
    m_channelRefundId = _channelRefundId;
    m_channelRefundIdHasBeenSet = true;
}

bool OpenBankQueryRefundOrderResult::ChannelRefundIdHasBeenSet() const
{
    return m_channelRefundIdHasBeenSet;
}

string OpenBankQueryRefundOrderResult::GetRefundReason() const
{
    return m_refundReason;
}

void OpenBankQueryRefundOrderResult::SetRefundReason(const string& _refundReason)
{
    m_refundReason = _refundReason;
    m_refundReasonHasBeenSet = true;
}

bool OpenBankQueryRefundOrderResult::RefundReasonHasBeenSet() const
{
    return m_refundReasonHasBeenSet;
}

int64_t OpenBankQueryRefundOrderResult::GetRefundAmount() const
{
    return m_refundAmount;
}

void OpenBankQueryRefundOrderResult::SetRefundAmount(const int64_t& _refundAmount)
{
    m_refundAmount = _refundAmount;
    m_refundAmountHasBeenSet = true;
}

bool OpenBankQueryRefundOrderResult::RefundAmountHasBeenSet() const
{
    return m_refundAmountHasBeenSet;
}

int64_t OpenBankQueryRefundOrderResult::GetRealRefundAmount() const
{
    return m_realRefundAmount;
}

void OpenBankQueryRefundOrderResult::SetRealRefundAmount(const int64_t& _realRefundAmount)
{
    m_realRefundAmount = _realRefundAmount;
    m_realRefundAmountHasBeenSet = true;
}

bool OpenBankQueryRefundOrderResult::RealRefundAmountHasBeenSet() const
{
    return m_realRefundAmountHasBeenSet;
}

int64_t OpenBankQueryRefundOrderResult::GetTotalAmount() const
{
    return m_totalAmount;
}

void OpenBankQueryRefundOrderResult::SetTotalAmount(const int64_t& _totalAmount)
{
    m_totalAmount = _totalAmount;
    m_totalAmountHasBeenSet = true;
}

bool OpenBankQueryRefundOrderResult::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

string OpenBankQueryRefundOrderResult::GetTimeFinish() const
{
    return m_timeFinish;
}

void OpenBankQueryRefundOrderResult::SetTimeFinish(const string& _timeFinish)
{
    m_timeFinish = _timeFinish;
    m_timeFinishHasBeenSet = true;
}

bool OpenBankQueryRefundOrderResult::TimeFinishHasBeenSet() const
{
    return m_timeFinishHasBeenSet;
}

string OpenBankQueryRefundOrderResult::GetRefundStatus() const
{
    return m_refundStatus;
}

void OpenBankQueryRefundOrderResult::SetRefundStatus(const string& _refundStatus)
{
    m_refundStatus = _refundStatus;
    m_refundStatusHasBeenSet = true;
}

bool OpenBankQueryRefundOrderResult::RefundStatusHasBeenSet() const
{
    return m_refundStatusHasBeenSet;
}

string OpenBankQueryRefundOrderResult::GetRefundInfo() const
{
    return m_refundInfo;
}

void OpenBankQueryRefundOrderResult::SetRefundInfo(const string& _refundInfo)
{
    m_refundInfo = _refundInfo;
    m_refundInfoHasBeenSet = true;
}

bool OpenBankQueryRefundOrderResult::RefundInfoHasBeenSet() const
{
    return m_refundInfoHasBeenSet;
}

int64_t OpenBankQueryRefundOrderResult::GetFeeAmount() const
{
    return m_feeAmount;
}

void OpenBankQueryRefundOrderResult::SetFeeAmount(const int64_t& _feeAmount)
{
    m_feeAmount = _feeAmount;
    m_feeAmountHasBeenSet = true;
}

bool OpenBankQueryRefundOrderResult::FeeAmountHasBeenSet() const
{
    return m_feeAmountHasBeenSet;
}

string OpenBankQueryRefundOrderResult::GetRefundMessage() const
{
    return m_refundMessage;
}

void OpenBankQueryRefundOrderResult::SetRefundMessage(const string& _refundMessage)
{
    m_refundMessage = _refundMessage;
    m_refundMessageHasBeenSet = true;
}

bool OpenBankQueryRefundOrderResult::RefundMessageHasBeenSet() const
{
    return m_refundMessageHasBeenSet;
}

vector<OpenBankProfitShareRespInfo> OpenBankQueryRefundOrderResult::GetProfitShareRespInfoList() const
{
    return m_profitShareRespInfoList;
}

void OpenBankQueryRefundOrderResult::SetProfitShareRespInfoList(const vector<OpenBankProfitShareRespInfo>& _profitShareRespInfoList)
{
    m_profitShareRespInfoList = _profitShareRespInfoList;
    m_profitShareRespInfoListHasBeenSet = true;
}

bool OpenBankQueryRefundOrderResult::ProfitShareRespInfoListHasBeenSet() const
{
    return m_profitShareRespInfoListHasBeenSet;
}

