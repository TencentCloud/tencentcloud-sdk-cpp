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

#include <tencentcloud/iotcloud/v20180614/model/MultiDevicesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

MultiDevicesInfo::MultiDevicesInfo() :
    m_deviceNameHasBeenSet(false),
    m_devicePskHasBeenSet(false),
    m_deviceCertHasBeenSet(false),
    m_devicePrivateKeyHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_errMsgHasBeenSet(false)
{
}

CoreInternalOutcome MultiDevicesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiDevicesInfo.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("DevicePsk") && !value["DevicePsk"].IsNull())
    {
        if (!value["DevicePsk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiDevicesInfo.DevicePsk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devicePsk = string(value["DevicePsk"].GetString());
        m_devicePskHasBeenSet = true;
    }

    if (value.HasMember("DeviceCert") && !value["DeviceCert"].IsNull())
    {
        if (!value["DeviceCert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiDevicesInfo.DeviceCert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCert = string(value["DeviceCert"].GetString());
        m_deviceCertHasBeenSet = true;
    }

    if (value.HasMember("DevicePrivateKey") && !value["DevicePrivateKey"].IsNull())
    {
        if (!value["DevicePrivateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiDevicesInfo.DevicePrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devicePrivateKey = string(value["DevicePrivateKey"].GetString());
        m_devicePrivateKeyHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MultiDevicesInfo.Result` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetUint64();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiDevicesInfo.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiDevicesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_devicePskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevicePsk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devicePsk.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceCert.c_str(), allocator).Move(), allocator);
    }

    if (m_devicePrivateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevicePrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devicePrivateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

}


string MultiDevicesInfo::GetDeviceName() const
{
    return m_deviceName;
}

void MultiDevicesInfo::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool MultiDevicesInfo::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string MultiDevicesInfo::GetDevicePsk() const
{
    return m_devicePsk;
}

void MultiDevicesInfo::SetDevicePsk(const string& _devicePsk)
{
    m_devicePsk = _devicePsk;
    m_devicePskHasBeenSet = true;
}

bool MultiDevicesInfo::DevicePskHasBeenSet() const
{
    return m_devicePskHasBeenSet;
}

string MultiDevicesInfo::GetDeviceCert() const
{
    return m_deviceCert;
}

void MultiDevicesInfo::SetDeviceCert(const string& _deviceCert)
{
    m_deviceCert = _deviceCert;
    m_deviceCertHasBeenSet = true;
}

bool MultiDevicesInfo::DeviceCertHasBeenSet() const
{
    return m_deviceCertHasBeenSet;
}

string MultiDevicesInfo::GetDevicePrivateKey() const
{
    return m_devicePrivateKey;
}

void MultiDevicesInfo::SetDevicePrivateKey(const string& _devicePrivateKey)
{
    m_devicePrivateKey = _devicePrivateKey;
    m_devicePrivateKeyHasBeenSet = true;
}

bool MultiDevicesInfo::DevicePrivateKeyHasBeenSet() const
{
    return m_devicePrivateKeyHasBeenSet;
}

uint64_t MultiDevicesInfo::GetResult() const
{
    return m_result;
}

void MultiDevicesInfo::SetResult(const uint64_t& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool MultiDevicesInfo::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string MultiDevicesInfo::GetErrMsg() const
{
    return m_errMsg;
}

void MultiDevicesInfo::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool MultiDevicesInfo::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

