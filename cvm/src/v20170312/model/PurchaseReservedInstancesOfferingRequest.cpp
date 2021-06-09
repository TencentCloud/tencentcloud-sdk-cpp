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

#include <tencentcloud/cvm/v20170312/model/PurchaseReservedInstancesOfferingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

PurchaseReservedInstancesOfferingRequest::PurchaseReservedInstancesOfferingRequest() :
    m_instanceCountHasBeenSet(false),
    m_reservedInstancesOfferingIdHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_reservedInstanceNameHasBeenSet(false)
{
}

string PurchaseReservedInstancesOfferingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_reservedInstancesOfferingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedInstancesOfferingId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reservedInstancesOfferingId.c_str(), allocator).Move(), allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedInstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reservedInstanceName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t PurchaseReservedInstancesOfferingRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void PurchaseReservedInstancesOfferingRequest::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool PurchaseReservedInstancesOfferingRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

string PurchaseReservedInstancesOfferingRequest::GetReservedInstancesOfferingId() const
{
    return m_reservedInstancesOfferingId;
}

void PurchaseReservedInstancesOfferingRequest::SetReservedInstancesOfferingId(const string& _reservedInstancesOfferingId)
{
    m_reservedInstancesOfferingId = _reservedInstancesOfferingId;
    m_reservedInstancesOfferingIdHasBeenSet = true;
}

bool PurchaseReservedInstancesOfferingRequest::ReservedInstancesOfferingIdHasBeenSet() const
{
    return m_reservedInstancesOfferingIdHasBeenSet;
}

bool PurchaseReservedInstancesOfferingRequest::GetDryRun() const
{
    return m_dryRun;
}

void PurchaseReservedInstancesOfferingRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool PurchaseReservedInstancesOfferingRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

string PurchaseReservedInstancesOfferingRequest::GetClientToken() const
{
    return m_clientToken;
}

void PurchaseReservedInstancesOfferingRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool PurchaseReservedInstancesOfferingRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string PurchaseReservedInstancesOfferingRequest::GetReservedInstanceName() const
{
    return m_reservedInstanceName;
}

void PurchaseReservedInstancesOfferingRequest::SetReservedInstanceName(const string& _reservedInstanceName)
{
    m_reservedInstanceName = _reservedInstanceName;
    m_reservedInstanceNameHasBeenSet = true;
}

bool PurchaseReservedInstancesOfferingRequest::ReservedInstanceNameHasBeenSet() const
{
    return m_reservedInstanceNameHasBeenSet;
}


