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

#include <tencentcloud/trp/v20210515/model/DescribeFlavorKingCycleBrandProvinceScanAnalysisRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

DescribeFlavorKingCycleBrandProvinceScanAnalysisRequest::DescribeFlavorKingCycleBrandProvinceScanAnalysisRequest() :
    m_corpIdHasBeenSet(false),
    m_typeDateHasBeenSet(false),
    m_queryDateHasBeenSet(false)
{
}

string DescribeFlavorKingCycleBrandProvinceScanAnalysisRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_corpId, allocator);
    }

    if (m_typeDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_typeDate.c_str(), allocator).Move(), allocator);
    }

    if (m_queryDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryDate.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeFlavorKingCycleBrandProvinceScanAnalysisRequest::GetCorpId() const
{
    return m_corpId;
}

void DescribeFlavorKingCycleBrandProvinceScanAnalysisRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool DescribeFlavorKingCycleBrandProvinceScanAnalysisRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string DescribeFlavorKingCycleBrandProvinceScanAnalysisRequest::GetTypeDate() const
{
    return m_typeDate;
}

void DescribeFlavorKingCycleBrandProvinceScanAnalysisRequest::SetTypeDate(const string& _typeDate)
{
    m_typeDate = _typeDate;
    m_typeDateHasBeenSet = true;
}

bool DescribeFlavorKingCycleBrandProvinceScanAnalysisRequest::TypeDateHasBeenSet() const
{
    return m_typeDateHasBeenSet;
}

string DescribeFlavorKingCycleBrandProvinceScanAnalysisRequest::GetQueryDate() const
{
    return m_queryDate;
}

void DescribeFlavorKingCycleBrandProvinceScanAnalysisRequest::SetQueryDate(const string& _queryDate)
{
    m_queryDate = _queryDate;
    m_queryDateHasBeenSet = true;
}

bool DescribeFlavorKingCycleBrandProvinceScanAnalysisRequest::QueryDateHasBeenSet() const
{
    return m_queryDateHasBeenSet;
}


