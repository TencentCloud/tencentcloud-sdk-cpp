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

#include <tencentcloud/chc/v20230418/model/NetReceivingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

NetReceivingInfo::NetReceivingInfo() :
    m_deviceSnHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_hardwareMemoHasBeenSet(false),
    m_manufacturerHasBeenSet(false)
{
}

CoreInternalOutcome NetReceivingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceSn") && !value["DeviceSn"].IsNull())
    {
        if (!value["DeviceSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetReceivingInfo.DeviceSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceSn = string(value["DeviceSn"].GetString());
        m_deviceSnHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetReceivingInfo.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }

    if (value.HasMember("HardwareMemo") && !value["HardwareMemo"].IsNull())
    {
        if (!value["HardwareMemo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetReceivingInfo.HardwareMemo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hardwareMemo = string(value["HardwareMemo"].GetString());
        m_hardwareMemoHasBeenSet = true;
    }

    if (value.HasMember("Manufacturer") && !value["Manufacturer"].IsNull())
    {
        if (!value["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetReceivingInfo.Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(value["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetReceivingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_hardwareMemoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardwareMemo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hardwareMemo.c_str(), allocator).Move(), allocator);
    }

    if (m_manufacturerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manufacturer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturer.c_str(), allocator).Move(), allocator);
    }

}


string NetReceivingInfo::GetDeviceSn() const
{
    return m_deviceSn;
}

void NetReceivingInfo::SetDeviceSn(const string& _deviceSn)
{
    m_deviceSn = _deviceSn;
    m_deviceSnHasBeenSet = true;
}

bool NetReceivingInfo::DeviceSnHasBeenSet() const
{
    return m_deviceSnHasBeenSet;
}

string NetReceivingInfo::GetModelVersion() const
{
    return m_modelVersion;
}

void NetReceivingInfo::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool NetReceivingInfo::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string NetReceivingInfo::GetHardwareMemo() const
{
    return m_hardwareMemo;
}

void NetReceivingInfo::SetHardwareMemo(const string& _hardwareMemo)
{
    m_hardwareMemo = _hardwareMemo;
    m_hardwareMemoHasBeenSet = true;
}

bool NetReceivingInfo::HardwareMemoHasBeenSet() const
{
    return m_hardwareMemoHasBeenSet;
}

string NetReceivingInfo::GetManufacturer() const
{
    return m_manufacturer;
}

void NetReceivingInfo::SetManufacturer(const string& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool NetReceivingInfo::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

