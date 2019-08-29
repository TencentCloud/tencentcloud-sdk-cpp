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
using namespace rapidjson;
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
    m_forwardHostHasBeenSet(false)
{
}

CoreInternalOutcome RuleInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleInfo.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleInfo.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("RealServerType") && !value["RealServerType"].IsNull())
    {
        if (!value["RealServerType"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleInfo.RealServerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerType = string(value["RealServerType"].GetString());
        m_realServerTypeHasBeenSet = true;
    }

    if (value.HasMember("Scheduler") && !value["Scheduler"].IsNull())
    {
        if (!value["Scheduler"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleInfo.Scheduler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduler = string(value["Scheduler"].GetString());
        m_schedulerHasBeenSet = true;
    }

    if (value.HasMember("HealthCheck") && !value["HealthCheck"].IsNull())
    {
        if (!value["HealthCheck"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RuleInfo.HealthCheck` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheck = value["HealthCheck"].GetUint64();
        m_healthCheckHasBeenSet = true;
    }

    if (value.HasMember("RuleStatus") && !value["RuleStatus"].IsNull())
    {
        if (!value["RuleStatus"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RuleInfo.RuleStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleStatus = value["RuleStatus"].GetUint64();
        m_ruleStatusHasBeenSet = true;
    }

    if (value.HasMember("CheckParams") && !value["CheckParams"].IsNull())
    {
        if (!value["CheckParams"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RuleInfo.CheckParams` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `RuleInfo.RealServerSet` is not array type"));

        const Value &tmpValue = value["RealServerSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `RuleInfo.BindStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bindStatus = value["BindStatus"].GetUint64();
        m_bindStatusHasBeenSet = true;
    }

    if (value.HasMember("ForwardHost") && !value["ForwardHost"].IsNull())
    {
        if (!value["ForwardHost"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleInfo.ForwardHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardHost = string(value["ForwardHost"].GetString());
        m_forwardHostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realServerType.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheck, allocator);
    }

    if (m_ruleStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleStatus, allocator);
    }

    if (m_checkParamsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CheckParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_checkParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_realServerSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_realServerSet.begin(); itr != m_realServerSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bindStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BindStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindStatus, allocator);
    }

    if (m_forwardHostHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ForwardHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_forwardHost.c_str(), allocator).Move(), allocator);
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

