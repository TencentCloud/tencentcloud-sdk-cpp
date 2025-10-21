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

#include <tencentcloud/igtm/v20231024/model/MonitorDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

MonitorDetail::MonitorDetail() :
    m_monitorIdHasBeenSet(false),
    m_monitorNameHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_detectorGroupIdsHasBeenSet(false),
    m_checkProtocolHasBeenSet(false),
    m_checkIntervalHasBeenSet(false),
    m_pingNumHasBeenSet(false),
    m_tcpPortHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_returnCodeThresholdHasBeenSet(false),
    m_enableRedirectHasBeenSet(false),
    m_enableSniHasBeenSet(false),
    m_packetLossRateHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_failTimesHasBeenSet(false),
    m_failRateHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_updatedOnHasBeenSet(false),
    m_detectorStyleHasBeenSet(false),
    m_detectNumHasBeenSet(false),
    m_continuePeriodHasBeenSet(false)
{
}

CoreInternalOutcome MonitorDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MonitorId") && !value["MonitorId"].IsNull())
    {
        if (!value["MonitorId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.MonitorId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorId = value["MonitorId"].GetUint64();
        m_monitorIdHasBeenSet = true;
    }

    if (value.HasMember("MonitorName") && !value["MonitorName"].IsNull())
    {
        if (!value["MonitorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.MonitorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorName = string(value["MonitorName"].GetString());
        m_monitorNameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("DetectorGroupIds") && !value["DetectorGroupIds"].IsNull())
    {
        if (!value["DetectorGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.DetectorGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["DetectorGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_detectorGroupIds.push_back((*itr).GetUint64());
        }
        m_detectorGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("CheckProtocol") && !value["CheckProtocol"].IsNull())
    {
        if (!value["CheckProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.CheckProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkProtocol = string(value["CheckProtocol"].GetString());
        m_checkProtocolHasBeenSet = true;
    }

    if (value.HasMember("CheckInterval") && !value["CheckInterval"].IsNull())
    {
        if (!value["CheckInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.CheckInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkInterval = value["CheckInterval"].GetUint64();
        m_checkIntervalHasBeenSet = true;
    }

    if (value.HasMember("PingNum") && !value["PingNum"].IsNull())
    {
        if (!value["PingNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.PingNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pingNum = value["PingNum"].GetUint64();
        m_pingNumHasBeenSet = true;
    }

    if (value.HasMember("TcpPort") && !value["TcpPort"].IsNull())
    {
        if (!value["TcpPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.TcpPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tcpPort = value["TcpPort"].GetUint64();
        m_tcpPortHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("ReturnCodeThreshold") && !value["ReturnCodeThreshold"].IsNull())
    {
        if (!value["ReturnCodeThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.ReturnCodeThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_returnCodeThreshold = value["ReturnCodeThreshold"].GetUint64();
        m_returnCodeThresholdHasBeenSet = true;
    }

    if (value.HasMember("EnableRedirect") && !value["EnableRedirect"].IsNull())
    {
        if (!value["EnableRedirect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.EnableRedirect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enableRedirect = string(value["EnableRedirect"].GetString());
        m_enableRedirectHasBeenSet = true;
    }

    if (value.HasMember("EnableSni") && !value["EnableSni"].IsNull())
    {
        if (!value["EnableSni"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.EnableSni` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enableSni = string(value["EnableSni"].GetString());
        m_enableSniHasBeenSet = true;
    }

    if (value.HasMember("PacketLossRate") && !value["PacketLossRate"].IsNull())
    {
        if (!value["PacketLossRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.PacketLossRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packetLossRate = value["PacketLossRate"].GetUint64();
        m_packetLossRateHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("FailTimes") && !value["FailTimes"].IsNull())
    {
        if (!value["FailTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.FailTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failTimes = value["FailTimes"].GetUint64();
        m_failTimesHasBeenSet = true;
    }

    if (value.HasMember("FailRate") && !value["FailRate"].IsNull())
    {
        if (!value["FailRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.FailRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failRate = value["FailRate"].GetUint64();
        m_failRateHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }

    if (value.HasMember("DetectorStyle") && !value["DetectorStyle"].IsNull())
    {
        if (!value["DetectorStyle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.DetectorStyle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectorStyle = string(value["DetectorStyle"].GetString());
        m_detectorStyleHasBeenSet = true;
    }

    if (value.HasMember("DetectNum") && !value["DetectNum"].IsNull())
    {
        if (!value["DetectNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.DetectNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_detectNum = value["DetectNum"].GetUint64();
        m_detectNumHasBeenSet = true;
    }

    if (value.HasMember("ContinuePeriod") && !value["ContinuePeriod"].IsNull())
    {
        if (!value["ContinuePeriod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorDetail.ContinuePeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_continuePeriod = value["ContinuePeriod"].GetUint64();
        m_continuePeriodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_monitorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorId, allocator);
    }

    if (m_monitorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorName.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_detectorGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectorGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_detectorGroupIds.begin(); itr != m_detectorGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_checkProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_checkIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkInterval, allocator);
    }

    if (m_pingNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PingNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pingNum, allocator);
    }

    if (m_tcpPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcpPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tcpPort, allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_returnCodeThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnCodeThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_returnCodeThreshold, allocator);
    }

    if (m_enableRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enableRedirect.c_str(), allocator).Move(), allocator);
    }

    if (m_enableSniHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSni";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enableSni.c_str(), allocator).Move(), allocator);
    }

    if (m_packetLossRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PacketLossRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packetLossRate, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_failTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failTimes, allocator);
    }

    if (m_failRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failRate, allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedOn.c_str(), allocator).Move(), allocator);
    }

    if (m_detectorStyleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectorStyle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectorStyle.c_str(), allocator).Move(), allocator);
    }

    if (m_detectNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectNum, allocator);
    }

    if (m_continuePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContinuePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_continuePeriod, allocator);
    }

}


uint64_t MonitorDetail::GetMonitorId() const
{
    return m_monitorId;
}

void MonitorDetail::SetMonitorId(const uint64_t& _monitorId)
{
    m_monitorId = _monitorId;
    m_monitorIdHasBeenSet = true;
}

bool MonitorDetail::MonitorIdHasBeenSet() const
{
    return m_monitorIdHasBeenSet;
}

string MonitorDetail::GetMonitorName() const
{
    return m_monitorName;
}

void MonitorDetail::SetMonitorName(const string& _monitorName)
{
    m_monitorName = _monitorName;
    m_monitorNameHasBeenSet = true;
}

bool MonitorDetail::MonitorNameHasBeenSet() const
{
    return m_monitorNameHasBeenSet;
}

string MonitorDetail::GetUin() const
{
    return m_uin;
}

void MonitorDetail::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool MonitorDetail::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

vector<uint64_t> MonitorDetail::GetDetectorGroupIds() const
{
    return m_detectorGroupIds;
}

void MonitorDetail::SetDetectorGroupIds(const vector<uint64_t>& _detectorGroupIds)
{
    m_detectorGroupIds = _detectorGroupIds;
    m_detectorGroupIdsHasBeenSet = true;
}

bool MonitorDetail::DetectorGroupIdsHasBeenSet() const
{
    return m_detectorGroupIdsHasBeenSet;
}

string MonitorDetail::GetCheckProtocol() const
{
    return m_checkProtocol;
}

void MonitorDetail::SetCheckProtocol(const string& _checkProtocol)
{
    m_checkProtocol = _checkProtocol;
    m_checkProtocolHasBeenSet = true;
}

bool MonitorDetail::CheckProtocolHasBeenSet() const
{
    return m_checkProtocolHasBeenSet;
}

uint64_t MonitorDetail::GetCheckInterval() const
{
    return m_checkInterval;
}

void MonitorDetail::SetCheckInterval(const uint64_t& _checkInterval)
{
    m_checkInterval = _checkInterval;
    m_checkIntervalHasBeenSet = true;
}

bool MonitorDetail::CheckIntervalHasBeenSet() const
{
    return m_checkIntervalHasBeenSet;
}

uint64_t MonitorDetail::GetPingNum() const
{
    return m_pingNum;
}

void MonitorDetail::SetPingNum(const uint64_t& _pingNum)
{
    m_pingNum = _pingNum;
    m_pingNumHasBeenSet = true;
}

bool MonitorDetail::PingNumHasBeenSet() const
{
    return m_pingNumHasBeenSet;
}

uint64_t MonitorDetail::GetTcpPort() const
{
    return m_tcpPort;
}

void MonitorDetail::SetTcpPort(const uint64_t& _tcpPort)
{
    m_tcpPort = _tcpPort;
    m_tcpPortHasBeenSet = true;
}

bool MonitorDetail::TcpPortHasBeenSet() const
{
    return m_tcpPortHasBeenSet;
}

string MonitorDetail::GetHost() const
{
    return m_host;
}

void MonitorDetail::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool MonitorDetail::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string MonitorDetail::GetPath() const
{
    return m_path;
}

void MonitorDetail::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool MonitorDetail::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

uint64_t MonitorDetail::GetReturnCodeThreshold() const
{
    return m_returnCodeThreshold;
}

void MonitorDetail::SetReturnCodeThreshold(const uint64_t& _returnCodeThreshold)
{
    m_returnCodeThreshold = _returnCodeThreshold;
    m_returnCodeThresholdHasBeenSet = true;
}

bool MonitorDetail::ReturnCodeThresholdHasBeenSet() const
{
    return m_returnCodeThresholdHasBeenSet;
}

string MonitorDetail::GetEnableRedirect() const
{
    return m_enableRedirect;
}

void MonitorDetail::SetEnableRedirect(const string& _enableRedirect)
{
    m_enableRedirect = _enableRedirect;
    m_enableRedirectHasBeenSet = true;
}

bool MonitorDetail::EnableRedirectHasBeenSet() const
{
    return m_enableRedirectHasBeenSet;
}

string MonitorDetail::GetEnableSni() const
{
    return m_enableSni;
}

void MonitorDetail::SetEnableSni(const string& _enableSni)
{
    m_enableSni = _enableSni;
    m_enableSniHasBeenSet = true;
}

bool MonitorDetail::EnableSniHasBeenSet() const
{
    return m_enableSniHasBeenSet;
}

uint64_t MonitorDetail::GetPacketLossRate() const
{
    return m_packetLossRate;
}

void MonitorDetail::SetPacketLossRate(const uint64_t& _packetLossRate)
{
    m_packetLossRate = _packetLossRate;
    m_packetLossRateHasBeenSet = true;
}

bool MonitorDetail::PacketLossRateHasBeenSet() const
{
    return m_packetLossRateHasBeenSet;
}

uint64_t MonitorDetail::GetTimeout() const
{
    return m_timeout;
}

void MonitorDetail::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool MonitorDetail::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

uint64_t MonitorDetail::GetFailTimes() const
{
    return m_failTimes;
}

void MonitorDetail::SetFailTimes(const uint64_t& _failTimes)
{
    m_failTimes = _failTimes;
    m_failTimesHasBeenSet = true;
}

bool MonitorDetail::FailTimesHasBeenSet() const
{
    return m_failTimesHasBeenSet;
}

uint64_t MonitorDetail::GetFailRate() const
{
    return m_failRate;
}

void MonitorDetail::SetFailRate(const uint64_t& _failRate)
{
    m_failRate = _failRate;
    m_failRateHasBeenSet = true;
}

bool MonitorDetail::FailRateHasBeenSet() const
{
    return m_failRateHasBeenSet;
}

string MonitorDetail::GetCreatedOn() const
{
    return m_createdOn;
}

void MonitorDetail::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool MonitorDetail::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string MonitorDetail::GetUpdatedOn() const
{
    return m_updatedOn;
}

void MonitorDetail::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool MonitorDetail::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

string MonitorDetail::GetDetectorStyle() const
{
    return m_detectorStyle;
}

void MonitorDetail::SetDetectorStyle(const string& _detectorStyle)
{
    m_detectorStyle = _detectorStyle;
    m_detectorStyleHasBeenSet = true;
}

bool MonitorDetail::DetectorStyleHasBeenSet() const
{
    return m_detectorStyleHasBeenSet;
}

uint64_t MonitorDetail::GetDetectNum() const
{
    return m_detectNum;
}

void MonitorDetail::SetDetectNum(const uint64_t& _detectNum)
{
    m_detectNum = _detectNum;
    m_detectNumHasBeenSet = true;
}

bool MonitorDetail::DetectNumHasBeenSet() const
{
    return m_detectNumHasBeenSet;
}

uint64_t MonitorDetail::GetContinuePeriod() const
{
    return m_continuePeriod;
}

void MonitorDetail::SetContinuePeriod(const uint64_t& _continuePeriod)
{
    m_continuePeriod = _continuePeriod;
    m_continuePeriodHasBeenSet = true;
}

bool MonitorDetail::ContinuePeriodHasBeenSet() const
{
    return m_continuePeriodHasBeenSet;
}

