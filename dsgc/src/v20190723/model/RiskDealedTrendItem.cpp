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

#include <tencentcloud/dsgc/v20190723/model/RiskDealedTrendItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

RiskDealedTrendItem::RiskDealedTrendItem() :
    m_dateHasBeenSet(false),
    m_unhandledHasBeenSet(false),
    m_handledHasBeenSet(false),
    m_newDiscoveryHandledHasBeenSet(false)
{
}

CoreInternalOutcome RiskDealedTrendItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDealedTrendItem.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("Unhandled") && !value["Unhandled"].IsNull())
    {
        if (!value["Unhandled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDealedTrendItem.Unhandled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhandled = value["Unhandled"].GetUint64();
        m_unhandledHasBeenSet = true;
    }

    if (value.HasMember("Handled") && !value["Handled"].IsNull())
    {
        if (!value["Handled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDealedTrendItem.Handled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_handled = value["Handled"].GetUint64();
        m_handledHasBeenSet = true;
    }

    if (value.HasMember("NewDiscoveryHandled") && !value["NewDiscoveryHandled"].IsNull())
    {
        if (!value["NewDiscoveryHandled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDealedTrendItem.NewDiscoveryHandled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_newDiscoveryHandled = value["NewDiscoveryHandled"].GetUint64();
        m_newDiscoveryHandledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskDealedTrendItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_unhandledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unhandled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhandled, allocator);
    }

    if (m_handledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Handled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handled, allocator);
    }

    if (m_newDiscoveryHandledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDiscoveryHandled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newDiscoveryHandled, allocator);
    }

}


string RiskDealedTrendItem::GetDate() const
{
    return m_date;
}

void RiskDealedTrendItem::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool RiskDealedTrendItem::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

uint64_t RiskDealedTrendItem::GetUnhandled() const
{
    return m_unhandled;
}

void RiskDealedTrendItem::SetUnhandled(const uint64_t& _unhandled)
{
    m_unhandled = _unhandled;
    m_unhandledHasBeenSet = true;
}

bool RiskDealedTrendItem::UnhandledHasBeenSet() const
{
    return m_unhandledHasBeenSet;
}

uint64_t RiskDealedTrendItem::GetHandled() const
{
    return m_handled;
}

void RiskDealedTrendItem::SetHandled(const uint64_t& _handled)
{
    m_handled = _handled;
    m_handledHasBeenSet = true;
}

bool RiskDealedTrendItem::HandledHasBeenSet() const
{
    return m_handledHasBeenSet;
}

uint64_t RiskDealedTrendItem::GetNewDiscoveryHandled() const
{
    return m_newDiscoveryHandled;
}

void RiskDealedTrendItem::SetNewDiscoveryHandled(const uint64_t& _newDiscoveryHandled)
{
    m_newDiscoveryHandled = _newDiscoveryHandled;
    m_newDiscoveryHandledHasBeenSet = true;
}

bool RiskDealedTrendItem::NewDiscoveryHandledHasBeenSet() const
{
    return m_newDiscoveryHandledHasBeenSet;
}

