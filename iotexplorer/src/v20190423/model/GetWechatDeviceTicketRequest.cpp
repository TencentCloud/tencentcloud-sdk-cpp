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

#include <tencentcloud/iotexplorer/v20190423/model/GetWechatDeviceTicketRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

GetWechatDeviceTicketRequest::GetWechatDeviceTicketRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_isThirdAppHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_miniProgramAppIdHasBeenSet(false)
{
}

string GetWechatDeviceTicketRequest::ToJsonString() const
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

    if (m_isThirdAppHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsThirdApp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isThirdApp, allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_miniProgramAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniProgramAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_miniProgramAppId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetWechatDeviceTicketRequest::GetProductId() const
{
    return m_productId;
}

void GetWechatDeviceTicketRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool GetWechatDeviceTicketRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string GetWechatDeviceTicketRequest::GetDeviceName() const
{
    return m_deviceName;
}

void GetWechatDeviceTicketRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool GetWechatDeviceTicketRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

int64_t GetWechatDeviceTicketRequest::GetIsThirdApp() const
{
    return m_isThirdApp;
}

void GetWechatDeviceTicketRequest::SetIsThirdApp(const int64_t& _isThirdApp)
{
    m_isThirdApp = _isThirdApp;
    m_isThirdAppHasBeenSet = true;
}

bool GetWechatDeviceTicketRequest::IsThirdAppHasBeenSet() const
{
    return m_isThirdAppHasBeenSet;
}

string GetWechatDeviceTicketRequest::GetModelId() const
{
    return m_modelId;
}

void GetWechatDeviceTicketRequest::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool GetWechatDeviceTicketRequest::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string GetWechatDeviceTicketRequest::GetMiniProgramAppId() const
{
    return m_miniProgramAppId;
}

void GetWechatDeviceTicketRequest::SetMiniProgramAppId(const string& _miniProgramAppId)
{
    m_miniProgramAppId = _miniProgramAppId;
    m_miniProgramAppIdHasBeenSet = true;
}

bool GetWechatDeviceTicketRequest::MiniProgramAppIdHasBeenSet() const
{
    return m_miniProgramAppIdHasBeenSet;
}


