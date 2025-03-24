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

#include <tencentcloud/chc/v20230418/model/ServerReceivingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

ServerReceivingInfo::ServerReceivingInfo() :
    m_deviceSnHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_need10GbSlotHasBeenSet(false),
    m_needDCPowerHasBeenSet(false),
    m_needExtranetHasBeenSet(false),
    m_needVirtualizationHasBeenSet(false),
    m_hardwareMemoHasBeenSet(false)
{
}

CoreInternalOutcome ServerReceivingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceSn") && !value["DeviceSn"].IsNull())
    {
        if (!value["DeviceSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerReceivingInfo.DeviceSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceSn = string(value["DeviceSn"].GetString());
        m_deviceSnHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerReceivingInfo.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }

    if (value.HasMember("Need10GbSlot") && !value["Need10GbSlot"].IsNull())
    {
        if (!value["Need10GbSlot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerReceivingInfo.Need10GbSlot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_need10GbSlot = string(value["Need10GbSlot"].GetString());
        m_need10GbSlotHasBeenSet = true;
    }

    if (value.HasMember("NeedDCPower") && !value["NeedDCPower"].IsNull())
    {
        if (!value["NeedDCPower"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerReceivingInfo.NeedDCPower` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_needDCPower = string(value["NeedDCPower"].GetString());
        m_needDCPowerHasBeenSet = true;
    }

    if (value.HasMember("NeedExtranet") && !value["NeedExtranet"].IsNull())
    {
        if (!value["NeedExtranet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerReceivingInfo.NeedExtranet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_needExtranet = string(value["NeedExtranet"].GetString());
        m_needExtranetHasBeenSet = true;
    }

    if (value.HasMember("NeedVirtualization") && !value["NeedVirtualization"].IsNull())
    {
        if (!value["NeedVirtualization"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerReceivingInfo.NeedVirtualization` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_needVirtualization = string(value["NeedVirtualization"].GetString());
        m_needVirtualizationHasBeenSet = true;
    }

    if (value.HasMember("HardwareMemo") && !value["HardwareMemo"].IsNull())
    {
        if (!value["HardwareMemo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerReceivingInfo.HardwareMemo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hardwareMemo = string(value["HardwareMemo"].GetString());
        m_hardwareMemoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerReceivingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceSn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceSn.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_need10GbSlotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Need10GbSlot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_need10GbSlot.c_str(), allocator).Move(), allocator);
    }

    if (m_needDCPowerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedDCPower";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_needDCPower.c_str(), allocator).Move(), allocator);
    }

    if (m_needExtranetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedExtranet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_needExtranet.c_str(), allocator).Move(), allocator);
    }

    if (m_needVirtualizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedVirtualization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_needVirtualization.c_str(), allocator).Move(), allocator);
    }

    if (m_hardwareMemoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardwareMemo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hardwareMemo.c_str(), allocator).Move(), allocator);
    }

}


string ServerReceivingInfo::GetDeviceSn() const
{
    return m_deviceSn;
}

void ServerReceivingInfo::SetDeviceSn(const string& _deviceSn)
{
    m_deviceSn = _deviceSn;
    m_deviceSnHasBeenSet = true;
}

bool ServerReceivingInfo::DeviceSnHasBeenSet() const
{
    return m_deviceSnHasBeenSet;
}

string ServerReceivingInfo::GetModelVersion() const
{
    return m_modelVersion;
}

void ServerReceivingInfo::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool ServerReceivingInfo::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string ServerReceivingInfo::GetNeed10GbSlot() const
{
    return m_need10GbSlot;
}

void ServerReceivingInfo::SetNeed10GbSlot(const string& _need10GbSlot)
{
    m_need10GbSlot = _need10GbSlot;
    m_need10GbSlotHasBeenSet = true;
}

bool ServerReceivingInfo::Need10GbSlotHasBeenSet() const
{
    return m_need10GbSlotHasBeenSet;
}

string ServerReceivingInfo::GetNeedDCPower() const
{
    return m_needDCPower;
}

void ServerReceivingInfo::SetNeedDCPower(const string& _needDCPower)
{
    m_needDCPower = _needDCPower;
    m_needDCPowerHasBeenSet = true;
}

bool ServerReceivingInfo::NeedDCPowerHasBeenSet() const
{
    return m_needDCPowerHasBeenSet;
}

string ServerReceivingInfo::GetNeedExtranet() const
{
    return m_needExtranet;
}

void ServerReceivingInfo::SetNeedExtranet(const string& _needExtranet)
{
    m_needExtranet = _needExtranet;
    m_needExtranetHasBeenSet = true;
}

bool ServerReceivingInfo::NeedExtranetHasBeenSet() const
{
    return m_needExtranetHasBeenSet;
}

string ServerReceivingInfo::GetNeedVirtualization() const
{
    return m_needVirtualization;
}

void ServerReceivingInfo::SetNeedVirtualization(const string& _needVirtualization)
{
    m_needVirtualization = _needVirtualization;
    m_needVirtualizationHasBeenSet = true;
}

bool ServerReceivingInfo::NeedVirtualizationHasBeenSet() const
{
    return m_needVirtualizationHasBeenSet;
}

string ServerReceivingInfo::GetHardwareMemo() const
{
    return m_hardwareMemo;
}

void ServerReceivingInfo::SetHardwareMemo(const string& _hardwareMemo)
{
    m_hardwareMemo = _hardwareMemo;
    m_hardwareMemoHasBeenSet = true;
}

bool ServerReceivingInfo::HardwareMemoHasBeenSet() const
{
    return m_hardwareMemoHasBeenSet;
}

