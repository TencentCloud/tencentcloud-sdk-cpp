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

#include <tencentcloud/iss/v20230517/model/OrganizationChannelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

OrganizationChannelInfo::OrganizationChannelInfo() :
    m_deviceIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_inPlanHasBeenSet(false)
{
}

CoreInternalOutcome OrganizationChannelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationChannelInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationChannelInfo.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationChannelInfo.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationChannelInfo.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("InPlan") && !value["InPlan"].IsNull())
    {
        if (!value["InPlan"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationChannelInfo.InPlan` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_inPlan = value["InPlan"].GetBool();
        m_inPlanHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrganizationChannelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_inPlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InPlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inPlan, allocator);
    }

}


string OrganizationChannelInfo::GetDeviceId() const
{
    return m_deviceId;
}

void OrganizationChannelInfo::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool OrganizationChannelInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string OrganizationChannelInfo::GetDeviceName() const
{
    return m_deviceName;
}

void OrganizationChannelInfo::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool OrganizationChannelInfo::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string OrganizationChannelInfo::GetChannelId() const
{
    return m_channelId;
}

void OrganizationChannelInfo::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool OrganizationChannelInfo::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string OrganizationChannelInfo::GetChannelName() const
{
    return m_channelName;
}

void OrganizationChannelInfo::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool OrganizationChannelInfo::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

bool OrganizationChannelInfo::GetInPlan() const
{
    return m_inPlan;
}

void OrganizationChannelInfo::SetInPlan(const bool& _inPlan)
{
    m_inPlan = _inPlan;
    m_inPlanHasBeenSet = true;
}

bool OrganizationChannelInfo::InPlanHasBeenSet() const
{
    return m_inPlanHasBeenSet;
}

