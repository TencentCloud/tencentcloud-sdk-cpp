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
    m_deployableHasBeenSet(false),
    m_uploadHasBeenSet(false),
    m_renewHasBeenSet(false),
    m_filterSourceHasBeenSet(false),
    m_isSMHasBeenSet(false),
    m_filterExpiringHasBeenSet(false),
    m_hostableHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_isPendingIssueHasBeenSet(false),
    m_certIdsHasBeenSet(false)
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

    if (m_uploadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Upload";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_upload, allocator);
    }

    if (m_renewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Renew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_renew, allocator);
    }

    if (m_filterSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterSource.c_str(), allocator).Move(), allocator);
    }

    if (m_isSMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSM";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSM, allocator);
    }

    if (m_filterExpiringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterExpiring";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterExpiring, allocator);
    }

    if (m_hostableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hostable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hostable, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isPendingIssueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPendingIssue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPendingIssue, allocator);
    }

    if (m_certIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_certIds.begin(); itr != m_certIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

int64_t DescribeCertificatesRequest::GetUpload() const
{
    return m_upload;
}

void DescribeCertificatesRequest::SetUpload(const int64_t& _upload)
{
    m_upload = _upload;
    m_uploadHasBeenSet = true;
}

bool DescribeCertificatesRequest::UploadHasBeenSet() const
{
    return m_uploadHasBeenSet;
}

int64_t DescribeCertificatesRequest::GetRenew() const
{
    return m_renew;
}

void DescribeCertificatesRequest::SetRenew(const int64_t& _renew)
{
    m_renew = _renew;
    m_renewHasBeenSet = true;
}

bool DescribeCertificatesRequest::RenewHasBeenSet() const
{
    return m_renewHasBeenSet;
}

string DescribeCertificatesRequest::GetFilterSource() const
{
    return m_filterSource;
}

void DescribeCertificatesRequest::SetFilterSource(const string& _filterSource)
{
    m_filterSource = _filterSource;
    m_filterSourceHasBeenSet = true;
}

bool DescribeCertificatesRequest::FilterSourceHasBeenSet() const
{
    return m_filterSourceHasBeenSet;
}

int64_t DescribeCertificatesRequest::GetIsSM() const
{
    return m_isSM;
}

void DescribeCertificatesRequest::SetIsSM(const int64_t& _isSM)
{
    m_isSM = _isSM;
    m_isSMHasBeenSet = true;
}

bool DescribeCertificatesRequest::IsSMHasBeenSet() const
{
    return m_isSMHasBeenSet;
}

uint64_t DescribeCertificatesRequest::GetFilterExpiring() const
{
    return m_filterExpiring;
}

void DescribeCertificatesRequest::SetFilterExpiring(const uint64_t& _filterExpiring)
{
    m_filterExpiring = _filterExpiring;
    m_filterExpiringHasBeenSet = true;
}

bool DescribeCertificatesRequest::FilterExpiringHasBeenSet() const
{
    return m_filterExpiringHasBeenSet;
}

uint64_t DescribeCertificatesRequest::GetHostable() const
{
    return m_hostable;
}

void DescribeCertificatesRequest::SetHostable(const uint64_t& _hostable)
{
    m_hostable = _hostable;
    m_hostableHasBeenSet = true;
}

bool DescribeCertificatesRequest::HostableHasBeenSet() const
{
    return m_hostableHasBeenSet;
}

vector<Tags> DescribeCertificatesRequest::GetTags() const
{
    return m_tags;
}

void DescribeCertificatesRequest::SetTags(const vector<Tags>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeCertificatesRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t DescribeCertificatesRequest::GetIsPendingIssue() const
{
    return m_isPendingIssue;
}

void DescribeCertificatesRequest::SetIsPendingIssue(const int64_t& _isPendingIssue)
{
    m_isPendingIssue = _isPendingIssue;
    m_isPendingIssueHasBeenSet = true;
}

bool DescribeCertificatesRequest::IsPendingIssueHasBeenSet() const
{
    return m_isPendingIssueHasBeenSet;
}

vector<string> DescribeCertificatesRequest::GetCertIds() const
{
    return m_certIds;
}

void DescribeCertificatesRequest::SetCertIds(const vector<string>& _certIds)
{
    m_certIds = _certIds;
    m_certIdsHasBeenSet = true;
}

bool DescribeCertificatesRequest::CertIdsHasBeenSet() const
{
    return m_certIdsHasBeenSet;
}


