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

#include <tencentcloud/tke/v20180525/model/ECMEnhancedService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ECMEnhancedService::ECMEnhancedService() :
    m_securityServiceHasBeenSet(false),
    m_monitorServiceHasBeenSet(false)
{
}

CoreInternalOutcome ECMEnhancedService::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecurityService") && !value["SecurityService"].IsNull())
    {
        if (!value["SecurityService"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ECMEnhancedService.SecurityService` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ECMEnhancedService.MonitorService` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_monitorService.Deserialize(value["MonitorService"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_monitorServiceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ECMEnhancedService::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


ECMRunMonitorServiceEnabled ECMEnhancedService::GetSecurityService() const
{
    return m_securityService;
}

void ECMEnhancedService::SetSecurityService(const ECMRunMonitorServiceEnabled& _securityService)
{
    m_securityService = _securityService;
    m_securityServiceHasBeenSet = true;
}

bool ECMEnhancedService::SecurityServiceHasBeenSet() const
{
    return m_securityServiceHasBeenSet;
}

ECMRunSecurityServiceEnabled ECMEnhancedService::GetMonitorService() const
{
    return m_monitorService;
}

void ECMEnhancedService::SetMonitorService(const ECMRunSecurityServiceEnabled& _monitorService)
{
    m_monitorService = _monitorService;
    m_monitorServiceHasBeenSet = true;
}

bool ECMEnhancedService::MonitorServiceHasBeenSet() const
{
    return m_monitorServiceHasBeenSet;
}

