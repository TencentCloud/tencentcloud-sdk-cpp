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

#include <tencentcloud/teo/v20220901/model/SpeedTestingMetricData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SpeedTestingMetricData::SpeedTestingMetricData() :
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_originSpeedTestingInfoHasBeenSet(false),
    m_proxySpeedTestingInfoHasBeenSet(false),
    m_speedTestingStatusHasBeenSet(false),
    m_optimizeActionHasBeenSet(false),
    m_proxyLoadTimeHasBeenSet(false),
    m_originLoadTimeHasBeenSet(false)
{
}

CoreInternalOutcome SpeedTestingMetricData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingMetricData.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingMetricData.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("OriginSpeedTestingInfo") && !value["OriginSpeedTestingInfo"].IsNull())
    {
        if (!value["OriginSpeedTestingInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpeedTestingMetricData.OriginSpeedTestingInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginSpeedTestingInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpeedTestingInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_originSpeedTestingInfo.push_back(item);
        }
        m_originSpeedTestingInfoHasBeenSet = true;
    }

    if (value.HasMember("ProxySpeedTestingInfo") && !value["ProxySpeedTestingInfo"].IsNull())
    {
        if (!value["ProxySpeedTestingInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpeedTestingMetricData.ProxySpeedTestingInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxySpeedTestingInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpeedTestingInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proxySpeedTestingInfo.push_back(item);
        }
        m_proxySpeedTestingInfoHasBeenSet = true;
    }

    if (value.HasMember("SpeedTestingStatus") && !value["SpeedTestingStatus"].IsNull())
    {
        if (!value["SpeedTestingStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingMetricData.SpeedTestingStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_speedTestingStatus.Deserialize(value["SpeedTestingStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_speedTestingStatusHasBeenSet = true;
    }

    if (value.HasMember("OptimizeAction") && !value["OptimizeAction"].IsNull())
    {
        if (!value["OptimizeAction"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpeedTestingMetricData.OptimizeAction` is not array type"));

        const rapidjson::Value &tmpValue = value["OptimizeAction"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OptimizeAction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_optimizeAction.push_back(item);
        }
        m_optimizeActionHasBeenSet = true;
    }

    if (value.HasMember("ProxyLoadTime") && !value["ProxyLoadTime"].IsNull())
    {
        if (!value["ProxyLoadTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingMetricData.ProxyLoadTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyLoadTime = value["ProxyLoadTime"].GetInt64();
        m_proxyLoadTimeHasBeenSet = true;
    }

    if (value.HasMember("OriginLoadTime") && !value["OriginLoadTime"].IsNull())
    {
        if (!value["OriginLoadTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingMetricData.OriginLoadTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originLoadTime = value["OriginLoadTime"].GetInt64();
        m_originLoadTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpeedTestingMetricData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_originSpeedTestingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginSpeedTestingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_originSpeedTestingInfo.begin(); itr != m_originSpeedTestingInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_proxySpeedTestingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxySpeedTestingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxySpeedTestingInfo.begin(); itr != m_proxySpeedTestingInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_speedTestingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeedTestingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_speedTestingStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_optimizeActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptimizeAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_optimizeAction.begin(); itr != m_optimizeAction.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_proxyLoadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyLoadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyLoadTime, allocator);
    }

    if (m_originLoadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginLoadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originLoadTime, allocator);
    }

}


string SpeedTestingMetricData::GetZoneId() const
{
    return m_zoneId;
}

void SpeedTestingMetricData::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool SpeedTestingMetricData::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string SpeedTestingMetricData::GetZoneName() const
{
    return m_zoneName;
}

void SpeedTestingMetricData::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool SpeedTestingMetricData::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

vector<SpeedTestingInfo> SpeedTestingMetricData::GetOriginSpeedTestingInfo() const
{
    return m_originSpeedTestingInfo;
}

void SpeedTestingMetricData::SetOriginSpeedTestingInfo(const vector<SpeedTestingInfo>& _originSpeedTestingInfo)
{
    m_originSpeedTestingInfo = _originSpeedTestingInfo;
    m_originSpeedTestingInfoHasBeenSet = true;
}

bool SpeedTestingMetricData::OriginSpeedTestingInfoHasBeenSet() const
{
    return m_originSpeedTestingInfoHasBeenSet;
}

vector<SpeedTestingInfo> SpeedTestingMetricData::GetProxySpeedTestingInfo() const
{
    return m_proxySpeedTestingInfo;
}

void SpeedTestingMetricData::SetProxySpeedTestingInfo(const vector<SpeedTestingInfo>& _proxySpeedTestingInfo)
{
    m_proxySpeedTestingInfo = _proxySpeedTestingInfo;
    m_proxySpeedTestingInfoHasBeenSet = true;
}

bool SpeedTestingMetricData::ProxySpeedTestingInfoHasBeenSet() const
{
    return m_proxySpeedTestingInfoHasBeenSet;
}

SpeedTestingStatus SpeedTestingMetricData::GetSpeedTestingStatus() const
{
    return m_speedTestingStatus;
}

void SpeedTestingMetricData::SetSpeedTestingStatus(const SpeedTestingStatus& _speedTestingStatus)
{
    m_speedTestingStatus = _speedTestingStatus;
    m_speedTestingStatusHasBeenSet = true;
}

bool SpeedTestingMetricData::SpeedTestingStatusHasBeenSet() const
{
    return m_speedTestingStatusHasBeenSet;
}

vector<OptimizeAction> SpeedTestingMetricData::GetOptimizeAction() const
{
    return m_optimizeAction;
}

void SpeedTestingMetricData::SetOptimizeAction(const vector<OptimizeAction>& _optimizeAction)
{
    m_optimizeAction = _optimizeAction;
    m_optimizeActionHasBeenSet = true;
}

bool SpeedTestingMetricData::OptimizeActionHasBeenSet() const
{
    return m_optimizeActionHasBeenSet;
}

int64_t SpeedTestingMetricData::GetProxyLoadTime() const
{
    return m_proxyLoadTime;
}

void SpeedTestingMetricData::SetProxyLoadTime(const int64_t& _proxyLoadTime)
{
    m_proxyLoadTime = _proxyLoadTime;
    m_proxyLoadTimeHasBeenSet = true;
}

bool SpeedTestingMetricData::ProxyLoadTimeHasBeenSet() const
{
    return m_proxyLoadTimeHasBeenSet;
}

int64_t SpeedTestingMetricData::GetOriginLoadTime() const
{
    return m_originLoadTime;
}

void SpeedTestingMetricData::SetOriginLoadTime(const int64_t& _originLoadTime)
{
    m_originLoadTime = _originLoadTime;
    m_originLoadTimeHasBeenSet = true;
}

bool SpeedTestingMetricData::OriginLoadTimeHasBeenSet() const
{
    return m_originLoadTimeHasBeenSet;
}

