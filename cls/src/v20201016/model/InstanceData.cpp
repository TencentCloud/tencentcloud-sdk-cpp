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

#include <tencentcloud/cls/v20201016/model/InstanceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

InstanceData::InstanceData() :
    m_metricNameHasBeenSet(false),
    m_cLSMetricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_errMsgHasBeenSet(false)
{
}

CoreInternalOutcome InstanceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceData.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("CLSMetricName") && !value["CLSMetricName"].IsNull())
    {
        if (!value["CLSMetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceData.CLSMetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cLSMetricName = string(value["CLSMetricName"].GetString());
        m_cLSMetricNameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceData.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Dimensions") && !value["Dimensions"].IsNull())
    {
        if (!value["Dimensions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceData.Dimensions` is not array type"));

        const rapidjson::Value &tmpValue = value["Dimensions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Dimension item;
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

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceData.Period` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetUint64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceData.Value` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetDouble();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceData.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_cLSMetricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLSMetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cLSMetricName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
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

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

}


string InstanceData::GetMetricName() const
{
    return m_metricName;
}

void InstanceData::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool InstanceData::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string InstanceData::GetCLSMetricName() const
{
    return m_cLSMetricName;
}

void InstanceData::SetCLSMetricName(const string& _cLSMetricName)
{
    m_cLSMetricName = _cLSMetricName;
    m_cLSMetricNameHasBeenSet = true;
}

bool InstanceData::CLSMetricNameHasBeenSet() const
{
    return m_cLSMetricNameHasBeenSet;
}

string InstanceData::GetNamespace() const
{
    return m_namespace;
}

void InstanceData::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool InstanceData::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

vector<Dimension> InstanceData::GetDimensions() const
{
    return m_dimensions;
}

void InstanceData::SetDimensions(const vector<Dimension>& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool InstanceData::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

uint64_t InstanceData::GetPeriod() const
{
    return m_period;
}

void InstanceData::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool InstanceData::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

double InstanceData::GetValue() const
{
    return m_value;
}

void InstanceData::SetValue(const double& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool InstanceData::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string InstanceData::GetErrMsg() const
{
    return m_errMsg;
}

void InstanceData::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool InstanceData::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

