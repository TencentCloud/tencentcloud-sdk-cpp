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

#include <tencentcloud/cpdp/v20190820/model/SettlementOrderResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

SettlementOrderResult::SettlementOrderResult() :
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
    m_remarkHasBeenSet(false),
    m_payeeIdHasBeenSet(false),
    m_outUserIdHasBeenSet(false),
    m_operationTypeHasBeenSet(false)
{
}

CoreInternalOutcome SettlementOrderResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IncomeType") && !value["IncomeType"].IsNull())
    {
        if (!value["IncomeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettlementOrderResult.IncomeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incomeType = string(value["IncomeType"].GetString());
        m_incomeTypeHasBeenSet = true;
    }

    if (value.HasMember("AmountBeforeTax") && !value["AmountBeforeTax"].IsNull())
    {
        if (!value["AmountBeforeTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettlementOrderResult.AmountBeforeTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amountBeforeTax = string(value["AmountBeforeTax"].GetString());
        m_amountBeforeTaxHasBeenSet = true;
    }

    if (value.HasMember("AmountAfterTax") && !value["AmountAfterTax"].IsNull())
    {
        if (!value["AmountAfterTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettlementOrderResult.AmountAfterTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amountAfterTax = string(value["AmountAfterTax"].GetString());
        m_amountAfterTaxHasBeenSet = true;
    }

    if (value.HasMember("Tax") && !value["Tax"].IsNull())
    {
        if (!value["Tax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettlementOrderResult.Tax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tax = string(value["Tax"].GetString());
        m_taxHasBeenSet = true;
    }

    if (value.HasMember("OutOrderId") && !value["OutOrderId"].IsNull())
    {
        if (!value["OutOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettlementOrderResult.OutOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outOrderId = string(value["OutOrderId"].GetString());
        m_outOrderIdHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettlementOrderResult.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("InitiateTime") && !value["InitiateTime"].IsNull())
    {
        if (!value["InitiateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettlementOrderResult.InitiateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initiateTime = string(value["InitiateTime"].GetString());
        m_initiateTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettlementOrderResult.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettlementOrderResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettlementOrderResult.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettlementOrderResult.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("PayeeId") && !value["PayeeId"].IsNull())
    {
        if (!value["PayeeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettlementOrderResult.PayeeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payeeId = string(value["PayeeId"].GetString());
        m_payeeIdHasBeenSet = true;
    }

    if (value.HasMember("OutUserId") && !value["OutUserId"].IsNull())
    {
        if (!value["OutUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettlementOrderResult.OutUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outUserId = string(value["OutUserId"].GetString());
        m_outUserIdHasBeenSet = true;
    }

    if (value.HasMember("OperationType") && !value["OperationType"].IsNull())
    {
        if (!value["OperationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettlementOrderResult.OperationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationType = string(value["OperationType"].GetString());
        m_operationTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SettlementOrderResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_payeeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payeeId.c_str(), allocator).Move(), allocator);
    }

    if (m_outUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationType.c_str(), allocator).Move(), allocator);
    }

}


string SettlementOrderResult::GetIncomeType() const
{
    return m_incomeType;
}

void SettlementOrderResult::SetIncomeType(const string& _incomeType)
{
    m_incomeType = _incomeType;
    m_incomeTypeHasBeenSet = true;
}

bool SettlementOrderResult::IncomeTypeHasBeenSet() const
{
    return m_incomeTypeHasBeenSet;
}

string SettlementOrderResult::GetAmountBeforeTax() const
{
    return m_amountBeforeTax;
}

void SettlementOrderResult::SetAmountBeforeTax(const string& _amountBeforeTax)
{
    m_amountBeforeTax = _amountBeforeTax;
    m_amountBeforeTaxHasBeenSet = true;
}

bool SettlementOrderResult::AmountBeforeTaxHasBeenSet() const
{
    return m_amountBeforeTaxHasBeenSet;
}

string SettlementOrderResult::GetAmountAfterTax() const
{
    return m_amountAfterTax;
}

void SettlementOrderResult::SetAmountAfterTax(const string& _amountAfterTax)
{
    m_amountAfterTax = _amountAfterTax;
    m_amountAfterTaxHasBeenSet = true;
}

bool SettlementOrderResult::AmountAfterTaxHasBeenSet() const
{
    return m_amountAfterTaxHasBeenSet;
}

string SettlementOrderResult::GetTax() const
{
    return m_tax;
}

void SettlementOrderResult::SetTax(const string& _tax)
{
    m_tax = _tax;
    m_taxHasBeenSet = true;
}

bool SettlementOrderResult::TaxHasBeenSet() const
{
    return m_taxHasBeenSet;
}

string SettlementOrderResult::GetOutOrderId() const
{
    return m_outOrderId;
}

void SettlementOrderResult::SetOutOrderId(const string& _outOrderId)
{
    m_outOrderId = _outOrderId;
    m_outOrderIdHasBeenSet = true;
}

bool SettlementOrderResult::OutOrderIdHasBeenSet() const
{
    return m_outOrderIdHasBeenSet;
}

string SettlementOrderResult::GetOrderId() const
{
    return m_orderId;
}

void SettlementOrderResult::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool SettlementOrderResult::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string SettlementOrderResult::GetInitiateTime() const
{
    return m_initiateTime;
}

void SettlementOrderResult::SetInitiateTime(const string& _initiateTime)
{
    m_initiateTime = _initiateTime;
    m_initiateTimeHasBeenSet = true;
}

bool SettlementOrderResult::InitiateTimeHasBeenSet() const
{
    return m_initiateTimeHasBeenSet;
}

string SettlementOrderResult::GetFinishTime() const
{
    return m_finishTime;
}

void SettlementOrderResult::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool SettlementOrderResult::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string SettlementOrderResult::GetStatus() const
{
    return m_status;
}

void SettlementOrderResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SettlementOrderResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SettlementOrderResult::GetStatusDesc() const
{
    return m_statusDesc;
}

void SettlementOrderResult::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool SettlementOrderResult::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string SettlementOrderResult::GetRemark() const
{
    return m_remark;
}

void SettlementOrderResult::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool SettlementOrderResult::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string SettlementOrderResult::GetPayeeId() const
{
    return m_payeeId;
}

void SettlementOrderResult::SetPayeeId(const string& _payeeId)
{
    m_payeeId = _payeeId;
    m_payeeIdHasBeenSet = true;
}

bool SettlementOrderResult::PayeeIdHasBeenSet() const
{
    return m_payeeIdHasBeenSet;
}

string SettlementOrderResult::GetOutUserId() const
{
    return m_outUserId;
}

void SettlementOrderResult::SetOutUserId(const string& _outUserId)
{
    m_outUserId = _outUserId;
    m_outUserIdHasBeenSet = true;
}

bool SettlementOrderResult::OutUserIdHasBeenSet() const
{
    return m_outUserIdHasBeenSet;
}

string SettlementOrderResult::GetOperationType() const
{
    return m_operationType;
}

void SettlementOrderResult::SetOperationType(const string& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool SettlementOrderResult::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

