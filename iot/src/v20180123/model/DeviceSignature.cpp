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

#include <tencentcloud/iot/v20180123/model/DeviceSignature.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

DeviceSignature::DeviceSignature() :
    m_deviceNameHasBeenSet(false),
    m_deviceSignatureHasBeenSet(false)
{
}

CoreInternalOutcome DeviceSignature::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceSignature.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceSignature") && !value["DeviceSignature"].IsNull())
    {
        if (!value["DeviceSignature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceSignature.DeviceSignature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceSignature = string(value["DeviceSignature"].GetString());
        m_deviceSignatureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceSignature::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceSignature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceSignature.c_str(), allocator).Move(), allocator);
    }

}


string DeviceSignature::GetDeviceName() const
{
    return m_deviceName;
}

void DeviceSignature::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DeviceSignature::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DeviceSignature::GetDeviceSignature() const
{
    return m_deviceSignature;
}

void DeviceSignature::SetDeviceSignature(const string& _deviceSignature)
{
    m_deviceSignature = _deviceSignature;
    m_deviceSignatureHasBeenSet = true;
}

bool DeviceSignature::DeviceSignatureHasBeenSet() const
{
    return m_deviceSignatureHasBeenSet;
}

