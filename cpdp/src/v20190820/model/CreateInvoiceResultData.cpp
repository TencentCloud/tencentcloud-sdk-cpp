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

#include <tencentcloud/cpdp/v20190820/model/CreateInvoiceResultData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateInvoiceResultData::CreateInvoiceResultData() :
    m_stateHasBeenSet(false),
    m_invoiceIdHasBeenSet(false),
    m_orderSnHasBeenSet(false)
{
}

CoreInternalOutcome CreateInvoiceResultData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInvoiceResultData.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("InvoiceId") && !value["InvoiceId"].IsNull())
    {
        if (!value["InvoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInvoiceResultData.InvoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceId = string(value["InvoiceId"].GetString());
        m_invoiceIdHasBeenSet = true;
    }

    if (value.HasMember("OrderSn") && !value["OrderSn"].IsNull())
    {
        if (!value["OrderSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInvoiceResultData.OrderSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderSn = string(value["OrderSn"].GetString());
        m_orderSnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateInvoiceResultData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_invoiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invoiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderSn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderSn.c_str(), allocator).Move(), allocator);
    }

}


int64_t CreateInvoiceResultData::GetState() const
{
    return m_state;
}

void CreateInvoiceResultData::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool CreateInvoiceResultData::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string CreateInvoiceResultData::GetInvoiceId() const
{
    return m_invoiceId;
}

void CreateInvoiceResultData::SetInvoiceId(const string& _invoiceId)
{
    m_invoiceId = _invoiceId;
    m_invoiceIdHasBeenSet = true;
}

bool CreateInvoiceResultData::InvoiceIdHasBeenSet() const
{
    return m_invoiceIdHasBeenSet;
}

string CreateInvoiceResultData::GetOrderSn() const
{
    return m_orderSn;
}

void CreateInvoiceResultData::SetOrderSn(const string& _orderSn)
{
    m_orderSn = _orderSn;
    m_orderSnHasBeenSet = true;
}

bool CreateInvoiceResultData::OrderSnHasBeenSet() const
{
    return m_orderSnHasBeenSet;
}

