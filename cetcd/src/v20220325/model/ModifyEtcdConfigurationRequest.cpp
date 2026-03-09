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

#include <tencentcloud/cetcd/v20220325/model/ModifyEtcdConfigurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cetcd::V20220325::Model;
using namespace std;

ModifyEtcdConfigurationRequest::ModifyEtcdConfigurationRequest() :
    m_instanceIdHasBeenSet(false),
    m_autoCompactionSettingsHasBeenSet(false),
    m_monitorSettingsHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_instanceConfigHasBeenSet(false),
    m_prepaidConfigHasBeenSet(false)
{
}

string ModifyEtcdConfigurationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoCompactionSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCompactionSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoCompactionSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_monitorSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_monitorSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_prepaidConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrepaidConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_prepaidConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyEtcdConfigurationRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyEtcdConfigurationRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyEtcdConfigurationRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

EtcdAutoCompactionSettings ModifyEtcdConfigurationRequest::GetAutoCompactionSettings() const
{
    return m_autoCompactionSettings;
}

void ModifyEtcdConfigurationRequest::SetAutoCompactionSettings(const EtcdAutoCompactionSettings& _autoCompactionSettings)
{
    m_autoCompactionSettings = _autoCompactionSettings;
    m_autoCompactionSettingsHasBeenSet = true;
}

bool ModifyEtcdConfigurationRequest::AutoCompactionSettingsHasBeenSet() const
{
    return m_autoCompactionSettingsHasBeenSet;
}

EtcdMonitorSettings ModifyEtcdConfigurationRequest::GetMonitorSettings() const
{
    return m_monitorSettings;
}

void ModifyEtcdConfigurationRequest::SetMonitorSettings(const EtcdMonitorSettings& _monitorSettings)
{
    m_monitorSettings = _monitorSettings;
    m_monitorSettingsHasBeenSet = true;
}

bool ModifyEtcdConfigurationRequest::MonitorSettingsHasBeenSet() const
{
    return m_monitorSettingsHasBeenSet;
}

string ModifyEtcdConfigurationRequest::GetChargeType() const
{
    return m_chargeType;
}

void ModifyEtcdConfigurationRequest::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool ModifyEtcdConfigurationRequest::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

InstanceConfig ModifyEtcdConfigurationRequest::GetInstanceConfig() const
{
    return m_instanceConfig;
}

void ModifyEtcdConfigurationRequest::SetInstanceConfig(const InstanceConfig& _instanceConfig)
{
    m_instanceConfig = _instanceConfig;
    m_instanceConfigHasBeenSet = true;
}

bool ModifyEtcdConfigurationRequest::InstanceConfigHasBeenSet() const
{
    return m_instanceConfigHasBeenSet;
}

ChargePrepaidConfig ModifyEtcdConfigurationRequest::GetPrepaidConfig() const
{
    return m_prepaidConfig;
}

void ModifyEtcdConfigurationRequest::SetPrepaidConfig(const ChargePrepaidConfig& _prepaidConfig)
{
    m_prepaidConfig = _prepaidConfig;
    m_prepaidConfigHasBeenSet = true;
}

bool ModifyEtcdConfigurationRequest::PrepaidConfigHasBeenSet() const
{
    return m_prepaidConfigHasBeenSet;
}


