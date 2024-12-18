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

#include <tencentcloud/iotexplorer/v20190423/model/CreateCloudStorageAIServiceTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CreateCloudStorageAIServiceTaskRequest::CreateCloudStorageAIServiceTaskRequest() :
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

string CreateCloudStorageAIServiceTaskRequest::ToJsonString() const
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


string CreateCloudStorageAIServiceTaskRequest::GetProductId() const
{
    return m_productId;
}

void CreateCloudStorageAIServiceTaskRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateCloudStorageAIServiceTaskRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CreateCloudStorageAIServiceTaskRequest::GetDeviceName() const
{
    return m_deviceName;
}

void CreateCloudStorageAIServiceTaskRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool CreateCloudStorageAIServiceTaskRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string CreateCloudStorageAIServiceTaskRequest::GetServiceType() const
{
    return m_serviceType;
}

void CreateCloudStorageAIServiceTaskRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CreateCloudStorageAIServiceTaskRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

uint64_t CreateCloudStorageAIServiceTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateCloudStorageAIServiceTaskRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateCloudStorageAIServiceTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t CreateCloudStorageAIServiceTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateCloudStorageAIServiceTaskRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateCloudStorageAIServiceTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t CreateCloudStorageAIServiceTaskRequest::GetChannelId() const
{
    return m_channelId;
}

void CreateCloudStorageAIServiceTaskRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool CreateCloudStorageAIServiceTaskRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string CreateCloudStorageAIServiceTaskRequest::GetConfig() const
{
    return m_config;
}

void CreateCloudStorageAIServiceTaskRequest::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool CreateCloudStorageAIServiceTaskRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string CreateCloudStorageAIServiceTaskRequest::GetROI() const
{
    return m_rOI;
}

void CreateCloudStorageAIServiceTaskRequest::SetROI(const string& _rOI)
{
    m_rOI = _rOI;
    m_rOIHasBeenSet = true;
}

bool CreateCloudStorageAIServiceTaskRequest::ROIHasBeenSet() const
{
    return m_rOIHasBeenSet;
}

vector<string> CreateCloudStorageAIServiceTaskRequest::GetVideoURLs() const
{
    return m_videoURLs;
}

void CreateCloudStorageAIServiceTaskRequest::SetVideoURLs(const vector<string>& _videoURLs)
{
    m_videoURLs = _videoURLs;
    m_videoURLsHasBeenSet = true;
}

bool CreateCloudStorageAIServiceTaskRequest::VideoURLsHasBeenSet() const
{
    return m_videoURLsHasBeenSet;
}

string CreateCloudStorageAIServiceTaskRequest::GetCustomId() const
{
    return m_customId;
}

void CreateCloudStorageAIServiceTaskRequest::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool CreateCloudStorageAIServiceTaskRequest::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}


