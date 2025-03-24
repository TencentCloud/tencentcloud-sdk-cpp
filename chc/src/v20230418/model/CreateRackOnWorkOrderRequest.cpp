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

#include <tencentcloud/chc/v20230418/model/CreateRackOnWorkOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

CreateRackOnWorkOrderRequest::CreateRackOnWorkOrderRequest() :
    m_idcIdHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_stuffOptionHasBeenSet(false),
    m_withPowerOnHasBeenSet(false),
    m_deviceRackOnListHasBeenSet(false),
    m_selfOperationInfoHasBeenSet(false)
{
}

string CreateRackOnWorkOrderRequest::ToJsonString() const
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

    if (m_stuffOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StuffOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stuffOption.c_str(), allocator).Move(), allocator);
    }

    if (m_withPowerOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithPowerOn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withPowerOn, allocator);
    }

    if (m_deviceRackOnListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceRackOnList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deviceRackOnList.begin(); itr != m_deviceRackOnList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_selfOperationInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfOperationInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_selfOperationInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateRackOnWorkOrderRequest::GetIdcId() const
{
    return m_idcId;
}

void CreateRackOnWorkOrderRequest::SetIdcId(const uint64_t& _idcId)
{
    m_idcId = _idcId;
    m_idcIdHasBeenSet = true;
}

bool CreateRackOnWorkOrderRequest::IdcIdHasBeenSet() const
{
    return m_idcIdHasBeenSet;
}

string CreateRackOnWorkOrderRequest::GetDeviceType() const
{
    return m_deviceType;
}

void CreateRackOnWorkOrderRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool CreateRackOnWorkOrderRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string CreateRackOnWorkOrderRequest::GetStuffOption() const
{
    return m_stuffOption;
}

void CreateRackOnWorkOrderRequest::SetStuffOption(const string& _stuffOption)
{
    m_stuffOption = _stuffOption;
    m_stuffOptionHasBeenSet = true;
}

bool CreateRackOnWorkOrderRequest::StuffOptionHasBeenSet() const
{
    return m_stuffOptionHasBeenSet;
}

bool CreateRackOnWorkOrderRequest::GetWithPowerOn() const
{
    return m_withPowerOn;
}

void CreateRackOnWorkOrderRequest::SetWithPowerOn(const bool& _withPowerOn)
{
    m_withPowerOn = _withPowerOn;
    m_withPowerOnHasBeenSet = true;
}

bool CreateRackOnWorkOrderRequest::WithPowerOnHasBeenSet() const
{
    return m_withPowerOnHasBeenSet;
}

vector<DeviceRackOn> CreateRackOnWorkOrderRequest::GetDeviceRackOnList() const
{
    return m_deviceRackOnList;
}

void CreateRackOnWorkOrderRequest::SetDeviceRackOnList(const vector<DeviceRackOn>& _deviceRackOnList)
{
    m_deviceRackOnList = _deviceRackOnList;
    m_deviceRackOnListHasBeenSet = true;
}

bool CreateRackOnWorkOrderRequest::DeviceRackOnListHasBeenSet() const
{
    return m_deviceRackOnListHasBeenSet;
}

SelfOperation CreateRackOnWorkOrderRequest::GetSelfOperationInfo() const
{
    return m_selfOperationInfo;
}

void CreateRackOnWorkOrderRequest::SetSelfOperationInfo(const SelfOperation& _selfOperationInfo)
{
    m_selfOperationInfo = _selfOperationInfo;
    m_selfOperationInfoHasBeenSet = true;
}

bool CreateRackOnWorkOrderRequest::SelfOperationInfoHasBeenSet() const
{
    return m_selfOperationInfoHasBeenSet;
}


