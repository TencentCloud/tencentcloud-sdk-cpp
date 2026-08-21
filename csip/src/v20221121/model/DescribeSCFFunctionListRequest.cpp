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

#include <tencentcloud/csip/v20221121/model/DescribeSCFFunctionListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeSCFFunctionListRequest::DescribeSCFFunctionListRequest() :
    m_sCFRegionHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeSCFFunctionListRequest::ToJsonString() const
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

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
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


string DescribeSCFFunctionListRequest::GetSCFRegion() const
{
    return m_sCFRegion;
}

void DescribeSCFFunctionListRequest::SetSCFRegion(const string& _sCFRegion)
{
    m_sCFRegion = _sCFRegion;
    m_sCFRegionHasBeenSet = true;
}

bool DescribeSCFFunctionListRequest::SCFRegionHasBeenSet() const
{
    return m_sCFRegionHasBeenSet;
}

string DescribeSCFFunctionListRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeSCFFunctionListRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeSCFFunctionListRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

int64_t DescribeSCFFunctionListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSCFFunctionListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSCFFunctionListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeSCFFunctionListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSCFFunctionListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSCFFunctionListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


