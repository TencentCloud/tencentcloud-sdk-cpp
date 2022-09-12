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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankPaymentOrderResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankPaymentOrderResult::QueryOpenBankPaymentOrderResult() :
    m_channelMerchantIdHasBeenSet(false),
    m_outOrderIdHasBeenSet(false),
    m_channelOrderIdHasBeenSet(false),
    m_thirdPayOrderIdHasBeenSet(false),
    m_orderStatusHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_paymentMethodHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_payAmountHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_attachmentHasBeenSet(false),
    m_redirectInfoHasBeenSet(false),
    m_externalReturnDataHasBeenSet(false),
    m_bankApprovalGuideInfoHasBeenSet(false),
    m_feeAmountHasBeenSet(false),
    m_feeRateHasBeenSet(false),
    m_profitShareRespInfoListHasBeenSet(false),
    m_timeFinishHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankPaymentOrderResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelMerchantId") && !value["ChannelMerchantId"].IsNull())
    {
        if (!value["ChannelMerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.ChannelMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelMerchantId = string(value["ChannelMerchantId"].GetString());
        m_channelMerchantIdHasBeenSet = true;
    }

    if (value.HasMember("OutOrderId") && !value["OutOrderId"].IsNull())
    {
        if (!value["OutOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.OutOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outOrderId = string(value["OutOrderId"].GetString());
        m_outOrderIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelOrderId") && !value["ChannelOrderId"].IsNull())
    {
        if (!value["ChannelOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.ChannelOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelOrderId = string(value["ChannelOrderId"].GetString());
        m_channelOrderIdHasBeenSet = true;
    }

    if (value.HasMember("ThirdPayOrderId") && !value["ThirdPayOrderId"].IsNull())
    {
        if (!value["ThirdPayOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.ThirdPayOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thirdPayOrderId = string(value["ThirdPayOrderId"].GetString());
        m_thirdPayOrderIdHasBeenSet = true;
    }

    if (value.HasMember("OrderStatus") && !value["OrderStatus"].IsNull())
    {
        if (!value["OrderStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.OrderStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderStatus = string(value["OrderStatus"].GetString());
        m_orderStatusHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("PaymentMethod") && !value["PaymentMethod"].IsNull())
    {
        if (!value["PaymentMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.PaymentMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentMethod = string(value["PaymentMethod"].GetString());
        m_paymentMethodHasBeenSet = true;
    }

    if (value.HasMember("TotalAmount") && !value["TotalAmount"].IsNull())
    {
        if (!value["TotalAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.TotalAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAmount = value["TotalAmount"].GetInt64();
        m_totalAmountHasBeenSet = true;
    }

    if (value.HasMember("PayAmount") && !value["PayAmount"].IsNull())
    {
        if (!value["PayAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.PayAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payAmount = value["PayAmount"].GetInt64();
        m_payAmountHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("Attachment") && !value["Attachment"].IsNull())
    {
        if (!value["Attachment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.Attachment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachment = string(value["Attachment"].GetString());
        m_attachmentHasBeenSet = true;
    }

    if (value.HasMember("RedirectInfo") && !value["RedirectInfo"].IsNull())
    {
        if (!value["RedirectInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.RedirectInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_redirectInfo.Deserialize(value["RedirectInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_redirectInfoHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnData") && !value["ExternalReturnData"].IsNull())
    {
        if (!value["ExternalReturnData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.ExternalReturnData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnData = string(value["ExternalReturnData"].GetString());
        m_externalReturnDataHasBeenSet = true;
    }

    if (value.HasMember("BankApprovalGuideInfo") && !value["BankApprovalGuideInfo"].IsNull())
    {
        if (!value["BankApprovalGuideInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.BankApprovalGuideInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bankApprovalGuideInfo.Deserialize(value["BankApprovalGuideInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bankApprovalGuideInfoHasBeenSet = true;
    }

    if (value.HasMember("FeeAmount") && !value["FeeAmount"].IsNull())
    {
        if (!value["FeeAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.FeeAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_feeAmount = value["FeeAmount"].GetInt64();
        m_feeAmountHasBeenSet = true;
    }

    if (value.HasMember("FeeRate") && !value["FeeRate"].IsNull())
    {
        if (!value["FeeRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.FeeRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_feeRate = value["FeeRate"].GetInt64();
        m_feeRateHasBeenSet = true;
    }

    if (value.HasMember("ProfitShareRespInfoList") && !value["ProfitShareRespInfoList"].IsNull())
    {
        if (!value["ProfitShareRespInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.ProfitShareRespInfoList` is not array type"));

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

    if (value.HasMember("TimeFinish") && !value["TimeFinish"].IsNull())
    {
        if (!value["TimeFinish"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankPaymentOrderResult.TimeFinish` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeFinish = string(value["TimeFinish"].GetString());
        m_timeFinishHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankPaymentOrderResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelMerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_outOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_thirdPayOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdPayOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thirdPayOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_totalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAmount, allocator);
    }

    if (m_payAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payAmount, allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_attachmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attachment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachment.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_redirectInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_externalReturnDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnData.c_str(), allocator).Move(), allocator);
    }

    if (m_bankApprovalGuideInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankApprovalGuideInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bankApprovalGuideInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_feeAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_feeAmount, allocator);
    }

    if (m_feeRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_feeRate, allocator);
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

    if (m_timeFinishHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeFinish";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeFinish.c_str(), allocator).Move(), allocator);
    }

}


string QueryOpenBankPaymentOrderResult::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void QueryOpenBankPaymentOrderResult::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string QueryOpenBankPaymentOrderResult::GetOutOrderId() const
{
    return m_outOrderId;
}

void QueryOpenBankPaymentOrderResult::SetOutOrderId(const string& _outOrderId)
{
    m_outOrderId = _outOrderId;
    m_outOrderIdHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::OutOrderIdHasBeenSet() const
{
    return m_outOrderIdHasBeenSet;
}

string QueryOpenBankPaymentOrderResult::GetChannelOrderId() const
{
    return m_channelOrderId;
}

void QueryOpenBankPaymentOrderResult::SetChannelOrderId(const string& _channelOrderId)
{
    m_channelOrderId = _channelOrderId;
    m_channelOrderIdHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::ChannelOrderIdHasBeenSet() const
{
    return m_channelOrderIdHasBeenSet;
}

string QueryOpenBankPaymentOrderResult::GetThirdPayOrderId() const
{
    return m_thirdPayOrderId;
}

void QueryOpenBankPaymentOrderResult::SetThirdPayOrderId(const string& _thirdPayOrderId)
{
    m_thirdPayOrderId = _thirdPayOrderId;
    m_thirdPayOrderIdHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::ThirdPayOrderIdHasBeenSet() const
{
    return m_thirdPayOrderIdHasBeenSet;
}

string QueryOpenBankPaymentOrderResult::GetOrderStatus() const
{
    return m_orderStatus;
}

void QueryOpenBankPaymentOrderResult::SetOrderStatus(const string& _orderStatus)
{
    m_orderStatus = _orderStatus;
    m_orderStatusHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::OrderStatusHasBeenSet() const
{
    return m_orderStatusHasBeenSet;
}

string QueryOpenBankPaymentOrderResult::GetChannelName() const
{
    return m_channelName;
}

void QueryOpenBankPaymentOrderResult::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string QueryOpenBankPaymentOrderResult::GetPaymentMethod() const
{
    return m_paymentMethod;
}

void QueryOpenBankPaymentOrderResult::SetPaymentMethod(const string& _paymentMethod)
{
    m_paymentMethod = _paymentMethod;
    m_paymentMethodHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::PaymentMethodHasBeenSet() const
{
    return m_paymentMethodHasBeenSet;
}

int64_t QueryOpenBankPaymentOrderResult::GetTotalAmount() const
{
    return m_totalAmount;
}

void QueryOpenBankPaymentOrderResult::SetTotalAmount(const int64_t& _totalAmount)
{
    m_totalAmount = _totalAmount;
    m_totalAmountHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

int64_t QueryOpenBankPaymentOrderResult::GetPayAmount() const
{
    return m_payAmount;
}

void QueryOpenBankPaymentOrderResult::SetPayAmount(const int64_t& _payAmount)
{
    m_payAmount = _payAmount;
    m_payAmountHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::PayAmountHasBeenSet() const
{
    return m_payAmountHasBeenSet;
}

string QueryOpenBankPaymentOrderResult::GetFailReason() const
{
    return m_failReason;
}

void QueryOpenBankPaymentOrderResult::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string QueryOpenBankPaymentOrderResult::GetAttachment() const
{
    return m_attachment;
}

void QueryOpenBankPaymentOrderResult::SetAttachment(const string& _attachment)
{
    m_attachment = _attachment;
    m_attachmentHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::AttachmentHasBeenSet() const
{
    return m_attachmentHasBeenSet;
}

OpenBankRedirectInfo QueryOpenBankPaymentOrderResult::GetRedirectInfo() const
{
    return m_redirectInfo;
}

void QueryOpenBankPaymentOrderResult::SetRedirectInfo(const OpenBankRedirectInfo& _redirectInfo)
{
    m_redirectInfo = _redirectInfo;
    m_redirectInfoHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::RedirectInfoHasBeenSet() const
{
    return m_redirectInfoHasBeenSet;
}

string QueryOpenBankPaymentOrderResult::GetExternalReturnData() const
{
    return m_externalReturnData;
}

void QueryOpenBankPaymentOrderResult::SetExternalReturnData(const string& _externalReturnData)
{
    m_externalReturnData = _externalReturnData;
    m_externalReturnDataHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::ExternalReturnDataHasBeenSet() const
{
    return m_externalReturnDataHasBeenSet;
}

OpenBankApprovalGuideInfo QueryOpenBankPaymentOrderResult::GetBankApprovalGuideInfo() const
{
    return m_bankApprovalGuideInfo;
}

void QueryOpenBankPaymentOrderResult::SetBankApprovalGuideInfo(const OpenBankApprovalGuideInfo& _bankApprovalGuideInfo)
{
    m_bankApprovalGuideInfo = _bankApprovalGuideInfo;
    m_bankApprovalGuideInfoHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::BankApprovalGuideInfoHasBeenSet() const
{
    return m_bankApprovalGuideInfoHasBeenSet;
}

int64_t QueryOpenBankPaymentOrderResult::GetFeeAmount() const
{
    return m_feeAmount;
}

void QueryOpenBankPaymentOrderResult::SetFeeAmount(const int64_t& _feeAmount)
{
    m_feeAmount = _feeAmount;
    m_feeAmountHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::FeeAmountHasBeenSet() const
{
    return m_feeAmountHasBeenSet;
}

int64_t QueryOpenBankPaymentOrderResult::GetFeeRate() const
{
    return m_feeRate;
}

void QueryOpenBankPaymentOrderResult::SetFeeRate(const int64_t& _feeRate)
{
    m_feeRate = _feeRate;
    m_feeRateHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::FeeRateHasBeenSet() const
{
    return m_feeRateHasBeenSet;
}

vector<OpenBankProfitShareRespInfo> QueryOpenBankPaymentOrderResult::GetProfitShareRespInfoList() const
{
    return m_profitShareRespInfoList;
}

void QueryOpenBankPaymentOrderResult::SetProfitShareRespInfoList(const vector<OpenBankProfitShareRespInfo>& _profitShareRespInfoList)
{
    m_profitShareRespInfoList = _profitShareRespInfoList;
    m_profitShareRespInfoListHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::ProfitShareRespInfoListHasBeenSet() const
{
    return m_profitShareRespInfoListHasBeenSet;
}

string QueryOpenBankPaymentOrderResult::GetTimeFinish() const
{
    return m_timeFinish;
}

void QueryOpenBankPaymentOrderResult::SetTimeFinish(const string& _timeFinish)
{
    m_timeFinish = _timeFinish;
    m_timeFinishHasBeenSet = true;
}

bool QueryOpenBankPaymentOrderResult::TimeFinishHasBeenSet() const
{
    return m_timeFinishHasBeenSet;
}

