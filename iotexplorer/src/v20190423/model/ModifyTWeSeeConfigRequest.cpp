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

#include <tencentcloud/iotexplorer/v20190423/model/ModifyTWeSeeConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ModifyTWeSeeConfigRequest::ModifyTWeSeeConfigRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_enableSummaryHasBeenSet(false),
    m_enableSearchHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

string ModifyTWeSeeConfigRequest::ToJsonString() const
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

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelId, allocator);
    }

    if (m_enableSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSummary";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableSummary, allocator);
    }

    if (m_enableSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSearch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableSearch, allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTWeSeeConfigRequest::GetProductId() const
{
    return m_productId;
}

void ModifyTWeSeeConfigRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ModifyTWeSeeConfigRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ModifyTWeSeeConfigRequest::GetDeviceName() const
{
    return m_deviceName;
}

void ModifyTWeSeeConfigRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool ModifyTWeSeeConfigRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string ModifyTWeSeeConfigRequest::GetUserId() const
{
    return m_userId;
}

void ModifyTWeSeeConfigRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ModifyTWeSeeConfigRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t ModifyTWeSeeConfigRequest::GetChannelId() const
{
    return m_channelId;
}

void ModifyTWeSeeConfigRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ModifyTWeSeeConfigRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

bool ModifyTWeSeeConfigRequest::GetEnableSummary() const
{
    return m_enableSummary;
}

void ModifyTWeSeeConfigRequest::SetEnableSummary(const bool& _enableSummary)
{
    m_enableSummary = _enableSummary;
    m_enableSummaryHasBeenSet = true;
}

bool ModifyTWeSeeConfigRequest::EnableSummaryHasBeenSet() const
{
    return m_enableSummaryHasBeenSet;
}

bool ModifyTWeSeeConfigRequest::GetEnableSearch() const
{
    return m_enableSearch;
}

void ModifyTWeSeeConfigRequest::SetEnableSearch(const bool& _enableSearch)
{
    m_enableSearch = _enableSearch;
    m_enableSearchHasBeenSet = true;
}

bool ModifyTWeSeeConfigRequest::EnableSearchHasBeenSet() const
{
    return m_enableSearchHasBeenSet;
}

string ModifyTWeSeeConfigRequest::GetConfig() const
{
    return m_config;
}

void ModifyTWeSeeConfigRequest::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ModifyTWeSeeConfigRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}


