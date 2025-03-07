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

#include <tencentcloud/iotcloud/v20210408/model/DeleteDeviceResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

DeleteDeviceResourceRequest::DeleteDeviceResourceRequest() :
    m_nameHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_productIDHasBeenSet(false)
{
}

string DeleteDeviceResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_productIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteDeviceResourceRequest::GetName() const
{
    return m_name;
}

void DeleteDeviceResourceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DeleteDeviceResourceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DeleteDeviceResourceRequest::GetDeviceName() const
{
    return m_deviceName;
}

void DeleteDeviceResourceRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DeleteDeviceResourceRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DeleteDeviceResourceRequest::GetProductID() const
{
    return m_productID;
}

void DeleteDeviceResourceRequest::SetProductID(const string& _productID)
{
    m_productID = _productID;
    m_productIDHasBeenSet = true;
}

bool DeleteDeviceResourceRequest::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}


