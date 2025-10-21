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

#include <tencentcloud/igtm/v20231024/model/ModifyMonitorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

ModifyMonitorRequest::ModifyMonitorRequest() :
    m_monitorIdHasBeenSet(false),
    m_monitorNameHasBeenSet(false),
    m_checkProtocolHasBeenSet(false),
    m_checkIntervalHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_failTimesHasBeenSet(false),
    m_failRateHasBeenSet(false),
    m_detectorStyleHasBeenSet(false),
    m_detectorGroupIdsHasBeenSet(false),
    m_pingNumHasBeenSet(false),
    m_tcpPortHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_returnCodeThresholdHasBeenSet(false),
    m_enableRedirectHasBeenSet(false),
    m_enableSniHasBeenSet(false),
    m_packetLossRateHasBeenSet(false),
    m_continuePeriodHasBeenSet(false)
{
}

string ModifyMonitorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_monitorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_monitorId, allocator);
    }

    if (m_monitorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_monitorName.c_str(), allocator).Move(), allocator);
    }

    if (m_checkProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_checkIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkInterval, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_failTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailTimes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_failTimes, allocator);
    }

    if (m_failRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_failRate, allocator);
    }

    if (m_detectorStyleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectorStyle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_detectorStyle.c_str(), allocator).Move(), allocator);
    }

    if (m_detectorGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectorGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_detectorGroupIds.begin(); itr != m_detectorGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_pingNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PingNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pingNum, allocator);
    }

    if (m_tcpPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcpPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tcpPort, allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_returnCodeThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnCodeThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_returnCodeThreshold, allocator);
    }

    if (m_enableRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRedirect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enableRedirect.c_str(), allocator).Move(), allocator);
    }

    if (m_enableSniHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSni";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enableSni.c_str(), allocator).Move(), allocator);
    }

    if (m_packetLossRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PacketLossRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_packetLossRate, allocator);
    }

    if (m_continuePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContinuePeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_continuePeriod, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyMonitorRequest::GetMonitorId() const
{
    return m_monitorId;
}

void ModifyMonitorRequest::SetMonitorId(const uint64_t& _monitorId)
{
    m_monitorId = _monitorId;
    m_monitorIdHasBeenSet = true;
}

bool ModifyMonitorRequest::MonitorIdHasBeenSet() const
{
    return m_monitorIdHasBeenSet;
}

string ModifyMonitorRequest::GetMonitorName() const
{
    return m_monitorName;
}

void ModifyMonitorRequest::SetMonitorName(const string& _monitorName)
{
    m_monitorName = _monitorName;
    m_monitorNameHasBeenSet = true;
}

bool ModifyMonitorRequest::MonitorNameHasBeenSet() const
{
    return m_monitorNameHasBeenSet;
}

string ModifyMonitorRequest::GetCheckProtocol() const
{
    return m_checkProtocol;
}

void ModifyMonitorRequest::SetCheckProtocol(const string& _checkProtocol)
{
    m_checkProtocol = _checkProtocol;
    m_checkProtocolHasBeenSet = true;
}

bool ModifyMonitorRequest::CheckProtocolHasBeenSet() const
{
    return m_checkProtocolHasBeenSet;
}

uint64_t ModifyMonitorRequest::GetCheckInterval() const
{
    return m_checkInterval;
}

void ModifyMonitorRequest::SetCheckInterval(const uint64_t& _checkInterval)
{
    m_checkInterval = _checkInterval;
    m_checkIntervalHasBeenSet = true;
}

bool ModifyMonitorRequest::CheckIntervalHasBeenSet() const
{
    return m_checkIntervalHasBeenSet;
}

uint64_t ModifyMonitorRequest::GetTimeout() const
{
    return m_timeout;
}

void ModifyMonitorRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ModifyMonitorRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

uint64_t ModifyMonitorRequest::GetFailTimes() const
{
    return m_failTimes;
}

void ModifyMonitorRequest::SetFailTimes(const uint64_t& _failTimes)
{
    m_failTimes = _failTimes;
    m_failTimesHasBeenSet = true;
}

bool ModifyMonitorRequest::FailTimesHasBeenSet() const
{
    return m_failTimesHasBeenSet;
}

uint64_t ModifyMonitorRequest::GetFailRate() const
{
    return m_failRate;
}

void ModifyMonitorRequest::SetFailRate(const uint64_t& _failRate)
{
    m_failRate = _failRate;
    m_failRateHasBeenSet = true;
}

bool ModifyMonitorRequest::FailRateHasBeenSet() const
{
    return m_failRateHasBeenSet;
}

string ModifyMonitorRequest::GetDetectorStyle() const
{
    return m_detectorStyle;
}

void ModifyMonitorRequest::SetDetectorStyle(const string& _detectorStyle)
{
    m_detectorStyle = _detectorStyle;
    m_detectorStyleHasBeenSet = true;
}

bool ModifyMonitorRequest::DetectorStyleHasBeenSet() const
{
    return m_detectorStyleHasBeenSet;
}

vector<uint64_t> ModifyMonitorRequest::GetDetectorGroupIds() const
{
    return m_detectorGroupIds;
}

void ModifyMonitorRequest::SetDetectorGroupIds(const vector<uint64_t>& _detectorGroupIds)
{
    m_detectorGroupIds = _detectorGroupIds;
    m_detectorGroupIdsHasBeenSet = true;
}

bool ModifyMonitorRequest::DetectorGroupIdsHasBeenSet() const
{
    return m_detectorGroupIdsHasBeenSet;
}

uint64_t ModifyMonitorRequest::GetPingNum() const
{
    return m_pingNum;
}

void ModifyMonitorRequest::SetPingNum(const uint64_t& _pingNum)
{
    m_pingNum = _pingNum;
    m_pingNumHasBeenSet = true;
}

bool ModifyMonitorRequest::PingNumHasBeenSet() const
{
    return m_pingNumHasBeenSet;
}

uint64_t ModifyMonitorRequest::GetTcpPort() const
{
    return m_tcpPort;
}

void ModifyMonitorRequest::SetTcpPort(const uint64_t& _tcpPort)
{
    m_tcpPort = _tcpPort;
    m_tcpPortHasBeenSet = true;
}

bool ModifyMonitorRequest::TcpPortHasBeenSet() const
{
    return m_tcpPortHasBeenSet;
}

string ModifyMonitorRequest::GetHost() const
{
    return m_host;
}

void ModifyMonitorRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool ModifyMonitorRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string ModifyMonitorRequest::GetPath() const
{
    return m_path;
}

void ModifyMonitorRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ModifyMonitorRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

uint64_t ModifyMonitorRequest::GetReturnCodeThreshold() const
{
    return m_returnCodeThreshold;
}

void ModifyMonitorRequest::SetReturnCodeThreshold(const uint64_t& _returnCodeThreshold)
{
    m_returnCodeThreshold = _returnCodeThreshold;
    m_returnCodeThresholdHasBeenSet = true;
}

bool ModifyMonitorRequest::ReturnCodeThresholdHasBeenSet() const
{
    return m_returnCodeThresholdHasBeenSet;
}

string ModifyMonitorRequest::GetEnableRedirect() const
{
    return m_enableRedirect;
}

void ModifyMonitorRequest::SetEnableRedirect(const string& _enableRedirect)
{
    m_enableRedirect = _enableRedirect;
    m_enableRedirectHasBeenSet = true;
}

bool ModifyMonitorRequest::EnableRedirectHasBeenSet() const
{
    return m_enableRedirectHasBeenSet;
}

string ModifyMonitorRequest::GetEnableSni() const
{
    return m_enableSni;
}

void ModifyMonitorRequest::SetEnableSni(const string& _enableSni)
{
    m_enableSni = _enableSni;
    m_enableSniHasBeenSet = true;
}

bool ModifyMonitorRequest::EnableSniHasBeenSet() const
{
    return m_enableSniHasBeenSet;
}

uint64_t ModifyMonitorRequest::GetPacketLossRate() const
{
    return m_packetLossRate;
}

void ModifyMonitorRequest::SetPacketLossRate(const uint64_t& _packetLossRate)
{
    m_packetLossRate = _packetLossRate;
    m_packetLossRateHasBeenSet = true;
}

bool ModifyMonitorRequest::PacketLossRateHasBeenSet() const
{
    return m_packetLossRateHasBeenSet;
}

uint64_t ModifyMonitorRequest::GetContinuePeriod() const
{
    return m_continuePeriod;
}

void ModifyMonitorRequest::SetContinuePeriod(const uint64_t& _continuePeriod)
{
    m_continuePeriod = _continuePeriod;
    m_continuePeriodHasBeenSet = true;
}

bool ModifyMonitorRequest::ContinuePeriodHasBeenSet() const
{
    return m_continuePeriodHasBeenSet;
}


