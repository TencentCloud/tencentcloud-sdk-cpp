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

#include <tencentcloud/iotexplorer/v20190423/model/CallDeviceActionSyncRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CallDeviceActionSyncRequest::CallDeviceActionSyncRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_actionIdHasBeenSet(false),
    m_inputParamsHasBeenSet(false)
{
}

string CallDeviceActionSyncRequest::ToJsonString() const
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

    if (m_actionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actionId.c_str(), allocator).Move(), allocator);
    }

    if (m_inputParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputParams.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CallDeviceActionSyncRequest::GetProductId() const
{
    return m_productId;
}

void CallDeviceActionSyncRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CallDeviceActionSyncRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CallDeviceActionSyncRequest::GetDeviceName() const
{
    return m_deviceName;
}

void CallDeviceActionSyncRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool CallDeviceActionSyncRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string CallDeviceActionSyncRequest::GetActionId() const
{
    return m_actionId;
}

void CallDeviceActionSyncRequest::SetActionId(const string& _actionId)
{
    m_actionId = _actionId;
    m_actionIdHasBeenSet = true;
}

bool CallDeviceActionSyncRequest::ActionIdHasBeenSet() const
{
    return m_actionIdHasBeenSet;
}

string CallDeviceActionSyncRequest::GetInputParams() const
{
    return m_inputParams;
}

void CallDeviceActionSyncRequest::SetInputParams(const string& _inputParams)
{
    m_inputParams = _inputParams;
    m_inputParamsHasBeenSet = true;
}

bool CallDeviceActionSyncRequest::InputParamsHasBeenSet() const
{
    return m_inputParamsHasBeenSet;
}


