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

#include <tencentcloud/csip/v20221121/model/RiskCallRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RiskCallRecord::RiskCallRecord() :
    m_eventNameHasBeenSet(false),
    m_eventDescCNHasBeenSet(false),
    m_eventDescENHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_productNameCNHasBeenSet(false),
    m_callCountHasBeenSet(false)
{
}

CoreInternalOutcome RiskCallRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCallRecord.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("EventDescCN") && !value["EventDescCN"].IsNull())
    {
        if (!value["EventDescCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCallRecord.EventDescCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventDescCN = string(value["EventDescCN"].GetString());
        m_eventDescCNHasBeenSet = true;
    }

    if (value.HasMember("EventDescEN") && !value["EventDescEN"].IsNull())
    {
        if (!value["EventDescEN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCallRecord.EventDescEN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventDescEN = string(value["EventDescEN"].GetString());
        m_eventDescENHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCallRecord.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ProductNameCN") && !value["ProductNameCN"].IsNull())
    {
        if (!value["ProductNameCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCallRecord.ProductNameCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productNameCN = string(value["ProductNameCN"].GetString());
        m_productNameCNHasBeenSet = true;
    }

    if (value.HasMember("CallCount") && !value["CallCount"].IsNull())
    {
        if (!value["CallCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCallRecord.CallCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_callCount = value["CallCount"].GetInt64();
        m_callCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskCallRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventDescCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventDescCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventDescCN.c_str(), allocator).Move(), allocator);
    }

    if (m_eventDescENHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventDescEN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventDescEN.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductNameCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productNameCN.c_str(), allocator).Move(), allocator);
    }

    if (m_callCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callCount, allocator);
    }

}


string RiskCallRecord::GetEventName() const
{
    return m_eventName;
}

void RiskCallRecord::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool RiskCallRecord::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string RiskCallRecord::GetEventDescCN() const
{
    return m_eventDescCN;
}

void RiskCallRecord::SetEventDescCN(const string& _eventDescCN)
{
    m_eventDescCN = _eventDescCN;
    m_eventDescCNHasBeenSet = true;
}

bool RiskCallRecord::EventDescCNHasBeenSet() const
{
    return m_eventDescCNHasBeenSet;
}

string RiskCallRecord::GetEventDescEN() const
{
    return m_eventDescEN;
}

void RiskCallRecord::SetEventDescEN(const string& _eventDescEN)
{
    m_eventDescEN = _eventDescEN;
    m_eventDescENHasBeenSet = true;
}

bool RiskCallRecord::EventDescENHasBeenSet() const
{
    return m_eventDescENHasBeenSet;
}

string RiskCallRecord::GetProductName() const
{
    return m_productName;
}

void RiskCallRecord::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool RiskCallRecord::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string RiskCallRecord::GetProductNameCN() const
{
    return m_productNameCN;
}

void RiskCallRecord::SetProductNameCN(const string& _productNameCN)
{
    m_productNameCN = _productNameCN;
    m_productNameCNHasBeenSet = true;
}

bool RiskCallRecord::ProductNameCNHasBeenSet() const
{
    return m_productNameCNHasBeenSet;
}

int64_t RiskCallRecord::GetCallCount() const
{
    return m_callCount;
}

void RiskCallRecord::SetCallCount(const int64_t& _callCount)
{
    m_callCount = _callCount;
    m_callCountHasBeenSet = true;
}

bool RiskCallRecord::CallCountHasBeenSet() const
{
    return m_callCountHasBeenSet;
}

