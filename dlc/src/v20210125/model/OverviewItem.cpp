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

#include <tencentcloud/dlc/v20210125/model/OverviewItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

OverviewItem::OverviewItem() :
    m_chartTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome OverviewItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChartType") && !value["ChartType"].IsNull())
    {
        if (!value["ChartType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewItem.ChartType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chartType = string(value["ChartType"].GetString());
        m_chartTypeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewItem.Value` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetDouble();
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chartTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChartType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chartType.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

}


string OverviewItem::GetChartType() const
{
    return m_chartType;
}

void OverviewItem::SetChartType(const string& _chartType)
{
    m_chartType = _chartType;
    m_chartTypeHasBeenSet = true;
}

bool OverviewItem::ChartTypeHasBeenSet() const
{
    return m_chartTypeHasBeenSet;
}

double OverviewItem::GetValue() const
{
    return m_value;
}

void OverviewItem::SetValue(const double& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool OverviewItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

