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

#include <tencentcloud/cpdp/v20190820/model/DistributeMultiApplyResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

DistributeMultiApplyResult::DistributeMultiApplyResult() :
    m_statusHasBeenSet(false),
    m_distributeNoHasBeenSet(false),
    m_inDateHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_outDistributeNoHasBeenSet(false),
    m_orderNoHasBeenSet(false)
{
}

CoreInternalOutcome DistributeMultiApplyResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributeMultiApplyResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DistributeNo") && !value["DistributeNo"].IsNull())
    {
        if (!value["DistributeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributeMultiApplyResult.DistributeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_distributeNo = string(value["DistributeNo"].GetString());
        m_distributeNoHasBeenSet = true;
    }

    if (value.HasMember("InDate") && !value["InDate"].IsNull())
    {
        if (!value["InDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributeMultiApplyResult.InDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inDate = string(value["InDate"].GetString());
        m_inDateHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributeMultiApplyResult.Amount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amount = string(value["Amount"].GetString());
        m_amountHasBeenSet = true;
    }

    if (value.HasMember("OutDistributeNo") && !value["OutDistributeNo"].IsNull())
    {
        if (!value["OutDistributeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributeMultiApplyResult.OutDistributeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outDistributeNo = string(value["OutDistributeNo"].GetString());
        m_outDistributeNoHasBeenSet = true;
    }

    if (value.HasMember("OrderNo") && !value["OrderNo"].IsNull())
    {
        if (!value["OrderNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributeMultiApplyResult.OrderNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderNo = string(value["OrderNo"].GetString());
        m_orderNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DistributeMultiApplyResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_distributeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistributeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_distributeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_inDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inDate.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amount.c_str(), allocator).Move(), allocator);
    }

    if (m_outDistributeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutDistributeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outDistributeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_orderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderNo.c_str(), allocator).Move(), allocator);
    }

}


string DistributeMultiApplyResult::GetStatus() const
{
    return m_status;
}

void DistributeMultiApplyResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DistributeMultiApplyResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DistributeMultiApplyResult::GetDistributeNo() const
{
    return m_distributeNo;
}

void DistributeMultiApplyResult::SetDistributeNo(const string& _distributeNo)
{
    m_distributeNo = _distributeNo;
    m_distributeNoHasBeenSet = true;
}

bool DistributeMultiApplyResult::DistributeNoHasBeenSet() const
{
    return m_distributeNoHasBeenSet;
}

string DistributeMultiApplyResult::GetInDate() const
{
    return m_inDate;
}

void DistributeMultiApplyResult::SetInDate(const string& _inDate)
{
    m_inDate = _inDate;
    m_inDateHasBeenSet = true;
}

bool DistributeMultiApplyResult::InDateHasBeenSet() const
{
    return m_inDateHasBeenSet;
}

string DistributeMultiApplyResult::GetAmount() const
{
    return m_amount;
}

void DistributeMultiApplyResult::SetAmount(const string& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool DistributeMultiApplyResult::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

string DistributeMultiApplyResult::GetOutDistributeNo() const
{
    return m_outDistributeNo;
}

void DistributeMultiApplyResult::SetOutDistributeNo(const string& _outDistributeNo)
{
    m_outDistributeNo = _outDistributeNo;
    m_outDistributeNoHasBeenSet = true;
}

bool DistributeMultiApplyResult::OutDistributeNoHasBeenSet() const
{
    return m_outDistributeNoHasBeenSet;
}

string DistributeMultiApplyResult::GetOrderNo() const
{
    return m_orderNo;
}

void DistributeMultiApplyResult::SetOrderNo(const string& _orderNo)
{
    m_orderNo = _orderNo;
    m_orderNoHasBeenSet = true;
}

bool DistributeMultiApplyResult::OrderNoHasBeenSet() const
{
    return m_orderNoHasBeenSet;
}

