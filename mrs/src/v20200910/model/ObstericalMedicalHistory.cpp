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

#include <tencentcloud/mrs/v20200910/model/ObstericalMedicalHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ObstericalMedicalHistory::ObstericalMedicalHistory() :
    m_marriageHistoryHasBeenSet(false),
    m_fertilityHistoryHasBeenSet(false)
{
}

CoreInternalOutcome ObstericalMedicalHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MarriageHistory") && !value["MarriageHistory"].IsNull())
    {
        if (!value["MarriageHistory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObstericalMedicalHistory.MarriageHistory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_marriageHistory = string(value["MarriageHistory"].GetString());
        m_marriageHistoryHasBeenSet = true;
    }

    if (value.HasMember("FertilityHistory") && !value["FertilityHistory"].IsNull())
    {
        if (!value["FertilityHistory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObstericalMedicalHistory.FertilityHistory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fertilityHistory = string(value["FertilityHistory"].GetString());
        m_fertilityHistoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ObstericalMedicalHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_marriageHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarriageHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_marriageHistory.c_str(), allocator).Move(), allocator);
    }

    if (m_fertilityHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FertilityHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fertilityHistory.c_str(), allocator).Move(), allocator);
    }

}


string ObstericalMedicalHistory::GetMarriageHistory() const
{
    return m_marriageHistory;
}

void ObstericalMedicalHistory::SetMarriageHistory(const string& _marriageHistory)
{
    m_marriageHistory = _marriageHistory;
    m_marriageHistoryHasBeenSet = true;
}

bool ObstericalMedicalHistory::MarriageHistoryHasBeenSet() const
{
    return m_marriageHistoryHasBeenSet;
}

string ObstericalMedicalHistory::GetFertilityHistory() const
{
    return m_fertilityHistory;
}

void ObstericalMedicalHistory::SetFertilityHistory(const string& _fertilityHistory)
{
    m_fertilityHistory = _fertilityHistory;
    m_fertilityHistoryHasBeenSet = true;
}

bool ObstericalMedicalHistory::FertilityHistoryHasBeenSet() const
{
    return m_fertilityHistoryHasBeenSet;
}

