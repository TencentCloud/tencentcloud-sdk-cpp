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

#include <tencentcloud/mrs/v20200910/model/FamilyHistoryBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

FamilyHistoryBlock::FamilyHistoryBlock() :
    m_relativeHistoryHasBeenSet(false),
    m_relativeCancerHistoryHasBeenSet(false),
    m_geneticHistoryHasBeenSet(false)
{
}

CoreInternalOutcome FamilyHistoryBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RelativeHistory") && !value["RelativeHistory"].IsNull())
    {
        if (!value["RelativeHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FamilyHistoryBlock.RelativeHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_relativeHistory.Deserialize(value["RelativeHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_relativeHistoryHasBeenSet = true;
    }

    if (value.HasMember("RelativeCancerHistory") && !value["RelativeCancerHistory"].IsNull())
    {
        if (!value["RelativeCancerHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FamilyHistoryBlock.RelativeCancerHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_relativeCancerHistory.Deserialize(value["RelativeCancerHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_relativeCancerHistoryHasBeenSet = true;
    }

    if (value.HasMember("GeneticHistory") && !value["GeneticHistory"].IsNull())
    {
        if (!value["GeneticHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FamilyHistoryBlock.GeneticHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_geneticHistory.Deserialize(value["GeneticHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_geneticHistoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FamilyHistoryBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_relativeHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelativeHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_relativeHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_relativeCancerHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelativeCancerHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_relativeCancerHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_geneticHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeneticHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_geneticHistory.ToJsonObject(value[key.c_str()], allocator);
    }

}


RelativeHistoryBlock FamilyHistoryBlock::GetRelativeHistory() const
{
    return m_relativeHistory;
}

void FamilyHistoryBlock::SetRelativeHistory(const RelativeHistoryBlock& _relativeHistory)
{
    m_relativeHistory = _relativeHistory;
    m_relativeHistoryHasBeenSet = true;
}

bool FamilyHistoryBlock::RelativeHistoryHasBeenSet() const
{
    return m_relativeHistoryHasBeenSet;
}

RelativeCancerHistoryBlock FamilyHistoryBlock::GetRelativeCancerHistory() const
{
    return m_relativeCancerHistory;
}

void FamilyHistoryBlock::SetRelativeCancerHistory(const RelativeCancerHistoryBlock& _relativeCancerHistory)
{
    m_relativeCancerHistory = _relativeCancerHistory;
    m_relativeCancerHistoryHasBeenSet = true;
}

bool FamilyHistoryBlock::RelativeCancerHistoryHasBeenSet() const
{
    return m_relativeCancerHistoryHasBeenSet;
}

GeneticHistoryBlock FamilyHistoryBlock::GetGeneticHistory() const
{
    return m_geneticHistory;
}

void FamilyHistoryBlock::SetGeneticHistory(const GeneticHistoryBlock& _geneticHistory)
{
    m_geneticHistory = _geneticHistory;
    m_geneticHistoryHasBeenSet = true;
}

bool FamilyHistoryBlock::GeneticHistoryHasBeenSet() const
{
    return m_geneticHistoryHasBeenSet;
}

