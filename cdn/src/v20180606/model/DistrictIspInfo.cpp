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

#include <tencentcloud/cdn/v20180606/model/DistrictIspInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DistrictIspInfo::DistrictIspInfo() :
    m_domainHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ipProtocolHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_districtHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_dataPointsHasBeenSet(false),
    m_districtNameHasBeenSet(false),
    m_ispNameHasBeenSet(false)
{
}

CoreInternalOutcome DistrictIspInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistrictIspInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistrictIspInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("IpProtocol") && !value["IpProtocol"].IsNull())
    {
        if (!value["IpProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistrictIspInfo.IpProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipProtocol = string(value["IpProtocol"].GetString());
        m_ipProtocolHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistrictIspInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistrictIspInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DistrictIspInfo.Interval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetUint64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("Metric") && !value["Metric"].IsNull())
    {
        if (!value["Metric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistrictIspInfo.Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(value["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (value.HasMember("District") && !value["District"].IsNull())
    {
        if (!value["District"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DistrictIspInfo.District` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_district = value["District"].GetInt64();
        m_districtHasBeenSet = true;
    }

    if (value.HasMember("Isp") && !value["Isp"].IsNull())
    {
        if (!value["Isp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DistrictIspInfo.Isp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isp = value["Isp"].GetInt64();
        m_ispHasBeenSet = true;
    }

    if (value.HasMember("DataPoints") && !value["DataPoints"].IsNull())
    {
        if (!value["DataPoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DistrictIspInfo.DataPoints` is not array type"));

        const rapidjson::Value &tmpValue = value["DataPoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dataPoints.push_back((*itr).GetUint64());
        }
        m_dataPointsHasBeenSet = true;
    }

    if (value.HasMember("DistrictName") && !value["DistrictName"].IsNull())
    {
        if (!value["DistrictName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistrictIspInfo.DistrictName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_districtName = string(value["DistrictName"].GetString());
        m_districtNameHasBeenSet = true;
    }

    if (value.HasMember("IspName") && !value["IspName"].IsNull())
    {
        if (!value["IspName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistrictIspInfo.IspName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ispName = string(value["IspName"].GetString());
        m_ispNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DistrictIspInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_ipProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_districtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "District";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_district, allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isp, allocator);
    }

    if (m_dataPointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataPoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataPoints.begin(); itr != m_dataPoints.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_districtNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistrictName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_districtName.c_str(), allocator).Move(), allocator);
    }

    if (m_ispNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IspName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ispName.c_str(), allocator).Move(), allocator);
    }

}


string DistrictIspInfo::GetDomain() const
{
    return m_domain;
}

void DistrictIspInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DistrictIspInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DistrictIspInfo::GetProtocol() const
{
    return m_protocol;
}

void DistrictIspInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DistrictIspInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string DistrictIspInfo::GetIpProtocol() const
{
    return m_ipProtocol;
}

void DistrictIspInfo::SetIpProtocol(const string& _ipProtocol)
{
    m_ipProtocol = _ipProtocol;
    m_ipProtocolHasBeenSet = true;
}

bool DistrictIspInfo::IpProtocolHasBeenSet() const
{
    return m_ipProtocolHasBeenSet;
}

string DistrictIspInfo::GetStartTime() const
{
    return m_startTime;
}

void DistrictIspInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DistrictIspInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DistrictIspInfo::GetEndTime() const
{
    return m_endTime;
}

void DistrictIspInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DistrictIspInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DistrictIspInfo::GetInterval() const
{
    return m_interval;
}

void DistrictIspInfo::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool DistrictIspInfo::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

string DistrictIspInfo::GetMetric() const
{
    return m_metric;
}

void DistrictIspInfo::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool DistrictIspInfo::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

int64_t DistrictIspInfo::GetDistrict() const
{
    return m_district;
}

void DistrictIspInfo::SetDistrict(const int64_t& _district)
{
    m_district = _district;
    m_districtHasBeenSet = true;
}

bool DistrictIspInfo::DistrictHasBeenSet() const
{
    return m_districtHasBeenSet;
}

int64_t DistrictIspInfo::GetIsp() const
{
    return m_isp;
}

void DistrictIspInfo::SetIsp(const int64_t& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool DistrictIspInfo::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

vector<uint64_t> DistrictIspInfo::GetDataPoints() const
{
    return m_dataPoints;
}

void DistrictIspInfo::SetDataPoints(const vector<uint64_t>& _dataPoints)
{
    m_dataPoints = _dataPoints;
    m_dataPointsHasBeenSet = true;
}

bool DistrictIspInfo::DataPointsHasBeenSet() const
{
    return m_dataPointsHasBeenSet;
}

string DistrictIspInfo::GetDistrictName() const
{
    return m_districtName;
}

void DistrictIspInfo::SetDistrictName(const string& _districtName)
{
    m_districtName = _districtName;
    m_districtNameHasBeenSet = true;
}

bool DistrictIspInfo::DistrictNameHasBeenSet() const
{
    return m_districtNameHasBeenSet;
}

string DistrictIspInfo::GetIspName() const
{
    return m_ispName;
}

void DistrictIspInfo::SetIspName(const string& _ispName)
{
    m_ispName = _ispName;
    m_ispNameHasBeenSet = true;
}

bool DistrictIspInfo::IspNameHasBeenSet() const
{
    return m_ispNameHasBeenSet;
}

