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

#include <tencentcloud/iotexplorer/v20190423/model/InvokeCloudStorageAIServiceTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

InvokeCloudStorageAIServiceTaskRequest::InvokeCloudStorageAIServiceTaskRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_configHasBeenSet(false),
    m_rOIHasBeenSet(false),
    m_videoURLsHasBeenSet(false),
    m_customIdHasBeenSet(false)
{
}

string InvokeCloudStorageAIServiceTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelId, allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_rOIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ROI";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rOI.c_str(), allocator).Move(), allocator);
    }

    if (m_videoURLsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoURLs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_videoURLs.begin(); itr != m_videoURLs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InvokeCloudStorageAIServiceTaskRequest::GetProductId() const
{
    return m_productId;
}

void InvokeCloudStorageAIServiceTaskRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool InvokeCloudStorageAIServiceTaskRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string InvokeCloudStorageAIServiceTaskRequest::GetDeviceName() const
{
    return m_deviceName;
}

void InvokeCloudStorageAIServiceTaskRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool InvokeCloudStorageAIServiceTaskRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string InvokeCloudStorageAIServiceTaskRequest::GetServiceType() const
{
    return m_serviceType;
}

void InvokeCloudStorageAIServiceTaskRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool InvokeCloudStorageAIServiceTaskRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

uint64_t InvokeCloudStorageAIServiceTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void InvokeCloudStorageAIServiceTaskRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool InvokeCloudStorageAIServiceTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t InvokeCloudStorageAIServiceTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void InvokeCloudStorageAIServiceTaskRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool InvokeCloudStorageAIServiceTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t InvokeCloudStorageAIServiceTaskRequest::GetChannelId() const
{
    return m_channelId;
}

void InvokeCloudStorageAIServiceTaskRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool InvokeCloudStorageAIServiceTaskRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string InvokeCloudStorageAIServiceTaskRequest::GetConfig() const
{
    return m_config;
}

void InvokeCloudStorageAIServiceTaskRequest::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool InvokeCloudStorageAIServiceTaskRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string InvokeCloudStorageAIServiceTaskRequest::GetROI() const
{
    return m_rOI;
}

void InvokeCloudStorageAIServiceTaskRequest::SetROI(const string& _rOI)
{
    m_rOI = _rOI;
    m_rOIHasBeenSet = true;
}

bool InvokeCloudStorageAIServiceTaskRequest::ROIHasBeenSet() const
{
    return m_rOIHasBeenSet;
}

vector<string> InvokeCloudStorageAIServiceTaskRequest::GetVideoURLs() const
{
    return m_videoURLs;
}

void InvokeCloudStorageAIServiceTaskRequest::SetVideoURLs(const vector<string>& _videoURLs)
{
    m_videoURLs = _videoURLs;
    m_videoURLsHasBeenSet = true;
}

bool InvokeCloudStorageAIServiceTaskRequest::VideoURLsHasBeenSet() const
{
    return m_videoURLsHasBeenSet;
}

string InvokeCloudStorageAIServiceTaskRequest::GetCustomId() const
{
    return m_customId;
}

void InvokeCloudStorageAIServiceTaskRequest::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool InvokeCloudStorageAIServiceTaskRequest::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}


