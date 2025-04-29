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

#include <tencentcloud/iss/v20230517/model/RemoteAddrInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

RemoteAddrInfo::RemoteAddrInfo() :
    m_deviceIdHasBeenSet(false),
    m_addrHasBeenSet(false)
{
}

CoreInternalOutcome RemoteAddrInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteAddrInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("Addr") && !value["Addr"].IsNull())
    {
        if (!value["Addr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteAddrInfo.Addr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addr = string(value["Addr"].GetString());
        m_addrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RemoteAddrInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_addrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Addr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addr.c_str(), allocator).Move(), allocator);
    }

}


string RemoteAddrInfo::GetDeviceId() const
{
    return m_deviceId;
}

void RemoteAddrInfo::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool RemoteAddrInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string RemoteAddrInfo::GetAddr() const
{
    return m_addr;
}

void RemoteAddrInfo::SetAddr(const string& _addr)
{
    m_addr = _addr;
    m_addrHasBeenSet = true;
}

bool RemoteAddrInfo::AddrHasBeenSet() const
{
    return m_addrHasBeenSet;
}

