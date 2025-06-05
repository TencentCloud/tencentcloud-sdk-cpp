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

#include <tencentcloud/vpc/v20170312/model/CreateTrafficPackagesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateTrafficPackagesRequest::CreateTrafficPackagesRequest() :
    m_trafficAmountHasBeenSet(false),
    m_trafficPackageCountHasBeenSet(false),
    m_deductTypeHasBeenSet(false)
{
}

string CreateTrafficPackagesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_trafficAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_trafficAmount, allocator);
    }

    if (m_trafficPackageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficPackageCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_trafficPackageCount, allocator);
    }

    if (m_deductTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deductType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateTrafficPackagesRequest::GetTrafficAmount() const
{
    return m_trafficAmount;
}

void CreateTrafficPackagesRequest::SetTrafficAmount(const uint64_t& _trafficAmount)
{
    m_trafficAmount = _trafficAmount;
    m_trafficAmountHasBeenSet = true;
}

bool CreateTrafficPackagesRequest::TrafficAmountHasBeenSet() const
{
    return m_trafficAmountHasBeenSet;
}

uint64_t CreateTrafficPackagesRequest::GetTrafficPackageCount() const
{
    return m_trafficPackageCount;
}

void CreateTrafficPackagesRequest::SetTrafficPackageCount(const uint64_t& _trafficPackageCount)
{
    m_trafficPackageCount = _trafficPackageCount;
    m_trafficPackageCountHasBeenSet = true;
}

bool CreateTrafficPackagesRequest::TrafficPackageCountHasBeenSet() const
{
    return m_trafficPackageCountHasBeenSet;
}

string CreateTrafficPackagesRequest::GetDeductType() const
{
    return m_deductType;
}

void CreateTrafficPackagesRequest::SetDeductType(const string& _deductType)
{
    m_deductType = _deductType;
    m_deductTypeHasBeenSet = true;
}

bool CreateTrafficPackagesRequest::DeductTypeHasBeenSet() const
{
    return m_deductTypeHasBeenSet;
}


