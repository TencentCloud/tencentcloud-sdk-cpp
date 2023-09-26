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

#include <tencentcloud/bi/v20220105/model/PermissionComponent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

PermissionComponent::PermissionComponent() :
    m_moduleIdHasBeenSet(false),
    m_includeTypeHasBeenSet(false),
    m_upgradeVersionTypeHasBeenSet(false),
    m_tipsHasBeenSet(false),
    m_tipsKeyHasBeenSet(false)
{
}

CoreInternalOutcome PermissionComponent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModuleId") && !value["ModuleId"].IsNull())
    {
        if (!value["ModuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionComponent.ModuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleId = string(value["ModuleId"].GetString());
        m_moduleIdHasBeenSet = true;
    }

    if (value.HasMember("IncludeType") && !value["IncludeType"].IsNull())
    {
        if (!value["IncludeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionComponent.IncludeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_includeType = string(value["IncludeType"].GetString());
        m_includeTypeHasBeenSet = true;
    }

    if (value.HasMember("UpgradeVersionType") && !value["UpgradeVersionType"].IsNull())
    {
        if (!value["UpgradeVersionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionComponent.UpgradeVersionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeVersionType = string(value["UpgradeVersionType"].GetString());
        m_upgradeVersionTypeHasBeenSet = true;
    }

    if (value.HasMember("Tips") && !value["Tips"].IsNull())
    {
        if (!value["Tips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionComponent.Tips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tips = string(value["Tips"].GetString());
        m_tipsHasBeenSet = true;
    }

    if (value.HasMember("TipsKey") && !value["TipsKey"].IsNull())
    {
        if (!value["TipsKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionComponent.TipsKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tipsKey = string(value["TipsKey"].GetString());
        m_tipsKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PermissionComponent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_moduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleId.c_str(), allocator).Move(), allocator);
    }

    if (m_includeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_includeType.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeVersionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeVersionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upgradeVersionType.c_str(), allocator).Move(), allocator);
    }

    if (m_tipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tips.c_str(), allocator).Move(), allocator);
    }

    if (m_tipsKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TipsKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tipsKey.c_str(), allocator).Move(), allocator);
    }

}


string PermissionComponent::GetModuleId() const
{
    return m_moduleId;
}

void PermissionComponent::SetModuleId(const string& _moduleId)
{
    m_moduleId = _moduleId;
    m_moduleIdHasBeenSet = true;
}

bool PermissionComponent::ModuleIdHasBeenSet() const
{
    return m_moduleIdHasBeenSet;
}

string PermissionComponent::GetIncludeType() const
{
    return m_includeType;
}

void PermissionComponent::SetIncludeType(const string& _includeType)
{
    m_includeType = _includeType;
    m_includeTypeHasBeenSet = true;
}

bool PermissionComponent::IncludeTypeHasBeenSet() const
{
    return m_includeTypeHasBeenSet;
}

string PermissionComponent::GetUpgradeVersionType() const
{
    return m_upgradeVersionType;
}

void PermissionComponent::SetUpgradeVersionType(const string& _upgradeVersionType)
{
    m_upgradeVersionType = _upgradeVersionType;
    m_upgradeVersionTypeHasBeenSet = true;
}

bool PermissionComponent::UpgradeVersionTypeHasBeenSet() const
{
    return m_upgradeVersionTypeHasBeenSet;
}

string PermissionComponent::GetTips() const
{
    return m_tips;
}

void PermissionComponent::SetTips(const string& _tips)
{
    m_tips = _tips;
    m_tipsHasBeenSet = true;
}

bool PermissionComponent::TipsHasBeenSet() const
{
    return m_tipsHasBeenSet;
}

string PermissionComponent::GetTipsKey() const
{
    return m_tipsKey;
}

void PermissionComponent::SetTipsKey(const string& _tipsKey)
{
    m_tipsKey = _tipsKey;
    m_tipsKeyHasBeenSet = true;
}

bool PermissionComponent::TipsKeyHasBeenSet() const
{
    return m_tipsKeyHasBeenSet;
}

