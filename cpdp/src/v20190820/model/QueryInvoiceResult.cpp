/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cpdp/v20190820/model/QueryInvoiceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryInvoiceResult::QueryInvoiceResult() :
    m_messageHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

CoreInternalOutcome QueryInvoiceResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResult.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResult.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResult.Data` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_data.Deserialize(value["Data"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResult.Order` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_order.Deserialize(value["Order"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_orderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryInvoiceResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_data.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_order.ToJsonObject(value[key.c_str()], allocator);
    }

}


string QueryInvoiceResult::GetMessage() const
{
    return m_message;
}

void QueryInvoiceResult::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool QueryInvoiceResult::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t QueryInvoiceResult::GetCode() const
{
    return m_code;
}

void QueryInvoiceResult::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool QueryInvoiceResult::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

QueryInvoiceResultData QueryInvoiceResult::GetData() const
{
    return m_data;
}

void QueryInvoiceResult::SetData(const QueryInvoiceResultData& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool QueryInvoiceResult::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

Order QueryInvoiceResult::GetOrder() const
{
    return m_order;
}

void QueryInvoiceResult::SetOrder(const Order& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool QueryInvoiceResult::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

