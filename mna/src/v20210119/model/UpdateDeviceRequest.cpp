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

#include <tencentcloud/mna/v20210119/model/UpdateDeviceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

UpdateDeviceRequest::UpdateDeviceRequest() :
    m_deviceIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_updateNetInfoHasBeenSet(false),
    m_flowTruncHasBeenSet(false)
{
}

string UpdateDeviceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_updateNetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateNetInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_updateNetInfo.begin(); itr != m_updateNetInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_flowTruncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowTrunc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flowTrunc, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateDeviceRequest::GetDeviceId() const
{
    return m_deviceId;
}

void UpdateDeviceRequest::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool UpdateDeviceRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string UpdateDeviceRequest::GetDeviceName() const
{
    return m_deviceName;
}

void UpdateDeviceRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool UpdateDeviceRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string UpdateDeviceRequest::GetRemark() const
{
    return m_remark;
}

void UpdateDeviceRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool UpdateDeviceRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<UpdateNetInfo> UpdateDeviceRequest::GetUpdateNetInfo() const
{
    return m_updateNetInfo;
}

void UpdateDeviceRequest::SetUpdateNetInfo(const vector<UpdateNetInfo>& _updateNetInfo)
{
    m_updateNetInfo = _updateNetInfo;
    m_updateNetInfoHasBeenSet = true;
}

bool UpdateDeviceRequest::UpdateNetInfoHasBeenSet() const
{
    return m_updateNetInfoHasBeenSet;
}

int64_t UpdateDeviceRequest::GetFlowTrunc() const
{
    return m_flowTrunc;
}

void UpdateDeviceRequest::SetFlowTrunc(const int64_t& _flowTrunc)
{
    m_flowTrunc = _flowTrunc;
    m_flowTruncHasBeenSet = true;
}

bool UpdateDeviceRequest::FlowTruncHasBeenSet() const
{
    return m_flowTruncHasBeenSet;
}


