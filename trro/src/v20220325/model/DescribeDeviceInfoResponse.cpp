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

#include <tencentcloud/trro/v20220325/model/DescribeDeviceInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

DescribeDeviceInfoResponse::DescribeDeviceInfoResponse() :
    m_deviceNameHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_deviceStatusHasBeenSet(false),
    m_lastReportTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceInfoResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("DeviceType") && !rsp["DeviceType"].IsNull())
    {
        if (!rsp["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(rsp["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("DeviceStatus") && !rsp["DeviceStatus"].IsNull())
    {
        if (!rsp["DeviceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceStatus = string(rsp["DeviceStatus"].GetString());
        m_deviceStatusHasBeenSet = true;
    }

    if (rsp.HasMember("LastReportTime") && !rsp["LastReportTime"].IsNull())
    {
        if (!rsp["LastReportTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastReportTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastReportTime = string(rsp["LastReportTime"].GetString());
        m_lastReportTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ModifyTime") && !rsp["ModifyTime"].IsNull())
    {
        if (!rsp["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(rsp["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDeviceInfoResponse::ToJsonString() const
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

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_lastReportTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastReportTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastReportTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
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


string DescribeDeviceInfoResponse::GetDeviceName() const
{
    return m_deviceName;
}

bool DescribeDeviceInfoResponse::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DescribeDeviceInfoResponse::GetDeviceType() const
{
    return m_deviceType;
}

bool DescribeDeviceInfoResponse::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string DescribeDeviceInfoResponse::GetDeviceStatus() const
{
    return m_deviceStatus;
}

bool DescribeDeviceInfoResponse::DeviceStatusHasBeenSet() const
{
    return m_deviceStatusHasBeenSet;
}

string DescribeDeviceInfoResponse::GetLastReportTime() const
{
    return m_lastReportTime;
}

bool DescribeDeviceInfoResponse::LastReportTimeHasBeenSet() const
{
    return m_lastReportTimeHasBeenSet;
}

string DescribeDeviceInfoResponse::GetModifyTime() const
{
    return m_modifyTime;
}

bool DescribeDeviceInfoResponse::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}


