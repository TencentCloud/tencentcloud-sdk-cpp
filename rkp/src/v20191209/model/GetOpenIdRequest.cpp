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

#include <tencentcloud/rkp/v20191209/model/GetOpenIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rkp::V20191209::Model;
using namespace rapidjson;
using namespace std;

GetOpenIdRequest::GetOpenIdRequest() :
    m_deviceTokenHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_businessUserIdHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_optionHasBeenSet(false)
{
}

string GetOpenIdRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deviceToken.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_businessId, allocator);
    }

    if (m_businessUserIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BusinessUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_businessUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_platform, allocator);
    }

    if (m_optionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Option";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_option.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetOpenIdRequest::GetDeviceToken() const
{
    return m_deviceToken;
}

void GetOpenIdRequest::SetDeviceToken(const string& _deviceToken)
{
    m_deviceToken = _deviceToken;
    m_deviceTokenHasBeenSet = true;
}

bool GetOpenIdRequest::DeviceTokenHasBeenSet() const
{
    return m_deviceTokenHasBeenSet;
}

int64_t GetOpenIdRequest::GetBusinessId() const
{
    return m_businessId;
}

void GetOpenIdRequest::SetBusinessId(const int64_t& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool GetOpenIdRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string GetOpenIdRequest::GetBusinessUserId() const
{
    return m_businessUserId;
}

void GetOpenIdRequest::SetBusinessUserId(const string& _businessUserId)
{
    m_businessUserId = _businessUserId;
    m_businessUserIdHasBeenSet = true;
}

bool GetOpenIdRequest::BusinessUserIdHasBeenSet() const
{
    return m_businessUserIdHasBeenSet;
}

int64_t GetOpenIdRequest::GetPlatform() const
{
    return m_platform;
}

void GetOpenIdRequest::SetPlatform(const int64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool GetOpenIdRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string GetOpenIdRequest::GetOption() const
{
    return m_option;
}

void GetOpenIdRequest::SetOption(const string& _option)
{
    m_option = _option;
    m_optionHasBeenSet = true;
}

bool GetOpenIdRequest::OptionHasBeenSet() const
{
    return m_optionHasBeenSet;
}


