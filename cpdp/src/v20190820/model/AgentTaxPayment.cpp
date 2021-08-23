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

#include <tencentcloud/cpdp/v20190820/model/AgentTaxPayment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

AgentTaxPayment::AgentTaxPayment() :
    m_anchorIdHasBeenSet(false),
    m_anchorNameHasBeenSet(false),
    m_anchorIDCardHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_taxHasBeenSet(false)
{
}

CoreInternalOutcome AgentTaxPayment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AnchorId") && !value["AnchorId"].IsNull())
    {
        if (!value["AnchorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTaxPayment.AnchorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_anchorId = string(value["AnchorId"].GetString());
        m_anchorIdHasBeenSet = true;
    }

    if (value.HasMember("AnchorName") && !value["AnchorName"].IsNull())
    {
        if (!value["AnchorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTaxPayment.AnchorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_anchorName = string(value["AnchorName"].GetString());
        m_anchorNameHasBeenSet = true;
    }

    if (value.HasMember("AnchorIDCard") && !value["AnchorIDCard"].IsNull())
    {
        if (!value["AnchorIDCard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTaxPayment.AnchorIDCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_anchorIDCard = string(value["AnchorIDCard"].GetString());
        m_anchorIDCardHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTaxPayment.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTaxPayment.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTaxPayment.Amount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_amount = value["Amount"].GetInt64();
        m_amountHasBeenSet = true;
    }

    if (value.HasMember("Tax") && !value["Tax"].IsNull())
    {
        if (!value["Tax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTaxPayment.Tax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tax = value["Tax"].GetInt64();
        m_taxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentTaxPayment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_anchorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_anchorId.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_anchorName.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorIDCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorIDCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_anchorIDCard.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amount, allocator);
    }

    if (m_taxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tax, allocator);
    }

}


string AgentTaxPayment::GetAnchorId() const
{
    return m_anchorId;
}

void AgentTaxPayment::SetAnchorId(const string& _anchorId)
{
    m_anchorId = _anchorId;
    m_anchorIdHasBeenSet = true;
}

bool AgentTaxPayment::AnchorIdHasBeenSet() const
{
    return m_anchorIdHasBeenSet;
}

string AgentTaxPayment::GetAnchorName() const
{
    return m_anchorName;
}

void AgentTaxPayment::SetAnchorName(const string& _anchorName)
{
    m_anchorName = _anchorName;
    m_anchorNameHasBeenSet = true;
}

bool AgentTaxPayment::AnchorNameHasBeenSet() const
{
    return m_anchorNameHasBeenSet;
}

string AgentTaxPayment::GetAnchorIDCard() const
{
    return m_anchorIDCard;
}

void AgentTaxPayment::SetAnchorIDCard(const string& _anchorIDCard)
{
    m_anchorIDCard = _anchorIDCard;
    m_anchorIDCardHasBeenSet = true;
}

bool AgentTaxPayment::AnchorIDCardHasBeenSet() const
{
    return m_anchorIDCardHasBeenSet;
}

string AgentTaxPayment::GetStartTime() const
{
    return m_startTime;
}

void AgentTaxPayment::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AgentTaxPayment::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string AgentTaxPayment::GetEndTime() const
{
    return m_endTime;
}

void AgentTaxPayment::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AgentTaxPayment::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t AgentTaxPayment::GetAmount() const
{
    return m_amount;
}

void AgentTaxPayment::SetAmount(const int64_t& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool AgentTaxPayment::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

int64_t AgentTaxPayment::GetTax() const
{
    return m_tax;
}

void AgentTaxPayment::SetTax(const int64_t& _tax)
{
    m_tax = _tax;
    m_taxHasBeenSet = true;
}

bool AgentTaxPayment::TaxHasBeenSet() const
{
    return m_taxHasBeenSet;
}

