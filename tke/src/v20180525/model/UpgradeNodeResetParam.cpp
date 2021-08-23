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

#include <tencentcloud/tke/v20180525/model/UpgradeNodeResetParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

UpgradeNodeResetParam::UpgradeNodeResetParam() :
    m_instanceAdvancedSettingsHasBeenSet(false),
    m_enhancedServiceHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false)
{
}

CoreInternalOutcome UpgradeNodeResetParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceAdvancedSettings") && !value["InstanceAdvancedSettings"].IsNull())
    {
        if (!value["InstanceAdvancedSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeNodeResetParam.InstanceAdvancedSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceAdvancedSettings.Deserialize(value["InstanceAdvancedSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceAdvancedSettingsHasBeenSet = true;
    }

    if (value.HasMember("EnhancedService") && !value["EnhancedService"].IsNull())
    {
        if (!value["EnhancedService"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeNodeResetParam.EnhancedService` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_enhancedService.Deserialize(value["EnhancedService"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_enhancedServiceHasBeenSet = true;
    }

    if (value.HasMember("LoginSettings") && !value["LoginSettings"].IsNull())
    {
        if (!value["LoginSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeNodeResetParam.LoginSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loginSettings.Deserialize(value["LoginSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loginSettingsHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpgradeNodeResetParam.SecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpgradeNodeResetParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceAdvancedSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAdvancedSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceAdvancedSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enhancedServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhancedService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enhancedService.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_loginSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


InstanceAdvancedSettings UpgradeNodeResetParam::GetInstanceAdvancedSettings() const
{
    return m_instanceAdvancedSettings;
}

void UpgradeNodeResetParam::SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings)
{
    m_instanceAdvancedSettings = _instanceAdvancedSettings;
    m_instanceAdvancedSettingsHasBeenSet = true;
}

bool UpgradeNodeResetParam::InstanceAdvancedSettingsHasBeenSet() const
{
    return m_instanceAdvancedSettingsHasBeenSet;
}

EnhancedService UpgradeNodeResetParam::GetEnhancedService() const
{
    return m_enhancedService;
}

void UpgradeNodeResetParam::SetEnhancedService(const EnhancedService& _enhancedService)
{
    m_enhancedService = _enhancedService;
    m_enhancedServiceHasBeenSet = true;
}

bool UpgradeNodeResetParam::EnhancedServiceHasBeenSet() const
{
    return m_enhancedServiceHasBeenSet;
}

LoginSettings UpgradeNodeResetParam::GetLoginSettings() const
{
    return m_loginSettings;
}

void UpgradeNodeResetParam::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool UpgradeNodeResetParam::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

vector<string> UpgradeNodeResetParam::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void UpgradeNodeResetParam::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool UpgradeNodeResetParam::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

