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

#include <tencentcloud/cpdp/v20190820/model/QueryBatchPaymentResultDataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryBatchPaymentResultDataInfo::QueryBatchPaymentResultDataInfo() :
    m_orderIdHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_transferAmountHasBeenSet(false)
{
}

CoreInternalOutcome QueryBatchPaymentResultDataInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryBatchPaymentResultDataInfo.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryBatchPaymentResultDataInfo.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("AgentName") && !value["AgentName"].IsNull())
    {
        if (!value["AgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryBatchPaymentResultDataInfo.AgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentName = string(value["AgentName"].GetString());
        m_agentNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryBatchPaymentResultDataInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryBatchPaymentResultDataInfo.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("TransferAmount") && !value["TransferAmount"].IsNull())
    {
        if (!value["TransferAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryBatchPaymentResultDataInfo.TransferAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transferAmount = value["TransferAmount"].GetInt64();
        m_transferAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryBatchPaymentResultDataInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
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

    if (m_transferAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transferAmount, allocator);
    }

}


string QueryBatchPaymentResultDataInfo::GetOrderId() const
{
    return m_orderId;
}

void QueryBatchPaymentResultDataInfo::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool QueryBatchPaymentResultDataInfo::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string QueryBatchPaymentResultDataInfo::GetAgentId() const
{
    return m_agentId;
}

void QueryBatchPaymentResultDataInfo::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool QueryBatchPaymentResultDataInfo::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string QueryBatchPaymentResultDataInfo::GetAgentName() const
{
    return m_agentName;
}

void QueryBatchPaymentResultDataInfo::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool QueryBatchPaymentResultDataInfo::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

int64_t QueryBatchPaymentResultDataInfo::GetStatus() const
{
    return m_status;
}

void QueryBatchPaymentResultDataInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool QueryBatchPaymentResultDataInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string QueryBatchPaymentResultDataInfo::GetStatusDesc() const
{
    return m_statusDesc;
}

void QueryBatchPaymentResultDataInfo::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool QueryBatchPaymentResultDataInfo::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

int64_t QueryBatchPaymentResultDataInfo::GetTransferAmount() const
{
    return m_transferAmount;
}

void QueryBatchPaymentResultDataInfo::SetTransferAmount(const int64_t& _transferAmount)
{
    m_transferAmount = _transferAmount;
    m_transferAmountHasBeenSet = true;
}

bool QueryBatchPaymentResultDataInfo::TransferAmountHasBeenSet() const
{
    return m_transferAmountHasBeenSet;
}

