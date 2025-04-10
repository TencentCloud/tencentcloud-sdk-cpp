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

#include <tencentcloud/chc/v20230418/model/CreateSpeciallyQuitWorkOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

CreateSpeciallyQuitWorkOrderRequest::CreateSpeciallyQuitWorkOrderRequest() :
    m_idcIdHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_handoverMethodHasBeenSet(false),
    m_logisticsReceiptHasBeenSet(false),
    m_customerReceiptHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_otherDeviceListHasBeenSet(false)
{
}

string CreateSpeciallyQuitWorkOrderRequest::ToJsonString() const
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

    if (m_handoverMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandoverMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_handoverMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_logisticsReceiptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogisticsReceipt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logisticsReceipt.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_customerReceiptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerReceipt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customerReceipt.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateSpeciallyQuitWorkOrderRequest::GetIdcId() const
{
    return m_idcId;
}

void CreateSpeciallyQuitWorkOrderRequest::SetIdcId(const uint64_t& _idcId)
{
    m_idcId = _idcId;
    m_idcIdHasBeenSet = true;
}

bool CreateSpeciallyQuitWorkOrderRequest::IdcIdHasBeenSet() const
{
    return m_idcIdHasBeenSet;
}

string CreateSpeciallyQuitWorkOrderRequest::GetDeviceType() const
{
    return m_deviceType;
}

void CreateSpeciallyQuitWorkOrderRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool CreateSpeciallyQuitWorkOrderRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string CreateSpeciallyQuitWorkOrderRequest::GetHandoverMethod() const
{
    return m_handoverMethod;
}

void CreateSpeciallyQuitWorkOrderRequest::SetHandoverMethod(const string& _handoverMethod)
{
    m_handoverMethod = _handoverMethod;
    m_handoverMethodHasBeenSet = true;
}

bool CreateSpeciallyQuitWorkOrderRequest::HandoverMethodHasBeenSet() const
{
    return m_handoverMethodHasBeenSet;
}

LogisticsReceipt CreateSpeciallyQuitWorkOrderRequest::GetLogisticsReceipt() const
{
    return m_logisticsReceipt;
}

void CreateSpeciallyQuitWorkOrderRequest::SetLogisticsReceipt(const LogisticsReceipt& _logisticsReceipt)
{
    m_logisticsReceipt = _logisticsReceipt;
    m_logisticsReceiptHasBeenSet = true;
}

bool CreateSpeciallyQuitWorkOrderRequest::LogisticsReceiptHasBeenSet() const
{
    return m_logisticsReceiptHasBeenSet;
}

CustomerReceipt CreateSpeciallyQuitWorkOrderRequest::GetCustomerReceipt() const
{
    return m_customerReceipt;
}

void CreateSpeciallyQuitWorkOrderRequest::SetCustomerReceipt(const CustomerReceipt& _customerReceipt)
{
    m_customerReceipt = _customerReceipt;
    m_customerReceiptHasBeenSet = true;
}

bool CreateSpeciallyQuitWorkOrderRequest::CustomerReceiptHasBeenSet() const
{
    return m_customerReceiptHasBeenSet;
}

string CreateSpeciallyQuitWorkOrderRequest::GetRemark() const
{
    return m_remark;
}

void CreateSpeciallyQuitWorkOrderRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateSpeciallyQuitWorkOrderRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<OtherDevReceivingInfo> CreateSpeciallyQuitWorkOrderRequest::GetOtherDeviceList() const
{
    return m_otherDeviceList;
}

void CreateSpeciallyQuitWorkOrderRequest::SetOtherDeviceList(const vector<OtherDevReceivingInfo>& _otherDeviceList)
{
    m_otherDeviceList = _otherDeviceList;
    m_otherDeviceListHasBeenSet = true;
}

bool CreateSpeciallyQuitWorkOrderRequest::OtherDeviceListHasBeenSet() const
{
    return m_otherDeviceListHasBeenSet;
}


