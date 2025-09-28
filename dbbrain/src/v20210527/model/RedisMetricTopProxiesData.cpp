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

#include <tencentcloud/dbbrain/v20210527/model/RedisMetricTopProxiesData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

RedisMetricTopProxiesData::RedisMetricTopProxiesData() :
    m_hostHasBeenSet(false),
    m_instanceProxyIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_seriesHasBeenSet(false)
{
}

CoreInternalOutcome RedisMetricTopProxiesData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisMetricTopProxiesData.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("InstanceProxyId") && !value["InstanceProxyId"].IsNull())
    {
        if (!value["InstanceProxyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisMetricTopProxiesData.InstanceProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceProxyId = string(value["InstanceProxyId"].GetString());
        m_instanceProxyIdHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisMetricTopProxiesData.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RedisMetricTopProxiesData.Value` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetDouble();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RedisMetricTopProxiesData.Timestamp` is not array type"));

        const rapidjson::Value &tmpValue = value["Timestamp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timestamp.push_back((*itr).GetUint64());
        }
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Series") && !value["Series"].IsNull())
    {
        if (!value["Series"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RedisMetricTopProxiesData.Series` is not array type"));

        const rapidjson::Value &tmpValue = value["Series"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MonitorFloatMetric item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_series.push_back(item);
        }
        m_seriesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedisMetricTopProxiesData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceProxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceProxyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceProxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timestamp.begin(); itr != m_timestamp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_seriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Series";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_series.begin(); itr != m_series.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RedisMetricTopProxiesData::GetHost() const
{
    return m_host;
}

void RedisMetricTopProxiesData::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool RedisMetricTopProxiesData::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string RedisMetricTopProxiesData::GetInstanceProxyId() const
{
    return m_instanceProxyId;
}

void RedisMetricTopProxiesData::SetInstanceProxyId(const string& _instanceProxyId)
{
    m_instanceProxyId = _instanceProxyId;
    m_instanceProxyIdHasBeenSet = true;
}

bool RedisMetricTopProxiesData::InstanceProxyIdHasBeenSet() const
{
    return m_instanceProxyIdHasBeenSet;
}

uint64_t RedisMetricTopProxiesData::GetPort() const
{
    return m_port;
}

void RedisMetricTopProxiesData::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool RedisMetricTopProxiesData::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

double RedisMetricTopProxiesData::GetValue() const
{
    return m_value;
}

void RedisMetricTopProxiesData::SetValue(const double& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool RedisMetricTopProxiesData::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

vector<uint64_t> RedisMetricTopProxiesData::GetTimestamp() const
{
    return m_timestamp;
}

void RedisMetricTopProxiesData::SetTimestamp(const vector<uint64_t>& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool RedisMetricTopProxiesData::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

vector<MonitorFloatMetric> RedisMetricTopProxiesData::GetSeries() const
{
    return m_series;
}

void RedisMetricTopProxiesData::SetSeries(const vector<MonitorFloatMetric>& _series)
{
    m_series = _series;
    m_seriesHasBeenSet = true;
}

bool RedisMetricTopProxiesData::SeriesHasBeenSet() const
{
    return m_seriesHasBeenSet;
}

