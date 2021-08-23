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

#include <tencentcloud/iotcloud/v20210408/model/CreateDeviceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

CreateDeviceResponse::CreateDeviceResponse() :
    m_deviceNameHasBeenSet(false),
    m_devicePskHasBeenSet(false),
    m_deviceCertHasBeenSet(false),
    m_devicePrivateKeyHasBeenSet(false),
    m_loraDevEuiHasBeenSet(false),
    m_loraMoteTypeHasBeenSet(false),
    m_loraAppKeyHasBeenSet(false),
    m_loraNwkKeyHasBeenSet(false)
{
}

CoreInternalOutcome CreateDeviceResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("DeviceName") && !rsp["DeviceName"].IsNull())
    {
        if (!rsp["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(rsp["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (rsp.HasMember("DevicePsk") && !rsp["DevicePsk"].IsNull())
    {
        if (!rsp["DevicePsk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePsk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devicePsk = string(rsp["DevicePsk"].GetString());
        m_devicePskHasBeenSet = true;
    }

    if (rsp.HasMember("DeviceCert") && !rsp["DeviceCert"].IsNull())
    {
        if (!rsp["DeviceCert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCert = string(rsp["DeviceCert"].GetString());
        m_deviceCertHasBeenSet = true;
    }

    if (rsp.HasMember("DevicePrivateKey") && !rsp["DevicePrivateKey"].IsNull())
    {
        if (!rsp["DevicePrivateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devicePrivateKey = string(rsp["DevicePrivateKey"].GetString());
        m_devicePrivateKeyHasBeenSet = true;
    }

    if (rsp.HasMember("LoraDevEui") && !rsp["LoraDevEui"].IsNull())
    {
        if (!rsp["LoraDevEui"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoraDevEui` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loraDevEui = string(rsp["LoraDevEui"].GetString());
        m_loraDevEuiHasBeenSet = true;
    }

    if (rsp.HasMember("LoraMoteType") && !rsp["LoraMoteType"].IsNull())
    {
        if (!rsp["LoraMoteType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoraMoteType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loraMoteType = rsp["LoraMoteType"].GetUint64();
        m_loraMoteTypeHasBeenSet = true;
    }

    if (rsp.HasMember("LoraAppKey") && !rsp["LoraAppKey"].IsNull())
    {
        if (!rsp["LoraAppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoraAppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loraAppKey = string(rsp["LoraAppKey"].GetString());
        m_loraAppKeyHasBeenSet = true;
    }

    if (rsp.HasMember("LoraNwkKey") && !rsp["LoraNwkKey"].IsNull())
    {
        if (!rsp["LoraNwkKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoraNwkKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loraNwkKey = string(rsp["LoraNwkKey"].GetString());
        m_loraNwkKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateDeviceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_loraDevEuiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoraDevEui";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loraDevEui.c_str(), allocator).Move(), allocator);
    }

    if (m_loraMoteTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoraMoteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loraMoteType, allocator);
    }

    if (m_loraAppKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoraAppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loraAppKey.c_str(), allocator).Move(), allocator);
    }

    if (m_loraNwkKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoraNwkKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loraNwkKey.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string CreateDeviceResponse::GetDeviceName() const
{
    return m_deviceName;
}

bool CreateDeviceResponse::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string CreateDeviceResponse::GetDevicePsk() const
{
    return m_devicePsk;
}

bool CreateDeviceResponse::DevicePskHasBeenSet() const
{
    return m_devicePskHasBeenSet;
}

string CreateDeviceResponse::GetDeviceCert() const
{
    return m_deviceCert;
}

bool CreateDeviceResponse::DeviceCertHasBeenSet() const
{
    return m_deviceCertHasBeenSet;
}

string CreateDeviceResponse::GetDevicePrivateKey() const
{
    return m_devicePrivateKey;
}

bool CreateDeviceResponse::DevicePrivateKeyHasBeenSet() const
{
    return m_devicePrivateKeyHasBeenSet;
}

string CreateDeviceResponse::GetLoraDevEui() const
{
    return m_loraDevEui;
}

bool CreateDeviceResponse::LoraDevEuiHasBeenSet() const
{
    return m_loraDevEuiHasBeenSet;
}

uint64_t CreateDeviceResponse::GetLoraMoteType() const
{
    return m_loraMoteType;
}

bool CreateDeviceResponse::LoraMoteTypeHasBeenSet() const
{
    return m_loraMoteTypeHasBeenSet;
}

string CreateDeviceResponse::GetLoraAppKey() const
{
    return m_loraAppKey;
}

bool CreateDeviceResponse::LoraAppKeyHasBeenSet() const
{
    return m_loraAppKeyHasBeenSet;
}

string CreateDeviceResponse::GetLoraNwkKey() const
{
    return m_loraNwkKey;
}

bool CreateDeviceResponse::LoraNwkKeyHasBeenSet() const
{
    return m_loraNwkKeyHasBeenSet;
}


