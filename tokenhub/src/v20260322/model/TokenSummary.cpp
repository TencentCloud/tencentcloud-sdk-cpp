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

#include <tencentcloud/tokenhub/v20260322/model/TokenSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

TokenSummary::TokenSummary() :
    m_cycleSeqHasBeenSet(false),
    m_cycleStartTimeHasBeenSet(false),
    m_cycleEndTimeHasBeenSet(false),
    m_billingItemsHasBeenSet(false)
{
}

CoreInternalOutcome TokenSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CycleSeq") && !value["CycleSeq"].IsNull())
    {
        if (!value["CycleSeq"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenSummary.CycleSeq` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleSeq = value["CycleSeq"].GetInt64();
        m_cycleSeqHasBeenSet = true;
    }

    if (value.HasMember("CycleStartTime") && !value["CycleStartTime"].IsNull())
    {
        if (!value["CycleStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenSummary.CycleStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleStartTime = string(value["CycleStartTime"].GetString());
        m_cycleStartTimeHasBeenSet = true;
    }

    if (value.HasMember("CycleEndTime") && !value["CycleEndTime"].IsNull())
    {
        if (!value["CycleEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenSummary.CycleEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleEndTime = string(value["CycleEndTime"].GetString());
        m_cycleEndTimeHasBeenSet = true;
    }

    if (value.HasMember("BillingItems") && !value["BillingItems"].IsNull())
    {
        if (!value["BillingItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TokenSummary.BillingItems` is not array type"));

        const rapidjson::Value &tmpValue = value["BillingItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TokenSummaryBillingItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_billingItems.push_back(item);
        }
        m_billingItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TokenSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cycleSeqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleSeq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleSeq, allocator);
    }

    if (m_cycleStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_billingItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_billingItems.begin(); itr != m_billingItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t TokenSummary::GetCycleSeq() const
{
    return m_cycleSeq;
}

void TokenSummary::SetCycleSeq(const int64_t& _cycleSeq)
{
    m_cycleSeq = _cycleSeq;
    m_cycleSeqHasBeenSet = true;
}

bool TokenSummary::CycleSeqHasBeenSet() const
{
    return m_cycleSeqHasBeenSet;
}

string TokenSummary::GetCycleStartTime() const
{
    return m_cycleStartTime;
}

void TokenSummary::SetCycleStartTime(const string& _cycleStartTime)
{
    m_cycleStartTime = _cycleStartTime;
    m_cycleStartTimeHasBeenSet = true;
}

bool TokenSummary::CycleStartTimeHasBeenSet() const
{
    return m_cycleStartTimeHasBeenSet;
}

string TokenSummary::GetCycleEndTime() const
{
    return m_cycleEndTime;
}

void TokenSummary::SetCycleEndTime(const string& _cycleEndTime)
{
    m_cycleEndTime = _cycleEndTime;
    m_cycleEndTimeHasBeenSet = true;
}

bool TokenSummary::CycleEndTimeHasBeenSet() const
{
    return m_cycleEndTimeHasBeenSet;
}

vector<TokenSummaryBillingItem> TokenSummary::GetBillingItems() const
{
    return m_billingItems;
}

void TokenSummary::SetBillingItems(const vector<TokenSummaryBillingItem>& _billingItems)
{
    m_billingItems = _billingItems;
    m_billingItemsHasBeenSet = true;
}

bool TokenSummary::BillingItemsHasBeenSet() const
{
    return m_billingItemsHasBeenSet;
}

