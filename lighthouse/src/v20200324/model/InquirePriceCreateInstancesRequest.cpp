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

#include <tencentcloud/lighthouse/v20200324/model/InquirePriceCreateInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

InquirePriceCreateInstancesRequest::InquirePriceCreateInstancesRequest() :
    m_bundleIdHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_blueprintIdHasBeenSet(false)
{
}

string InquirePriceCreateInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_blueprintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlueprintId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_blueprintId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquirePriceCreateInstancesRequest::GetBundleId() const
{
    return m_bundleId;
}

void InquirePriceCreateInstancesRequest::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool InquirePriceCreateInstancesRequest::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

InstanceChargePrepaid InquirePriceCreateInstancesRequest::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void InquirePriceCreateInstancesRequest::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool InquirePriceCreateInstancesRequest::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

int64_t InquirePriceCreateInstancesRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void InquirePriceCreateInstancesRequest::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool InquirePriceCreateInstancesRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

string InquirePriceCreateInstancesRequest::GetBlueprintId() const
{
    return m_blueprintId;
}

void InquirePriceCreateInstancesRequest::SetBlueprintId(const string& _blueprintId)
{
    m_blueprintId = _blueprintId;
    m_blueprintIdHasBeenSet = true;
}

bool InquirePriceCreateInstancesRequest::BlueprintIdHasBeenSet() const
{
    return m_blueprintIdHasBeenSet;
}


