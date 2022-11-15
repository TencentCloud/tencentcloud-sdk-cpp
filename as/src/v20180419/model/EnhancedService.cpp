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

#include <tencentcloud/as/v20180419/model/EnhancedService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

EnhancedService::EnhancedService() :
    m_securityServiceHasBeenSet(false),
    m_monitorServiceHasBeenSet(false),
    m_automationServiceHasBeenSet(false),
    m_automationToolsServiceHasBeenSet(false)
{
}

CoreInternalOutcome EnhancedService::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecurityService") && !value["SecurityService"].IsNull())
    {
        if (!value["SecurityService"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EnhancedService.SecurityService` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_securityService.Deserialize(value["SecurityService"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_securityServiceHasBeenSet = true;
    }

    if (value.HasMember("MonitorService") && !value["MonitorService"].IsNull())
    {
        if (!value["MonitorService"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EnhancedService.MonitorService` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_monitorService.Deserialize(value["MonitorService"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_monitorServiceHasBeenSet = true;
    }

    if (value.HasMember("AutomationService") && !value["AutomationService"].IsNull())
    {
        if (!value["AutomationService"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EnhancedService.AutomationService` is not array type"));

        const rapidjson::Value &tmpValue = value["AutomationService"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RunAutomationServiceEnabled item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_automationService.push_back(item);
        }
        m_automationServiceHasBeenSet = true;
    }

    if (value.HasMember("AutomationToolsService") && !value["AutomationToolsService"].IsNull())
    {
        if (!value["AutomationToolsService"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EnhancedService.AutomationToolsService` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_automationToolsService.Deserialize(value["AutomationToolsService"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_automationToolsServiceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnhancedService::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_securityServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_securityService.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_monitorServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_monitorService.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_automationServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutomationService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_automationService.begin(); itr != m_automationService.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_automationToolsServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutomationToolsService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_automationToolsService.ToJsonObject(value[key.c_str()], allocator);
    }

}


RunSecurityServiceEnabled EnhancedService::GetSecurityService() const
{
    return m_securityService;
}

void EnhancedService::SetSecurityService(const RunSecurityServiceEnabled& _securityService)
{
    m_securityService = _securityService;
    m_securityServiceHasBeenSet = true;
}

bool EnhancedService::SecurityServiceHasBeenSet() const
{
    return m_securityServiceHasBeenSet;
}

RunMonitorServiceEnabled EnhancedService::GetMonitorService() const
{
    return m_monitorService;
}

void EnhancedService::SetMonitorService(const RunMonitorServiceEnabled& _monitorService)
{
    m_monitorService = _monitorService;
    m_monitorServiceHasBeenSet = true;
}

bool EnhancedService::MonitorServiceHasBeenSet() const
{
    return m_monitorServiceHasBeenSet;
}

vector<RunAutomationServiceEnabled> EnhancedService::GetAutomationService() const
{
    return m_automationService;
}

void EnhancedService::SetAutomationService(const vector<RunAutomationServiceEnabled>& _automationService)
{
    m_automationService = _automationService;
    m_automationServiceHasBeenSet = true;
}

bool EnhancedService::AutomationServiceHasBeenSet() const
{
    return m_automationServiceHasBeenSet;
}

RunAutomationServiceEnabled EnhancedService::GetAutomationToolsService() const
{
    return m_automationToolsService;
}

void EnhancedService::SetAutomationToolsService(const RunAutomationServiceEnabled& _automationToolsService)
{
    m_automationToolsService = _automationToolsService;
    m_automationToolsServiceHasBeenSet = true;
}

bool EnhancedService::AutomationToolsServiceHasBeenSet() const
{
    return m_automationToolsServiceHasBeenSet;
}

