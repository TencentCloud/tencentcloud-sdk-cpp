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

#include <tencentcloud/mna/v20210119/model/L3ConnInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

L3ConnInfo::L3ConnInfo() :
    m_l3ConnIdHasBeenSet(false),
    m_deviceId1HasBeenSet(false),
    m_cidr1HasBeenSet(false),
    m_deviceId2HasBeenSet(false),
    m_cidr2HasBeenSet(false),
    m_enableHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome L3ConnInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("L3ConnId") && !value["L3ConnId"].IsNull())
    {
        if (!value["L3ConnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L3ConnInfo.L3ConnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_l3ConnId = string(value["L3ConnId"].GetString());
        m_l3ConnIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceId1") && !value["DeviceId1"].IsNull())
    {
        if (!value["DeviceId1"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L3ConnInfo.DeviceId1` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId1 = string(value["DeviceId1"].GetString());
        m_deviceId1HasBeenSet = true;
    }

    if (value.HasMember("Cidr1") && !value["Cidr1"].IsNull())
    {
        if (!value["Cidr1"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L3ConnInfo.Cidr1` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidr1 = string(value["Cidr1"].GetString());
        m_cidr1HasBeenSet = true;
    }

    if (value.HasMember("DeviceId2") && !value["DeviceId2"].IsNull())
    {
        if (!value["DeviceId2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L3ConnInfo.DeviceId2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId2 = string(value["DeviceId2"].GetString());
        m_deviceId2HasBeenSet = true;
    }

    if (value.HasMember("Cidr2") && !value["Cidr2"].IsNull())
    {
        if (!value["Cidr2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L3ConnInfo.Cidr2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidr2 = string(value["Cidr2"].GetString());
        m_cidr2HasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `L3ConnInfo.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L3ConnInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L3ConnInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_l3ConnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L3ConnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_l3ConnId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceId1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId1";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId1.c_str(), allocator).Move(), allocator);
    }

    if (m_cidr1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cidr1";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidr1.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceId2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId2.c_str(), allocator).Move(), allocator);
    }

    if (m_cidr2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cidr2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidr2.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string L3ConnInfo::GetL3ConnId() const
{
    return m_l3ConnId;
}

void L3ConnInfo::SetL3ConnId(const string& _l3ConnId)
{
    m_l3ConnId = _l3ConnId;
    m_l3ConnIdHasBeenSet = true;
}

bool L3ConnInfo::L3ConnIdHasBeenSet() const
{
    return m_l3ConnIdHasBeenSet;
}

string L3ConnInfo::GetDeviceId1() const
{
    return m_deviceId1;
}

void L3ConnInfo::SetDeviceId1(const string& _deviceId1)
{
    m_deviceId1 = _deviceId1;
    m_deviceId1HasBeenSet = true;
}

bool L3ConnInfo::DeviceId1HasBeenSet() const
{
    return m_deviceId1HasBeenSet;
}

string L3ConnInfo::GetCidr1() const
{
    return m_cidr1;
}

void L3ConnInfo::SetCidr1(const string& _cidr1)
{
    m_cidr1 = _cidr1;
    m_cidr1HasBeenSet = true;
}

bool L3ConnInfo::Cidr1HasBeenSet() const
{
    return m_cidr1HasBeenSet;
}

string L3ConnInfo::GetDeviceId2() const
{
    return m_deviceId2;
}

void L3ConnInfo::SetDeviceId2(const string& _deviceId2)
{
    m_deviceId2 = _deviceId2;
    m_deviceId2HasBeenSet = true;
}

bool L3ConnInfo::DeviceId2HasBeenSet() const
{
    return m_deviceId2HasBeenSet;
}

string L3ConnInfo::GetCidr2() const
{
    return m_cidr2;
}

void L3ConnInfo::SetCidr2(const string& _cidr2)
{
    m_cidr2 = _cidr2;
    m_cidr2HasBeenSet = true;
}

bool L3ConnInfo::Cidr2HasBeenSet() const
{
    return m_cidr2HasBeenSet;
}

bool L3ConnInfo::GetEnable() const
{
    return m_enable;
}

void L3ConnInfo::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool L3ConnInfo::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string L3ConnInfo::GetDescription() const
{
    return m_description;
}

void L3ConnInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool L3ConnInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

