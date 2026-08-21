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

#include <tencentcloud/csip/v20221121/model/DescribeSCFAliasListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeSCFAliasListRequest::DescribeSCFAliasListRequest() :
    m_sCFRegionHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeSCFAliasListRequest::ToJsonString() const
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

    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
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


string DescribeSCFAliasListRequest::GetSCFRegion() const
{
    return m_sCFRegion;
}

void DescribeSCFAliasListRequest::SetSCFRegion(const string& _sCFRegion)
{
    m_sCFRegion = _sCFRegion;
    m_sCFRegionHasBeenSet = true;
}

bool DescribeSCFAliasListRequest::SCFRegionHasBeenSet() const
{
    return m_sCFRegionHasBeenSet;
}

string DescribeSCFAliasListRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeSCFAliasListRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeSCFAliasListRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DescribeSCFAliasListRequest::GetFunctionName() const
{
    return m_functionName;
}

void DescribeSCFAliasListRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool DescribeSCFAliasListRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

int64_t DescribeSCFAliasListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSCFAliasListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSCFAliasListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeSCFAliasListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSCFAliasListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSCFAliasListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


