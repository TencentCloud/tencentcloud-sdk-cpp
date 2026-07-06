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

#include <tencentcloud/tokenhub/v20260322/model/ModelFreeTrialInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

ModelFreeTrialInfo::ModelFreeTrialInfo() :
    m_recommendWeightHasBeenSet(false),
    m_capacitySizeHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_validityDaysHasBeenSet(false)
{
}

CoreInternalOutcome ModelFreeTrialInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecommendWeight") && !value["RecommendWeight"].IsNull())
    {
        if (!value["RecommendWeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelFreeTrialInfo.RecommendWeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recommendWeight = value["RecommendWeight"].GetInt64();
        m_recommendWeightHasBeenSet = true;
    }

    if (value.HasMember("CapacitySize") && !value["CapacitySize"].IsNull())
    {
        if (!value["CapacitySize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelFreeTrialInfo.CapacitySize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_capacitySize = value["CapacitySize"].GetInt64();
        m_capacitySizeHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelFreeTrialInfo.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("ValidityDays") && !value["ValidityDays"].IsNull())
    {
        if (!value["ValidityDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelFreeTrialInfo.ValidityDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_validityDays = value["ValidityDays"].GetInt64();
        m_validityDaysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelFreeTrialInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recommendWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecommendWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recommendWeight, allocator);
    }

    if (m_capacitySizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacitySize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacitySize, allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_validityDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidityDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validityDays, allocator);
    }

}


int64_t ModelFreeTrialInfo::GetRecommendWeight() const
{
    return m_recommendWeight;
}

void ModelFreeTrialInfo::SetRecommendWeight(const int64_t& _recommendWeight)
{
    m_recommendWeight = _recommendWeight;
    m_recommendWeightHasBeenSet = true;
}

bool ModelFreeTrialInfo::RecommendWeightHasBeenSet() const
{
    return m_recommendWeightHasBeenSet;
}

int64_t ModelFreeTrialInfo::GetCapacitySize() const
{
    return m_capacitySize;
}

void ModelFreeTrialInfo::SetCapacitySize(const int64_t& _capacitySize)
{
    m_capacitySize = _capacitySize;
    m_capacitySizeHasBeenSet = true;
}

bool ModelFreeTrialInfo::CapacitySizeHasBeenSet() const
{
    return m_capacitySizeHasBeenSet;
}

string ModelFreeTrialInfo::GetUnit() const
{
    return m_unit;
}

void ModelFreeTrialInfo::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool ModelFreeTrialInfo::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

int64_t ModelFreeTrialInfo::GetValidityDays() const
{
    return m_validityDays;
}

void ModelFreeTrialInfo::SetValidityDays(const int64_t& _validityDays)
{
    m_validityDays = _validityDays;
    m_validityDaysHasBeenSet = true;
}

bool ModelFreeTrialInfo::ValidityDaysHasBeenSet() const
{
    return m_validityDaysHasBeenSet;
}

