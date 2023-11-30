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

#include <tencentcloud/tke/v20180525/model/Switch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

Switch::Switch() :
    m_clusterIdHasBeenSet(false),
    m_auditHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_logHasBeenSet(false),
    m_masterLogHasBeenSet(false)
{
}

CoreInternalOutcome Switch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Switch.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Audit") && !value["Audit"].IsNull())
    {
        if (!value["Audit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Switch.Audit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audit.Deserialize(value["Audit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_auditHasBeenSet = true;
    }

    if (value.HasMember("Event") && !value["Event"].IsNull())
    {
        if (!value["Event"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Switch.Event` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_event.Deserialize(value["Event"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eventHasBeenSet = true;
    }

    if (value.HasMember("Log") && !value["Log"].IsNull())
    {
        if (!value["Log"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Switch.Log` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_log.Deserialize(value["Log"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logHasBeenSet = true;
    }

    if (value.HasMember("MasterLog") && !value["MasterLog"].IsNull())
    {
        if (!value["MasterLog"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Switch.MasterLog` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_masterLog.Deserialize(value["MasterLog"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_masterLogHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Switch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_auditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audit.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Event";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_event.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_logHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Log";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_log.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_masterLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_masterLog.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Switch::GetClusterId() const
{
    return m_clusterId;
}

void Switch::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Switch::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

SwitchInfo Switch::GetAudit() const
{
    return m_audit;
}

void Switch::SetAudit(const SwitchInfo& _audit)
{
    m_audit = _audit;
    m_auditHasBeenSet = true;
}

bool Switch::AuditHasBeenSet() const
{
    return m_auditHasBeenSet;
}

SwitchInfo Switch::GetEvent() const
{
    return m_event;
}

void Switch::SetEvent(const SwitchInfo& _event)
{
    m_event = _event;
    m_eventHasBeenSet = true;
}

bool Switch::EventHasBeenSet() const
{
    return m_eventHasBeenSet;
}

SwitchInfo Switch::GetLog() const
{
    return m_log;
}

void Switch::SetLog(const SwitchInfo& _log)
{
    m_log = _log;
    m_logHasBeenSet = true;
}

bool Switch::LogHasBeenSet() const
{
    return m_logHasBeenSet;
}

SwitchInfo Switch::GetMasterLog() const
{
    return m_masterLog;
}

void Switch::SetMasterLog(const SwitchInfo& _masterLog)
{
    m_masterLog = _masterLog;
    m_masterLogHasBeenSet = true;
}

bool Switch::MasterLogHasBeenSet() const
{
    return m_masterLogHasBeenSet;
}

