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

#include <tencentcloud/pts/v20210728/model/AggregationLegend.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

AggregationLegend::AggregationLegend() :
    m_aggregationHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

CoreInternalOutcome AggregationLegend::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Aggregation") && !value["Aggregation"].IsNull())
    {
        if (!value["Aggregation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggregationLegend.Aggregation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aggregation = string(value["Aggregation"].GetString());
        m_aggregationHasBeenSet = true;
    }

    if (value.HasMember("Legend") && !value["Legend"].IsNull())
    {
        if (!value["Legend"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggregationLegend.Legend` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legend = string(value["Legend"].GetString());
        m_legendHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggregationLegend.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AggregationLegend::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aggregationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Aggregation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aggregation.c_str(), allocator).Move(), allocator);
    }

    if (m_legendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Legend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legend.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

}


string AggregationLegend::GetAggregation() const
{
    return m_aggregation;
}

void AggregationLegend::SetAggregation(const string& _aggregation)
{
    m_aggregation = _aggregation;
    m_aggregationHasBeenSet = true;
}

bool AggregationLegend::AggregationHasBeenSet() const
{
    return m_aggregationHasBeenSet;
}

string AggregationLegend::GetLegend() const
{
    return m_legend;
}

void AggregationLegend::SetLegend(const string& _legend)
{
    m_legend = _legend;
    m_legendHasBeenSet = true;
}

bool AggregationLegend::LegendHasBeenSet() const
{
    return m_legendHasBeenSet;
}

string AggregationLegend::GetUnit() const
{
    return m_unit;
}

void AggregationLegend::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool AggregationLegend::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

