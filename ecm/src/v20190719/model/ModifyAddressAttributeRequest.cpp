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

#include <tencentcloud/ecm/v20190719/model/ModifyAddressAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

ModifyAddressAttributeRequest::ModifyAddressAttributeRequest() :
    m_ecmRegionHasBeenSet(false),
    m_addressIdHasBeenSet(false),
    m_addressNameHasBeenSet(false),
    m_eipDirectConnectionHasBeenSet(false)
{
}

string ModifyAddressAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ecmRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EcmRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ecmRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressName.c_str(), allocator).Move(), allocator);
    }

    if (m_eipDirectConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipDirectConnection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eipDirectConnection.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAddressAttributeRequest::GetEcmRegion() const
{
    return m_ecmRegion;
}

void ModifyAddressAttributeRequest::SetEcmRegion(const string& _ecmRegion)
{
    m_ecmRegion = _ecmRegion;
    m_ecmRegionHasBeenSet = true;
}

bool ModifyAddressAttributeRequest::EcmRegionHasBeenSet() const
{
    return m_ecmRegionHasBeenSet;
}

string ModifyAddressAttributeRequest::GetAddressId() const
{
    return m_addressId;
}

void ModifyAddressAttributeRequest::SetAddressId(const string& _addressId)
{
    m_addressId = _addressId;
    m_addressIdHasBeenSet = true;
}

bool ModifyAddressAttributeRequest::AddressIdHasBeenSet() const
{
    return m_addressIdHasBeenSet;
}

string ModifyAddressAttributeRequest::GetAddressName() const
{
    return m_addressName;
}

void ModifyAddressAttributeRequest::SetAddressName(const string& _addressName)
{
    m_addressName = _addressName;
    m_addressNameHasBeenSet = true;
}

bool ModifyAddressAttributeRequest::AddressNameHasBeenSet() const
{
    return m_addressNameHasBeenSet;
}

string ModifyAddressAttributeRequest::GetEipDirectConnection() const
{
    return m_eipDirectConnection;
}

void ModifyAddressAttributeRequest::SetEipDirectConnection(const string& _eipDirectConnection)
{
    m_eipDirectConnection = _eipDirectConnection;
    m_eipDirectConnectionHasBeenSet = true;
}

bool ModifyAddressAttributeRequest::EipDirectConnectionHasBeenSet() const
{
    return m_eipDirectConnectionHasBeenSet;
}


