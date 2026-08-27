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

#include <tencentcloud/monitor/v20230616/model/ExtMetric.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

ExtMetric::ExtMetric() :
    m_metricNameHasBeenSet(false),
    m_metricCNameHasBeenSet(false),
    m_cNMeaningHasBeenSet(false),
    m_enMeaningHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_dimensionFlagHasBeenSet(false)
{
}

CoreInternalOutcome ExtMetric::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtMetric.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("MetricCName") && !value["MetricCName"].IsNull())
    {
        if (!value["MetricCName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtMetric.MetricCName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricCName = string(value["MetricCName"].GetString());
        m_metricCNameHasBeenSet = true;
    }

    if (value.HasMember("CNMeaning") && !value["CNMeaning"].IsNull())
    {
        if (!value["CNMeaning"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtMetric.CNMeaning` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cNMeaning = string(value["CNMeaning"].GetString());
        m_cNMeaningHasBeenSet = true;
    }

    if (value.HasMember("EnMeaning") && !value["EnMeaning"].IsNull())
    {
        if (!value["EnMeaning"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtMetric.EnMeaning` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enMeaning = string(value["EnMeaning"].GetString());
        m_enMeaningHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtMetric.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("DimensionFlag") && !value["DimensionFlag"].IsNull())
    {
        if (!value["DimensionFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExtMetric.DimensionFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dimensionFlag = value["DimensionFlag"].GetBool();
        m_dimensionFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtMetric::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_metricCNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricCName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricCName.c_str(), allocator).Move(), allocator);
    }

    if (m_cNMeaningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CNMeaning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cNMeaning.c_str(), allocator).Move(), allocator);
    }

    if (m_enMeaningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnMeaning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enMeaning.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dimensionFlag, allocator);
    }

}


string ExtMetric::GetMetricName() const
{
    return m_metricName;
}

void ExtMetric::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool ExtMetric::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string ExtMetric::GetMetricCName() const
{
    return m_metricCName;
}

void ExtMetric::SetMetricCName(const string& _metricCName)
{
    m_metricCName = _metricCName;
    m_metricCNameHasBeenSet = true;
}

bool ExtMetric::MetricCNameHasBeenSet() const
{
    return m_metricCNameHasBeenSet;
}

string ExtMetric::GetCNMeaning() const
{
    return m_cNMeaning;
}

void ExtMetric::SetCNMeaning(const string& _cNMeaning)
{
    m_cNMeaning = _cNMeaning;
    m_cNMeaningHasBeenSet = true;
}

bool ExtMetric::CNMeaningHasBeenSet() const
{
    return m_cNMeaningHasBeenSet;
}

string ExtMetric::GetEnMeaning() const
{
    return m_enMeaning;
}

void ExtMetric::SetEnMeaning(const string& _enMeaning)
{
    m_enMeaning = _enMeaning;
    m_enMeaningHasBeenSet = true;
}

bool ExtMetric::EnMeaningHasBeenSet() const
{
    return m_enMeaningHasBeenSet;
}

string ExtMetric::GetUnit() const
{
    return m_unit;
}

void ExtMetric::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool ExtMetric::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

bool ExtMetric::GetDimensionFlag() const
{
    return m_dimensionFlag;
}

void ExtMetric::SetDimensionFlag(const bool& _dimensionFlag)
{
    m_dimensionFlag = _dimensionFlag;
    m_dimensionFlagHasBeenSet = true;
}

bool ExtMetric::DimensionFlagHasBeenSet() const
{
    return m_dimensionFlagHasBeenSet;
}

