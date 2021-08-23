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

#include <tencentcloud/mrs/v20200910/model/FamilyMedicalHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

FamilyMedicalHistory::FamilyMedicalHistory() :
    m_relativeHistoryHasBeenSet(false),
    m_relativeCancerHistoryHasBeenSet(false),
    m_geneticHistoryHasBeenSet(false)
{
}

CoreInternalOutcome FamilyMedicalHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RelativeHistory") && !value["RelativeHistory"].IsNull())
    {
        if (!value["RelativeHistory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FamilyMedicalHistory.RelativeHistory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relativeHistory = string(value["RelativeHistory"].GetString());
        m_relativeHistoryHasBeenSet = true;
    }

    if (value.HasMember("RelativeCancerHistory") && !value["RelativeCancerHistory"].IsNull())
    {
        if (!value["RelativeCancerHistory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FamilyMedicalHistory.RelativeCancerHistory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relativeCancerHistory = string(value["RelativeCancerHistory"].GetString());
        m_relativeCancerHistoryHasBeenSet = true;
    }

    if (value.HasMember("GeneticHistory") && !value["GeneticHistory"].IsNull())
    {
        if (!value["GeneticHistory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FamilyMedicalHistory.GeneticHistory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_geneticHistory = string(value["GeneticHistory"].GetString());
        m_geneticHistoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FamilyMedicalHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_relativeHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelativeHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relativeHistory.c_str(), allocator).Move(), allocator);
    }

    if (m_relativeCancerHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelativeCancerHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relativeCancerHistory.c_str(), allocator).Move(), allocator);
    }

    if (m_geneticHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeneticHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_geneticHistory.c_str(), allocator).Move(), allocator);
    }

}


string FamilyMedicalHistory::GetRelativeHistory() const
{
    return m_relativeHistory;
}

void FamilyMedicalHistory::SetRelativeHistory(const string& _relativeHistory)
{
    m_relativeHistory = _relativeHistory;
    m_relativeHistoryHasBeenSet = true;
}

bool FamilyMedicalHistory::RelativeHistoryHasBeenSet() const
{
    return m_relativeHistoryHasBeenSet;
}

string FamilyMedicalHistory::GetRelativeCancerHistory() const
{
    return m_relativeCancerHistory;
}

void FamilyMedicalHistory::SetRelativeCancerHistory(const string& _relativeCancerHistory)
{
    m_relativeCancerHistory = _relativeCancerHistory;
    m_relativeCancerHistoryHasBeenSet = true;
}

bool FamilyMedicalHistory::RelativeCancerHistoryHasBeenSet() const
{
    return m_relativeCancerHistoryHasBeenSet;
}

string FamilyMedicalHistory::GetGeneticHistory() const
{
    return m_geneticHistory;
}

void FamilyMedicalHistory::SetGeneticHistory(const string& _geneticHistory)
{
    m_geneticHistory = _geneticHistory;
    m_geneticHistoryHasBeenSet = true;
}

bool FamilyMedicalHistory::GeneticHistoryHasBeenSet() const
{
    return m_geneticHistoryHasBeenSet;
}

