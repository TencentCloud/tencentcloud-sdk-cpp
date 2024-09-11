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

#include <tencentcloud/iss/v20230517/model/CallISAPIRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

CallISAPIRequest::CallISAPIRequest() :
    m_deviceIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_inputDataHasBeenSet(false)
{
}

string CallISAPIRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_inputDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputData.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CallISAPIRequest::GetDeviceId() const
{
    return m_deviceId;
}

void CallISAPIRequest::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool CallISAPIRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string CallISAPIRequest::GetUrl() const
{
    return m_url;
}

void CallISAPIRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CallISAPIRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string CallISAPIRequest::GetInputData() const
{
    return m_inputData;
}

void CallISAPIRequest::SetInputData(const string& _inputData)
{
    m_inputData = _inputData;
    m_inputDataHasBeenSet = true;
}

bool CallISAPIRequest::InputDataHasBeenSet() const
{
    return m_inputDataHasBeenSet;
}


