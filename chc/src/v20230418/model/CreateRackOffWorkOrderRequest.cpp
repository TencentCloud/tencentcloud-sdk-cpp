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

#include <tencentcloud/chc/v20230418/model/CreateRackOffWorkOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

CreateRackOffWorkOrderRequest::CreateRackOffWorkOrderRequest() :
    m_idcIdHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_stuffOptionHasBeenSet(false),
    m_isPowerOffConfirmHasBeenSet(false),
    m_deviceSnListHasBeenSet(false),
    m_selfOperationInfoHasBeenSet(false),
    m_powerOffConfirmInfoHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreateRackOffWorkOrderRequest::ToJsonString() const
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

    if (m_selfOperationInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfOperationInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_selfOperationInfo.ToJsonObject(d[key.c_str()], allocator);
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


uint64_t CreateRackOffWorkOrderRequest::GetIdcId() const
{
    return m_idcId;
}

void CreateRackOffWorkOrderRequest::SetIdcId(const uint64_t& _idcId)
{
    m_idcId = _idcId;
    m_idcIdHasBeenSet = true;
}

bool CreateRackOffWorkOrderRequest::IdcIdHasBeenSet() const
{
    return m_idcIdHasBeenSet;
}

string CreateRackOffWorkOrderRequest::GetDeviceType() const
{
    return m_deviceType;
}

void CreateRackOffWorkOrderRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool CreateRackOffWorkOrderRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string CreateRackOffWorkOrderRequest::GetStuffOption() const
{
    return m_stuffOption;
}

void CreateRackOffWorkOrderRequest::SetStuffOption(const string& _stuffOption)
{
    m_stuffOption = _stuffOption;
    m_stuffOptionHasBeenSet = true;
}

bool CreateRackOffWorkOrderRequest::StuffOptionHasBeenSet() const
{
    return m_stuffOptionHasBeenSet;
}

string CreateRackOffWorkOrderRequest::GetIsPowerOffConfirm() const
{
    return m_isPowerOffConfirm;
}

void CreateRackOffWorkOrderRequest::SetIsPowerOffConfirm(const string& _isPowerOffConfirm)
{
    m_isPowerOffConfirm = _isPowerOffConfirm;
    m_isPowerOffConfirmHasBeenSet = true;
}

bool CreateRackOffWorkOrderRequest::IsPowerOffConfirmHasBeenSet() const
{
    return m_isPowerOffConfirmHasBeenSet;
}

vector<string> CreateRackOffWorkOrderRequest::GetDeviceSnList() const
{
    return m_deviceSnList;
}

void CreateRackOffWorkOrderRequest::SetDeviceSnList(const vector<string>& _deviceSnList)
{
    m_deviceSnList = _deviceSnList;
    m_deviceSnListHasBeenSet = true;
}

bool CreateRackOffWorkOrderRequest::DeviceSnListHasBeenSet() const
{
    return m_deviceSnListHasBeenSet;
}

SelfOperation CreateRackOffWorkOrderRequest::GetSelfOperationInfo() const
{
    return m_selfOperationInfo;
}

void CreateRackOffWorkOrderRequest::SetSelfOperationInfo(const SelfOperation& _selfOperationInfo)
{
    m_selfOperationInfo = _selfOperationInfo;
    m_selfOperationInfoHasBeenSet = true;
}

bool CreateRackOffWorkOrderRequest::SelfOperationInfoHasBeenSet() const
{
    return m_selfOperationInfoHasBeenSet;
}

PowerOffConfirm CreateRackOffWorkOrderRequest::GetPowerOffConfirmInfo() const
{
    return m_powerOffConfirmInfo;
}

void CreateRackOffWorkOrderRequest::SetPowerOffConfirmInfo(const PowerOffConfirm& _powerOffConfirmInfo)
{
    m_powerOffConfirmInfo = _powerOffConfirmInfo;
    m_powerOffConfirmInfoHasBeenSet = true;
}

bool CreateRackOffWorkOrderRequest::PowerOffConfirmInfoHasBeenSet() const
{
    return m_powerOffConfirmInfoHasBeenSet;
}

string CreateRackOffWorkOrderRequest::GetRemark() const
{
    return m_remark;
}

void CreateRackOffWorkOrderRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateRackOffWorkOrderRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


