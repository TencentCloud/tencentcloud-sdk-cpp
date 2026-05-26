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

#include <tencentcloud/trp/v20210515/model/DescribeFlavorKingCycleBrandImportantProvinceScanAnalysisRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

DescribeFlavorKingCycleBrandImportantProvinceScanAnalysisRequest::DescribeFlavorKingCycleBrandImportantProvinceScanAnalysisRequest() :
    m_corpIdHasBeenSet(false),
    m_typeDateHasBeenSet(false),
    m_queryDateHasBeenSet(false),
    m_provinceListHasBeenSet(false)
{
}

string DescribeFlavorKingCycleBrandImportantProvinceScanAnalysisRequest::ToJsonString() const
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

    if (m_provinceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProvinceList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_provinceList.begin(); itr != m_provinceList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeFlavorKingCycleBrandImportantProvinceScanAnalysisRequest::GetCorpId() const
{
    return m_corpId;
}

void DescribeFlavorKingCycleBrandImportantProvinceScanAnalysisRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool DescribeFlavorKingCycleBrandImportantProvinceScanAnalysisRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string DescribeFlavorKingCycleBrandImportantProvinceScanAnalysisRequest::GetTypeDate() const
{
    return m_typeDate;
}

void DescribeFlavorKingCycleBrandImportantProvinceScanAnalysisRequest::SetTypeDate(const string& _typeDate)
{
    m_typeDate = _typeDate;
    m_typeDateHasBeenSet = true;
}

bool DescribeFlavorKingCycleBrandImportantProvinceScanAnalysisRequest::TypeDateHasBeenSet() const
{
    return m_typeDateHasBeenSet;
}

string DescribeFlavorKingCycleBrandImportantProvinceScanAnalysisRequest::GetQueryDate() const
{
    return m_queryDate;
}

void DescribeFlavorKingCycleBrandImportantProvinceScanAnalysisRequest::SetQueryDate(const string& _queryDate)
{
    m_queryDate = _queryDate;
    m_queryDateHasBeenSet = true;
}

bool DescribeFlavorKingCycleBrandImportantProvinceScanAnalysisRequest::QueryDateHasBeenSet() const
{
    return m_queryDateHasBeenSet;
}

vector<string> DescribeFlavorKingCycleBrandImportantProvinceScanAnalysisRequest::GetProvinceList() const
{
    return m_provinceList;
}

void DescribeFlavorKingCycleBrandImportantProvinceScanAnalysisRequest::SetProvinceList(const vector<string>& _provinceList)
{
    m_provinceList = _provinceList;
    m_provinceListHasBeenSet = true;
}

bool DescribeFlavorKingCycleBrandImportantProvinceScanAnalysisRequest::ProvinceListHasBeenSet() const
{
    return m_provinceListHasBeenSet;
}


