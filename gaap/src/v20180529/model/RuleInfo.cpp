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

#include <tencentcloud/gaap/v20180529/model/RuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

RuleInfo::RuleInfo() :
    m_ruleIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_realServerTypeHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_ruleStatusHasBeenSet(false),
    m_checkParamsHasBeenSet(false),
    m_realServerSetHasBeenSet(false),
    m_bindStatusHasBeenSet(false),
    m_forwardHostHasBeenSet(false),
    m_serverNameIndicationSwitchHasBeenSet(false),
    m_serverNameIndicationHasBeenSet(false),
    m_forcedRedirectHasBeenSet(false)
{
}

CoreInternalOutcome RuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("RealServerType") && !value["RealServerType"].IsNull())
    {
        if (!value["RealServerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.RealServerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerType = string(value["RealServerType"].GetString());
        m_realServerTypeHasBeenSet = true;
    }

    if (value.HasMember("Scheduler") && !value["Scheduler"].IsNull())
    {
        if (!value["Scheduler"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.Scheduler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduler = string(value["Scheduler"].GetString());
        m_schedulerHasBeenSet = true;
    }

    if (value.HasMember("HealthCheck") && !value["HealthCheck"].IsNull())
    {
        if (!value["HealthCheck"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.HealthCheck` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheck = value["HealthCheck"].GetUint64();
        m_healthCheckHasBeenSet = true;
    }

    if (value.HasMember("RuleStatus") && !value["RuleStatus"].IsNull())
    {
        if (!value["RuleStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.RuleStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleStatus = value["RuleStatus"].GetUint64();
        m_ruleStatusHasBeenSet = true;
    }

    if (value.HasMember("CheckParams") && !value["CheckParams"].IsNull())
    {
        if (!value["CheckParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.CheckParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_checkParams.Deserialize(value["CheckParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_checkParamsHasBeenSet = true;
    }

    if (value.HasMember("RealServerSet") && !value["RealServerSet"].IsNull())
    {
        if (!value["RealServerSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleInfo.RealServerSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RealServerSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BindRealServer item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_realServerSet.push_back(item);
        }
        m_realServerSetHasBeenSet = true;
    }

    if (value.HasMember("BindStatus") && !value["BindStatus"].IsNull())
    {
        if (!value["BindStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.BindStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bindStatus = value["BindStatus"].GetUint64();
        m_bindStatusHasBeenSet = true;
    }

    if (value.HasMember("ForwardHost") && !value["ForwardHost"].IsNull())
    {
        if (!value["ForwardHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.ForwardHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardHost = string(value["ForwardHost"].GetString());
        m_forwardHostHasBeenSet = true;
    }

    if (value.HasMember("ServerNameIndicationSwitch") && !value["ServerNameIndicationSwitch"].IsNull())
    {
        if (!value["ServerNameIndicationSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.ServerNameIndicationSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverNameIndicationSwitch = string(value["ServerNameIndicationSwitch"].GetString());
        m_serverNameIndicationSwitchHasBeenSet = true;
    }

    if (value.HasMember("ServerNameIndication") && !value["ServerNameIndication"].IsNull())
    {
        if (!value["ServerNameIndication"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.ServerNameIndication` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverNameIndication = string(value["ServerNameIndication"].GetString());
        m_serverNameIndicationHasBeenSet = true;
    }

    if (value.HasMember("ForcedRedirect") && !value["ForcedRedirect"].IsNull())
    {
        if (!value["ForcedRedirect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.ForcedRedirect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forcedRedirect = string(value["ForcedRedirect"].GetString());
        m_forcedRedirectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realServerType.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheck, allocator);
    }

    if (m_ruleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleStatus, allocator);
    }

    if (m_checkParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_checkParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_realServerSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_realServerSet.begin(); itr != m_realServerSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bindStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindStatus, allocator);
    }

    if (m_forwardHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardHost.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameIndicationSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerNameIndicationSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverNameIndicationSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameIndicationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerNameIndication";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverNameIndication.c_str(), allocator).Move(), allocator);
    }

    if (m_forcedRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForcedRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forcedRedirect.c_str(), allocator).Move(), allocator);
    }

}


string RuleInfo::GetRuleId() const
{
    return m_ruleId;
}

void RuleInfo::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool RuleInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string RuleInfo::GetListenerId() const
{
    return m_listenerId;
}

void RuleInfo::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool RuleInfo::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string RuleInfo::GetDomain() const
{
    return m_domain;
}

void RuleInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool RuleInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string RuleInfo::GetPath() const
{
    return m_path;
}

void RuleInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool RuleInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string RuleInfo::GetRealServerType() const
{
    return m_realServerType;
}

void RuleInfo::SetRealServerType(const string& _realServerType)
{
    m_realServerType = _realServerType;
    m_realServerTypeHasBeenSet = true;
}

bool RuleInfo::RealServerTypeHasBeenSet() const
{
    return m_realServerTypeHasBeenSet;
}

string RuleInfo::GetScheduler() const
{
    return m_scheduler;
}

void RuleInfo::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool RuleInfo::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

uint64_t RuleInfo::GetHealthCheck() const
{
    return m_healthCheck;
}

void RuleInfo::SetHealthCheck(const uint64_t& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool RuleInfo::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

uint64_t RuleInfo::GetRuleStatus() const
{
    return m_ruleStatus;
}

void RuleInfo::SetRuleStatus(const uint64_t& _ruleStatus)
{
    m_ruleStatus = _ruleStatus;
    m_ruleStatusHasBeenSet = true;
}

bool RuleInfo::RuleStatusHasBeenSet() const
{
    return m_ruleStatusHasBeenSet;
}

RuleCheckParams RuleInfo::GetCheckParams() const
{
    return m_checkParams;
}

void RuleInfo::SetCheckParams(const RuleCheckParams& _checkParams)
{
    m_checkParams = _checkParams;
    m_checkParamsHasBeenSet = true;
}

bool RuleInfo::CheckParamsHasBeenSet() const
{
    return m_checkParamsHasBeenSet;
}

vector<BindRealServer> RuleInfo::GetRealServerSet() const
{
    return m_realServerSet;
}

void RuleInfo::SetRealServerSet(const vector<BindRealServer>& _realServerSet)
{
    m_realServerSet = _realServerSet;
    m_realServerSetHasBeenSet = true;
}

bool RuleInfo::RealServerSetHasBeenSet() const
{
    return m_realServerSetHasBeenSet;
}

uint64_t RuleInfo::GetBindStatus() const
{
    return m_bindStatus;
}

void RuleInfo::SetBindStatus(const uint64_t& _bindStatus)
{
    m_bindStatus = _bindStatus;
    m_bindStatusHasBeenSet = true;
}

bool RuleInfo::BindStatusHasBeenSet() const
{
    return m_bindStatusHasBeenSet;
}

string RuleInfo::GetForwardHost() const
{
    return m_forwardHost;
}

void RuleInfo::SetForwardHost(const string& _forwardHost)
{
    m_forwardHost = _forwardHost;
    m_forwardHostHasBeenSet = true;
}

bool RuleInfo::ForwardHostHasBeenSet() const
{
    return m_forwardHostHasBeenSet;
}

string RuleInfo::GetServerNameIndicationSwitch() const
{
    return m_serverNameIndicationSwitch;
}

void RuleInfo::SetServerNameIndicationSwitch(const string& _serverNameIndicationSwitch)
{
    m_serverNameIndicationSwitch = _serverNameIndicationSwitch;
    m_serverNameIndicationSwitchHasBeenSet = true;
}

bool RuleInfo::ServerNameIndicationSwitchHasBeenSet() const
{
    return m_serverNameIndicationSwitchHasBeenSet;
}

string RuleInfo::GetServerNameIndication() const
{
    return m_serverNameIndication;
}

void RuleInfo::SetServerNameIndication(const string& _serverNameIndication)
{
    m_serverNameIndication = _serverNameIndication;
    m_serverNameIndicationHasBeenSet = true;
}

bool RuleInfo::ServerNameIndicationHasBeenSet() const
{
    return m_serverNameIndicationHasBeenSet;
}

string RuleInfo::GetForcedRedirect() const
{
    return m_forcedRedirect;
}

void RuleInfo::SetForcedRedirect(const string& _forcedRedirect)
{
    m_forcedRedirect = _forcedRedirect;
    m_forcedRedirectHasBeenSet = true;
}

bool RuleInfo::ForcedRedirectHasBeenSet() const
{
    return m_forcedRedirectHasBeenSet;
}

