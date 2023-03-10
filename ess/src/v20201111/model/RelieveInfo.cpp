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

#include <tencentcloud/ess/v20201111/model/RelieveInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

RelieveInfo::RelieveInfo() :
    m_reasonHasBeenSet(false),
    m_remainInForceItemHasBeenSet(false),
    m_originalExpenseSettlementHasBeenSet(false),
    m_originalOtherSettlementHasBeenSet(false),
    m_otherDealsHasBeenSet(false)
{
}

CoreInternalOutcome RelieveInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelieveInfo.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("RemainInForceItem") && !value["RemainInForceItem"].IsNull())
    {
        if (!value["RemainInForceItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelieveInfo.RemainInForceItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remainInForceItem = string(value["RemainInForceItem"].GetString());
        m_remainInForceItemHasBeenSet = true;
    }

    if (value.HasMember("OriginalExpenseSettlement") && !value["OriginalExpenseSettlement"].IsNull())
    {
        if (!value["OriginalExpenseSettlement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelieveInfo.OriginalExpenseSettlement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalExpenseSettlement = string(value["OriginalExpenseSettlement"].GetString());
        m_originalExpenseSettlementHasBeenSet = true;
    }

    if (value.HasMember("OriginalOtherSettlement") && !value["OriginalOtherSettlement"].IsNull())
    {
        if (!value["OriginalOtherSettlement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelieveInfo.OriginalOtherSettlement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalOtherSettlement = string(value["OriginalOtherSettlement"].GetString());
        m_originalOtherSettlementHasBeenSet = true;
    }

    if (value.HasMember("OtherDeals") && !value["OtherDeals"].IsNull())
    {
        if (!value["OtherDeals"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelieveInfo.OtherDeals` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherDeals = string(value["OtherDeals"].GetString());
        m_otherDealsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RelieveInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_remainInForceItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainInForceItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remainInForceItem.c_str(), allocator).Move(), allocator);
    }

    if (m_originalExpenseSettlementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalExpenseSettlement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalExpenseSettlement.c_str(), allocator).Move(), allocator);
    }

    if (m_originalOtherSettlementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalOtherSettlement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalOtherSettlement.c_str(), allocator).Move(), allocator);
    }

    if (m_otherDealsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherDeals";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherDeals.c_str(), allocator).Move(), allocator);
    }

}


string RelieveInfo::GetReason() const
{
    return m_reason;
}

void RelieveInfo::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool RelieveInfo::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string RelieveInfo::GetRemainInForceItem() const
{
    return m_remainInForceItem;
}

void RelieveInfo::SetRemainInForceItem(const string& _remainInForceItem)
{
    m_remainInForceItem = _remainInForceItem;
    m_remainInForceItemHasBeenSet = true;
}

bool RelieveInfo::RemainInForceItemHasBeenSet() const
{
    return m_remainInForceItemHasBeenSet;
}

string RelieveInfo::GetOriginalExpenseSettlement() const
{
    return m_originalExpenseSettlement;
}

void RelieveInfo::SetOriginalExpenseSettlement(const string& _originalExpenseSettlement)
{
    m_originalExpenseSettlement = _originalExpenseSettlement;
    m_originalExpenseSettlementHasBeenSet = true;
}

bool RelieveInfo::OriginalExpenseSettlementHasBeenSet() const
{
    return m_originalExpenseSettlementHasBeenSet;
}

string RelieveInfo::GetOriginalOtherSettlement() const
{
    return m_originalOtherSettlement;
}

void RelieveInfo::SetOriginalOtherSettlement(const string& _originalOtherSettlement)
{
    m_originalOtherSettlement = _originalOtherSettlement;
    m_originalOtherSettlementHasBeenSet = true;
}

bool RelieveInfo::OriginalOtherSettlementHasBeenSet() const
{
    return m_originalOtherSettlementHasBeenSet;
}

string RelieveInfo::GetOtherDeals() const
{
    return m_otherDeals;
}

void RelieveInfo::SetOtherDeals(const string& _otherDeals)
{
    m_otherDeals = _otherDeals;
    m_otherDealsHasBeenSet = true;
}

bool RelieveInfo::OtherDealsHasBeenSet() const
{
    return m_otherDealsHasBeenSet;
}

