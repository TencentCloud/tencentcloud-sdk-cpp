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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPARDBDataAssetByComplianceIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPARDBDataAssetByComplianceIdRequest::DescribeDSPARDBDataAssetByComplianceIdRequest() :
    m_dspaIdHasBeenSet(false),
    m_complianceIdHasBeenSet(false),
    m_dataSourceTypeHasBeenSet(false),
    m_buildTypeHasBeenSet(false)
{
}

string DescribeDSPARDBDataAssetByComplianceIdRequest::ToJsonString() const
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

    if (m_dataSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_buildTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buildType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDSPARDBDataAssetByComplianceIdRequest::GetDspaId() const
{
    return m_dspaId;
}

void DescribeDSPARDBDataAssetByComplianceIdRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DescribeDSPARDBDataAssetByComplianceIdRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t DescribeDSPARDBDataAssetByComplianceIdRequest::GetComplianceId() const
{
    return m_complianceId;
}

void DescribeDSPARDBDataAssetByComplianceIdRequest::SetComplianceId(const int64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool DescribeDSPARDBDataAssetByComplianceIdRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

string DescribeDSPARDBDataAssetByComplianceIdRequest::GetDataSourceType() const
{
    return m_dataSourceType;
}

void DescribeDSPARDBDataAssetByComplianceIdRequest::SetDataSourceType(const string& _dataSourceType)
{
    m_dataSourceType = _dataSourceType;
    m_dataSourceTypeHasBeenSet = true;
}

bool DescribeDSPARDBDataAssetByComplianceIdRequest::DataSourceTypeHasBeenSet() const
{
    return m_dataSourceTypeHasBeenSet;
}

string DescribeDSPARDBDataAssetByComplianceIdRequest::GetBuildType() const
{
    return m_buildType;
}

void DescribeDSPARDBDataAssetByComplianceIdRequest::SetBuildType(const string& _buildType)
{
    m_buildType = _buildType;
    m_buildTypeHasBeenSet = true;
}

bool DescribeDSPARDBDataAssetByComplianceIdRequest::BuildTypeHasBeenSet() const
{
    return m_buildTypeHasBeenSet;
}


