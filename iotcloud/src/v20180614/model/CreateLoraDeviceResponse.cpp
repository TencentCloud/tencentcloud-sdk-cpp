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

#include <tencentcloud/iotcloud/v20180614/model/CreateLoraDeviceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

CreateLoraDeviceResponse::CreateLoraDeviceResponse() :
    m_appEuiHasBeenSet(false),
    m_deviceEuiHasBeenSet(false),
    m_classTypeHasBeenSet(false),
    m_deviceNameHasBeenSet(false)
{
}

CoreInternalOutcome CreateLoraDeviceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AppEui") && !rsp["AppEui"].IsNull())
    {
        if (!rsp["AppEui"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppEui` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appEui = string(rsp["AppEui"].GetString());
        m_appEuiHasBeenSet = true;
    }

    if (rsp.HasMember("DeviceEui") && !rsp["DeviceEui"].IsNull())
    {
        if (!rsp["DeviceEui"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceEui` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceEui = string(rsp["DeviceEui"].GetString());
        m_deviceEuiHasBeenSet = true;
    }

    if (rsp.HasMember("ClassType") && !rsp["ClassType"].IsNull())
    {
        if (!rsp["ClassType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classType = string(rsp["ClassType"].GetString());
        m_classTypeHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string CreateLoraDeviceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_appEuiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppEui";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appEui.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceEuiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceEui";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceEui.c_str(), allocator).Move(), allocator);
    }

    if (m_classTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classType.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
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


string CreateLoraDeviceResponse::GetAppEui() const
{
    return m_appEui;
}

bool CreateLoraDeviceResponse::AppEuiHasBeenSet() const
{
    return m_appEuiHasBeenSet;
}

string CreateLoraDeviceResponse::GetDeviceEui() const
{
    return m_deviceEui;
}

bool CreateLoraDeviceResponse::DeviceEuiHasBeenSet() const
{
    return m_deviceEuiHasBeenSet;
}

string CreateLoraDeviceResponse::GetClassType() const
{
    return m_classType;
}

bool CreateLoraDeviceResponse::ClassTypeHasBeenSet() const
{
    return m_classTypeHasBeenSet;
}

string CreateLoraDeviceResponse::GetDeviceName() const
{
    return m_deviceName;
}

bool CreateLoraDeviceResponse::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}


