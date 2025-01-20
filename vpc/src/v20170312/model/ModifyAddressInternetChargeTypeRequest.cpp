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

#include <tencentcloud/vpc/v20170312/model/ModifyAddressInternetChargeTypeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyAddressInternetChargeTypeRequest::ModifyAddressInternetChargeTypeRequest() :
    m_addressIdHasBeenSet(false),
    m_internetChargeTypeHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_addressChargePrepaidHasBeenSet(false)
{
}

string ModifyAddressInternetChargeTypeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_addressIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressId.c_str(), allocator).Move(), allocator);
    }

    if (m_internetChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_internetChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_addressChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_addressChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAddressInternetChargeTypeRequest::GetAddressId() const
{
    return m_addressId;
}

void ModifyAddressInternetChargeTypeRequest::SetAddressId(const string& _addressId)
{
    m_addressId = _addressId;
    m_addressIdHasBeenSet = true;
}

bool ModifyAddressInternetChargeTypeRequest::AddressIdHasBeenSet() const
{
    return m_addressIdHasBeenSet;
}

string ModifyAddressInternetChargeTypeRequest::GetInternetChargeType() const
{
    return m_internetChargeType;
}

void ModifyAddressInternetChargeTypeRequest::SetInternetChargeType(const string& _internetChargeType)
{
    m_internetChargeType = _internetChargeType;
    m_internetChargeTypeHasBeenSet = true;
}

bool ModifyAddressInternetChargeTypeRequest::InternetChargeTypeHasBeenSet() const
{
    return m_internetChargeTypeHasBeenSet;
}

uint64_t ModifyAddressInternetChargeTypeRequest::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void ModifyAddressInternetChargeTypeRequest::SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool ModifyAddressInternetChargeTypeRequest::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

AddressChargePrepaid ModifyAddressInternetChargeTypeRequest::GetAddressChargePrepaid() const
{
    return m_addressChargePrepaid;
}

void ModifyAddressInternetChargeTypeRequest::SetAddressChargePrepaid(const AddressChargePrepaid& _addressChargePrepaid)
{
    m_addressChargePrepaid = _addressChargePrepaid;
    m_addressChargePrepaidHasBeenSet = true;
}

bool ModifyAddressInternetChargeTypeRequest::AddressChargePrepaidHasBeenSet() const
{
    return m_addressChargePrepaidHasBeenSet;
}


