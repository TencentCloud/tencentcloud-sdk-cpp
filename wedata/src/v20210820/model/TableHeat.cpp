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

#include <tencentcloud/wedata/v20210820/model/TableHeat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TableHeat::TableHeat() :
    m_tableIdHasBeenSet(false),
    m_dayTimeHasBeenSet(false),
    m_heatHasBeenSet(false),
    m_maxHeatHasBeenSet(false)
{
}

CoreInternalOutcome TableHeat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableHeat.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("DayTime") && !value["DayTime"].IsNull())
    {
        if (!value["DayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableHeat.DayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dayTime = string(value["DayTime"].GetString());
        m_dayTimeHasBeenSet = true;
    }

    if (value.HasMember("Heat") && !value["Heat"].IsNull())
    {
        if (!value["Heat"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TableHeat.Heat` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_heat = value["Heat"].GetDouble();
        m_heatHasBeenSet = true;
    }

    if (value.HasMember("MaxHeat") && !value["MaxHeat"].IsNull())
    {
        if (!value["MaxHeat"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TableHeat.MaxHeat` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxHeat = value["MaxHeat"].GetDouble();
        m_maxHeatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableHeat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_dayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dayTime.c_str(), allocator).Move(), allocator);
    }

    if (m_heatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Heat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_heat, allocator);
    }

    if (m_maxHeatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxHeat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxHeat, allocator);
    }

}


string TableHeat::GetTableId() const
{
    return m_tableId;
}

void TableHeat::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool TableHeat::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string TableHeat::GetDayTime() const
{
    return m_dayTime;
}

void TableHeat::SetDayTime(const string& _dayTime)
{
    m_dayTime = _dayTime;
    m_dayTimeHasBeenSet = true;
}

bool TableHeat::DayTimeHasBeenSet() const
{
    return m_dayTimeHasBeenSet;
}

double TableHeat::GetHeat() const
{
    return m_heat;
}

void TableHeat::SetHeat(const double& _heat)
{
    m_heat = _heat;
    m_heatHasBeenSet = true;
}

bool TableHeat::HeatHasBeenSet() const
{
    return m_heatHasBeenSet;
}

double TableHeat::GetMaxHeat() const
{
    return m_maxHeat;
}

void TableHeat::SetMaxHeat(const double& _maxHeat)
{
    m_maxHeat = _maxHeat;
    m_maxHeatHasBeenSet = true;
}

bool TableHeat::MaxHeatHasBeenSet() const
{
    return m_maxHeatHasBeenSet;
}

