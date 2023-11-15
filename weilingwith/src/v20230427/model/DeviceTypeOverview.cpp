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

#include <tencentcloud/weilingwith/v20230427/model/DeviceTypeOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DeviceTypeOverview::DeviceTypeOverview() :
    m_deviceTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_normalHasBeenSet(false),
    m_offlineHasBeenSet(false),
    m_faultHasBeenSet(false)
{
}

CoreInternalOutcome DeviceTypeOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceTypeOverview.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceTypeOverview.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceTypeOverview.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Normal") && !value["Normal"].IsNull())
    {
        if (!value["Normal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceTypeOverview.Normal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_normal = value["Normal"].GetInt64();
        m_normalHasBeenSet = true;
    }

    if (value.HasMember("Offline") && !value["Offline"].IsNull())
    {
        if (!value["Offline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceTypeOverview.Offline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offline = value["Offline"].GetInt64();
        m_offlineHasBeenSet = true;
    }

    if (value.HasMember("Fault") && !value["Fault"].IsNull())
    {
        if (!value["Fault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceTypeOverview.Fault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fault = value["Fault"].GetInt64();
        m_faultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceTypeOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_normalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Normal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_normal, allocator);
    }

    if (m_offlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offline, allocator);
    }

    if (m_faultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fault, allocator);
    }

}


string DeviceTypeOverview::GetDeviceType() const
{
    return m_deviceType;
}

void DeviceTypeOverview::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DeviceTypeOverview::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string DeviceTypeOverview::GetName() const
{
    return m_name;
}

void DeviceTypeOverview::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DeviceTypeOverview::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DeviceTypeOverview::GetTotal() const
{
    return m_total;
}

void DeviceTypeOverview::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool DeviceTypeOverview::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t DeviceTypeOverview::GetNormal() const
{
    return m_normal;
}

void DeviceTypeOverview::SetNormal(const int64_t& _normal)
{
    m_normal = _normal;
    m_normalHasBeenSet = true;
}

bool DeviceTypeOverview::NormalHasBeenSet() const
{
    return m_normalHasBeenSet;
}

int64_t DeviceTypeOverview::GetOffline() const
{
    return m_offline;
}

void DeviceTypeOverview::SetOffline(const int64_t& _offline)
{
    m_offline = _offline;
    m_offlineHasBeenSet = true;
}

bool DeviceTypeOverview::OfflineHasBeenSet() const
{
    return m_offlineHasBeenSet;
}

int64_t DeviceTypeOverview::GetFault() const
{
    return m_fault;
}

void DeviceTypeOverview::SetFault(const int64_t& _fault)
{
    m_fault = _fault;
    m_faultHasBeenSet = true;
}

bool DeviceTypeOverview::FaultHasBeenSet() const
{
    return m_faultHasBeenSet;
}

