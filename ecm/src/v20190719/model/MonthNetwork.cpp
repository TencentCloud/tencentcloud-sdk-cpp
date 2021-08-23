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

#include <tencentcloud/ecm/v20190719/model/MonthNetwork.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

MonthNetwork::MonthNetwork() :
    m_zoneInfoHasBeenSet(false),
    m_monthHasBeenSet(false),
    m_bandwidthPkgIdHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_trafficMaxInHasBeenSet(false),
    m_trafficMaxOutHasBeenSet(false),
    m_feeTrafficHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_effectiveDaysHasBeenSet(false),
    m_monthDaysHasBeenSet(false),
    m_effectiveDaysRateHasBeenSet(false),
    m_bandwidthPkgTypeHasBeenSet(false)
{
}

CoreInternalOutcome MonthNetwork::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneInfo") && !value["ZoneInfo"].IsNull())
    {
        if (!value["ZoneInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MonthNetwork.ZoneInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_zoneInfo.Deserialize(value["ZoneInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_zoneInfoHasBeenSet = true;
    }

    if (value.HasMember("Month") && !value["Month"].IsNull())
    {
        if (!value["Month"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonthNetwork.Month` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_month = string(value["Month"].GetString());
        m_monthHasBeenSet = true;
    }

    if (value.HasMember("BandwidthPkgId") && !value["BandwidthPkgId"].IsNull())
    {
        if (!value["BandwidthPkgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonthNetwork.BandwidthPkgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthPkgId = string(value["BandwidthPkgId"].GetString());
        m_bandwidthPkgIdHasBeenSet = true;
    }

    if (value.HasMember("Isp") && !value["Isp"].IsNull())
    {
        if (!value["Isp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonthNetwork.Isp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isp = string(value["Isp"].GetString());
        m_ispHasBeenSet = true;
    }

    if (value.HasMember("TrafficMaxIn") && !value["TrafficMaxIn"].IsNull())
    {
        if (!value["TrafficMaxIn"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MonthNetwork.TrafficMaxIn` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_trafficMaxIn = value["TrafficMaxIn"].GetDouble();
        m_trafficMaxInHasBeenSet = true;
    }

    if (value.HasMember("TrafficMaxOut") && !value["TrafficMaxOut"].IsNull())
    {
        if (!value["TrafficMaxOut"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MonthNetwork.TrafficMaxOut` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_trafficMaxOut = value["TrafficMaxOut"].GetDouble();
        m_trafficMaxOutHasBeenSet = true;
    }

    if (value.HasMember("FeeTraffic") && !value["FeeTraffic"].IsNull())
    {
        if (!value["FeeTraffic"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MonthNetwork.FeeTraffic` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_feeTraffic = value["FeeTraffic"].GetDouble();
        m_feeTrafficHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonthNetwork.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonthNetwork.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("EffectiveDays") && !value["EffectiveDays"].IsNull())
    {
        if (!value["EffectiveDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonthNetwork.EffectiveDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveDays = value["EffectiveDays"].GetInt64();
        m_effectiveDaysHasBeenSet = true;
    }

    if (value.HasMember("MonthDays") && !value["MonthDays"].IsNull())
    {
        if (!value["MonthDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonthNetwork.MonthDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monthDays = value["MonthDays"].GetInt64();
        m_monthDaysHasBeenSet = true;
    }

    if (value.HasMember("EffectiveDaysRate") && !value["EffectiveDaysRate"].IsNull())
    {
        if (!value["EffectiveDaysRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MonthNetwork.EffectiveDaysRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveDaysRate = value["EffectiveDaysRate"].GetDouble();
        m_effectiveDaysRateHasBeenSet = true;
    }

    if (value.HasMember("BandwidthPkgType") && !value["BandwidthPkgType"].IsNull())
    {
        if (!value["BandwidthPkgType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonthNetwork.BandwidthPkgType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthPkgType = string(value["BandwidthPkgType"].GetString());
        m_bandwidthPkgTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonthNetwork::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_zoneInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthPkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthPkgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bandwidthPkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isp.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficMaxInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMaxIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trafficMaxIn, allocator);
    }

    if (m_trafficMaxOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMaxOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trafficMaxOut, allocator);
    }

    if (m_feeTrafficHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeTraffic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_feeTraffic, allocator);
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

    if (m_effectiveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectiveDays, allocator);
    }

    if (m_monthDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonthDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monthDays, allocator);
    }

    if (m_effectiveDaysRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveDaysRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectiveDaysRate, allocator);
    }

    if (m_bandwidthPkgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthPkgType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bandwidthPkgType.c_str(), allocator).Move(), allocator);
    }

}


ZoneInfo MonthNetwork::GetZoneInfo() const
{
    return m_zoneInfo;
}

void MonthNetwork::SetZoneInfo(const ZoneInfo& _zoneInfo)
{
    m_zoneInfo = _zoneInfo;
    m_zoneInfoHasBeenSet = true;
}

bool MonthNetwork::ZoneInfoHasBeenSet() const
{
    return m_zoneInfoHasBeenSet;
}

string MonthNetwork::GetMonth() const
{
    return m_month;
}

void MonthNetwork::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool MonthNetwork::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}

string MonthNetwork::GetBandwidthPkgId() const
{
    return m_bandwidthPkgId;
}

void MonthNetwork::SetBandwidthPkgId(const string& _bandwidthPkgId)
{
    m_bandwidthPkgId = _bandwidthPkgId;
    m_bandwidthPkgIdHasBeenSet = true;
}

bool MonthNetwork::BandwidthPkgIdHasBeenSet() const
{
    return m_bandwidthPkgIdHasBeenSet;
}

string MonthNetwork::GetIsp() const
{
    return m_isp;
}

void MonthNetwork::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool MonthNetwork::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

double MonthNetwork::GetTrafficMaxIn() const
{
    return m_trafficMaxIn;
}

void MonthNetwork::SetTrafficMaxIn(const double& _trafficMaxIn)
{
    m_trafficMaxIn = _trafficMaxIn;
    m_trafficMaxInHasBeenSet = true;
}

bool MonthNetwork::TrafficMaxInHasBeenSet() const
{
    return m_trafficMaxInHasBeenSet;
}

double MonthNetwork::GetTrafficMaxOut() const
{
    return m_trafficMaxOut;
}

void MonthNetwork::SetTrafficMaxOut(const double& _trafficMaxOut)
{
    m_trafficMaxOut = _trafficMaxOut;
    m_trafficMaxOutHasBeenSet = true;
}

bool MonthNetwork::TrafficMaxOutHasBeenSet() const
{
    return m_trafficMaxOutHasBeenSet;
}

double MonthNetwork::GetFeeTraffic() const
{
    return m_feeTraffic;
}

void MonthNetwork::SetFeeTraffic(const double& _feeTraffic)
{
    m_feeTraffic = _feeTraffic;
    m_feeTrafficHasBeenSet = true;
}

bool MonthNetwork::FeeTrafficHasBeenSet() const
{
    return m_feeTrafficHasBeenSet;
}

string MonthNetwork::GetStartTime() const
{
    return m_startTime;
}

void MonthNetwork::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool MonthNetwork::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string MonthNetwork::GetEndTime() const
{
    return m_endTime;
}

void MonthNetwork::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool MonthNetwork::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t MonthNetwork::GetEffectiveDays() const
{
    return m_effectiveDays;
}

void MonthNetwork::SetEffectiveDays(const int64_t& _effectiveDays)
{
    m_effectiveDays = _effectiveDays;
    m_effectiveDaysHasBeenSet = true;
}

bool MonthNetwork::EffectiveDaysHasBeenSet() const
{
    return m_effectiveDaysHasBeenSet;
}

int64_t MonthNetwork::GetMonthDays() const
{
    return m_monthDays;
}

void MonthNetwork::SetMonthDays(const int64_t& _monthDays)
{
    m_monthDays = _monthDays;
    m_monthDaysHasBeenSet = true;
}

bool MonthNetwork::MonthDaysHasBeenSet() const
{
    return m_monthDaysHasBeenSet;
}

double MonthNetwork::GetEffectiveDaysRate() const
{
    return m_effectiveDaysRate;
}

void MonthNetwork::SetEffectiveDaysRate(const double& _effectiveDaysRate)
{
    m_effectiveDaysRate = _effectiveDaysRate;
    m_effectiveDaysRateHasBeenSet = true;
}

bool MonthNetwork::EffectiveDaysRateHasBeenSet() const
{
    return m_effectiveDaysRateHasBeenSet;
}

string MonthNetwork::GetBandwidthPkgType() const
{
    return m_bandwidthPkgType;
}

void MonthNetwork::SetBandwidthPkgType(const string& _bandwidthPkgType)
{
    m_bandwidthPkgType = _bandwidthPkgType;
    m_bandwidthPkgTypeHasBeenSet = true;
}

bool MonthNetwork::BandwidthPkgTypeHasBeenSet() const
{
    return m_bandwidthPkgTypeHasBeenSet;
}

