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

#include <tencentcloud/ioa/v20220601/model/DescribeDeviceHardwareInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeDeviceHardwareInfoListRequest::DescribeDeviceHardwareInfoListRequest() :
    m_groupIdHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_domainInstanceIdHasBeenSet(false),
    m_conditionHasBeenSet(false)
{
}

string DescribeDeviceHardwareInfoListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_osType, allocator);
    }

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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDeviceHardwareInfoListRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeDeviceHardwareInfoListRequest::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoListRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t DescribeDeviceHardwareInfoListRequest::GetOsType() const
{
    return m_osType;
}

void DescribeDeviceHardwareInfoListRequest::SetOsType(const int64_t& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoListRequest::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

string DescribeDeviceHardwareInfoListRequest::GetDomainInstanceId() const
{
    return m_domainInstanceId;
}

void DescribeDeviceHardwareInfoListRequest::SetDomainInstanceId(const string& _domainInstanceId)
{
    m_domainInstanceId = _domainInstanceId;
    m_domainInstanceIdHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoListRequest::DomainInstanceIdHasBeenSet() const
{
    return m_domainInstanceIdHasBeenSet;
}

Condition DescribeDeviceHardwareInfoListRequest::GetCondition() const
{
    return m_condition;
}

void DescribeDeviceHardwareInfoListRequest::SetCondition(const Condition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoListRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}


