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

#include <tencentcloud/cpdp/v20190820/model/QuerySinglePaymentResultData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QuerySinglePaymentResultData::QuerySinglePaymentResultData() :
    m_tradeSerialNoHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_tradeStatusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_tradeStatusDescHasBeenSet(false)
{
}

CoreInternalOutcome QuerySinglePaymentResultData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TradeSerialNo") && !value["TradeSerialNo"].IsNull())
    {
        if (!value["TradeSerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySinglePaymentResultData.TradeSerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeSerialNo = string(value["TradeSerialNo"].GetString());
        m_tradeSerialNoHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySinglePaymentResultData.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("TradeStatus") && !value["TradeStatus"].IsNull())
    {
        if (!value["TradeStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySinglePaymentResultData.TradeStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tradeStatus = value["TradeStatus"].GetInt64();
        m_tradeStatusHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySinglePaymentResultData.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySinglePaymentResultData.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("AgentName") && !value["AgentName"].IsNull())
    {
        if (!value["AgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySinglePaymentResultData.AgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentName = string(value["AgentName"].GetString());
        m_agentNameHasBeenSet = true;
    }

    if (value.HasMember("TradeStatusDesc") && !value["TradeStatusDesc"].IsNull())
    {
        if (!value["TradeStatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySinglePaymentResultData.TradeStatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeStatusDesc = string(value["TradeStatusDesc"].GetString());
        m_tradeStatusDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuerySinglePaymentResultData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tradeSerialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeSerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeSerialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tradeStatus, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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

    if (m_tradeStatusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeStatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeStatusDesc.c_str(), allocator).Move(), allocator);
    }

}


string QuerySinglePaymentResultData::GetTradeSerialNo() const
{
    return m_tradeSerialNo;
}

void QuerySinglePaymentResultData::SetTradeSerialNo(const string& _tradeSerialNo)
{
    m_tradeSerialNo = _tradeSerialNo;
    m_tradeSerialNoHasBeenSet = true;
}

bool QuerySinglePaymentResultData::TradeSerialNoHasBeenSet() const
{
    return m_tradeSerialNoHasBeenSet;
}

string QuerySinglePaymentResultData::GetOrderId() const
{
    return m_orderId;
}

void QuerySinglePaymentResultData::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool QuerySinglePaymentResultData::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

int64_t QuerySinglePaymentResultData::GetTradeStatus() const
{
    return m_tradeStatus;
}

void QuerySinglePaymentResultData::SetTradeStatus(const int64_t& _tradeStatus)
{
    m_tradeStatus = _tradeStatus;
    m_tradeStatusHasBeenSet = true;
}

bool QuerySinglePaymentResultData::TradeStatusHasBeenSet() const
{
    return m_tradeStatusHasBeenSet;
}

string QuerySinglePaymentResultData::GetRemark() const
{
    return m_remark;
}

void QuerySinglePaymentResultData::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool QuerySinglePaymentResultData::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string QuerySinglePaymentResultData::GetAgentId() const
{
    return m_agentId;
}

void QuerySinglePaymentResultData::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool QuerySinglePaymentResultData::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string QuerySinglePaymentResultData::GetAgentName() const
{
    return m_agentName;
}

void QuerySinglePaymentResultData::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool QuerySinglePaymentResultData::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

string QuerySinglePaymentResultData::GetTradeStatusDesc() const
{
    return m_tradeStatusDesc;
}

void QuerySinglePaymentResultData::SetTradeStatusDesc(const string& _tradeStatusDesc)
{
    m_tradeStatusDesc = _tradeStatusDesc;
    m_tradeStatusDescHasBeenSet = true;
}

bool QuerySinglePaymentResultData::TradeStatusDescHasBeenSet() const
{
    return m_tradeStatusDescHasBeenSet;
}

