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

#include <tencentcloud/chc/v20230418/model/DeviceRackOn.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

DeviceRackOn::DeviceRackOn() :
    m_deviceSnHasBeenSet(false),
    m_dstRackNameHasBeenSet(false),
    m_dstPositionCodeHasBeenSet(false),
    m_dstIpHasBeenSet(false)
{
}

CoreInternalOutcome DeviceRackOn::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceSn") && !value["DeviceSn"].IsNull())
    {
        if (!value["DeviceSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceRackOn.DeviceSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceSn = string(value["DeviceSn"].GetString());
        m_deviceSnHasBeenSet = true;
    }

    if (value.HasMember("DstRackName") && !value["DstRackName"].IsNull())
    {
        if (!value["DstRackName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceRackOn.DstRackName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstRackName = string(value["DstRackName"].GetString());
        m_dstRackNameHasBeenSet = true;
    }

    if (value.HasMember("DstPositionCode") && !value["DstPositionCode"].IsNull())
    {
        if (!value["DstPositionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceRackOn.DstPositionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstPositionCode = string(value["DstPositionCode"].GetString());
        m_dstPositionCodeHasBeenSet = true;
    }

    if (value.HasMember("DstIp") && !value["DstIp"].IsNull())
    {
        if (!value["DstIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceRackOn.DstIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstIp = string(value["DstIp"].GetString());
        m_dstIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceRackOn::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceSn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceSn.c_str(), allocator).Move(), allocator);
    }

    if (m_dstRackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstRackName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstRackName.c_str(), allocator).Move(), allocator);
    }

    if (m_dstPositionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPositionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstPositionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_dstIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstIp.c_str(), allocator).Move(), allocator);
    }

}


string DeviceRackOn::GetDeviceSn() const
{
    return m_deviceSn;
}

void DeviceRackOn::SetDeviceSn(const string& _deviceSn)
{
    m_deviceSn = _deviceSn;
    m_deviceSnHasBeenSet = true;
}

bool DeviceRackOn::DeviceSnHasBeenSet() const
{
    return m_deviceSnHasBeenSet;
}

string DeviceRackOn::GetDstRackName() const
{
    return m_dstRackName;
}

void DeviceRackOn::SetDstRackName(const string& _dstRackName)
{
    m_dstRackName = _dstRackName;
    m_dstRackNameHasBeenSet = true;
}

bool DeviceRackOn::DstRackNameHasBeenSet() const
{
    return m_dstRackNameHasBeenSet;
}

string DeviceRackOn::GetDstPositionCode() const
{
    return m_dstPositionCode;
}

void DeviceRackOn::SetDstPositionCode(const string& _dstPositionCode)
{
    m_dstPositionCode = _dstPositionCode;
    m_dstPositionCodeHasBeenSet = true;
}

bool DeviceRackOn::DstPositionCodeHasBeenSet() const
{
    return m_dstPositionCodeHasBeenSet;
}

string DeviceRackOn::GetDstIp() const
{
    return m_dstIp;
}

void DeviceRackOn::SetDstIp(const string& _dstIp)
{
    m_dstIp = _dstIp;
    m_dstIpHasBeenSet = true;
}

bool DeviceRackOn::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}

