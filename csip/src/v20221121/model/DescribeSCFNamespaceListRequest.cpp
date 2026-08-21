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

#include <tencentcloud/csip/v20221121/model/DescribeSCFNamespaceListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeSCFNamespaceListRequest::DescribeSCFNamespaceListRequest() :
    m_sCFRegionHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeSCFNamespaceListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sCFRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SCFRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sCFRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSCFNamespaceListRequest::GetSCFRegion() const
{
    return m_sCFRegion;
}

void DescribeSCFNamespaceListRequest::SetSCFRegion(const string& _sCFRegion)
{
    m_sCFRegion = _sCFRegion;
    m_sCFRegionHasBeenSet = true;
}

bool DescribeSCFNamespaceListRequest::SCFRegionHasBeenSet() const
{
    return m_sCFRegionHasBeenSet;
}

int64_t DescribeSCFNamespaceListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSCFNamespaceListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSCFNamespaceListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeSCFNamespaceListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSCFNamespaceListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSCFNamespaceListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


