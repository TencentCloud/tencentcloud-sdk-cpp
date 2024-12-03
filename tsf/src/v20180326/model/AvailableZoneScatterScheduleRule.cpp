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

#include <tencentcloud/tsf/v20180326/model/AvailableZoneScatterScheduleRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

AvailableZoneScatterScheduleRule::AvailableZoneScatterScheduleRule() :
    m_scatterDimensionHasBeenSet(false),
    m_maxUnbalanceQuantityHasBeenSet(false),
    m_isForceScheduleHasBeenSet(false)
{
}

CoreInternalOutcome AvailableZoneScatterScheduleRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScatterDimension") && !value["ScatterDimension"].IsNull())
    {
        if (!value["ScatterDimension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableZoneScatterScheduleRule.ScatterDimension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scatterDimension = string(value["ScatterDimension"].GetString());
        m_scatterDimensionHasBeenSet = true;
    }

    if (value.HasMember("MaxUnbalanceQuantity") && !value["MaxUnbalanceQuantity"].IsNull())
    {
        if (!value["MaxUnbalanceQuantity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableZoneScatterScheduleRule.MaxUnbalanceQuantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxUnbalanceQuantity = value["MaxUnbalanceQuantity"].GetInt64();
        m_maxUnbalanceQuantityHasBeenSet = true;
    }

    if (value.HasMember("IsForceSchedule") && !value["IsForceSchedule"].IsNull())
    {
        if (!value["IsForceSchedule"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableZoneScatterScheduleRule.IsForceSchedule` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isForceSchedule = value["IsForceSchedule"].GetBool();
        m_isForceScheduleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvailableZoneScatterScheduleRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scatterDimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScatterDimension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scatterDimension.c_str(), allocator).Move(), allocator);
    }

    if (m_maxUnbalanceQuantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxUnbalanceQuantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxUnbalanceQuantity, allocator);
    }

    if (m_isForceScheduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsForceSchedule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isForceSchedule, allocator);
    }

}


string AvailableZoneScatterScheduleRule::GetScatterDimension() const
{
    return m_scatterDimension;
}

void AvailableZoneScatterScheduleRule::SetScatterDimension(const string& _scatterDimension)
{
    m_scatterDimension = _scatterDimension;
    m_scatterDimensionHasBeenSet = true;
}

bool AvailableZoneScatterScheduleRule::ScatterDimensionHasBeenSet() const
{
    return m_scatterDimensionHasBeenSet;
}

int64_t AvailableZoneScatterScheduleRule::GetMaxUnbalanceQuantity() const
{
    return m_maxUnbalanceQuantity;
}

void AvailableZoneScatterScheduleRule::SetMaxUnbalanceQuantity(const int64_t& _maxUnbalanceQuantity)
{
    m_maxUnbalanceQuantity = _maxUnbalanceQuantity;
    m_maxUnbalanceQuantityHasBeenSet = true;
}

bool AvailableZoneScatterScheduleRule::MaxUnbalanceQuantityHasBeenSet() const
{
    return m_maxUnbalanceQuantityHasBeenSet;
}

bool AvailableZoneScatterScheduleRule::GetIsForceSchedule() const
{
    return m_isForceSchedule;
}

void AvailableZoneScatterScheduleRule::SetIsForceSchedule(const bool& _isForceSchedule)
{
    m_isForceSchedule = _isForceSchedule;
    m_isForceScheduleHasBeenSet = true;
}

bool AvailableZoneScatterScheduleRule::IsForceScheduleHasBeenSet() const
{
    return m_isForceScheduleHasBeenSet;
}

