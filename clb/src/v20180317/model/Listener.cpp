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

#include <tencentcloud/clb/v20180317/model/Listener.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

Listener::Listener() :
    m_listenerIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_sessionExpireTimeHasBeenSet(false),
    m_sniSwitchHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_endPortHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_targetGroupHasBeenSet(false),
    m_sessionTypeHasBeenSet(false),
    m_keepaliveEnableHasBeenSet(false),
    m_toaHasBeenSet(false),
    m_deregisterTargetRstHasBeenSet(false),
    m_attrFlagsHasBeenSet(false),
    m_targetGroupListHasBeenSet(false),
    m_maxConnHasBeenSet(false),
    m_maxCpsHasBeenSet(false),
    m_idleConnectTimeoutHasBeenSet(false),
    m_rescheduleIntervalHasBeenSet(false),
    m_dataCompressModeHasBeenSet(false)
{
}

CoreInternalOutcome Listener::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Certificate") && !value["Certificate"].IsNull())
    {
        if (!value["Certificate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.Certificate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_certificate.Deserialize(value["Certificate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_certificateHasBeenSet = true;
    }

    if (value.HasMember("HealthCheck") && !value["HealthCheck"].IsNull())
    {
        if (!value["HealthCheck"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.HealthCheck` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthCheck.Deserialize(value["HealthCheck"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckHasBeenSet = true;
    }

    if (value.HasMember("Scheduler") && !value["Scheduler"].IsNull())
    {
        if (!value["Scheduler"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.Scheduler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduler = string(value["Scheduler"].GetString());
        m_schedulerHasBeenSet = true;
    }

    if (value.HasMember("SessionExpireTime") && !value["SessionExpireTime"].IsNull())
    {
        if (!value["SessionExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.SessionExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionExpireTime = value["SessionExpireTime"].GetInt64();
        m_sessionExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("SniSwitch") && !value["SniSwitch"].IsNull())
    {
        if (!value["SniSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.SniSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sniSwitch = value["SniSwitch"].GetInt64();
        m_sniSwitchHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Listener.Rules` is not array type"));

        const rapidjson::Value &tmpValue = value["Rules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleOutput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rules.push_back(item);
        }
        m_rulesHasBeenSet = true;
    }

    if (value.HasMember("ListenerName") && !value["ListenerName"].IsNull())
    {
        if (!value["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(value["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EndPort") && !value["EndPort"].IsNull())
    {
        if (!value["EndPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.EndPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endPort = value["EndPort"].GetInt64();
        m_endPortHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetGroup") && !value["TargetGroup"].IsNull())
    {
        if (!value["TargetGroup"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.TargetGroup` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetGroup.Deserialize(value["TargetGroup"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetGroupHasBeenSet = true;
    }

    if (value.HasMember("SessionType") && !value["SessionType"].IsNull())
    {
        if (!value["SessionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.SessionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionType = string(value["SessionType"].GetString());
        m_sessionTypeHasBeenSet = true;
    }

    if (value.HasMember("KeepaliveEnable") && !value["KeepaliveEnable"].IsNull())
    {
        if (!value["KeepaliveEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.KeepaliveEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keepaliveEnable = value["KeepaliveEnable"].GetInt64();
        m_keepaliveEnableHasBeenSet = true;
    }

    if (value.HasMember("Toa") && !value["Toa"].IsNull())
    {
        if (!value["Toa"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.Toa` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_toa = value["Toa"].GetBool();
        m_toaHasBeenSet = true;
    }

    if (value.HasMember("DeregisterTargetRst") && !value["DeregisterTargetRst"].IsNull())
    {
        if (!value["DeregisterTargetRst"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.DeregisterTargetRst` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deregisterTargetRst = value["DeregisterTargetRst"].GetBool();
        m_deregisterTargetRstHasBeenSet = true;
    }

    if (value.HasMember("AttrFlags") && !value["AttrFlags"].IsNull())
    {
        if (!value["AttrFlags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Listener.AttrFlags` is not array type"));

        const rapidjson::Value &tmpValue = value["AttrFlags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_attrFlags.push_back((*itr).GetString());
        }
        m_attrFlagsHasBeenSet = true;
    }

    if (value.HasMember("TargetGroupList") && !value["TargetGroupList"].IsNull())
    {
        if (!value["TargetGroupList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Listener.TargetGroupList` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetGroupList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BasicTargetGroupInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targetGroupList.push_back(item);
        }
        m_targetGroupListHasBeenSet = true;
    }

    if (value.HasMember("MaxConn") && !value["MaxConn"].IsNull())
    {
        if (!value["MaxConn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.MaxConn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConn = value["MaxConn"].GetInt64();
        m_maxConnHasBeenSet = true;
    }

    if (value.HasMember("MaxCps") && !value["MaxCps"].IsNull())
    {
        if (!value["MaxCps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.MaxCps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxCps = value["MaxCps"].GetInt64();
        m_maxCpsHasBeenSet = true;
    }

    if (value.HasMember("IdleConnectTimeout") && !value["IdleConnectTimeout"].IsNull())
    {
        if (!value["IdleConnectTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.IdleConnectTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_idleConnectTimeout = value["IdleConnectTimeout"].GetInt64();
        m_idleConnectTimeoutHasBeenSet = true;
    }

    if (value.HasMember("RescheduleInterval") && !value["RescheduleInterval"].IsNull())
    {
        if (!value["RescheduleInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.RescheduleInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rescheduleInterval = value["RescheduleInterval"].GetUint64();
        m_rescheduleIntervalHasBeenSet = true;
    }

    if (value.HasMember("DataCompressMode") && !value["DataCompressMode"].IsNull())
    {
        if (!value["DataCompressMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.DataCompressMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataCompressMode = string(value["DataCompressMode"].GetString());
        m_dataCompressModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Listener::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_certificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Certificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_certificate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheck.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionExpireTime, allocator);
    }

    if (m_sniSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SniSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sniSwitch, allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPort, allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetGroup.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sessionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionType.c_str(), allocator).Move(), allocator);
    }

    if (m_keepaliveEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepaliveEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepaliveEnable, allocator);
    }

    if (m_toaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Toa";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_toa, allocator);
    }

    if (m_deregisterTargetRstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeregisterTargetRst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deregisterTargetRst, allocator);
    }

    if (m_attrFlagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrFlags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_attrFlags.begin(); itr != m_attrFlags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetGroupListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetGroupList.begin(); itr != m_targetGroupList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maxConnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConn, allocator);
    }

    if (m_maxCpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCps, allocator);
    }

    if (m_idleConnectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idleConnectTimeout, allocator);
    }

    if (m_rescheduleIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RescheduleInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rescheduleInterval, allocator);
    }

    if (m_dataCompressModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataCompressMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataCompressMode.c_str(), allocator).Move(), allocator);
    }

}


string Listener::GetListenerId() const
{
    return m_listenerId;
}

void Listener::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool Listener::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string Listener::GetProtocol() const
{
    return m_protocol;
}

void Listener::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool Listener::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t Listener::GetPort() const
{
    return m_port;
}

void Listener::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool Listener::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

CertificateOutput Listener::GetCertificate() const
{
    return m_certificate;
}

void Listener::SetCertificate(const CertificateOutput& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool Listener::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}

HealthCheck Listener::GetHealthCheck() const
{
    return m_healthCheck;
}

void Listener::SetHealthCheck(const HealthCheck& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool Listener::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

string Listener::GetScheduler() const
{
    return m_scheduler;
}

void Listener::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool Listener::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

int64_t Listener::GetSessionExpireTime() const
{
    return m_sessionExpireTime;
}

void Listener::SetSessionExpireTime(const int64_t& _sessionExpireTime)
{
    m_sessionExpireTime = _sessionExpireTime;
    m_sessionExpireTimeHasBeenSet = true;
}

bool Listener::SessionExpireTimeHasBeenSet() const
{
    return m_sessionExpireTimeHasBeenSet;
}

int64_t Listener::GetSniSwitch() const
{
    return m_sniSwitch;
}

void Listener::SetSniSwitch(const int64_t& _sniSwitch)
{
    m_sniSwitch = _sniSwitch;
    m_sniSwitchHasBeenSet = true;
}

bool Listener::SniSwitchHasBeenSet() const
{
    return m_sniSwitchHasBeenSet;
}

vector<RuleOutput> Listener::GetRules() const
{
    return m_rules;
}

void Listener::SetRules(const vector<RuleOutput>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool Listener::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

string Listener::GetListenerName() const
{
    return m_listenerName;
}

void Listener::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool Listener::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

string Listener::GetCreateTime() const
{
    return m_createTime;
}

void Listener::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Listener::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t Listener::GetEndPort() const
{
    return m_endPort;
}

void Listener::SetEndPort(const int64_t& _endPort)
{
    m_endPort = _endPort;
    m_endPortHasBeenSet = true;
}

bool Listener::EndPortHasBeenSet() const
{
    return m_endPortHasBeenSet;
}

string Listener::GetTargetType() const
{
    return m_targetType;
}

void Listener::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool Listener::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

BasicTargetGroupInfo Listener::GetTargetGroup() const
{
    return m_targetGroup;
}

void Listener::SetTargetGroup(const BasicTargetGroupInfo& _targetGroup)
{
    m_targetGroup = _targetGroup;
    m_targetGroupHasBeenSet = true;
}

bool Listener::TargetGroupHasBeenSet() const
{
    return m_targetGroupHasBeenSet;
}

string Listener::GetSessionType() const
{
    return m_sessionType;
}

void Listener::SetSessionType(const string& _sessionType)
{
    m_sessionType = _sessionType;
    m_sessionTypeHasBeenSet = true;
}

bool Listener::SessionTypeHasBeenSet() const
{
    return m_sessionTypeHasBeenSet;
}

int64_t Listener::GetKeepaliveEnable() const
{
    return m_keepaliveEnable;
}

void Listener::SetKeepaliveEnable(const int64_t& _keepaliveEnable)
{
    m_keepaliveEnable = _keepaliveEnable;
    m_keepaliveEnableHasBeenSet = true;
}

bool Listener::KeepaliveEnableHasBeenSet() const
{
    return m_keepaliveEnableHasBeenSet;
}

bool Listener::GetToa() const
{
    return m_toa;
}

void Listener::SetToa(const bool& _toa)
{
    m_toa = _toa;
    m_toaHasBeenSet = true;
}

bool Listener::ToaHasBeenSet() const
{
    return m_toaHasBeenSet;
}

bool Listener::GetDeregisterTargetRst() const
{
    return m_deregisterTargetRst;
}

void Listener::SetDeregisterTargetRst(const bool& _deregisterTargetRst)
{
    m_deregisterTargetRst = _deregisterTargetRst;
    m_deregisterTargetRstHasBeenSet = true;
}

bool Listener::DeregisterTargetRstHasBeenSet() const
{
    return m_deregisterTargetRstHasBeenSet;
}

vector<string> Listener::GetAttrFlags() const
{
    return m_attrFlags;
}

void Listener::SetAttrFlags(const vector<string>& _attrFlags)
{
    m_attrFlags = _attrFlags;
    m_attrFlagsHasBeenSet = true;
}

bool Listener::AttrFlagsHasBeenSet() const
{
    return m_attrFlagsHasBeenSet;
}

vector<BasicTargetGroupInfo> Listener::GetTargetGroupList() const
{
    return m_targetGroupList;
}

void Listener::SetTargetGroupList(const vector<BasicTargetGroupInfo>& _targetGroupList)
{
    m_targetGroupList = _targetGroupList;
    m_targetGroupListHasBeenSet = true;
}

bool Listener::TargetGroupListHasBeenSet() const
{
    return m_targetGroupListHasBeenSet;
}

int64_t Listener::GetMaxConn() const
{
    return m_maxConn;
}

void Listener::SetMaxConn(const int64_t& _maxConn)
{
    m_maxConn = _maxConn;
    m_maxConnHasBeenSet = true;
}

bool Listener::MaxConnHasBeenSet() const
{
    return m_maxConnHasBeenSet;
}

int64_t Listener::GetMaxCps() const
{
    return m_maxCps;
}

void Listener::SetMaxCps(const int64_t& _maxCps)
{
    m_maxCps = _maxCps;
    m_maxCpsHasBeenSet = true;
}

bool Listener::MaxCpsHasBeenSet() const
{
    return m_maxCpsHasBeenSet;
}

int64_t Listener::GetIdleConnectTimeout() const
{
    return m_idleConnectTimeout;
}

void Listener::SetIdleConnectTimeout(const int64_t& _idleConnectTimeout)
{
    m_idleConnectTimeout = _idleConnectTimeout;
    m_idleConnectTimeoutHasBeenSet = true;
}

bool Listener::IdleConnectTimeoutHasBeenSet() const
{
    return m_idleConnectTimeoutHasBeenSet;
}

uint64_t Listener::GetRescheduleInterval() const
{
    return m_rescheduleInterval;
}

void Listener::SetRescheduleInterval(const uint64_t& _rescheduleInterval)
{
    m_rescheduleInterval = _rescheduleInterval;
    m_rescheduleIntervalHasBeenSet = true;
}

bool Listener::RescheduleIntervalHasBeenSet() const
{
    return m_rescheduleIntervalHasBeenSet;
}

string Listener::GetDataCompressMode() const
{
    return m_dataCompressMode;
}

void Listener::SetDataCompressMode(const string& _dataCompressMode)
{
    m_dataCompressMode = _dataCompressMode;
    m_dataCompressModeHasBeenSet = true;
}

bool Listener::DataCompressModeHasBeenSet() const
{
    return m_dataCompressModeHasBeenSet;
}

