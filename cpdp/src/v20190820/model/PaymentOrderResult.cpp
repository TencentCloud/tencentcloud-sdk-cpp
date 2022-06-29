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

#include <tencentcloud/cpdp/v20190820/model/PaymentOrderResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

PaymentOrderResult::PaymentOrderResult() :
    m_incomeTypeHasBeenSet(false),
    m_amountBeforeTaxHasBeenSet(false),
    m_amountAfterTaxHasBeenSet(false),
    m_taxHasBeenSet(false),
    m_outOrderIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_initiateTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome PaymentOrderResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IncomeType") && !value["IncomeType"].IsNull())
    {
        if (!value["IncomeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentOrderResult.IncomeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incomeType = string(value["IncomeType"].GetString());
        m_incomeTypeHasBeenSet = true;
    }

    if (value.HasMember("AmountBeforeTax") && !value["AmountBeforeTax"].IsNull())
    {
        if (!value["AmountBeforeTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentOrderResult.AmountBeforeTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amountBeforeTax = string(value["AmountBeforeTax"].GetString());
        m_amountBeforeTaxHasBeenSet = true;
    }

    if (value.HasMember("AmountAfterTax") && !value["AmountAfterTax"].IsNull())
    {
        if (!value["AmountAfterTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentOrderResult.AmountAfterTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amountAfterTax = string(value["AmountAfterTax"].GetString());
        m_amountAfterTaxHasBeenSet = true;
    }

    if (value.HasMember("Tax") && !value["Tax"].IsNull())
    {
        if (!value["Tax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentOrderResult.Tax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tax = string(value["Tax"].GetString());
        m_taxHasBeenSet = true;
    }

    if (value.HasMember("OutOrderId") && !value["OutOrderId"].IsNull())
    {
        if (!value["OutOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentOrderResult.OutOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outOrderId = string(value["OutOrderId"].GetString());
        m_outOrderIdHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentOrderResult.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("InitiateTime") && !value["InitiateTime"].IsNull())
    {
        if (!value["InitiateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentOrderResult.InitiateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initiateTime = string(value["InitiateTime"].GetString());
        m_initiateTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentOrderResult.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentOrderResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentOrderResult.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentOrderResult.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PaymentOrderResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_incomeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncomeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_incomeType.c_str(), allocator).Move(), allocator);
    }

    if (m_amountBeforeTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountBeforeTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amountBeforeTax.c_str(), allocator).Move(), allocator);
    }

    if (m_amountAfterTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountAfterTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amountAfterTax.c_str(), allocator).Move(), allocator);
    }

    if (m_taxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tax.c_str(), allocator).Move(), allocator);
    }

    if (m_outOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_initiateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitiateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_initiateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string PaymentOrderResult::GetIncomeType() const
{
    return m_incomeType;
}

void PaymentOrderResult::SetIncomeType(const string& _incomeType)
{
    m_incomeType = _incomeType;
    m_incomeTypeHasBeenSet = true;
}

bool PaymentOrderResult::IncomeTypeHasBeenSet() const
{
    return m_incomeTypeHasBeenSet;
}

string PaymentOrderResult::GetAmountBeforeTax() const
{
    return m_amountBeforeTax;
}

void PaymentOrderResult::SetAmountBeforeTax(const string& _amountBeforeTax)
{
    m_amountBeforeTax = _amountBeforeTax;
    m_amountBeforeTaxHasBeenSet = true;
}

bool PaymentOrderResult::AmountBeforeTaxHasBeenSet() const
{
    return m_amountBeforeTaxHasBeenSet;
}

string PaymentOrderResult::GetAmountAfterTax() const
{
    return m_amountAfterTax;
}

void PaymentOrderResult::SetAmountAfterTax(const string& _amountAfterTax)
{
    m_amountAfterTax = _amountAfterTax;
    m_amountAfterTaxHasBeenSet = true;
}

bool PaymentOrderResult::AmountAfterTaxHasBeenSet() const
{
    return m_amountAfterTaxHasBeenSet;
}

string PaymentOrderResult::GetTax() const
{
    return m_tax;
}

void PaymentOrderResult::SetTax(const string& _tax)
{
    m_tax = _tax;
    m_taxHasBeenSet = true;
}

bool PaymentOrderResult::TaxHasBeenSet() const
{
    return m_taxHasBeenSet;
}

string PaymentOrderResult::GetOutOrderId() const
{
    return m_outOrderId;
}

void PaymentOrderResult::SetOutOrderId(const string& _outOrderId)
{
    m_outOrderId = _outOrderId;
    m_outOrderIdHasBeenSet = true;
}

bool PaymentOrderResult::OutOrderIdHasBeenSet() const
{
    return m_outOrderIdHasBeenSet;
}

string PaymentOrderResult::GetOrderId() const
{
    return m_orderId;
}

void PaymentOrderResult::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool PaymentOrderResult::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string PaymentOrderResult::GetInitiateTime() const
{
    return m_initiateTime;
}

void PaymentOrderResult::SetInitiateTime(const string& _initiateTime)
{
    m_initiateTime = _initiateTime;
    m_initiateTimeHasBeenSet = true;
}

bool PaymentOrderResult::InitiateTimeHasBeenSet() const
{
    return m_initiateTimeHasBeenSet;
}

string PaymentOrderResult::GetFinishTime() const
{
    return m_finishTime;
}

void PaymentOrderResult::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool PaymentOrderResult::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string PaymentOrderResult::GetStatus() const
{
    return m_status;
}

void PaymentOrderResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PaymentOrderResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PaymentOrderResult::GetStatusDesc() const
{
    return m_statusDesc;
}

void PaymentOrderResult::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool PaymentOrderResult::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string PaymentOrderResult::GetRemark() const
{
    return m_remark;
}

void PaymentOrderResult::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool PaymentOrderResult::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

