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

#include <tencentcloud/cwp/v20180228/model/ModifyAutoOpenProVersionConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyAutoOpenProVersionConfigRequest::ModifyAutoOpenProVersionConfigRequest() :
    m_statusHasBeenSet(false),
    m_protectTypeHasBeenSet(false),
    m_autoRepurchaseSwitchHasBeenSet(false),
    m_autoRepurchaseRenewSwitchHasBeenSet(false),
    m_repurchaseRenewSwitchHasBeenSet(false),
    m_autoBindRaspSwitchHasBeenSet(false),
    m_autoOpenRaspSwitchHasBeenSet(false),
    m_autoDowngradeSwitchHasBeenSet(false)
{
}

string ModifyAutoOpenProVersionConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_protectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protectType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRepurchaseSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRepurchaseSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRepurchaseSwitch, allocator);
    }

    if (m_autoRepurchaseRenewSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRepurchaseRenewSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRepurchaseRenewSwitch, allocator);
    }

    if (m_repurchaseRenewSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepurchaseRenewSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_repurchaseRenewSwitch, allocator);
    }

    if (m_autoBindRaspSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBindRaspSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoBindRaspSwitch, allocator);
    }

    if (m_autoOpenRaspSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoOpenRaspSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoOpenRaspSwitch, allocator);
    }

    if (m_autoDowngradeSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoDowngradeSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoDowngradeSwitch, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAutoOpenProVersionConfigRequest::GetStatus() const
{
    return m_status;
}

void ModifyAutoOpenProVersionConfigRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyAutoOpenProVersionConfigRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyAutoOpenProVersionConfigRequest::GetProtectType() const
{
    return m_protectType;
}

void ModifyAutoOpenProVersionConfigRequest::SetProtectType(const string& _protectType)
{
    m_protectType = _protectType;
    m_protectTypeHasBeenSet = true;
}

bool ModifyAutoOpenProVersionConfigRequest::ProtectTypeHasBeenSet() const
{
    return m_protectTypeHasBeenSet;
}

uint64_t ModifyAutoOpenProVersionConfigRequest::GetAutoRepurchaseSwitch() const
{
    return m_autoRepurchaseSwitch;
}

void ModifyAutoOpenProVersionConfigRequest::SetAutoRepurchaseSwitch(const uint64_t& _autoRepurchaseSwitch)
{
    m_autoRepurchaseSwitch = _autoRepurchaseSwitch;
    m_autoRepurchaseSwitchHasBeenSet = true;
}

bool ModifyAutoOpenProVersionConfigRequest::AutoRepurchaseSwitchHasBeenSet() const
{
    return m_autoRepurchaseSwitchHasBeenSet;
}

uint64_t ModifyAutoOpenProVersionConfigRequest::GetAutoRepurchaseRenewSwitch() const
{
    return m_autoRepurchaseRenewSwitch;
}

void ModifyAutoOpenProVersionConfigRequest::SetAutoRepurchaseRenewSwitch(const uint64_t& _autoRepurchaseRenewSwitch)
{
    m_autoRepurchaseRenewSwitch = _autoRepurchaseRenewSwitch;
    m_autoRepurchaseRenewSwitchHasBeenSet = true;
}

bool ModifyAutoOpenProVersionConfigRequest::AutoRepurchaseRenewSwitchHasBeenSet() const
{
    return m_autoRepurchaseRenewSwitchHasBeenSet;
}

uint64_t ModifyAutoOpenProVersionConfigRequest::GetRepurchaseRenewSwitch() const
{
    return m_repurchaseRenewSwitch;
}

void ModifyAutoOpenProVersionConfigRequest::SetRepurchaseRenewSwitch(const uint64_t& _repurchaseRenewSwitch)
{
    m_repurchaseRenewSwitch = _repurchaseRenewSwitch;
    m_repurchaseRenewSwitchHasBeenSet = true;
}

bool ModifyAutoOpenProVersionConfigRequest::RepurchaseRenewSwitchHasBeenSet() const
{
    return m_repurchaseRenewSwitchHasBeenSet;
}

uint64_t ModifyAutoOpenProVersionConfigRequest::GetAutoBindRaspSwitch() const
{
    return m_autoBindRaspSwitch;
}

void ModifyAutoOpenProVersionConfigRequest::SetAutoBindRaspSwitch(const uint64_t& _autoBindRaspSwitch)
{
    m_autoBindRaspSwitch = _autoBindRaspSwitch;
    m_autoBindRaspSwitchHasBeenSet = true;
}

bool ModifyAutoOpenProVersionConfigRequest::AutoBindRaspSwitchHasBeenSet() const
{
    return m_autoBindRaspSwitchHasBeenSet;
}

uint64_t ModifyAutoOpenProVersionConfigRequest::GetAutoOpenRaspSwitch() const
{
    return m_autoOpenRaspSwitch;
}

void ModifyAutoOpenProVersionConfigRequest::SetAutoOpenRaspSwitch(const uint64_t& _autoOpenRaspSwitch)
{
    m_autoOpenRaspSwitch = _autoOpenRaspSwitch;
    m_autoOpenRaspSwitchHasBeenSet = true;
}

bool ModifyAutoOpenProVersionConfigRequest::AutoOpenRaspSwitchHasBeenSet() const
{
    return m_autoOpenRaspSwitchHasBeenSet;
}

uint64_t ModifyAutoOpenProVersionConfigRequest::GetAutoDowngradeSwitch() const
{
    return m_autoDowngradeSwitch;
}

void ModifyAutoOpenProVersionConfigRequest::SetAutoDowngradeSwitch(const uint64_t& _autoDowngradeSwitch)
{
    m_autoDowngradeSwitch = _autoDowngradeSwitch;
    m_autoDowngradeSwitchHasBeenSet = true;
}

bool ModifyAutoOpenProVersionConfigRequest::AutoDowngradeSwitchHasBeenSet() const
{
    return m_autoDowngradeSwitchHasBeenSet;
}


