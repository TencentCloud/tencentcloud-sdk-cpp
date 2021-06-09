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

#include <tencentcloud/ssl/v20191205/model/DescribeCertificatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DescribeCertificatesRequest::DescribeCertificatesRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_certificateTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_expirationSortHasBeenSet(false),
    m_certificateStatusHasBeenSet(false),
    m_deployableHasBeenSet(false)
{
}

string DescribeCertificatesRequest::ToJsonString() const
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

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateType.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_expirationSortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationSort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expirationSort.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_certificateStatus.begin(); itr != m_certificateStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_deployableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deployable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deployable, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeCertificatesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCertificatesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCertificatesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeCertificatesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCertificatesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCertificatesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeCertificatesRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeCertificatesRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeCertificatesRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

string DescribeCertificatesRequest::GetCertificateType() const
{
    return m_certificateType;
}

void DescribeCertificatesRequest::SetCertificateType(const string& _certificateType)
{
    m_certificateType = _certificateType;
    m_certificateTypeHasBeenSet = true;
}

bool DescribeCertificatesRequest::CertificateTypeHasBeenSet() const
{
    return m_certificateTypeHasBeenSet;
}

uint64_t DescribeCertificatesRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeCertificatesRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeCertificatesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeCertificatesRequest::GetExpirationSort() const
{
    return m_expirationSort;
}

void DescribeCertificatesRequest::SetExpirationSort(const string& _expirationSort)
{
    m_expirationSort = _expirationSort;
    m_expirationSortHasBeenSet = true;
}

bool DescribeCertificatesRequest::ExpirationSortHasBeenSet() const
{
    return m_expirationSortHasBeenSet;
}

vector<uint64_t> DescribeCertificatesRequest::GetCertificateStatus() const
{
    return m_certificateStatus;
}

void DescribeCertificatesRequest::SetCertificateStatus(const vector<uint64_t>& _certificateStatus)
{
    m_certificateStatus = _certificateStatus;
    m_certificateStatusHasBeenSet = true;
}

bool DescribeCertificatesRequest::CertificateStatusHasBeenSet() const
{
    return m_certificateStatusHasBeenSet;
}

uint64_t DescribeCertificatesRequest::GetDeployable() const
{
    return m_deployable;
}

void DescribeCertificatesRequest::SetDeployable(const uint64_t& _deployable)
{
    m_deployable = _deployable;
    m_deployableHasBeenSet = true;
}

bool DescribeCertificatesRequest::DeployableHasBeenSet() const
{
    return m_deployableHasBeenSet;
}


