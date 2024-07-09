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

#include <tencentcloud/vpc/v20170312/model/PolicyStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

PolicyStatistics::PolicyStatistics() :
    m_ingressIPv4TotalCountHasBeenSet(false),
    m_ingressIPv6TotalCountHasBeenSet(false),
    m_egressIPv4TotalCountHasBeenSet(false),
    m_egressIPv6TotalCountHasBeenSet(false)
{
}

CoreInternalOutcome PolicyStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IngressIPv4TotalCount") && !value["IngressIPv4TotalCount"].IsNull())
    {
        if (!value["IngressIPv4TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyStatistics.IngressIPv4TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ingressIPv4TotalCount = value["IngressIPv4TotalCount"].GetUint64();
        m_ingressIPv4TotalCountHasBeenSet = true;
    }

    if (value.HasMember("IngressIPv6TotalCount") && !value["IngressIPv6TotalCount"].IsNull())
    {
        if (!value["IngressIPv6TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyStatistics.IngressIPv6TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ingressIPv6TotalCount = value["IngressIPv6TotalCount"].GetUint64();
        m_ingressIPv6TotalCountHasBeenSet = true;
    }

    if (value.HasMember("EgressIPv4TotalCount") && !value["EgressIPv4TotalCount"].IsNull())
    {
        if (!value["EgressIPv4TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyStatistics.EgressIPv4TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_egressIPv4TotalCount = value["EgressIPv4TotalCount"].GetUint64();
        m_egressIPv4TotalCountHasBeenSet = true;
    }

    if (value.HasMember("EgressIPv6TotalCount") && !value["EgressIPv6TotalCount"].IsNull())
    {
        if (!value["EgressIPv6TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyStatistics.EgressIPv6TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_egressIPv6TotalCount = value["EgressIPv6TotalCount"].GetUint64();
        m_egressIPv6TotalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolicyStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ingressIPv4TotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngressIPv4TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ingressIPv4TotalCount, allocator);
    }

    if (m_ingressIPv6TotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngressIPv6TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ingressIPv6TotalCount, allocator);
    }

    if (m_egressIPv4TotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EgressIPv4TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_egressIPv4TotalCount, allocator);
    }

    if (m_egressIPv6TotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EgressIPv6TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_egressIPv6TotalCount, allocator);
    }

}


uint64_t PolicyStatistics::GetIngressIPv4TotalCount() const
{
    return m_ingressIPv4TotalCount;
}

void PolicyStatistics::SetIngressIPv4TotalCount(const uint64_t& _ingressIPv4TotalCount)
{
    m_ingressIPv4TotalCount = _ingressIPv4TotalCount;
    m_ingressIPv4TotalCountHasBeenSet = true;
}

bool PolicyStatistics::IngressIPv4TotalCountHasBeenSet() const
{
    return m_ingressIPv4TotalCountHasBeenSet;
}

uint64_t PolicyStatistics::GetIngressIPv6TotalCount() const
{
    return m_ingressIPv6TotalCount;
}

void PolicyStatistics::SetIngressIPv6TotalCount(const uint64_t& _ingressIPv6TotalCount)
{
    m_ingressIPv6TotalCount = _ingressIPv6TotalCount;
    m_ingressIPv6TotalCountHasBeenSet = true;
}

bool PolicyStatistics::IngressIPv6TotalCountHasBeenSet() const
{
    return m_ingressIPv6TotalCountHasBeenSet;
}

uint64_t PolicyStatistics::GetEgressIPv4TotalCount() const
{
    return m_egressIPv4TotalCount;
}

void PolicyStatistics::SetEgressIPv4TotalCount(const uint64_t& _egressIPv4TotalCount)
{
    m_egressIPv4TotalCount = _egressIPv4TotalCount;
    m_egressIPv4TotalCountHasBeenSet = true;
}

bool PolicyStatistics::EgressIPv4TotalCountHasBeenSet() const
{
    return m_egressIPv4TotalCountHasBeenSet;
}

uint64_t PolicyStatistics::GetEgressIPv6TotalCount() const
{
    return m_egressIPv6TotalCount;
}

void PolicyStatistics::SetEgressIPv6TotalCount(const uint64_t& _egressIPv6TotalCount)
{
    m_egressIPv6TotalCount = _egressIPv6TotalCount;
    m_egressIPv6TotalCountHasBeenSet = true;
}

bool PolicyStatistics::EgressIPv6TotalCountHasBeenSet() const
{
    return m_egressIPv6TotalCountHasBeenSet;
}

