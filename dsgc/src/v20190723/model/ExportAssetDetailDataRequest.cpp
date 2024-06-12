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

#include <tencentcloud/dsgc/v20190723/model/ExportAssetDetailDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ExportAssetDetailDataRequest::ExportAssetDetailDataRequest() :
    m_dspaIdHasBeenSet(false),
    m_complianceIdHasBeenSet(false),
    m_metaDataTypeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_casbIdHasBeenSet(false)
{
}

string ExportAssetDetailDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_complianceId, allocator);
    }

    if (m_metaDataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaDataType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metaDataType.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_casbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CasbId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_casbId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExportAssetDetailDataRequest::GetDspaId() const
{
    return m_dspaId;
}

void ExportAssetDetailDataRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool ExportAssetDetailDataRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

uint64_t ExportAssetDetailDataRequest::GetComplianceId() const
{
    return m_complianceId;
}

void ExportAssetDetailDataRequest::SetComplianceId(const uint64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool ExportAssetDetailDataRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

string ExportAssetDetailDataRequest::GetMetaDataType() const
{
    return m_metaDataType;
}

void ExportAssetDetailDataRequest::SetMetaDataType(const string& _metaDataType)
{
    m_metaDataType = _metaDataType;
    m_metaDataTypeHasBeenSet = true;
}

bool ExportAssetDetailDataRequest::MetaDataTypeHasBeenSet() const
{
    return m_metaDataTypeHasBeenSet;
}

vector<Filter> ExportAssetDetailDataRequest::GetFilters() const
{
    return m_filters;
}

void ExportAssetDetailDataRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ExportAssetDetailDataRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string ExportAssetDetailDataRequest::GetCasbId() const
{
    return m_casbId;
}

void ExportAssetDetailDataRequest::SetCasbId(const string& _casbId)
{
    m_casbId = _casbId;
    m_casbIdHasBeenSet = true;
}

bool ExportAssetDetailDataRequest::CasbIdHasBeenSet() const
{
    return m_casbIdHasBeenSet;
}


