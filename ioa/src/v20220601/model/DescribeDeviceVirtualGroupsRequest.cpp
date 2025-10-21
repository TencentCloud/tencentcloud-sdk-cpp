/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ioa/v20220601/model/DescribeDeviceVirtualGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeDeviceVirtualGroupsRequest::DescribeDeviceVirtualGroupsRequest() :
    m_domainInstanceIdHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_virtualGroupIdsHasBeenSet(false)
{
}

string DescribeDeviceVirtualGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_condition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_osType, allocator);
    }

    if (m_virtualGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_virtualGroupIds.begin(); itr != m_virtualGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDeviceVirtualGroupsRequest::GetDomainInstanceId() const
{
    return m_domainInstanceId;
}

void DescribeDeviceVirtualGroupsRequest::SetDomainInstanceId(const string& _domainInstanceId)
{
    m_domainInstanceId = _domainInstanceId;
    m_domainInstanceIdHasBeenSet = true;
}

bool DescribeDeviceVirtualGroupsRequest::DomainInstanceIdHasBeenSet() const
{
    return m_domainInstanceIdHasBeenSet;
}

Condition DescribeDeviceVirtualGroupsRequest::GetCondition() const
{
    return m_condition;
}

void DescribeDeviceVirtualGroupsRequest::SetCondition(const Condition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool DescribeDeviceVirtualGroupsRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

int64_t DescribeDeviceVirtualGroupsRequest::GetOsType() const
{
    return m_osType;
}

void DescribeDeviceVirtualGroupsRequest::SetOsType(const int64_t& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool DescribeDeviceVirtualGroupsRequest::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

vector<int64_t> DescribeDeviceVirtualGroupsRequest::GetVirtualGroupIds() const
{
    return m_virtualGroupIds;
}

void DescribeDeviceVirtualGroupsRequest::SetVirtualGroupIds(const vector<int64_t>& _virtualGroupIds)
{
    m_virtualGroupIds = _virtualGroupIds;
    m_virtualGroupIdsHasBeenSet = true;
}

bool DescribeDeviceVirtualGroupsRequest::VirtualGroupIdsHasBeenSet() const
{
    return m_virtualGroupIdsHasBeenSet;
}


