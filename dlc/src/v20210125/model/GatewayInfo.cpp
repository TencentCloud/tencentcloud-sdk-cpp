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

#include <tencentcloud/dlc/v20210125/model/GatewayInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

GatewayInfo::GatewayInfo() :
    m_gatewayIdHasBeenSet(false),
    m_gatewayNameHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_modeHasBeenSet(false)
{
}

CoreInternalOutcome GatewayInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayInfo.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("GatewayName") && !value["GatewayName"].IsNull())
    {
        if (!value["GatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayInfo.GatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayName = string(value["GatewayName"].GetString());
        m_gatewayNameHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayInfo.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayInfo.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayInfo.Mode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetInt64();
        m_modeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatewayInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

}


string GatewayInfo::GetGatewayId() const
{
    return m_gatewayId;
}

void GatewayInfo::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool GatewayInfo::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string GatewayInfo::GetGatewayName() const
{
    return m_gatewayName;
}

void GatewayInfo::SetGatewayName(const string& _gatewayName)
{
    m_gatewayName = _gatewayName;
    m_gatewayNameHasBeenSet = true;
}

bool GatewayInfo::GatewayNameHasBeenSet() const
{
    return m_gatewayNameHasBeenSet;
}

int64_t GatewayInfo::GetSize() const
{
    return m_size;
}

void GatewayInfo::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool GatewayInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t GatewayInfo::GetState() const
{
    return m_state;
}

void GatewayInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool GatewayInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

int64_t GatewayInfo::GetPayMode() const
{
    return m_payMode;
}

void GatewayInfo::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool GatewayInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t GatewayInfo::GetMode() const
{
    return m_mode;
}

void GatewayInfo::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool GatewayInfo::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

