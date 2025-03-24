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

#include <tencentcloud/chc/v20230418/model/CreateMovingWorkOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

CreateMovingWorkOrderRequest::CreateMovingWorkOrderRequest() :
    m_idcIdHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_withPowerOnHasBeenSet(false),
    m_deviceMovingListHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreateMovingWorkOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_idcId, allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_withPowerOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithPowerOn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withPowerOn, allocator);
    }

    if (m_deviceMovingListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceMovingList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deviceMovingList.begin(); itr != m_deviceMovingList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateMovingWorkOrderRequest::GetIdcId() const
{
    return m_idcId;
}

void CreateMovingWorkOrderRequest::SetIdcId(const uint64_t& _idcId)
{
    m_idcId = _idcId;
    m_idcIdHasBeenSet = true;
}

bool CreateMovingWorkOrderRequest::IdcIdHasBeenSet() const
{
    return m_idcIdHasBeenSet;
}

string CreateMovingWorkOrderRequest::GetDeviceType() const
{
    return m_deviceType;
}

void CreateMovingWorkOrderRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool CreateMovingWorkOrderRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

bool CreateMovingWorkOrderRequest::GetWithPowerOn() const
{
    return m_withPowerOn;
}

void CreateMovingWorkOrderRequest::SetWithPowerOn(const bool& _withPowerOn)
{
    m_withPowerOn = _withPowerOn;
    m_withPowerOnHasBeenSet = true;
}

bool CreateMovingWorkOrderRequest::WithPowerOnHasBeenSet() const
{
    return m_withPowerOnHasBeenSet;
}

vector<DeviceRackOn> CreateMovingWorkOrderRequest::GetDeviceMovingList() const
{
    return m_deviceMovingList;
}

void CreateMovingWorkOrderRequest::SetDeviceMovingList(const vector<DeviceRackOn>& _deviceMovingList)
{
    m_deviceMovingList = _deviceMovingList;
    m_deviceMovingListHasBeenSet = true;
}

bool CreateMovingWorkOrderRequest::DeviceMovingListHasBeenSet() const
{
    return m_deviceMovingListHasBeenSet;
}

string CreateMovingWorkOrderRequest::GetRemark() const
{
    return m_remark;
}

void CreateMovingWorkOrderRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateMovingWorkOrderRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


