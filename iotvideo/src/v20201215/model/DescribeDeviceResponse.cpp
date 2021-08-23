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

#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

DescribeDeviceResponse::DescribeDeviceResponse() :
    m_deviceNameHasBeenSet(false),
    m_onlineHasBeenSet(false),
    m_loginTimeHasBeenSet(false),
    m_devicePskHasBeenSet(false),
    m_enableStateHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_logLevelHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("Online") && !rsp["Online"].IsNull())
    {
        if (!rsp["Online"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Online` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_online = rsp["Online"].GetUint64();
        m_onlineHasBeenSet = true;
    }

    if (rsp.HasMember("LoginTime") && !rsp["LoginTime"].IsNull())
    {
        if (!rsp["LoginTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loginTime = rsp["LoginTime"].GetUint64();
        m_loginTimeHasBeenSet = true;
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

    if (rsp.HasMember("EnableState") && !rsp["EnableState"].IsNull())
    {
        if (!rsp["EnableState"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EnableState` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableState = rsp["EnableState"].GetUint64();
        m_enableStateHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = rsp["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LogLevel") && !rsp["LogLevel"].IsNull())
    {
        if (!rsp["LogLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logLevel = rsp["LogLevel"].GetUint64();
        m_logLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDeviceResponse::ToJsonString() const
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

    if (m_onlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Online";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_online, allocator);
    }

    if (m_loginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginTime, allocator);
    }

    if (m_devicePskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevicePsk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devicePsk.c_str(), allocator).Move(), allocator);
    }

    if (m_enableStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableState, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_logLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logLevel, allocator);
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


string DescribeDeviceResponse::GetDeviceName() const
{
    return m_deviceName;
}

bool DescribeDeviceResponse::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetOnline() const
{
    return m_online;
}

bool DescribeDeviceResponse::OnlineHasBeenSet() const
{
    return m_onlineHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetLoginTime() const
{
    return m_loginTime;
}

bool DescribeDeviceResponse::LoginTimeHasBeenSet() const
{
    return m_loginTimeHasBeenSet;
}

string DescribeDeviceResponse::GetDevicePsk() const
{
    return m_devicePsk;
}

bool DescribeDeviceResponse::DevicePskHasBeenSet() const
{
    return m_devicePskHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetEnableState() const
{
    return m_enableState;
}

bool DescribeDeviceResponse::EnableStateHasBeenSet() const
{
    return m_enableStateHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribeDeviceResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetLogLevel() const
{
    return m_logLevel;
}

bool DescribeDeviceResponse::LogLevelHasBeenSet() const
{
    return m_logLevelHasBeenSet;
}


