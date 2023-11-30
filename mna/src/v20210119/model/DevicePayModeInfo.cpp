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

#include <tencentcloud/mna/v20210119/model/DevicePayModeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

DevicePayModeInfo::DevicePayModeInfo() :
    m_deviceIdHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_payModeDescHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

CoreInternalOutcome DevicePayModeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePayModeInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePayModeInfo.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PayModeDesc") && !value["PayModeDesc"].IsNull())
    {
        if (!value["PayModeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePayModeInfo.PayModeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payModeDesc = string(value["PayModeDesc"].GetString());
        m_payModeDescHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePayModeInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DevicePayModeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_payModeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayModeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payModeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

}


string DevicePayModeInfo::GetDeviceId() const
{
    return m_deviceId;
}

void DevicePayModeInfo::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool DevicePayModeInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

int64_t DevicePayModeInfo::GetPayMode() const
{
    return m_payMode;
}

void DevicePayModeInfo::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool DevicePayModeInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string DevicePayModeInfo::GetPayModeDesc() const
{
    return m_payModeDesc;
}

void DevicePayModeInfo::SetPayModeDesc(const string& _payModeDesc)
{
    m_payModeDesc = _payModeDesc;
    m_payModeDescHasBeenSet = true;
}

bool DevicePayModeInfo::PayModeDescHasBeenSet() const
{
    return m_payModeDescHasBeenSet;
}

string DevicePayModeInfo::GetResourceId() const
{
    return m_resourceId;
}

void DevicePayModeInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DevicePayModeInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

