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

#include <tencentcloud/chc/v20230418/model/CreatePowerOffWorkOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

CreatePowerOffWorkOrderRequest::CreatePowerOffWorkOrderRequest() :
    m_idcIdHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_isPowerOffConfirmHasBeenSet(false),
    m_deviceSnListHasBeenSet(false),
    m_powerOffConfirmInfoHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreatePowerOffWorkOrderRequest::ToJsonString() const
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

    if (m_isPowerOffConfirmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPowerOffConfirm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isPowerOffConfirm.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceSnListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceSnList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceSnList.begin(); itr != m_deviceSnList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_powerOffConfirmInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerOffConfirmInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_powerOffConfirmInfo.ToJsonObject(d[key.c_str()], allocator);
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


uint64_t CreatePowerOffWorkOrderRequest::GetIdcId() const
{
    return m_idcId;
}

void CreatePowerOffWorkOrderRequest::SetIdcId(const uint64_t& _idcId)
{
    m_idcId = _idcId;
    m_idcIdHasBeenSet = true;
}

bool CreatePowerOffWorkOrderRequest::IdcIdHasBeenSet() const
{
    return m_idcIdHasBeenSet;
}

string CreatePowerOffWorkOrderRequest::GetDeviceType() const
{
    return m_deviceType;
}

void CreatePowerOffWorkOrderRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool CreatePowerOffWorkOrderRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string CreatePowerOffWorkOrderRequest::GetIsPowerOffConfirm() const
{
    return m_isPowerOffConfirm;
}

void CreatePowerOffWorkOrderRequest::SetIsPowerOffConfirm(const string& _isPowerOffConfirm)
{
    m_isPowerOffConfirm = _isPowerOffConfirm;
    m_isPowerOffConfirmHasBeenSet = true;
}

bool CreatePowerOffWorkOrderRequest::IsPowerOffConfirmHasBeenSet() const
{
    return m_isPowerOffConfirmHasBeenSet;
}

vector<string> CreatePowerOffWorkOrderRequest::GetDeviceSnList() const
{
    return m_deviceSnList;
}

void CreatePowerOffWorkOrderRequest::SetDeviceSnList(const vector<string>& _deviceSnList)
{
    m_deviceSnList = _deviceSnList;
    m_deviceSnListHasBeenSet = true;
}

bool CreatePowerOffWorkOrderRequest::DeviceSnListHasBeenSet() const
{
    return m_deviceSnListHasBeenSet;
}

PowerOffConfirm CreatePowerOffWorkOrderRequest::GetPowerOffConfirmInfo() const
{
    return m_powerOffConfirmInfo;
}

void CreatePowerOffWorkOrderRequest::SetPowerOffConfirmInfo(const PowerOffConfirm& _powerOffConfirmInfo)
{
    m_powerOffConfirmInfo = _powerOffConfirmInfo;
    m_powerOffConfirmInfoHasBeenSet = true;
}

bool CreatePowerOffWorkOrderRequest::PowerOffConfirmInfoHasBeenSet() const
{
    return m_powerOffConfirmInfoHasBeenSet;
}

string CreatePowerOffWorkOrderRequest::GetRemark() const
{
    return m_remark;
}

void CreatePowerOffWorkOrderRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreatePowerOffWorkOrderRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


