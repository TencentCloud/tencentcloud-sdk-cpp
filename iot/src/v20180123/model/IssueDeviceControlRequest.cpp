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

#include <tencentcloud/iot/v20180123/model/IssueDeviceControlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

IssueDeviceControlRequest::IssueDeviceControlRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_controlDataHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

string IssueDeviceControlRequest::ToJsonString() const
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

    if (m_controlDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ControlData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_controlData.c_str(), allocator).Move(), allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_metadata, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string IssueDeviceControlRequest::GetProductId() const
{
    return m_productId;
}

void IssueDeviceControlRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool IssueDeviceControlRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string IssueDeviceControlRequest::GetDeviceName() const
{
    return m_deviceName;
}

void IssueDeviceControlRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool IssueDeviceControlRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string IssueDeviceControlRequest::GetControlData() const
{
    return m_controlData;
}

void IssueDeviceControlRequest::SetControlData(const string& _controlData)
{
    m_controlData = _controlData;
    m_controlDataHasBeenSet = true;
}

bool IssueDeviceControlRequest::ControlDataHasBeenSet() const
{
    return m_controlDataHasBeenSet;
}

bool IssueDeviceControlRequest::GetMetadata() const
{
    return m_metadata;
}

void IssueDeviceControlRequest::SetMetadata(const bool& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool IssueDeviceControlRequest::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}


