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

#include <tencentcloud/chc/v20230418/model/CreateReceivingWorkOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

CreateReceivingWorkOrderRequest::CreateReceivingWorkOrderRequest() :
    m_idcIdHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_entryTimeHasBeenSet(false),
    m_receivingOperationHasBeenSet(false),
    m_isExpressDeliveryHasBeenSet(false),
    m_expressInfoHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_serverDeviceListHasBeenSet(false),
    m_netDeviceListHasBeenSet(false),
    m_wireDeviceListHasBeenSet(false),
    m_otherDeviceListHasBeenSet(false),
    m_withRackOnHasBeenSet(false),
    m_deviceRackOnListHasBeenSet(false),
    m_stuffOptionHasBeenSet(false),
    m_selfOperationInfoHasBeenSet(false),
    m_withPowerOnHasBeenSet(false)
{
}

string CreateReceivingWorkOrderRequest::ToJsonString() const
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

    if (m_entryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntryTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entryTime.c_str(), allocator).Move(), allocator);
    }

    if (m_receivingOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceivingOperation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_receivingOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_isExpressDeliveryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExpressDelivery";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isExpressDelivery, allocator);
    }

    if (m_expressInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpressInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_expressInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_serverDeviceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerDeviceList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serverDeviceList.begin(); itr != m_serverDeviceList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_netDeviceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetDeviceList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_netDeviceList.begin(); itr != m_netDeviceList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_wireDeviceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WireDeviceList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_wireDeviceList.begin(); itr != m_wireDeviceList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_otherDeviceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherDeviceList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_otherDeviceList.begin(); itr != m_otherDeviceList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_withRackOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithRackOn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withRackOn, allocator);
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

    if (m_stuffOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StuffOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stuffOption.c_str(), allocator).Move(), allocator);
    }

    if (m_selfOperationInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfOperationInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_selfOperationInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_withPowerOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithPowerOn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withPowerOn, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateReceivingWorkOrderRequest::GetIdcId() const
{
    return m_idcId;
}

void CreateReceivingWorkOrderRequest::SetIdcId(const uint64_t& _idcId)
{
    m_idcId = _idcId;
    m_idcIdHasBeenSet = true;
}

bool CreateReceivingWorkOrderRequest::IdcIdHasBeenSet() const
{
    return m_idcIdHasBeenSet;
}

string CreateReceivingWorkOrderRequest::GetDeviceType() const
{
    return m_deviceType;
}

void CreateReceivingWorkOrderRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool CreateReceivingWorkOrderRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string CreateReceivingWorkOrderRequest::GetEntryTime() const
{
    return m_entryTime;
}

void CreateReceivingWorkOrderRequest::SetEntryTime(const string& _entryTime)
{
    m_entryTime = _entryTime;
    m_entryTimeHasBeenSet = true;
}

bool CreateReceivingWorkOrderRequest::EntryTimeHasBeenSet() const
{
    return m_entryTimeHasBeenSet;
}

string CreateReceivingWorkOrderRequest::GetReceivingOperation() const
{
    return m_receivingOperation;
}

void CreateReceivingWorkOrderRequest::SetReceivingOperation(const string& _receivingOperation)
{
    m_receivingOperation = _receivingOperation;
    m_receivingOperationHasBeenSet = true;
}

bool CreateReceivingWorkOrderRequest::ReceivingOperationHasBeenSet() const
{
    return m_receivingOperationHasBeenSet;
}

bool CreateReceivingWorkOrderRequest::GetIsExpressDelivery() const
{
    return m_isExpressDelivery;
}

void CreateReceivingWorkOrderRequest::SetIsExpressDelivery(const bool& _isExpressDelivery)
{
    m_isExpressDelivery = _isExpressDelivery;
    m_isExpressDeliveryHasBeenSet = true;
}

bool CreateReceivingWorkOrderRequest::IsExpressDeliveryHasBeenSet() const
{
    return m_isExpressDeliveryHasBeenSet;
}

ExpressDelivery CreateReceivingWorkOrderRequest::GetExpressInfo() const
{
    return m_expressInfo;
}

void CreateReceivingWorkOrderRequest::SetExpressInfo(const ExpressDelivery& _expressInfo)
{
    m_expressInfo = _expressInfo;
    m_expressInfoHasBeenSet = true;
}

bool CreateReceivingWorkOrderRequest::ExpressInfoHasBeenSet() const
{
    return m_expressInfoHasBeenSet;
}

string CreateReceivingWorkOrderRequest::GetRemark() const
{
    return m_remark;
}

void CreateReceivingWorkOrderRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateReceivingWorkOrderRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<ServerReceivingInfo> CreateReceivingWorkOrderRequest::GetServerDeviceList() const
{
    return m_serverDeviceList;
}

void CreateReceivingWorkOrderRequest::SetServerDeviceList(const vector<ServerReceivingInfo>& _serverDeviceList)
{
    m_serverDeviceList = _serverDeviceList;
    m_serverDeviceListHasBeenSet = true;
}

bool CreateReceivingWorkOrderRequest::ServerDeviceListHasBeenSet() const
{
    return m_serverDeviceListHasBeenSet;
}

vector<NetReceivingInfo> CreateReceivingWorkOrderRequest::GetNetDeviceList() const
{
    return m_netDeviceList;
}

void CreateReceivingWorkOrderRequest::SetNetDeviceList(const vector<NetReceivingInfo>& _netDeviceList)
{
    m_netDeviceList = _netDeviceList;
    m_netDeviceListHasBeenSet = true;
}

bool CreateReceivingWorkOrderRequest::NetDeviceListHasBeenSet() const
{
    return m_netDeviceListHasBeenSet;
}

vector<WireReceivingInfo> CreateReceivingWorkOrderRequest::GetWireDeviceList() const
{
    return m_wireDeviceList;
}

void CreateReceivingWorkOrderRequest::SetWireDeviceList(const vector<WireReceivingInfo>& _wireDeviceList)
{
    m_wireDeviceList = _wireDeviceList;
    m_wireDeviceListHasBeenSet = true;
}

bool CreateReceivingWorkOrderRequest::WireDeviceListHasBeenSet() const
{
    return m_wireDeviceListHasBeenSet;
}

vector<OtherDevReceivingInfo> CreateReceivingWorkOrderRequest::GetOtherDeviceList() const
{
    return m_otherDeviceList;
}

void CreateReceivingWorkOrderRequest::SetOtherDeviceList(const vector<OtherDevReceivingInfo>& _otherDeviceList)
{
    m_otherDeviceList = _otherDeviceList;
    m_otherDeviceListHasBeenSet = true;
}

bool CreateReceivingWorkOrderRequest::OtherDeviceListHasBeenSet() const
{
    return m_otherDeviceListHasBeenSet;
}

bool CreateReceivingWorkOrderRequest::GetWithRackOn() const
{
    return m_withRackOn;
}

void CreateReceivingWorkOrderRequest::SetWithRackOn(const bool& _withRackOn)
{
    m_withRackOn = _withRackOn;
    m_withRackOnHasBeenSet = true;
}

bool CreateReceivingWorkOrderRequest::WithRackOnHasBeenSet() const
{
    return m_withRackOnHasBeenSet;
}

vector<DeviceRackOn> CreateReceivingWorkOrderRequest::GetDeviceRackOnList() const
{
    return m_deviceRackOnList;
}

void CreateReceivingWorkOrderRequest::SetDeviceRackOnList(const vector<DeviceRackOn>& _deviceRackOnList)
{
    m_deviceRackOnList = _deviceRackOnList;
    m_deviceRackOnListHasBeenSet = true;
}

bool CreateReceivingWorkOrderRequest::DeviceRackOnListHasBeenSet() const
{
    return m_deviceRackOnListHasBeenSet;
}

string CreateReceivingWorkOrderRequest::GetStuffOption() const
{
    return m_stuffOption;
}

void CreateReceivingWorkOrderRequest::SetStuffOption(const string& _stuffOption)
{
    m_stuffOption = _stuffOption;
    m_stuffOptionHasBeenSet = true;
}

bool CreateReceivingWorkOrderRequest::StuffOptionHasBeenSet() const
{
    return m_stuffOptionHasBeenSet;
}

SelfOperation CreateReceivingWorkOrderRequest::GetSelfOperationInfo() const
{
    return m_selfOperationInfo;
}

void CreateReceivingWorkOrderRequest::SetSelfOperationInfo(const SelfOperation& _selfOperationInfo)
{
    m_selfOperationInfo = _selfOperationInfo;
    m_selfOperationInfoHasBeenSet = true;
}

bool CreateReceivingWorkOrderRequest::SelfOperationInfoHasBeenSet() const
{
    return m_selfOperationInfoHasBeenSet;
}

bool CreateReceivingWorkOrderRequest::GetWithPowerOn() const
{
    return m_withPowerOn;
}

void CreateReceivingWorkOrderRequest::SetWithPowerOn(const bool& _withPowerOn)
{
    m_withPowerOn = _withPowerOn;
    m_withPowerOnHasBeenSet = true;
}

bool CreateReceivingWorkOrderRequest::WithPowerOnHasBeenSet() const
{
    return m_withPowerOnHasBeenSet;
}


