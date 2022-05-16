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

#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterTypesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

DescribeDedicatedClusterTypesRequest::DescribeDedicatedClusterTypesRequest() :
    m_nameHasBeenSet(false),
    m_dedicatedClusterTypeIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_isComputeHasBeenSet(false)
{
}

string DescribeDedicatedClusterTypesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_dedicatedClusterTypeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterTypeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dedicatedClusterTypeIds.begin(); itr != m_dedicatedClusterTypeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

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

    if (m_isComputeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCompute";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCompute, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDedicatedClusterTypesRequest::GetName() const
{
    return m_name;
}

void DescribeDedicatedClusterTypesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeDedicatedClusterTypesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> DescribeDedicatedClusterTypesRequest::GetDedicatedClusterTypeIds() const
{
    return m_dedicatedClusterTypeIds;
}

void DescribeDedicatedClusterTypesRequest::SetDedicatedClusterTypeIds(const vector<string>& _dedicatedClusterTypeIds)
{
    m_dedicatedClusterTypeIds = _dedicatedClusterTypeIds;
    m_dedicatedClusterTypeIdsHasBeenSet = true;
}

bool DescribeDedicatedClusterTypesRequest::DedicatedClusterTypeIdsHasBeenSet() const
{
    return m_dedicatedClusterTypeIdsHasBeenSet;
}

int64_t DescribeDedicatedClusterTypesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDedicatedClusterTypesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDedicatedClusterTypesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDedicatedClusterTypesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDedicatedClusterTypesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDedicatedClusterTypesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeDedicatedClusterTypesRequest::GetIsCompute() const
{
    return m_isCompute;
}

void DescribeDedicatedClusterTypesRequest::SetIsCompute(const bool& _isCompute)
{
    m_isCompute = _isCompute;
    m_isComputeHasBeenSet = true;
}

bool DescribeDedicatedClusterTypesRequest::IsComputeHasBeenSet() const
{
    return m_isComputeHasBeenSet;
}


