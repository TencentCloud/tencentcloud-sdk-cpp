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

#include <tencentcloud/trdp/v20220726/model/DeviceFingerprintInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trdp::V20220726::Model;
using namespace std;

DeviceFingerprintInfo::DeviceFingerprintInfo() :
    m_deviceTokenHasBeenSet(false),
    m_sdkChannelHasBeenSet(false)
{
}

CoreInternalOutcome DeviceFingerprintInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceToken") && !value["DeviceToken"].IsNull())
    {
        if (!value["DeviceToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceFingerprintInfo.DeviceToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceToken = string(value["DeviceToken"].GetString());
        m_deviceTokenHasBeenSet = true;
    }

    if (value.HasMember("SdkChannel") && !value["SdkChannel"].IsNull())
    {
        if (!value["SdkChannel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceFingerprintInfo.SdkChannel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkChannel = string(value["SdkChannel"].GetString());
        m_sdkChannelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceFingerprintInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceToken.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkChannel.c_str(), allocator).Move(), allocator);
    }

}


string DeviceFingerprintInfo::GetDeviceToken() const
{
    return m_deviceToken;
}

void DeviceFingerprintInfo::SetDeviceToken(const string& _deviceToken)
{
    m_deviceToken = _deviceToken;
    m_deviceTokenHasBeenSet = true;
}

bool DeviceFingerprintInfo::DeviceTokenHasBeenSet() const
{
    return m_deviceTokenHasBeenSet;
}

string DeviceFingerprintInfo::GetSdkChannel() const
{
    return m_sdkChannel;
}

void DeviceFingerprintInfo::SetSdkChannel(const string& _sdkChannel)
{
    m_sdkChannel = _sdkChannel;
    m_sdkChannelHasBeenSet = true;
}

bool DeviceFingerprintInfo::SdkChannelHasBeenSet() const
{
    return m_sdkChannelHasBeenSet;
}

