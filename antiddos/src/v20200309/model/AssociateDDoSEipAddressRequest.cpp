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

#include <tencentcloud/antiddos/v20200309/model/AssociateDDoSEipAddressRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

AssociateDDoSEipAddressRequest::AssociateDDoSEipAddressRequest() :
    m_instanceIdHasBeenSet(false),
    m_eipHasBeenSet(false),
    m_cvmInstanceIDHasBeenSet(false),
    m_cvmRegionHasBeenSet(false)
{
}

string AssociateDDoSEipAddressRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_eipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eip.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmInstanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmInstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cvmInstanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cvmRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AssociateDDoSEipAddressRequest::GetInstanceId() const
{
    return m_instanceId;
}

void AssociateDDoSEipAddressRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AssociateDDoSEipAddressRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AssociateDDoSEipAddressRequest::GetEip() const
{
    return m_eip;
}

void AssociateDDoSEipAddressRequest::SetEip(const string& _eip)
{
    m_eip = _eip;
    m_eipHasBeenSet = true;
}

bool AssociateDDoSEipAddressRequest::EipHasBeenSet() const
{
    return m_eipHasBeenSet;
}

string AssociateDDoSEipAddressRequest::GetCvmInstanceID() const
{
    return m_cvmInstanceID;
}

void AssociateDDoSEipAddressRequest::SetCvmInstanceID(const string& _cvmInstanceID)
{
    m_cvmInstanceID = _cvmInstanceID;
    m_cvmInstanceIDHasBeenSet = true;
}

bool AssociateDDoSEipAddressRequest::CvmInstanceIDHasBeenSet() const
{
    return m_cvmInstanceIDHasBeenSet;
}

string AssociateDDoSEipAddressRequest::GetCvmRegion() const
{
    return m_cvmRegion;
}

void AssociateDDoSEipAddressRequest::SetCvmRegion(const string& _cvmRegion)
{
    m_cvmRegion = _cvmRegion;
    m_cvmRegionHasBeenSet = true;
}

bool AssociateDDoSEipAddressRequest::CvmRegionHasBeenSet() const
{
    return m_cvmRegionHasBeenSet;
}


