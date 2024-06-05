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

#include <tencentcloud/iotexplorer/v20190423/model/WXDeviceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

WXDeviceInfo::WXDeviceInfo() :
    m_deviceIdHasBeenSet(false),
    m_wXIoTDeviceInfoHasBeenSet(false)
{
}

CoreInternalOutcome WXDeviceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WXDeviceInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("WXIoTDeviceInfo") && !value["WXIoTDeviceInfo"].IsNull())
    {
        if (!value["WXIoTDeviceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WXDeviceInfo.WXIoTDeviceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wXIoTDeviceInfo.Deserialize(value["WXIoTDeviceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wXIoTDeviceInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WXDeviceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_wXIoTDeviceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WXIoTDeviceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wXIoTDeviceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string WXDeviceInfo::GetDeviceId() const
{
    return m_deviceId;
}

void WXDeviceInfo::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool WXDeviceInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

WXIoTDeviceInfo WXDeviceInfo::GetWXIoTDeviceInfo() const
{
    return m_wXIoTDeviceInfo;
}

void WXDeviceInfo::SetWXIoTDeviceInfo(const WXIoTDeviceInfo& _wXIoTDeviceInfo)
{
    m_wXIoTDeviceInfo = _wXIoTDeviceInfo;
    m_wXIoTDeviceInfoHasBeenSet = true;
}

bool WXDeviceInfo::WXIoTDeviceInfoHasBeenSet() const
{
    return m_wXIoTDeviceInfoHasBeenSet;
}

