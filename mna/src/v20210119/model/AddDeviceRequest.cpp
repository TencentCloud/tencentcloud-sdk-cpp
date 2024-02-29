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

#include <tencentcloud/mna/v20210119/model/AddDeviceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

AddDeviceRequest::AddDeviceRequest() :
    m_deviceNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_dataKeyHasBeenSet(false),
    m_encryptedHasBeenSet(false),
    m_accessScopeHasBeenSet(false)
{
}

string AddDeviceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_dataKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataKey.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypted";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_encrypted, allocator);
    }

    if (m_accessScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accessScope, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddDeviceRequest::GetDeviceName() const
{
    return m_deviceName;
}

void AddDeviceRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool AddDeviceRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string AddDeviceRequest::GetRemark() const
{
    return m_remark;
}

void AddDeviceRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AddDeviceRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string AddDeviceRequest::GetDataKey() const
{
    return m_dataKey;
}

void AddDeviceRequest::SetDataKey(const string& _dataKey)
{
    m_dataKey = _dataKey;
    m_dataKeyHasBeenSet = true;
}

bool AddDeviceRequest::DataKeyHasBeenSet() const
{
    return m_dataKeyHasBeenSet;
}

bool AddDeviceRequest::GetEncrypted() const
{
    return m_encrypted;
}

void AddDeviceRequest::SetEncrypted(const bool& _encrypted)
{
    m_encrypted = _encrypted;
    m_encryptedHasBeenSet = true;
}

bool AddDeviceRequest::EncryptedHasBeenSet() const
{
    return m_encryptedHasBeenSet;
}

int64_t AddDeviceRequest::GetAccessScope() const
{
    return m_accessScope;
}

void AddDeviceRequest::SetAccessScope(const int64_t& _accessScope)
{
    m_accessScope = _accessScope;
    m_accessScopeHasBeenSet = true;
}

bool AddDeviceRequest::AccessScopeHasBeenSet() const
{
    return m_accessScopeHasBeenSet;
}


