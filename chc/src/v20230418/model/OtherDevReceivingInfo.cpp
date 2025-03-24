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

#include <tencentcloud/chc/v20230418/model/OtherDevReceivingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

OtherDevReceivingInfo::OtherDevReceivingInfo() :
    m_deviceSnHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_hardwareMemoHasBeenSet(false)
{
}

CoreInternalOutcome OtherDevReceivingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceSn") && !value["DeviceSn"].IsNull())
    {
        if (!value["DeviceSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherDevReceivingInfo.DeviceSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceSn = string(value["DeviceSn"].GetString());
        m_deviceSnHasBeenSet = true;
    }

    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherDevReceivingInfo.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("Manufacturer") && !value["Manufacturer"].IsNull())
    {
        if (!value["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherDevReceivingInfo.Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(value["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }

    if (value.HasMember("HardwareMemo") && !value["HardwareMemo"].IsNull())
    {
        if (!value["HardwareMemo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherDevReceivingInfo.HardwareMemo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hardwareMemo = string(value["HardwareMemo"].GetString());
        m_hardwareMemoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OtherDevReceivingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceSn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceSn.c_str(), allocator).Move(), allocator);
    }

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_manufacturerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manufacturer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturer.c_str(), allocator).Move(), allocator);
    }

    if (m_hardwareMemoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardwareMemo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hardwareMemo.c_str(), allocator).Move(), allocator);
    }

}


string OtherDevReceivingInfo::GetDeviceSn() const
{
    return m_deviceSn;
}

void OtherDevReceivingInfo::SetDeviceSn(const string& _deviceSn)
{
    m_deviceSn = _deviceSn;
    m_deviceSnHasBeenSet = true;
}

bool OtherDevReceivingInfo::DeviceSnHasBeenSet() const
{
    return m_deviceSnHasBeenSet;
}

string OtherDevReceivingInfo::GetTypeName() const
{
    return m_typeName;
}

void OtherDevReceivingInfo::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool OtherDevReceivingInfo::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

string OtherDevReceivingInfo::GetManufacturer() const
{
    return m_manufacturer;
}

void OtherDevReceivingInfo::SetManufacturer(const string& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool OtherDevReceivingInfo::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

string OtherDevReceivingInfo::GetHardwareMemo() const
{
    return m_hardwareMemo;
}

void OtherDevReceivingInfo::SetHardwareMemo(const string& _hardwareMemo)
{
    m_hardwareMemo = _hardwareMemo;
    m_hardwareMemoHasBeenSet = true;
}

bool OtherDevReceivingInfo::HardwareMemoHasBeenSet() const
{
    return m_hardwareMemoHasBeenSet;
}

