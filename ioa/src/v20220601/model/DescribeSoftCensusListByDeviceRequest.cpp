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

#include <tencentcloud/ioa/v20220601/model/DescribeSoftCensusListByDeviceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeSoftCensusListByDeviceRequest::DescribeSoftCensusListByDeviceRequest() :
    m_osTypeHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_conditionHasBeenSet(false)
{
}

string DescribeSoftCensusListByDeviceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_osType, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
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


int64_t DescribeSoftCensusListByDeviceRequest::GetOsType() const
{
    return m_osType;
}

void DescribeSoftCensusListByDeviceRequest::SetOsType(const int64_t& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool DescribeSoftCensusListByDeviceRequest::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

int64_t DescribeSoftCensusListByDeviceRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeSoftCensusListByDeviceRequest::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeSoftCensusListByDeviceRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

Condition DescribeSoftCensusListByDeviceRequest::GetCondition() const
{
    return m_condition;
}

void DescribeSoftCensusListByDeviceRequest::SetCondition(const Condition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool DescribeSoftCensusListByDeviceRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}


