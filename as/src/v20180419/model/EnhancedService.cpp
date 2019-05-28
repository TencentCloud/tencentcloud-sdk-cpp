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
using namespace rapidjson;
using namespace std;

EnhancedService::EnhancedService() :
    m_securityServiceHasBeenSet(false),
    m_monitorServiceHasBeenSet(false)
{
}

CoreInternalOutcome EnhancedService::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SecurityService") && !value["SecurityService"].IsNull())
    {
        if (!value["SecurityService"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EnhancedService.SecurityService` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `EnhancedService.MonitorService` is not object type").SetRequestId(requestId));
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

void EnhancedService::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_securityServiceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_securityService.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_monitorServiceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MonitorService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_monitorService.ToJsonObject(value[key.c_str()], allocator);
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

