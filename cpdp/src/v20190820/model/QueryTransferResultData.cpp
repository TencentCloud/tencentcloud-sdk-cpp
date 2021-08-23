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

#include <tencentcloud/cpdp/v20190820/model/QueryTransferResultData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryTransferResultData::QueryTransferResultData() :
    m_tradeSerialNoHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_tradeStatusHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome QueryTransferResultData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TradeSerialNo") && !value["TradeSerialNo"].IsNull())
    {
        if (!value["TradeSerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTransferResultData.TradeSerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeSerialNo = string(value["TradeSerialNo"].GetString());
        m_tradeSerialNoHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTransferResultData.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("TradeStatus") && !value["TradeStatus"].IsNull())
    {
        if (!value["TradeStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTransferResultData.TradeStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tradeStatus = value["TradeStatus"].GetInt64();
        m_tradeStatusHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTransferResultData.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryTransferResultData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string QueryTransferResultData::GetTradeSerialNo() const
{
    return m_tradeSerialNo;
}

void QueryTransferResultData::SetTradeSerialNo(const string& _tradeSerialNo)
{
    m_tradeSerialNo = _tradeSerialNo;
    m_tradeSerialNoHasBeenSet = true;
}

bool QueryTransferResultData::TradeSerialNoHasBeenSet() const
{
    return m_tradeSerialNoHasBeenSet;
}

string QueryTransferResultData::GetOrderId() const
{
    return m_orderId;
}

void QueryTransferResultData::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool QueryTransferResultData::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

int64_t QueryTransferResultData::GetTradeStatus() const
{
    return m_tradeStatus;
}

void QueryTransferResultData::SetTradeStatus(const int64_t& _tradeStatus)
{
    m_tradeStatus = _tradeStatus;
    m_tradeStatusHasBeenSet = true;
}

bool QueryTransferResultData::TradeStatusHasBeenSet() const
{
    return m_tradeStatusHasBeenSet;
}

string QueryTransferResultData::GetRemark() const
{
    return m_remark;
}

void QueryTransferResultData::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool QueryTransferResultData::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

