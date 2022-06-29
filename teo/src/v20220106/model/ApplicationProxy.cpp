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

#include <tencentcloud/teo/v20220106/model/ApplicationProxy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

ApplicationProxy::ApplicationProxy() :
    m_proxyIdHasBeenSet(false),
    m_proxyNameHasBeenSet(false),
    m_platTypeHasBeenSet(false),
    m_securityTypeHasBeenSet(false),
    m_accelerateTypeHasBeenSet(false),
    m_forwardClientIpHasBeenSet(false),
    m_sessionPersistHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_scheduleValueHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_sessionPersistTimeHasBeenSet(false),
    m_proxyTypeHasBeenSet(false),
    m_hostIdHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationProxy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyId") && !value["ProxyId"].IsNull())
    {
        if (!value["ProxyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxy.ProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyId = string(value["ProxyId"].GetString());
        m_proxyIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyName") && !value["ProxyName"].IsNull())
    {
        if (!value["ProxyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxy.ProxyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyName = string(value["ProxyName"].GetString());
        m_proxyNameHasBeenSet = true;
    }

    if (value.HasMember("PlatType") && !value["PlatType"].IsNull())
    {
        if (!value["PlatType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxy.PlatType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platType = string(value["PlatType"].GetString());
        m_platTypeHasBeenSet = true;
    }

    if (value.HasMember("SecurityType") && !value["SecurityType"].IsNull())
    {
        if (!value["SecurityType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxy.SecurityType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_securityType = value["SecurityType"].GetInt64();
        m_securityTypeHasBeenSet = true;
    }

    if (value.HasMember("AccelerateType") && !value["AccelerateType"].IsNull())
    {
        if (!value["AccelerateType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxy.AccelerateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accelerateType = value["AccelerateType"].GetInt64();
        m_accelerateTypeHasBeenSet = true;
    }

    if (value.HasMember("ForwardClientIp") && !value["ForwardClientIp"].IsNull())
    {
        if (!value["ForwardClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxy.ForwardClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardClientIp = string(value["ForwardClientIp"].GetString());
        m_forwardClientIpHasBeenSet = true;
    }

    if (value.HasMember("SessionPersist") && !value["SessionPersist"].IsNull())
    {
        if (!value["SessionPersist"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxy.SessionPersist` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sessionPersist = value["SessionPersist"].GetBool();
        m_sessionPersistHasBeenSet = true;
    }

    if (value.HasMember("Rule") && !value["Rule"].IsNull())
    {
        if (!value["Rule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationProxy.Rule` is not array type"));

        const rapidjson::Value &tmpValue = value["Rule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApplicationProxyRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rule.push_back(item);
        }
        m_ruleHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxy.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ScheduleValue") && !value["ScheduleValue"].IsNull())
    {
        if (!value["ScheduleValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationProxy.ScheduleValue` is not array type"));

        const rapidjson::Value &tmpValue = value["ScheduleValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scheduleValue.push_back((*itr).GetString());
        }
        m_scheduleValueHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxy.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxy.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxy.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("SessionPersistTime") && !value["SessionPersistTime"].IsNull())
    {
        if (!value["SessionPersistTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxy.SessionPersistTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionPersistTime = value["SessionPersistTime"].GetUint64();
        m_sessionPersistTimeHasBeenSet = true;
    }

    if (value.HasMember("ProxyType") && !value["ProxyType"].IsNull())
    {
        if (!value["ProxyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxy.ProxyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyType = string(value["ProxyType"].GetString());
        m_proxyTypeHasBeenSet = true;
    }

    if (value.HasMember("HostId") && !value["HostId"].IsNull())
    {
        if (!value["HostId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxy.HostId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostId = string(value["HostId"].GetString());
        m_hostIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationProxy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyName.c_str(), allocator).Move(), allocator);
    }

    if (m_platTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platType.c_str(), allocator).Move(), allocator);
    }

    if (m_securityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityType, allocator);
    }

    if (m_accelerateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccelerateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accelerateType, allocator);
    }

    if (m_forwardClientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardClientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionPersistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionPersist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionPersist, allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rule.begin(); itr != m_rule.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scheduleValue.begin(); itr != m_scheduleValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

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

    if (m_sessionPersistTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionPersistTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionPersistTime, allocator);
    }

    if (m_proxyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyType.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostId.c_str(), allocator).Move(), allocator);
    }

}


string ApplicationProxy::GetProxyId() const
{
    return m_proxyId;
}

void ApplicationProxy::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool ApplicationProxy::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string ApplicationProxy::GetProxyName() const
{
    return m_proxyName;
}

void ApplicationProxy::SetProxyName(const string& _proxyName)
{
    m_proxyName = _proxyName;
    m_proxyNameHasBeenSet = true;
}

bool ApplicationProxy::ProxyNameHasBeenSet() const
{
    return m_proxyNameHasBeenSet;
}

string ApplicationProxy::GetPlatType() const
{
    return m_platType;
}

void ApplicationProxy::SetPlatType(const string& _platType)
{
    m_platType = _platType;
    m_platTypeHasBeenSet = true;
}

bool ApplicationProxy::PlatTypeHasBeenSet() const
{
    return m_platTypeHasBeenSet;
}

int64_t ApplicationProxy::GetSecurityType() const
{
    return m_securityType;
}

void ApplicationProxy::SetSecurityType(const int64_t& _securityType)
{
    m_securityType = _securityType;
    m_securityTypeHasBeenSet = true;
}

bool ApplicationProxy::SecurityTypeHasBeenSet() const
{
    return m_securityTypeHasBeenSet;
}

int64_t ApplicationProxy::GetAccelerateType() const
{
    return m_accelerateType;
}

void ApplicationProxy::SetAccelerateType(const int64_t& _accelerateType)
{
    m_accelerateType = _accelerateType;
    m_accelerateTypeHasBeenSet = true;
}

bool ApplicationProxy::AccelerateTypeHasBeenSet() const
{
    return m_accelerateTypeHasBeenSet;
}

string ApplicationProxy::GetForwardClientIp() const
{
    return m_forwardClientIp;
}

void ApplicationProxy::SetForwardClientIp(const string& _forwardClientIp)
{
    m_forwardClientIp = _forwardClientIp;
    m_forwardClientIpHasBeenSet = true;
}

bool ApplicationProxy::ForwardClientIpHasBeenSet() const
{
    return m_forwardClientIpHasBeenSet;
}

bool ApplicationProxy::GetSessionPersist() const
{
    return m_sessionPersist;
}

void ApplicationProxy::SetSessionPersist(const bool& _sessionPersist)
{
    m_sessionPersist = _sessionPersist;
    m_sessionPersistHasBeenSet = true;
}

bool ApplicationProxy::SessionPersistHasBeenSet() const
{
    return m_sessionPersistHasBeenSet;
}

vector<ApplicationProxyRule> ApplicationProxy::GetRule() const
{
    return m_rule;
}

void ApplicationProxy::SetRule(const vector<ApplicationProxyRule>& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool ApplicationProxy::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string ApplicationProxy::GetStatus() const
{
    return m_status;
}

void ApplicationProxy::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApplicationProxy::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> ApplicationProxy::GetScheduleValue() const
{
    return m_scheduleValue;
}

void ApplicationProxy::SetScheduleValue(const vector<string>& _scheduleValue)
{
    m_scheduleValue = _scheduleValue;
    m_scheduleValueHasBeenSet = true;
}

bool ApplicationProxy::ScheduleValueHasBeenSet() const
{
    return m_scheduleValueHasBeenSet;
}

string ApplicationProxy::GetUpdateTime() const
{
    return m_updateTime;
}

void ApplicationProxy::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ApplicationProxy::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ApplicationProxy::GetZoneId() const
{
    return m_zoneId;
}

void ApplicationProxy::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ApplicationProxy::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ApplicationProxy::GetZoneName() const
{
    return m_zoneName;
}

void ApplicationProxy::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ApplicationProxy::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

uint64_t ApplicationProxy::GetSessionPersistTime() const
{
    return m_sessionPersistTime;
}

void ApplicationProxy::SetSessionPersistTime(const uint64_t& _sessionPersistTime)
{
    m_sessionPersistTime = _sessionPersistTime;
    m_sessionPersistTimeHasBeenSet = true;
}

bool ApplicationProxy::SessionPersistTimeHasBeenSet() const
{
    return m_sessionPersistTimeHasBeenSet;
}

string ApplicationProxy::GetProxyType() const
{
    return m_proxyType;
}

void ApplicationProxy::SetProxyType(const string& _proxyType)
{
    m_proxyType = _proxyType;
    m_proxyTypeHasBeenSet = true;
}

bool ApplicationProxy::ProxyTypeHasBeenSet() const
{
    return m_proxyTypeHasBeenSet;
}

string ApplicationProxy::GetHostId() const
{
    return m_hostId;
}

void ApplicationProxy::SetHostId(const string& _hostId)
{
    m_hostId = _hostId;
    m_hostIdHasBeenSet = true;
}

bool ApplicationProxy::HostIdHasBeenSet() const
{
    return m_hostIdHasBeenSet;
}

