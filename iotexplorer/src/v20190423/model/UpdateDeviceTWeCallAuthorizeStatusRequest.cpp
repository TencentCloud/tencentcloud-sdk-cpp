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

#include <tencentcloud/iotexplorer/v20190423/model/UpdateDeviceTWeCallAuthorizeStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

UpdateDeviceTWeCallAuthorizeStatusRequest::UpdateDeviceTWeCallAuthorizeStatusRequest() :
    m_statusHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_wechatOpenIdHasBeenSet(false)
{
}

string UpdateDeviceTWeCallAuthorizeStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

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

    if (m_wechatOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wechatOpenId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdateDeviceTWeCallAuthorizeStatusRequest::GetStatus() const
{
    return m_status;
}

void UpdateDeviceTWeCallAuthorizeStatusRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpdateDeviceTWeCallAuthorizeStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UpdateDeviceTWeCallAuthorizeStatusRequest::GetProductId() const
{
    return m_productId;
}

void UpdateDeviceTWeCallAuthorizeStatusRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool UpdateDeviceTWeCallAuthorizeStatusRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string UpdateDeviceTWeCallAuthorizeStatusRequest::GetDeviceName() const
{
    return m_deviceName;
}

void UpdateDeviceTWeCallAuthorizeStatusRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool UpdateDeviceTWeCallAuthorizeStatusRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string UpdateDeviceTWeCallAuthorizeStatusRequest::GetWechatOpenId() const
{
    return m_wechatOpenId;
}

void UpdateDeviceTWeCallAuthorizeStatusRequest::SetWechatOpenId(const string& _wechatOpenId)
{
    m_wechatOpenId = _wechatOpenId;
    m_wechatOpenIdHasBeenSet = true;
}

bool UpdateDeviceTWeCallAuthorizeStatusRequest::WechatOpenIdHasBeenSet() const
{
    return m_wechatOpenIdHasBeenSet;
}


