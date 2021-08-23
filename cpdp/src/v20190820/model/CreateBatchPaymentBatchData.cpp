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

#include <tencentcloud/cpdp/v20190820/model/CreateBatchPaymentBatchData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateBatchPaymentBatchData::CreateBatchPaymentBatchData() :
    m_orderIdHasBeenSet(false),
    m_tradeSerialNoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false)
{
}

CoreInternalOutcome CreateBatchPaymentBatchData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateBatchPaymentBatchData.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("TradeSerialNo") && !value["TradeSerialNo"].IsNull())
    {
        if (!value["TradeSerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateBatchPaymentBatchData.TradeSerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeSerialNo = string(value["TradeSerialNo"].GetString());
        m_tradeSerialNoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateBatchPaymentBatchData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateBatchPaymentBatchData.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateBatchPaymentBatchData.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("AgentName") && !value["AgentName"].IsNull())
    {
        if (!value["AgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateBatchPaymentBatchData.AgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentName = string(value["AgentName"].GetString());
        m_agentNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateBatchPaymentBatchData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeSerialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeSerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeSerialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentName.c_str(), allocator).Move(), allocator);
    }

}


string CreateBatchPaymentBatchData::GetOrderId() const
{
    return m_orderId;
}

void CreateBatchPaymentBatchData::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool CreateBatchPaymentBatchData::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string CreateBatchPaymentBatchData::GetTradeSerialNo() const
{
    return m_tradeSerialNo;
}

void CreateBatchPaymentBatchData::SetTradeSerialNo(const string& _tradeSerialNo)
{
    m_tradeSerialNo = _tradeSerialNo;
    m_tradeSerialNoHasBeenSet = true;
}

bool CreateBatchPaymentBatchData::TradeSerialNoHasBeenSet() const
{
    return m_tradeSerialNoHasBeenSet;
}

int64_t CreateBatchPaymentBatchData::GetStatus() const
{
    return m_status;
}

void CreateBatchPaymentBatchData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateBatchPaymentBatchData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CreateBatchPaymentBatchData::GetStatusDesc() const
{
    return m_statusDesc;
}

void CreateBatchPaymentBatchData::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool CreateBatchPaymentBatchData::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string CreateBatchPaymentBatchData::GetAgentId() const
{
    return m_agentId;
}

void CreateBatchPaymentBatchData::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool CreateBatchPaymentBatchData::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string CreateBatchPaymentBatchData::GetAgentName() const
{
    return m_agentName;
}

void CreateBatchPaymentBatchData::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool CreateBatchPaymentBatchData::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

