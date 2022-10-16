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

#include <tencentcloud/faceid/v20180301/model/GenerateReflectSequenceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GenerateReflectSequenceRequest::GenerateReflectSequenceRequest() :
    m_deviceDataUrlHasBeenSet(false),
    m_deviceDataMd5HasBeenSet(false),
    m_securityLevelHasBeenSet(false)
{
}

string GenerateReflectSequenceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceDataUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceDataUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceDataUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceDataMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceDataMd5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceDataMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_securityLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityLevel.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GenerateReflectSequenceRequest::GetDeviceDataUrl() const
{
    return m_deviceDataUrl;
}

void GenerateReflectSequenceRequest::SetDeviceDataUrl(const string& _deviceDataUrl)
{
    m_deviceDataUrl = _deviceDataUrl;
    m_deviceDataUrlHasBeenSet = true;
}

bool GenerateReflectSequenceRequest::DeviceDataUrlHasBeenSet() const
{
    return m_deviceDataUrlHasBeenSet;
}

string GenerateReflectSequenceRequest::GetDeviceDataMd5() const
{
    return m_deviceDataMd5;
}

void GenerateReflectSequenceRequest::SetDeviceDataMd5(const string& _deviceDataMd5)
{
    m_deviceDataMd5 = _deviceDataMd5;
    m_deviceDataMd5HasBeenSet = true;
}

bool GenerateReflectSequenceRequest::DeviceDataMd5HasBeenSet() const
{
    return m_deviceDataMd5HasBeenSet;
}

string GenerateReflectSequenceRequest::GetSecurityLevel() const
{
    return m_securityLevel;
}

void GenerateReflectSequenceRequest::SetSecurityLevel(const string& _securityLevel)
{
    m_securityLevel = _securityLevel;
    m_securityLevelHasBeenSet = true;
}

bool GenerateReflectSequenceRequest::SecurityLevelHasBeenSet() const
{
    return m_securityLevelHasBeenSet;
}


