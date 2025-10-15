/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/iotexplorer/v20190423/model/GetTWeTalkProductConfigListV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

GetTWeTalkProductConfigListV2Request::GetTWeTalkProductConfigListV2Request() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_targetLanguageHasBeenSet(false),
    m_includeCredentialsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string GetTWeTalkProductConfigListV2Request::ToJsonString() const
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

    if (m_targetLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_includeCredentialsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeCredentials";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeCredentials, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetTWeTalkProductConfigListV2Request::GetProductId() const
{
    return m_productId;
}

void GetTWeTalkProductConfigListV2Request::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool GetTWeTalkProductConfigListV2Request::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string GetTWeTalkProductConfigListV2Request::GetDeviceName() const
{
    return m_deviceName;
}

void GetTWeTalkProductConfigListV2Request::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool GetTWeTalkProductConfigListV2Request::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string GetTWeTalkProductConfigListV2Request::GetTargetLanguage() const
{
    return m_targetLanguage;
}

void GetTWeTalkProductConfigListV2Request::SetTargetLanguage(const string& _targetLanguage)
{
    m_targetLanguage = _targetLanguage;
    m_targetLanguageHasBeenSet = true;
}

bool GetTWeTalkProductConfigListV2Request::TargetLanguageHasBeenSet() const
{
    return m_targetLanguageHasBeenSet;
}

bool GetTWeTalkProductConfigListV2Request::GetIncludeCredentials() const
{
    return m_includeCredentials;
}

void GetTWeTalkProductConfigListV2Request::SetIncludeCredentials(const bool& _includeCredentials)
{
    m_includeCredentials = _includeCredentials;
    m_includeCredentialsHasBeenSet = true;
}

bool GetTWeTalkProductConfigListV2Request::IncludeCredentialsHasBeenSet() const
{
    return m_includeCredentialsHasBeenSet;
}

uint64_t GetTWeTalkProductConfigListV2Request::GetOffset() const
{
    return m_offset;
}

void GetTWeTalkProductConfigListV2Request::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetTWeTalkProductConfigListV2Request::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t GetTWeTalkProductConfigListV2Request::GetLimit() const
{
    return m_limit;
}

void GetTWeTalkProductConfigListV2Request::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetTWeTalkProductConfigListV2Request::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


