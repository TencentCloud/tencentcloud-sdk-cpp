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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankBillData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankBillData::QueryOpenBankBillData() :
    m_billDateHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_subChannelHasBeenSet(false),
    m_parentMerchantIdHasBeenSet(false),
    m_outMerchantIdHasBeenSet(false),
    m_merchantIdHasBeenSet(false),
    m_endMerchantIdHasBeenSet(false),
    m_outTradeNoHasBeenSet(false),
    m_tradeNoHasBeenSet(false),
    m_endTradeNoHasBeenSet(false),
    m_paymentTypeHasBeenSet(false),
    m_businessTypeHasBeenSet(false),
    m_tradeTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_tradeStatusHasBeenSet(false),
    m_checkStatusHasBeenSet(false),
    m_checkFailReasonHasBeenSet(false),
    m_orderAmountHasBeenSet(false),
    m_serviceFeeHasBeenSet(false),
    m_payeeAccountHasBeenSet(false),
    m_payeeNameHasBeenSet(false),
    m_payerAccountHasBeenSet(false),
    m_payerNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankBillData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BillDate") && !value["BillDate"].IsNull())
    {
        if (!value["BillDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.BillDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billDate = string(value["BillDate"].GetString());
        m_billDateHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(value["Channel"].GetString());
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("SubChannel") && !value["SubChannel"].IsNull())
    {
        if (!value["SubChannel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.SubChannel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subChannel = string(value["SubChannel"].GetString());
        m_subChannelHasBeenSet = true;
    }

    if (value.HasMember("ParentMerchantId") && !value["ParentMerchantId"].IsNull())
    {
        if (!value["ParentMerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.ParentMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentMerchantId = string(value["ParentMerchantId"].GetString());
        m_parentMerchantIdHasBeenSet = true;
    }

    if (value.HasMember("OutMerchantId") && !value["OutMerchantId"].IsNull())
    {
        if (!value["OutMerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.OutMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outMerchantId = string(value["OutMerchantId"].GetString());
        m_outMerchantIdHasBeenSet = true;
    }

    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("EndMerchantId") && !value["EndMerchantId"].IsNull())
    {
        if (!value["EndMerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.EndMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endMerchantId = string(value["EndMerchantId"].GetString());
        m_endMerchantIdHasBeenSet = true;
    }

    if (value.HasMember("OutTradeNo") && !value["OutTradeNo"].IsNull())
    {
        if (!value["OutTradeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.OutTradeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outTradeNo = string(value["OutTradeNo"].GetString());
        m_outTradeNoHasBeenSet = true;
    }

    if (value.HasMember("TradeNo") && !value["TradeNo"].IsNull())
    {
        if (!value["TradeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.TradeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeNo = string(value["TradeNo"].GetString());
        m_tradeNoHasBeenSet = true;
    }

    if (value.HasMember("EndTradeNo") && !value["EndTradeNo"].IsNull())
    {
        if (!value["EndTradeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.EndTradeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTradeNo = string(value["EndTradeNo"].GetString());
        m_endTradeNoHasBeenSet = true;
    }

    if (value.HasMember("PaymentType") && !value["PaymentType"].IsNull())
    {
        if (!value["PaymentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.PaymentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentType = string(value["PaymentType"].GetString());
        m_paymentTypeHasBeenSet = true;
    }

    if (value.HasMember("BusinessType") && !value["BusinessType"].IsNull())
    {
        if (!value["BusinessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.BusinessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessType = string(value["BusinessType"].GetString());
        m_businessTypeHasBeenSet = true;
    }

    if (value.HasMember("TradeTime") && !value["TradeTime"].IsNull())
    {
        if (!value["TradeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.TradeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeTime = string(value["TradeTime"].GetString());
        m_tradeTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("TradeStatus") && !value["TradeStatus"].IsNull())
    {
        if (!value["TradeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.TradeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeStatus = string(value["TradeStatus"].GetString());
        m_tradeStatusHasBeenSet = true;
    }

    if (value.HasMember("CheckStatus") && !value["CheckStatus"].IsNull())
    {
        if (!value["CheckStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.CheckStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = string(value["CheckStatus"].GetString());
        m_checkStatusHasBeenSet = true;
    }

    if (value.HasMember("CheckFailReason") && !value["CheckFailReason"].IsNull())
    {
        if (!value["CheckFailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.CheckFailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkFailReason = string(value["CheckFailReason"].GetString());
        m_checkFailReasonHasBeenSet = true;
    }

    if (value.HasMember("OrderAmount") && !value["OrderAmount"].IsNull())
    {
        if (!value["OrderAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.OrderAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderAmount = string(value["OrderAmount"].GetString());
        m_orderAmountHasBeenSet = true;
    }

    if (value.HasMember("ServiceFee") && !value["ServiceFee"].IsNull())
    {
        if (!value["ServiceFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.ServiceFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceFee = string(value["ServiceFee"].GetString());
        m_serviceFeeHasBeenSet = true;
    }

    if (value.HasMember("PayeeAccount") && !value["PayeeAccount"].IsNull())
    {
        if (!value["PayeeAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.PayeeAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payeeAccount = string(value["PayeeAccount"].GetString());
        m_payeeAccountHasBeenSet = true;
    }

    if (value.HasMember("PayeeName") && !value["PayeeName"].IsNull())
    {
        if (!value["PayeeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.PayeeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payeeName = string(value["PayeeName"].GetString());
        m_payeeNameHasBeenSet = true;
    }

    if (value.HasMember("PayerAccount") && !value["PayerAccount"].IsNull())
    {
        if (!value["PayerAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.PayerAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerAccount = string(value["PayerAccount"].GetString());
        m_payerAccountHasBeenSet = true;
    }

    if (value.HasMember("PayerName") && !value["PayerName"].IsNull())
    {
        if (!value["PayerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.PayerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerName = string(value["PayerName"].GetString());
        m_payerNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillData.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankBillData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_billDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billDate.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_subChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_parentMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentMerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_outMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutMerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_endMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndMerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_outTradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutTradeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outTradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_endTradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTradeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentType.c_str(), allocator).Move(), allocator);
    }

    if (m_businessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessType.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_checkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_checkFailReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckFailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkFailReason.c_str(), allocator).Move(), allocator);
    }

    if (m_orderAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceFee.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payeeAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payeeName.c_str(), allocator).Move(), allocator);
    }

    if (m_payerAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_payerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string QueryOpenBankBillData::GetBillDate() const
{
    return m_billDate;
}

void QueryOpenBankBillData::SetBillDate(const string& _billDate)
{
    m_billDate = _billDate;
    m_billDateHasBeenSet = true;
}

bool QueryOpenBankBillData::BillDateHasBeenSet() const
{
    return m_billDateHasBeenSet;
}

string QueryOpenBankBillData::GetChannel() const
{
    return m_channel;
}

void QueryOpenBankBillData::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool QueryOpenBankBillData::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string QueryOpenBankBillData::GetSubChannel() const
{
    return m_subChannel;
}

void QueryOpenBankBillData::SetSubChannel(const string& _subChannel)
{
    m_subChannel = _subChannel;
    m_subChannelHasBeenSet = true;
}

bool QueryOpenBankBillData::SubChannelHasBeenSet() const
{
    return m_subChannelHasBeenSet;
}

string QueryOpenBankBillData::GetParentMerchantId() const
{
    return m_parentMerchantId;
}

void QueryOpenBankBillData::SetParentMerchantId(const string& _parentMerchantId)
{
    m_parentMerchantId = _parentMerchantId;
    m_parentMerchantIdHasBeenSet = true;
}

bool QueryOpenBankBillData::ParentMerchantIdHasBeenSet() const
{
    return m_parentMerchantIdHasBeenSet;
}

string QueryOpenBankBillData::GetOutMerchantId() const
{
    return m_outMerchantId;
}

void QueryOpenBankBillData::SetOutMerchantId(const string& _outMerchantId)
{
    m_outMerchantId = _outMerchantId;
    m_outMerchantIdHasBeenSet = true;
}

bool QueryOpenBankBillData::OutMerchantIdHasBeenSet() const
{
    return m_outMerchantIdHasBeenSet;
}

string QueryOpenBankBillData::GetMerchantId() const
{
    return m_merchantId;
}

void QueryOpenBankBillData::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool QueryOpenBankBillData::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string QueryOpenBankBillData::GetEndMerchantId() const
{
    return m_endMerchantId;
}

void QueryOpenBankBillData::SetEndMerchantId(const string& _endMerchantId)
{
    m_endMerchantId = _endMerchantId;
    m_endMerchantIdHasBeenSet = true;
}

bool QueryOpenBankBillData::EndMerchantIdHasBeenSet() const
{
    return m_endMerchantIdHasBeenSet;
}

string QueryOpenBankBillData::GetOutTradeNo() const
{
    return m_outTradeNo;
}

void QueryOpenBankBillData::SetOutTradeNo(const string& _outTradeNo)
{
    m_outTradeNo = _outTradeNo;
    m_outTradeNoHasBeenSet = true;
}

bool QueryOpenBankBillData::OutTradeNoHasBeenSet() const
{
    return m_outTradeNoHasBeenSet;
}

string QueryOpenBankBillData::GetTradeNo() const
{
    return m_tradeNo;
}

void QueryOpenBankBillData::SetTradeNo(const string& _tradeNo)
{
    m_tradeNo = _tradeNo;
    m_tradeNoHasBeenSet = true;
}

bool QueryOpenBankBillData::TradeNoHasBeenSet() const
{
    return m_tradeNoHasBeenSet;
}

string QueryOpenBankBillData::GetEndTradeNo() const
{
    return m_endTradeNo;
}

void QueryOpenBankBillData::SetEndTradeNo(const string& _endTradeNo)
{
    m_endTradeNo = _endTradeNo;
    m_endTradeNoHasBeenSet = true;
}

bool QueryOpenBankBillData::EndTradeNoHasBeenSet() const
{
    return m_endTradeNoHasBeenSet;
}

string QueryOpenBankBillData::GetPaymentType() const
{
    return m_paymentType;
}

void QueryOpenBankBillData::SetPaymentType(const string& _paymentType)
{
    m_paymentType = _paymentType;
    m_paymentTypeHasBeenSet = true;
}

bool QueryOpenBankBillData::PaymentTypeHasBeenSet() const
{
    return m_paymentTypeHasBeenSet;
}

string QueryOpenBankBillData::GetBusinessType() const
{
    return m_businessType;
}

void QueryOpenBankBillData::SetBusinessType(const string& _businessType)
{
    m_businessType = _businessType;
    m_businessTypeHasBeenSet = true;
}

bool QueryOpenBankBillData::BusinessTypeHasBeenSet() const
{
    return m_businessTypeHasBeenSet;
}

string QueryOpenBankBillData::GetTradeTime() const
{
    return m_tradeTime;
}

void QueryOpenBankBillData::SetTradeTime(const string& _tradeTime)
{
    m_tradeTime = _tradeTime;
    m_tradeTimeHasBeenSet = true;
}

bool QueryOpenBankBillData::TradeTimeHasBeenSet() const
{
    return m_tradeTimeHasBeenSet;
}

string QueryOpenBankBillData::GetFinishTime() const
{
    return m_finishTime;
}

void QueryOpenBankBillData::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool QueryOpenBankBillData::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string QueryOpenBankBillData::GetTradeStatus() const
{
    return m_tradeStatus;
}

void QueryOpenBankBillData::SetTradeStatus(const string& _tradeStatus)
{
    m_tradeStatus = _tradeStatus;
    m_tradeStatusHasBeenSet = true;
}

bool QueryOpenBankBillData::TradeStatusHasBeenSet() const
{
    return m_tradeStatusHasBeenSet;
}

string QueryOpenBankBillData::GetCheckStatus() const
{
    return m_checkStatus;
}

void QueryOpenBankBillData::SetCheckStatus(const string& _checkStatus)
{
    m_checkStatus = _checkStatus;
    m_checkStatusHasBeenSet = true;
}

bool QueryOpenBankBillData::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

string QueryOpenBankBillData::GetCheckFailReason() const
{
    return m_checkFailReason;
}

void QueryOpenBankBillData::SetCheckFailReason(const string& _checkFailReason)
{
    m_checkFailReason = _checkFailReason;
    m_checkFailReasonHasBeenSet = true;
}

bool QueryOpenBankBillData::CheckFailReasonHasBeenSet() const
{
    return m_checkFailReasonHasBeenSet;
}

string QueryOpenBankBillData::GetOrderAmount() const
{
    return m_orderAmount;
}

void QueryOpenBankBillData::SetOrderAmount(const string& _orderAmount)
{
    m_orderAmount = _orderAmount;
    m_orderAmountHasBeenSet = true;
}

bool QueryOpenBankBillData::OrderAmountHasBeenSet() const
{
    return m_orderAmountHasBeenSet;
}

string QueryOpenBankBillData::GetServiceFee() const
{
    return m_serviceFee;
}

void QueryOpenBankBillData::SetServiceFee(const string& _serviceFee)
{
    m_serviceFee = _serviceFee;
    m_serviceFeeHasBeenSet = true;
}

bool QueryOpenBankBillData::ServiceFeeHasBeenSet() const
{
    return m_serviceFeeHasBeenSet;
}

string QueryOpenBankBillData::GetPayeeAccount() const
{
    return m_payeeAccount;
}

void QueryOpenBankBillData::SetPayeeAccount(const string& _payeeAccount)
{
    m_payeeAccount = _payeeAccount;
    m_payeeAccountHasBeenSet = true;
}

bool QueryOpenBankBillData::PayeeAccountHasBeenSet() const
{
    return m_payeeAccountHasBeenSet;
}

string QueryOpenBankBillData::GetPayeeName() const
{
    return m_payeeName;
}

void QueryOpenBankBillData::SetPayeeName(const string& _payeeName)
{
    m_payeeName = _payeeName;
    m_payeeNameHasBeenSet = true;
}

bool QueryOpenBankBillData::PayeeNameHasBeenSet() const
{
    return m_payeeNameHasBeenSet;
}

string QueryOpenBankBillData::GetPayerAccount() const
{
    return m_payerAccount;
}

void QueryOpenBankBillData::SetPayerAccount(const string& _payerAccount)
{
    m_payerAccount = _payerAccount;
    m_payerAccountHasBeenSet = true;
}

bool QueryOpenBankBillData::PayerAccountHasBeenSet() const
{
    return m_payerAccountHasBeenSet;
}

string QueryOpenBankBillData::GetPayerName() const
{
    return m_payerName;
}

void QueryOpenBankBillData::SetPayerName(const string& _payerName)
{
    m_payerName = _payerName;
    m_payerNameHasBeenSet = true;
}

bool QueryOpenBankBillData::PayerNameHasBeenSet() const
{
    return m_payerNameHasBeenSet;
}

string QueryOpenBankBillData::GetDescription() const
{
    return m_description;
}

void QueryOpenBankBillData::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool QueryOpenBankBillData::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

