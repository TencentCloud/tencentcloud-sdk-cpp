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

#include <tencentcloud/gse/v20191112/model/FleetStatisticDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

FleetStatisticDetail::FleetStatisticDetail() :
    m_fleetIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceIPHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_totalUsedTimeSecondsHasBeenSet(false),
    m_totalUsedFlowMegaBytesHasBeenSet(false)
{
}

CoreInternalOutcome FleetStatisticDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FleetId") && !value["FleetId"].IsNull())
    {
        if (!value["FleetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetStatisticDetail.FleetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fleetId = string(value["FleetId"].GetString());
        m_fleetIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetStatisticDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceIP") && !value["InstanceIP"].IsNull())
    {
        if (!value["InstanceIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetStatisticDetail.InstanceIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceIP = string(value["InstanceIP"].GetString());
        m_instanceIPHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetStatisticDetail.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetStatisticDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("TotalUsedTimeSeconds") && !value["TotalUsedTimeSeconds"].IsNull())
    {
        if (!value["TotalUsedTimeSeconds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetStatisticDetail.TotalUsedTimeSeconds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalUsedTimeSeconds = string(value["TotalUsedTimeSeconds"].GetString());
        m_totalUsedTimeSecondsHasBeenSet = true;
    }

    if (value.HasMember("TotalUsedFlowMegaBytes") && !value["TotalUsedFlowMegaBytes"].IsNull())
    {
        if (!value["TotalUsedFlowMegaBytes"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FleetStatisticDetail.TotalUsedFlowMegaBytes` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalUsedFlowMegaBytes = value["TotalUsedFlowMegaBytes"].GetDouble();
        m_totalUsedFlowMegaBytesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FleetStatisticDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fleetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceIP.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_totalUsedTimeSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalUsedTimeSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalUsedTimeSeconds.c_str(), allocator).Move(), allocator);
    }

    if (m_totalUsedFlowMegaBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalUsedFlowMegaBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalUsedFlowMegaBytes, allocator);
    }

}


string FleetStatisticDetail::GetFleetId() const
{
    return m_fleetId;
}

void FleetStatisticDetail::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool FleetStatisticDetail::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

string FleetStatisticDetail::GetInstanceId() const
{
    return m_instanceId;
}

void FleetStatisticDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool FleetStatisticDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string FleetStatisticDetail::GetInstanceIP() const
{
    return m_instanceIP;
}

void FleetStatisticDetail::SetInstanceIP(const string& _instanceIP)
{
    m_instanceIP = _instanceIP;
    m_instanceIPHasBeenSet = true;
}

bool FleetStatisticDetail::InstanceIPHasBeenSet() const
{
    return m_instanceIPHasBeenSet;
}

string FleetStatisticDetail::GetBeginTime() const
{
    return m_beginTime;
}

void FleetStatisticDetail::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool FleetStatisticDetail::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string FleetStatisticDetail::GetEndTime() const
{
    return m_endTime;
}

void FleetStatisticDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool FleetStatisticDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string FleetStatisticDetail::GetTotalUsedTimeSeconds() const
{
    return m_totalUsedTimeSeconds;
}

void FleetStatisticDetail::SetTotalUsedTimeSeconds(const string& _totalUsedTimeSeconds)
{
    m_totalUsedTimeSeconds = _totalUsedTimeSeconds;
    m_totalUsedTimeSecondsHasBeenSet = true;
}

bool FleetStatisticDetail::TotalUsedTimeSecondsHasBeenSet() const
{
    return m_totalUsedTimeSecondsHasBeenSet;
}

double FleetStatisticDetail::GetTotalUsedFlowMegaBytes() const
{
    return m_totalUsedFlowMegaBytes;
}

void FleetStatisticDetail::SetTotalUsedFlowMegaBytes(const double& _totalUsedFlowMegaBytes)
{
    m_totalUsedFlowMegaBytes = _totalUsedFlowMegaBytes;
    m_totalUsedFlowMegaBytesHasBeenSet = true;
}

bool FleetStatisticDetail::TotalUsedFlowMegaBytesHasBeenSet() const
{
    return m_totalUsedFlowMegaBytesHasBeenSet;
}

