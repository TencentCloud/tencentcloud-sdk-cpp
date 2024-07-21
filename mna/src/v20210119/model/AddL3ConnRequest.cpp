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

#include <tencentcloud/mna/v20210119/model/AddL3ConnRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

AddL3ConnRequest::AddL3ConnRequest() :
    m_cidr1HasBeenSet(false),
    m_cidr2HasBeenSet(false),
    m_deviceId1HasBeenSet(false),
    m_deviceId2HasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string AddL3ConnRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cidr1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cidr1";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cidr1.c_str(), allocator).Move(), allocator);
    }

    if (m_cidr2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cidr2";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cidr2.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceId1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId1";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceId1.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceId2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId2";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceId2.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddL3ConnRequest::GetCidr1() const
{
    return m_cidr1;
}

void AddL3ConnRequest::SetCidr1(const string& _cidr1)
{
    m_cidr1 = _cidr1;
    m_cidr1HasBeenSet = true;
}

bool AddL3ConnRequest::Cidr1HasBeenSet() const
{
    return m_cidr1HasBeenSet;
}

string AddL3ConnRequest::GetCidr2() const
{
    return m_cidr2;
}

void AddL3ConnRequest::SetCidr2(const string& _cidr2)
{
    m_cidr2 = _cidr2;
    m_cidr2HasBeenSet = true;
}

bool AddL3ConnRequest::Cidr2HasBeenSet() const
{
    return m_cidr2HasBeenSet;
}

string AddL3ConnRequest::GetDeviceId1() const
{
    return m_deviceId1;
}

void AddL3ConnRequest::SetDeviceId1(const string& _deviceId1)
{
    m_deviceId1 = _deviceId1;
    m_deviceId1HasBeenSet = true;
}

bool AddL3ConnRequest::DeviceId1HasBeenSet() const
{
    return m_deviceId1HasBeenSet;
}

string AddL3ConnRequest::GetDeviceId2() const
{
    return m_deviceId2;
}

void AddL3ConnRequest::SetDeviceId2(const string& _deviceId2)
{
    m_deviceId2 = _deviceId2;
    m_deviceId2HasBeenSet = true;
}

bool AddL3ConnRequest::DeviceId2HasBeenSet() const
{
    return m_deviceId2HasBeenSet;
}

string AddL3ConnRequest::GetDescription() const
{
    return m_description;
}

void AddL3ConnRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AddL3ConnRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


