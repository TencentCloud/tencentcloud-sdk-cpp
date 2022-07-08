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

#include <tencentcloud/cpdp/v20190820/model/FreezeOrderResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

FreezeOrderResult::FreezeOrderResult() :
    m_amountBeforeTaxHasBeenSet(false),
    m_incomeTypeHasBeenSet(false),
    m_outOrderIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_operationTypeHasBeenSet(false),
    m_initiateTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_payeeIdHasBeenSet(false),
    m_outUserIdHasBeenSet(false)
{
}

CoreInternalOutcome FreezeOrderResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AmountBeforeTax") && !value["AmountBeforeTax"].IsNull())
    {
        if (!value["AmountBeforeTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FreezeOrderResult.AmountBeforeTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amountBeforeTax = string(value["AmountBeforeTax"].GetString());
        m_amountBeforeTaxHasBeenSet = true;
    }

    if (value.HasMember("IncomeType") && !value["IncomeType"].IsNull())
    {
        if (!value["IncomeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FreezeOrderResult.IncomeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incomeType = string(value["IncomeType"].GetString());
        m_incomeTypeHasBeenSet = true;
    }

    if (value.HasMember("OutOrderId") && !value["OutOrderId"].IsNull())
    {
        if (!value["OutOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FreezeOrderResult.OutOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outOrderId = string(value["OutOrderId"].GetString());
        m_outOrderIdHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FreezeOrderResult.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("OperationType") && !value["OperationType"].IsNull())
    {
        if (!value["OperationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FreezeOrderResult.OperationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationType = string(value["OperationType"].GetString());
        m_operationTypeHasBeenSet = true;
    }

    if (value.HasMember("InitiateTime") && !value["InitiateTime"].IsNull())
    {
        if (!value["InitiateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FreezeOrderResult.InitiateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initiateTime = string(value["InitiateTime"].GetString());
        m_initiateTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FreezeOrderResult.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FreezeOrderResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FreezeOrderResult.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FreezeOrderResult.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("PayeeId") && !value["PayeeId"].IsNull())
    {
        if (!value["PayeeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FreezeOrderResult.PayeeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payeeId = string(value["PayeeId"].GetString());
        m_payeeIdHasBeenSet = true;
    }

    if (value.HasMember("OutUserId") && !value["OutUserId"].IsNull())
    {
        if (!value["OutUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FreezeOrderResult.OutUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outUserId = string(value["OutUserId"].GetString());
        m_outUserIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FreezeOrderResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_amountBeforeTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountBeforeTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amountBeforeTax.c_str(), allocator).Move(), allocator);
    }

    if (m_incomeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncomeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_incomeType.c_str(), allocator).Move(), allocator);
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

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationType.c_str(), allocator).Move(), allocator);
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

}


string FreezeOrderResult::GetAmountBeforeTax() const
{
    return m_amountBeforeTax;
}

void FreezeOrderResult::SetAmountBeforeTax(const string& _amountBeforeTax)
{
    m_amountBeforeTax = _amountBeforeTax;
    m_amountBeforeTaxHasBeenSet = true;
}

bool FreezeOrderResult::AmountBeforeTaxHasBeenSet() const
{
    return m_amountBeforeTaxHasBeenSet;
}

string FreezeOrderResult::GetIncomeType() const
{
    return m_incomeType;
}

void FreezeOrderResult::SetIncomeType(const string& _incomeType)
{
    m_incomeType = _incomeType;
    m_incomeTypeHasBeenSet = true;
}

bool FreezeOrderResult::IncomeTypeHasBeenSet() const
{
    return m_incomeTypeHasBeenSet;
}

string FreezeOrderResult::GetOutOrderId() const
{
    return m_outOrderId;
}

void FreezeOrderResult::SetOutOrderId(const string& _outOrderId)
{
    m_outOrderId = _outOrderId;
    m_outOrderIdHasBeenSet = true;
}

bool FreezeOrderResult::OutOrderIdHasBeenSet() const
{
    return m_outOrderIdHasBeenSet;
}

string FreezeOrderResult::GetOrderId() const
{
    return m_orderId;
}

void FreezeOrderResult::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool FreezeOrderResult::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string FreezeOrderResult::GetOperationType() const
{
    return m_operationType;
}

void FreezeOrderResult::SetOperationType(const string& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool FreezeOrderResult::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

string FreezeOrderResult::GetInitiateTime() const
{
    return m_initiateTime;
}

void FreezeOrderResult::SetInitiateTime(const string& _initiateTime)
{
    m_initiateTime = _initiateTime;
    m_initiateTimeHasBeenSet = true;
}

bool FreezeOrderResult::InitiateTimeHasBeenSet() const
{
    return m_initiateTimeHasBeenSet;
}

string FreezeOrderResult::GetFinishTime() const
{
    return m_finishTime;
}

void FreezeOrderResult::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool FreezeOrderResult::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string FreezeOrderResult::GetStatus() const
{
    return m_status;
}

void FreezeOrderResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FreezeOrderResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string FreezeOrderResult::GetStatusDesc() const
{
    return m_statusDesc;
}

void FreezeOrderResult::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool FreezeOrderResult::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string FreezeOrderResult::GetRemark() const
{
    return m_remark;
}

void FreezeOrderResult::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool FreezeOrderResult::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string FreezeOrderResult::GetPayeeId() const
{
    return m_payeeId;
}

void FreezeOrderResult::SetPayeeId(const string& _payeeId)
{
    m_payeeId = _payeeId;
    m_payeeIdHasBeenSet = true;
}

bool FreezeOrderResult::PayeeIdHasBeenSet() const
{
    return m_payeeIdHasBeenSet;
}

string FreezeOrderResult::GetOutUserId() const
{
    return m_outUserId;
}

void FreezeOrderResult::SetOutUserId(const string& _outUserId)
{
    m_outUserId = _outUserId;
    m_outUserIdHasBeenSet = true;
}

bool FreezeOrderResult::OutUserIdHasBeenSet() const
{
    return m_outUserIdHasBeenSet;
}

