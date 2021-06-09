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

#include <tencentcloud/iot/v20180123/model/AppSecureAddDeviceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

AppSecureAddDeviceRequest::AppSecureAddDeviceRequest() :
    m_accessTokenHasBeenSet(false),
    m_deviceSignatureHasBeenSet(false)
{
}

string AppSecureAddDeviceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessToken.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceSignature.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AppSecureAddDeviceRequest::GetAccessToken() const
{
    return m_accessToken;
}

void AppSecureAddDeviceRequest::SetAccessToken(const string& _accessToken)
{
    m_accessToken = _accessToken;
    m_accessTokenHasBeenSet = true;
}

bool AppSecureAddDeviceRequest::AccessTokenHasBeenSet() const
{
    return m_accessTokenHasBeenSet;
}

string AppSecureAddDeviceRequest::GetDeviceSignature() const
{
    return m_deviceSignature;
}

void AppSecureAddDeviceRequest::SetDeviceSignature(const string& _deviceSignature)
{
    m_deviceSignature = _deviceSignature;
    m_deviceSignatureHasBeenSet = true;
}

bool AppSecureAddDeviceRequest::DeviceSignatureHasBeenSet() const
{
    return m_deviceSignatureHasBeenSet;
}


