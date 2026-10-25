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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMApplicationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMApplicationsRequest::DescribeTDEMApplicationsRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_demoModeHasBeenSet(false)
{
}

string DescribeTDEMApplicationsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_demoModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DemoMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_demoMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeTDEMApplicationsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTDEMApplicationsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTDEMApplicationsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeTDEMApplicationsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTDEMApplicationsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTDEMApplicationsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeTDEMApplicationsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeTDEMApplicationsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeTDEMApplicationsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool DescribeTDEMApplicationsRequest::GetDemoMode() const
{
    return m_demoMode;
}

void DescribeTDEMApplicationsRequest::SetDemoMode(const bool& _demoMode)
{
    m_demoMode = _demoMode;
    m_demoModeHasBeenSet = true;
}

bool DescribeTDEMApplicationsRequest::DemoModeHasBeenSet() const
{
    return m_demoModeHasBeenSet;
}


