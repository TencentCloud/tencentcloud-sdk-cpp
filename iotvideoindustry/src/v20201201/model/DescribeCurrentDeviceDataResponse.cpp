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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeCurrentDeviceDataResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DescribeCurrentDeviceDataResponse::DescribeCurrentDeviceDataResponse() :
    m_channelsHasBeenSet(false),
    m_devicesHasBeenSet(false),
    m_onlineChannelsHasBeenSet(false),
    m_onlineDevicesHasBeenSet(false),
    m_recordingChannelsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCurrentDeviceDataResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Channels") && !rsp["Channels"].IsNull())
    {
        if (!rsp["Channels"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Channels` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channels = rsp["Channels"].GetInt64();
        m_channelsHasBeenSet = true;
    }

    if (rsp.HasMember("Devices") && !rsp["Devices"].IsNull())
    {
        if (!rsp["Devices"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Devices` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_devices = rsp["Devices"].GetInt64();
        m_devicesHasBeenSet = true;
    }

    if (rsp.HasMember("OnlineChannels") && !rsp["OnlineChannels"].IsNull())
    {
        if (!rsp["OnlineChannels"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OnlineChannels` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineChannels = rsp["OnlineChannels"].GetInt64();
        m_onlineChannelsHasBeenSet = true;
    }

    if (rsp.HasMember("OnlineDevices") && !rsp["OnlineDevices"].IsNull())
    {
        if (!rsp["OnlineDevices"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OnlineDevices` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineDevices = rsp["OnlineDevices"].GetInt64();
        m_onlineDevicesHasBeenSet = true;
    }

    if (rsp.HasMember("RecordingChannels") && !rsp["RecordingChannels"].IsNull())
    {
        if (!rsp["RecordingChannels"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingChannels` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordingChannels = rsp["RecordingChannels"].GetInt64();
        m_recordingChannelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCurrentDeviceDataResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_channelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channels, allocator);
    }

    if (m_devicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Devices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_devices, allocator);
    }

    if (m_onlineChannelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineChannels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineChannels, allocator);
    }

    if (m_onlineDevicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineDevices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineDevices, allocator);
    }

    if (m_recordingChannelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordingChannels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordingChannels, allocator);
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


int64_t DescribeCurrentDeviceDataResponse::GetChannels() const
{
    return m_channels;
}

bool DescribeCurrentDeviceDataResponse::ChannelsHasBeenSet() const
{
    return m_channelsHasBeenSet;
}

int64_t DescribeCurrentDeviceDataResponse::GetDevices() const
{
    return m_devices;
}

bool DescribeCurrentDeviceDataResponse::DevicesHasBeenSet() const
{
    return m_devicesHasBeenSet;
}

int64_t DescribeCurrentDeviceDataResponse::GetOnlineChannels() const
{
    return m_onlineChannels;
}

bool DescribeCurrentDeviceDataResponse::OnlineChannelsHasBeenSet() const
{
    return m_onlineChannelsHasBeenSet;
}

int64_t DescribeCurrentDeviceDataResponse::GetOnlineDevices() const
{
    return m_onlineDevices;
}

bool DescribeCurrentDeviceDataResponse::OnlineDevicesHasBeenSet() const
{
    return m_onlineDevicesHasBeenSet;
}

int64_t DescribeCurrentDeviceDataResponse::GetRecordingChannels() const
{
    return m_recordingChannels;
}

bool DescribeCurrentDeviceDataResponse::RecordingChannelsHasBeenSet() const
{
    return m_recordingChannelsHasBeenSet;
}


