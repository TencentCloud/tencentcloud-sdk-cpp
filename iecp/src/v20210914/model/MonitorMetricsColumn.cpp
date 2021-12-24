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

#include <tencentcloud/iecp/v20210914/model/MonitorMetricsColumn.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

MonitorMetricsColumn::MonitorMetricsColumn() :
    m_columnNameHasBeenSet(false),
    m_columnDataHasBeenSet(false),
    m_columnBelongHasBeenSet(false),
    m_maxValueHasBeenSet(false),
    m_minValueHasBeenSet(false),
    m_avgValueHasBeenSet(false),
    m_columnTimeHasBeenSet(false)
{
}

CoreInternalOutcome MonitorMetricsColumn::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ColumnName") && !value["ColumnName"].IsNull())
    {
        if (!value["ColumnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorMetricsColumn.ColumnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnName = string(value["ColumnName"].GetString());
        m_columnNameHasBeenSet = true;
    }

    if (value.HasMember("ColumnData") && !value["ColumnData"].IsNull())
    {
        if (!value["ColumnData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MonitorMetricsColumn.ColumnData` is not array type"));

        const rapidjson::Value &tmpValue = value["ColumnData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_columnData.push_back((*itr).GetString());
        }
        m_columnDataHasBeenSet = true;
    }

    if (value.HasMember("ColumnBelong") && !value["ColumnBelong"].IsNull())
    {
        if (!value["ColumnBelong"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorMetricsColumn.ColumnBelong` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnBelong = string(value["ColumnBelong"].GetString());
        m_columnBelongHasBeenSet = true;
    }

    if (value.HasMember("MaxValue") && !value["MaxValue"].IsNull())
    {
        if (!value["MaxValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorMetricsColumn.MaxValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxValue = value["MaxValue"].GetDouble();
        m_maxValueHasBeenSet = true;
    }

    if (value.HasMember("MinValue") && !value["MinValue"].IsNull())
    {
        if (!value["MinValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorMetricsColumn.MinValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minValue = value["MinValue"].GetDouble();
        m_minValueHasBeenSet = true;
    }

    if (value.HasMember("AvgValue") && !value["AvgValue"].IsNull())
    {
        if (!value["AvgValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorMetricsColumn.AvgValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgValue = value["AvgValue"].GetDouble();
        m_avgValueHasBeenSet = true;
    }

    if (value.HasMember("ColumnTime") && !value["ColumnTime"].IsNull())
    {
        if (!value["ColumnTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorMetricsColumn.ColumnTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_columnTime = value["ColumnTime"].GetInt64();
        m_columnTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorMetricsColumn::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_columnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnName.c_str(), allocator).Move(), allocator);
    }

    if (m_columnDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_columnData.begin(); itr != m_columnData.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_columnBelongHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnBelong";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnBelong.c_str(), allocator).Move(), allocator);
    }

    if (m_maxValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxValue, allocator);
    }

    if (m_minValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minValue, allocator);
    }

    if (m_avgValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgValue, allocator);
    }

    if (m_columnTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_columnTime, allocator);
    }

}


string MonitorMetricsColumn::GetColumnName() const
{
    return m_columnName;
}

void MonitorMetricsColumn::SetColumnName(const string& _columnName)
{
    m_columnName = _columnName;
    m_columnNameHasBeenSet = true;
}

bool MonitorMetricsColumn::ColumnNameHasBeenSet() const
{
    return m_columnNameHasBeenSet;
}

vector<string> MonitorMetricsColumn::GetColumnData() const
{
    return m_columnData;
}

void MonitorMetricsColumn::SetColumnData(const vector<string>& _columnData)
{
    m_columnData = _columnData;
    m_columnDataHasBeenSet = true;
}

bool MonitorMetricsColumn::ColumnDataHasBeenSet() const
{
    return m_columnDataHasBeenSet;
}

string MonitorMetricsColumn::GetColumnBelong() const
{
    return m_columnBelong;
}

void MonitorMetricsColumn::SetColumnBelong(const string& _columnBelong)
{
    m_columnBelong = _columnBelong;
    m_columnBelongHasBeenSet = true;
}

bool MonitorMetricsColumn::ColumnBelongHasBeenSet() const
{
    return m_columnBelongHasBeenSet;
}

double MonitorMetricsColumn::GetMaxValue() const
{
    return m_maxValue;
}

void MonitorMetricsColumn::SetMaxValue(const double& _maxValue)
{
    m_maxValue = _maxValue;
    m_maxValueHasBeenSet = true;
}

bool MonitorMetricsColumn::MaxValueHasBeenSet() const
{
    return m_maxValueHasBeenSet;
}

double MonitorMetricsColumn::GetMinValue() const
{
    return m_minValue;
}

void MonitorMetricsColumn::SetMinValue(const double& _minValue)
{
    m_minValue = _minValue;
    m_minValueHasBeenSet = true;
}

bool MonitorMetricsColumn::MinValueHasBeenSet() const
{
    return m_minValueHasBeenSet;
}

double MonitorMetricsColumn::GetAvgValue() const
{
    return m_avgValue;
}

void MonitorMetricsColumn::SetAvgValue(const double& _avgValue)
{
    m_avgValue = _avgValue;
    m_avgValueHasBeenSet = true;
}

bool MonitorMetricsColumn::AvgValueHasBeenSet() const
{
    return m_avgValueHasBeenSet;
}

int64_t MonitorMetricsColumn::GetColumnTime() const
{
    return m_columnTime;
}

void MonitorMetricsColumn::SetColumnTime(const int64_t& _columnTime)
{
    m_columnTime = _columnTime;
    m_columnTimeHasBeenSet = true;
}

bool MonitorMetricsColumn::ColumnTimeHasBeenSet() const
{
    return m_columnTimeHasBeenSet;
}

