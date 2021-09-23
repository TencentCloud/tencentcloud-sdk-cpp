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

#include <tencentcloud/monitor/v20180724/model/MetricSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

MetricSet::MetricSet() :
    m_namespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_unitCnameHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_periodsHasBeenSet(false),
    m_meaningHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_metricCNameHasBeenSet(false),
    m_metricENameHasBeenSet(false)
{
}

CoreInternalOutcome MetricSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricSet.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricSet.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricSet.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("UnitCname") && !value["UnitCname"].IsNull())
    {
        if (!value["UnitCname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricSet.UnitCname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitCname = string(value["UnitCname"].GetString());
        m_unitCnameHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricSet.Period` is not array type"));

        const rapidjson::Value &tmpValue = value["Period"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_period.push_back((*itr).GetInt64());
        }
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("Periods") && !value["Periods"].IsNull())
    {
        if (!value["Periods"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricSet.Periods` is not array type"));

        const rapidjson::Value &tmpValue = value["Periods"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PeriodsSt item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_periods.push_back(item);
        }
        m_periodsHasBeenSet = true;
    }

    if (value.HasMember("Meaning") && !value["Meaning"].IsNull())
    {
        if (!value["Meaning"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MetricSet.Meaning` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_meaning.Deserialize(value["Meaning"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_meaningHasBeenSet = true;
    }

    if (value.HasMember("Dimensions") && !value["Dimensions"].IsNull())
    {
        if (!value["Dimensions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricSet.Dimensions` is not array type"));

        const rapidjson::Value &tmpValue = value["Dimensions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DimensionsDesc item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dimensions.push_back(item);
        }
        m_dimensionsHasBeenSet = true;
    }

    if (value.HasMember("MetricCName") && !value["MetricCName"].IsNull())
    {
        if (!value["MetricCName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricSet.MetricCName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricCName = string(value["MetricCName"].GetString());
        m_metricCNameHasBeenSet = true;
    }

    if (value.HasMember("MetricEName") && !value["MetricEName"].IsNull())
    {
        if (!value["MetricEName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricSet.MetricEName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricEName = string(value["MetricEName"].GetString());
        m_metricENameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_unitCnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitCname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitCname.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_period.begin(); itr != m_period.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_periodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Periods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_periods.begin(); itr != m_periods.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_meaningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Meaning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_meaning.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dimensions.begin(); itr != m_dimensions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_metricCNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricCName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricCName.c_str(), allocator).Move(), allocator);
    }

    if (m_metricENameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricEName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricEName.c_str(), allocator).Move(), allocator);
    }

}


string MetricSet::GetNamespace() const
{
    return m_namespace;
}

void MetricSet::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool MetricSet::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string MetricSet::GetMetricName() const
{
    return m_metricName;
}

void MetricSet::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool MetricSet::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string MetricSet::GetUnit() const
{
    return m_unit;
}

void MetricSet::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool MetricSet::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string MetricSet::GetUnitCname() const
{
    return m_unitCname;
}

void MetricSet::SetUnitCname(const string& _unitCname)
{
    m_unitCname = _unitCname;
    m_unitCnameHasBeenSet = true;
}

bool MetricSet::UnitCnameHasBeenSet() const
{
    return m_unitCnameHasBeenSet;
}

vector<int64_t> MetricSet::GetPeriod() const
{
    return m_period;
}

void MetricSet::SetPeriod(const vector<int64_t>& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool MetricSet::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<PeriodsSt> MetricSet::GetPeriods() const
{
    return m_periods;
}

void MetricSet::SetPeriods(const vector<PeriodsSt>& _periods)
{
    m_periods = _periods;
    m_periodsHasBeenSet = true;
}

bool MetricSet::PeriodsHasBeenSet() const
{
    return m_periodsHasBeenSet;
}

MetricObjectMeaning MetricSet::GetMeaning() const
{
    return m_meaning;
}

void MetricSet::SetMeaning(const MetricObjectMeaning& _meaning)
{
    m_meaning = _meaning;
    m_meaningHasBeenSet = true;
}

bool MetricSet::MeaningHasBeenSet() const
{
    return m_meaningHasBeenSet;
}

vector<DimensionsDesc> MetricSet::GetDimensions() const
{
    return m_dimensions;
}

void MetricSet::SetDimensions(const vector<DimensionsDesc>& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool MetricSet::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

string MetricSet::GetMetricCName() const
{
    return m_metricCName;
}

void MetricSet::SetMetricCName(const string& _metricCName)
{
    m_metricCName = _metricCName;
    m_metricCNameHasBeenSet = true;
}

bool MetricSet::MetricCNameHasBeenSet() const
{
    return m_metricCNameHasBeenSet;
}

string MetricSet::GetMetricEName() const
{
    return m_metricEName;
}

void MetricSet::SetMetricEName(const string& _metricEName)
{
    m_metricEName = _metricEName;
    m_metricENameHasBeenSet = true;
}

bool MetricSet::MetricENameHasBeenSet() const
{
    return m_metricENameHasBeenSet;
}

