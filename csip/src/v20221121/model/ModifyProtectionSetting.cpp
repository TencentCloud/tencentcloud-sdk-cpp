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

#include <tencentcloud/csip/v20221121/model/ModifyProtectionSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyProtectionSetting::ModifyProtectionSetting() :
    m_qUUIDHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_vulDefEnableHasBeenSet(false),
    m_vulDefModeHasBeenSet(false),
    m_vulDefActionHasBeenSet(false),
    m_memShellDefEnableHasBeenSet(false),
    m_performanceLimitHasBeenSet(false),
    m_performanceLimitCpuHasBeenSet(false),
    m_performanceLimitMemHasBeenSet(false),
    m_performanceLimitMemAmountHasBeenSet(false),
    m_safeInjectHasBeenSet(false)
{
}

CoreInternalOutcome ModifyProtectionSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QUUID") && !value["QUUID"].IsNull())
    {
        if (!value["QUUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyProtectionSetting.QUUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qUUID = string(value["QUUID"].GetString());
        m_qUUIDHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyProtectionSetting.Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("VulDefEnable") && !value["VulDefEnable"].IsNull())
    {
        if (!value["VulDefEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyProtectionSetting.VulDefEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulDefEnable = value["VulDefEnable"].GetUint64();
        m_vulDefEnableHasBeenSet = true;
    }

    if (value.HasMember("VulDefMode") && !value["VulDefMode"].IsNull())
    {
        if (!value["VulDefMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyProtectionSetting.VulDefMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulDefMode = value["VulDefMode"].GetUint64();
        m_vulDefModeHasBeenSet = true;
    }

    if (value.HasMember("VulDefAction") && !value["VulDefAction"].IsNull())
    {
        if (!value["VulDefAction"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyProtectionSetting.VulDefAction` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulDefAction = value["VulDefAction"].GetUint64();
        m_vulDefActionHasBeenSet = true;
    }

    if (value.HasMember("MemShellDefEnable") && !value["MemShellDefEnable"].IsNull())
    {
        if (!value["MemShellDefEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyProtectionSetting.MemShellDefEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memShellDefEnable = value["MemShellDefEnable"].GetUint64();
        m_memShellDefEnableHasBeenSet = true;
    }

    if (value.HasMember("PerformanceLimit") && !value["PerformanceLimit"].IsNull())
    {
        if (!value["PerformanceLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyProtectionSetting.PerformanceLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_performanceLimit = value["PerformanceLimit"].GetUint64();
        m_performanceLimitHasBeenSet = true;
    }

    if (value.HasMember("PerformanceLimitCpu") && !value["PerformanceLimitCpu"].IsNull())
    {
        if (!value["PerformanceLimitCpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyProtectionSetting.PerformanceLimitCpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_performanceLimitCpu = value["PerformanceLimitCpu"].GetUint64();
        m_performanceLimitCpuHasBeenSet = true;
    }

    if (value.HasMember("PerformanceLimitMem") && !value["PerformanceLimitMem"].IsNull())
    {
        if (!value["PerformanceLimitMem"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyProtectionSetting.PerformanceLimitMem` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_performanceLimitMem = value["PerformanceLimitMem"].GetUint64();
        m_performanceLimitMemHasBeenSet = true;
    }

    if (value.HasMember("PerformanceLimitMemAmount") && !value["PerformanceLimitMemAmount"].IsNull())
    {
        if (!value["PerformanceLimitMemAmount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyProtectionSetting.PerformanceLimitMemAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_performanceLimitMemAmount = value["PerformanceLimitMemAmount"].GetUint64();
        m_performanceLimitMemAmountHasBeenSet = true;
    }

    if (value.HasMember("SafeInject") && !value["SafeInject"].IsNull())
    {
        if (!value["SafeInject"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyProtectionSetting.SafeInject` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_safeInject = value["SafeInject"].GetUint64();
        m_safeInjectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyProtectionSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_qUUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QUUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qUUID.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_vulDefEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulDefEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulDefEnable, allocator);
    }

    if (m_vulDefModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulDefMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulDefMode, allocator);
    }

    if (m_vulDefActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulDefAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulDefAction, allocator);
    }

    if (m_memShellDefEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemShellDefEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memShellDefEnable, allocator);
    }

    if (m_performanceLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerformanceLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_performanceLimit, allocator);
    }

    if (m_performanceLimitCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerformanceLimitCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_performanceLimitCpu, allocator);
    }

    if (m_performanceLimitMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerformanceLimitMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_performanceLimitMem, allocator);
    }

    if (m_performanceLimitMemAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerformanceLimitMemAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_performanceLimitMemAmount, allocator);
    }

    if (m_safeInjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SafeInject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_safeInject, allocator);
    }

}


string ModifyProtectionSetting::GetQUUID() const
{
    return m_qUUID;
}

void ModifyProtectionSetting::SetQUUID(const string& _qUUID)
{
    m_qUUID = _qUUID;
    m_qUUIDHasBeenSet = true;
}

bool ModifyProtectionSetting::QUUIDHasBeenSet() const
{
    return m_qUUIDHasBeenSet;
}

uint64_t ModifyProtectionSetting::GetEnable() const
{
    return m_enable;
}

void ModifyProtectionSetting::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyProtectionSetting::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t ModifyProtectionSetting::GetVulDefEnable() const
{
    return m_vulDefEnable;
}

void ModifyProtectionSetting::SetVulDefEnable(const uint64_t& _vulDefEnable)
{
    m_vulDefEnable = _vulDefEnable;
    m_vulDefEnableHasBeenSet = true;
}

bool ModifyProtectionSetting::VulDefEnableHasBeenSet() const
{
    return m_vulDefEnableHasBeenSet;
}

uint64_t ModifyProtectionSetting::GetVulDefMode() const
{
    return m_vulDefMode;
}

void ModifyProtectionSetting::SetVulDefMode(const uint64_t& _vulDefMode)
{
    m_vulDefMode = _vulDefMode;
    m_vulDefModeHasBeenSet = true;
}

bool ModifyProtectionSetting::VulDefModeHasBeenSet() const
{
    return m_vulDefModeHasBeenSet;
}

uint64_t ModifyProtectionSetting::GetVulDefAction() const
{
    return m_vulDefAction;
}

void ModifyProtectionSetting::SetVulDefAction(const uint64_t& _vulDefAction)
{
    m_vulDefAction = _vulDefAction;
    m_vulDefActionHasBeenSet = true;
}

bool ModifyProtectionSetting::VulDefActionHasBeenSet() const
{
    return m_vulDefActionHasBeenSet;
}

uint64_t ModifyProtectionSetting::GetMemShellDefEnable() const
{
    return m_memShellDefEnable;
}

void ModifyProtectionSetting::SetMemShellDefEnable(const uint64_t& _memShellDefEnable)
{
    m_memShellDefEnable = _memShellDefEnable;
    m_memShellDefEnableHasBeenSet = true;
}

bool ModifyProtectionSetting::MemShellDefEnableHasBeenSet() const
{
    return m_memShellDefEnableHasBeenSet;
}

uint64_t ModifyProtectionSetting::GetPerformanceLimit() const
{
    return m_performanceLimit;
}

void ModifyProtectionSetting::SetPerformanceLimit(const uint64_t& _performanceLimit)
{
    m_performanceLimit = _performanceLimit;
    m_performanceLimitHasBeenSet = true;
}

bool ModifyProtectionSetting::PerformanceLimitHasBeenSet() const
{
    return m_performanceLimitHasBeenSet;
}

uint64_t ModifyProtectionSetting::GetPerformanceLimitCpu() const
{
    return m_performanceLimitCpu;
}

void ModifyProtectionSetting::SetPerformanceLimitCpu(const uint64_t& _performanceLimitCpu)
{
    m_performanceLimitCpu = _performanceLimitCpu;
    m_performanceLimitCpuHasBeenSet = true;
}

bool ModifyProtectionSetting::PerformanceLimitCpuHasBeenSet() const
{
    return m_performanceLimitCpuHasBeenSet;
}

uint64_t ModifyProtectionSetting::GetPerformanceLimitMem() const
{
    return m_performanceLimitMem;
}

void ModifyProtectionSetting::SetPerformanceLimitMem(const uint64_t& _performanceLimitMem)
{
    m_performanceLimitMem = _performanceLimitMem;
    m_performanceLimitMemHasBeenSet = true;
}

bool ModifyProtectionSetting::PerformanceLimitMemHasBeenSet() const
{
    return m_performanceLimitMemHasBeenSet;
}

uint64_t ModifyProtectionSetting::GetPerformanceLimitMemAmount() const
{
    return m_performanceLimitMemAmount;
}

void ModifyProtectionSetting::SetPerformanceLimitMemAmount(const uint64_t& _performanceLimitMemAmount)
{
    m_performanceLimitMemAmount = _performanceLimitMemAmount;
    m_performanceLimitMemAmountHasBeenSet = true;
}

bool ModifyProtectionSetting::PerformanceLimitMemAmountHasBeenSet() const
{
    return m_performanceLimitMemAmountHasBeenSet;
}

uint64_t ModifyProtectionSetting::GetSafeInject() const
{
    return m_safeInject;
}

void ModifyProtectionSetting::SetSafeInject(const uint64_t& _safeInject)
{
    m_safeInject = _safeInject;
    m_safeInjectHasBeenSet = true;
}

bool ModifyProtectionSetting::SafeInjectHasBeenSet() const
{
    return m_safeInjectHasBeenSet;
}

