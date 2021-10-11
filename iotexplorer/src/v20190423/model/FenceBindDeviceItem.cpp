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

#include <tencentcloud/iotexplorer/v20190423/model/FenceBindDeviceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

FenceBindDeviceItem::FenceBindDeviceItem() :
    m_deviceNameHasBeenSet(false),
    m_alertConditionHasBeenSet(false),
    m_fenceEnableHasBeenSet(false),
    m_methodHasBeenSet(false)
{
}

CoreInternalOutcome FenceBindDeviceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FenceBindDeviceItem.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("AlertCondition") && !value["AlertCondition"].IsNull())
    {
        if (!value["AlertCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FenceBindDeviceItem.AlertCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertCondition = string(value["AlertCondition"].GetString());
        m_alertConditionHasBeenSet = true;
    }

    if (value.HasMember("FenceEnable") && !value["FenceEnable"].IsNull())
    {
        if (!value["FenceEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FenceBindDeviceItem.FenceEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_fenceEnable = value["FenceEnable"].GetBool();
        m_fenceEnableHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FenceBindDeviceItem.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FenceBindDeviceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_alertConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_fenceEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FenceEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fenceEnable, allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

}


string FenceBindDeviceItem::GetDeviceName() const
{
    return m_deviceName;
}

void FenceBindDeviceItem::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool FenceBindDeviceItem::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string FenceBindDeviceItem::GetAlertCondition() const
{
    return m_alertCondition;
}

void FenceBindDeviceItem::SetAlertCondition(const string& _alertCondition)
{
    m_alertCondition = _alertCondition;
    m_alertConditionHasBeenSet = true;
}

bool FenceBindDeviceItem::AlertConditionHasBeenSet() const
{
    return m_alertConditionHasBeenSet;
}

bool FenceBindDeviceItem::GetFenceEnable() const
{
    return m_fenceEnable;
}

void FenceBindDeviceItem::SetFenceEnable(const bool& _fenceEnable)
{
    m_fenceEnable = _fenceEnable;
    m_fenceEnableHasBeenSet = true;
}

bool FenceBindDeviceItem::FenceEnableHasBeenSet() const
{
    return m_fenceEnableHasBeenSet;
}

string FenceBindDeviceItem::GetMethod() const
{
    return m_method;
}

void FenceBindDeviceItem::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool FenceBindDeviceItem::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

