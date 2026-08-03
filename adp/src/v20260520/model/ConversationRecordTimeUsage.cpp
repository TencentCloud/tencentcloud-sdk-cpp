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

#include <tencentcloud/adp/v20260520/model/ConversationRecordTimeUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConversationRecordTimeUsage::ConversationRecordTimeUsage() :
    m_elapsedHasBeenSet(false),
    m_firstTokenCostHasBeenSet(false),
    m_totalCostHasBeenSet(false)
{
}

CoreInternalOutcome ConversationRecordTimeUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Elapsed") && !value["Elapsed"].IsNull())
    {
        if (!value["Elapsed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationRecordTimeUsage.Elapsed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elapsed = string(value["Elapsed"].GetString());
        m_elapsedHasBeenSet = true;
    }

    if (value.HasMember("FirstTokenCost") && !value["FirstTokenCost"].IsNull())
    {
        if (!value["FirstTokenCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationRecordTimeUsage.FirstTokenCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTokenCost = string(value["FirstTokenCost"].GetString());
        m_firstTokenCostHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationRecordTimeUsage.TotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = string(value["TotalCost"].GetString());
        m_totalCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConversationRecordTimeUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_elapsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Elapsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elapsed.c_str(), allocator).Move(), allocator);
    }

    if (m_firstTokenCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTokenCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTokenCost.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCost.c_str(), allocator).Move(), allocator);
    }

}


string ConversationRecordTimeUsage::GetElapsed() const
{
    return m_elapsed;
}

void ConversationRecordTimeUsage::SetElapsed(const string& _elapsed)
{
    m_elapsed = _elapsed;
    m_elapsedHasBeenSet = true;
}

bool ConversationRecordTimeUsage::ElapsedHasBeenSet() const
{
    return m_elapsedHasBeenSet;
}

string ConversationRecordTimeUsage::GetFirstTokenCost() const
{
    return m_firstTokenCost;
}

void ConversationRecordTimeUsage::SetFirstTokenCost(const string& _firstTokenCost)
{
    m_firstTokenCost = _firstTokenCost;
    m_firstTokenCostHasBeenSet = true;
}

bool ConversationRecordTimeUsage::FirstTokenCostHasBeenSet() const
{
    return m_firstTokenCostHasBeenSet;
}

string ConversationRecordTimeUsage::GetTotalCost() const
{
    return m_totalCost;
}

void ConversationRecordTimeUsage::SetTotalCost(const string& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool ConversationRecordTimeUsage::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

