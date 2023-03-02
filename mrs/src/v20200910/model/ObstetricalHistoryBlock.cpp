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

#include <tencentcloud/mrs/v20200910/model/ObstetricalHistoryBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ObstetricalHistoryBlock::ObstetricalHistoryBlock() :
    m_marriageHistoryHasBeenSet(false),
    m_fertilityHistoryHasBeenSet(false)
{
}

CoreInternalOutcome ObstetricalHistoryBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MarriageHistory") && !value["MarriageHistory"].IsNull())
    {
        if (!value["MarriageHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ObstetricalHistoryBlock.MarriageHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_marriageHistory.Deserialize(value["MarriageHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_marriageHistoryHasBeenSet = true;
    }

    if (value.HasMember("FertilityHistory") && !value["FertilityHistory"].IsNull())
    {
        if (!value["FertilityHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ObstetricalHistoryBlock.FertilityHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fertilityHistory.Deserialize(value["FertilityHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fertilityHistoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ObstetricalHistoryBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_marriageHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarriageHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_marriageHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fertilityHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FertilityHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fertilityHistory.ToJsonObject(value[key.c_str()], allocator);
    }

}


MenstrualHistoryDetailBlock ObstetricalHistoryBlock::GetMarriageHistory() const
{
    return m_marriageHistory;
}

void ObstetricalHistoryBlock::SetMarriageHistory(const MenstrualHistoryDetailBlock& _marriageHistory)
{
    m_marriageHistory = _marriageHistory;
    m_marriageHistoryHasBeenSet = true;
}

bool ObstetricalHistoryBlock::MarriageHistoryHasBeenSet() const
{
    return m_marriageHistoryHasBeenSet;
}

FertilityHistoryBlock ObstetricalHistoryBlock::GetFertilityHistory() const
{
    return m_fertilityHistory;
}

void ObstetricalHistoryBlock::SetFertilityHistory(const FertilityHistoryBlock& _fertilityHistory)
{
    m_fertilityHistory = _fertilityHistory;
    m_fertilityHistoryHasBeenSet = true;
}

bool ObstetricalHistoryBlock::FertilityHistoryHasBeenSet() const
{
    return m_fertilityHistoryHasBeenSet;
}

