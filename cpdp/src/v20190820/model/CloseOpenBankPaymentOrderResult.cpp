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

#include <tencentcloud/cpdp/v20190820/model/CloseOpenBankPaymentOrderResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CloseOpenBankPaymentOrderResult::CloseOpenBankPaymentOrderResult() :
    m_outOrderIdHasBeenSet(false),
    m_channelOrderIdHasBeenSet(false),
    m_orderStatusHasBeenSet(false)
{
}

CoreInternalOutcome CloseOpenBankPaymentOrderResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutOrderId") && !value["OutOrderId"].IsNull())
    {
        if (!value["OutOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloseOpenBankPaymentOrderResult.OutOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outOrderId = string(value["OutOrderId"].GetString());
        m_outOrderIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelOrderId") && !value["ChannelOrderId"].IsNull())
    {
        if (!value["ChannelOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloseOpenBankPaymentOrderResult.ChannelOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelOrderId = string(value["ChannelOrderId"].GetString());
        m_channelOrderIdHasBeenSet = true;
    }

    if (value.HasMember("OrderStatus") && !value["OrderStatus"].IsNull())
    {
        if (!value["OrderStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloseOpenBankPaymentOrderResult.OrderStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderStatus = string(value["OrderStatus"].GetString());
        m_orderStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloseOpenBankPaymentOrderResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_orderStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderStatus.c_str(), allocator).Move(), allocator);
    }

}


string CloseOpenBankPaymentOrderResult::GetOutOrderId() const
{
    return m_outOrderId;
}

void CloseOpenBankPaymentOrderResult::SetOutOrderId(const string& _outOrderId)
{
    m_outOrderId = _outOrderId;
    m_outOrderIdHasBeenSet = true;
}

bool CloseOpenBankPaymentOrderResult::OutOrderIdHasBeenSet() const
{
    return m_outOrderIdHasBeenSet;
}

string CloseOpenBankPaymentOrderResult::GetChannelOrderId() const
{
    return m_channelOrderId;
}

void CloseOpenBankPaymentOrderResult::SetChannelOrderId(const string& _channelOrderId)
{
    m_channelOrderId = _channelOrderId;
    m_channelOrderIdHasBeenSet = true;
}

bool CloseOpenBankPaymentOrderResult::ChannelOrderIdHasBeenSet() const
{
    return m_channelOrderIdHasBeenSet;
}

string CloseOpenBankPaymentOrderResult::GetOrderStatus() const
{
    return m_orderStatus;
}

void CloseOpenBankPaymentOrderResult::SetOrderStatus(const string& _orderStatus)
{
    m_orderStatus = _orderStatus;
    m_orderStatusHasBeenSet = true;
}

bool CloseOpenBankPaymentOrderResult::OrderStatusHasBeenSet() const
{
    return m_orderStatusHasBeenSet;
}

