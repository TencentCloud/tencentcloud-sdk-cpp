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

#include <tencentcloud/bma/v20210624/model/CreateCRRightRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

CreateCRRightRequest::CreateCRRightRequest() :
    m_workIdHasBeenSet(false),
    m_tortUrlHasBeenSet(false),
    m_tortTitleHasBeenSet(false),
    m_tortPlatHasBeenSet(false),
    m_rightUrlHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_validStartDateHasBeenSet(false),
    m_validEndDateHasBeenSet(false),
    m_commFileUrlHasBeenSet(false),
    m_commValidStartDateHasBeenSet(false),
    m_commValidEndDateHasBeenSet(false),
    m_homeFileUrlHasBeenSet(false),
    m_homeValidStartDateHasBeenSet(false),
    m_homeValidEndDateHasBeenSet(false),
    m_isProducerHasBeenSet(false),
    m_evidenceFileUrlHasBeenSet(false),
    m_evidenceValidStartDateHasBeenSet(false),
    m_evidenceValidEndDateHasBeenSet(false)
{
}

string CreateCRRightRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workId, allocator);
    }

    if (m_tortUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tortUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_tortTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortTitle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tortTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_tortPlatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortPlat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tortPlat.c_str(), allocator).Move(), allocator);
    }

    if (m_rightUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rightUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_validStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidStartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_validStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_validEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidEndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_validEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_commFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommFileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_commFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_commValidStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommValidStartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_commValidStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_commValidEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommValidEndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_commValidEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_homeFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HomeFileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_homeFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_homeValidStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HomeValidStartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_homeValidStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_homeValidEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HomeValidEndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_homeValidEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_isProducerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProducer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isProducer.c_str(), allocator).Move(), allocator);
    }

    if (m_evidenceFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceFileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_evidenceFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_evidenceValidStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceValidStartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_evidenceValidStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_evidenceValidEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceValidEndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_evidenceValidEndDate.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateCRRightRequest::GetWorkId() const
{
    return m_workId;
}

void CreateCRRightRequest::SetWorkId(const int64_t& _workId)
{
    m_workId = _workId;
    m_workIdHasBeenSet = true;
}

bool CreateCRRightRequest::WorkIdHasBeenSet() const
{
    return m_workIdHasBeenSet;
}

string CreateCRRightRequest::GetTortUrl() const
{
    return m_tortUrl;
}

void CreateCRRightRequest::SetTortUrl(const string& _tortUrl)
{
    m_tortUrl = _tortUrl;
    m_tortUrlHasBeenSet = true;
}

bool CreateCRRightRequest::TortUrlHasBeenSet() const
{
    return m_tortUrlHasBeenSet;
}

string CreateCRRightRequest::GetTortTitle() const
{
    return m_tortTitle;
}

void CreateCRRightRequest::SetTortTitle(const string& _tortTitle)
{
    m_tortTitle = _tortTitle;
    m_tortTitleHasBeenSet = true;
}

bool CreateCRRightRequest::TortTitleHasBeenSet() const
{
    return m_tortTitleHasBeenSet;
}

string CreateCRRightRequest::GetTortPlat() const
{
    return m_tortPlat;
}

void CreateCRRightRequest::SetTortPlat(const string& _tortPlat)
{
    m_tortPlat = _tortPlat;
    m_tortPlatHasBeenSet = true;
}

bool CreateCRRightRequest::TortPlatHasBeenSet() const
{
    return m_tortPlatHasBeenSet;
}

string CreateCRRightRequest::GetRightUrl() const
{
    return m_rightUrl;
}

void CreateCRRightRequest::SetRightUrl(const string& _rightUrl)
{
    m_rightUrl = _rightUrl;
    m_rightUrlHasBeenSet = true;
}

bool CreateCRRightRequest::RightUrlHasBeenSet() const
{
    return m_rightUrlHasBeenSet;
}

string CreateCRRightRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void CreateCRRightRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool CreateCRRightRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string CreateCRRightRequest::GetValidStartDate() const
{
    return m_validStartDate;
}

void CreateCRRightRequest::SetValidStartDate(const string& _validStartDate)
{
    m_validStartDate = _validStartDate;
    m_validStartDateHasBeenSet = true;
}

bool CreateCRRightRequest::ValidStartDateHasBeenSet() const
{
    return m_validStartDateHasBeenSet;
}

string CreateCRRightRequest::GetValidEndDate() const
{
    return m_validEndDate;
}

void CreateCRRightRequest::SetValidEndDate(const string& _validEndDate)
{
    m_validEndDate = _validEndDate;
    m_validEndDateHasBeenSet = true;
}

bool CreateCRRightRequest::ValidEndDateHasBeenSet() const
{
    return m_validEndDateHasBeenSet;
}

string CreateCRRightRequest::GetCommFileUrl() const
{
    return m_commFileUrl;
}

void CreateCRRightRequest::SetCommFileUrl(const string& _commFileUrl)
{
    m_commFileUrl = _commFileUrl;
    m_commFileUrlHasBeenSet = true;
}

bool CreateCRRightRequest::CommFileUrlHasBeenSet() const
{
    return m_commFileUrlHasBeenSet;
}

string CreateCRRightRequest::GetCommValidStartDate() const
{
    return m_commValidStartDate;
}

void CreateCRRightRequest::SetCommValidStartDate(const string& _commValidStartDate)
{
    m_commValidStartDate = _commValidStartDate;
    m_commValidStartDateHasBeenSet = true;
}

bool CreateCRRightRequest::CommValidStartDateHasBeenSet() const
{
    return m_commValidStartDateHasBeenSet;
}

string CreateCRRightRequest::GetCommValidEndDate() const
{
    return m_commValidEndDate;
}

void CreateCRRightRequest::SetCommValidEndDate(const string& _commValidEndDate)
{
    m_commValidEndDate = _commValidEndDate;
    m_commValidEndDateHasBeenSet = true;
}

bool CreateCRRightRequest::CommValidEndDateHasBeenSet() const
{
    return m_commValidEndDateHasBeenSet;
}

string CreateCRRightRequest::GetHomeFileUrl() const
{
    return m_homeFileUrl;
}

void CreateCRRightRequest::SetHomeFileUrl(const string& _homeFileUrl)
{
    m_homeFileUrl = _homeFileUrl;
    m_homeFileUrlHasBeenSet = true;
}

bool CreateCRRightRequest::HomeFileUrlHasBeenSet() const
{
    return m_homeFileUrlHasBeenSet;
}

string CreateCRRightRequest::GetHomeValidStartDate() const
{
    return m_homeValidStartDate;
}

void CreateCRRightRequest::SetHomeValidStartDate(const string& _homeValidStartDate)
{
    m_homeValidStartDate = _homeValidStartDate;
    m_homeValidStartDateHasBeenSet = true;
}

bool CreateCRRightRequest::HomeValidStartDateHasBeenSet() const
{
    return m_homeValidStartDateHasBeenSet;
}

string CreateCRRightRequest::GetHomeValidEndDate() const
{
    return m_homeValidEndDate;
}

void CreateCRRightRequest::SetHomeValidEndDate(const string& _homeValidEndDate)
{
    m_homeValidEndDate = _homeValidEndDate;
    m_homeValidEndDateHasBeenSet = true;
}

bool CreateCRRightRequest::HomeValidEndDateHasBeenSet() const
{
    return m_homeValidEndDateHasBeenSet;
}

string CreateCRRightRequest::GetIsProducer() const
{
    return m_isProducer;
}

void CreateCRRightRequest::SetIsProducer(const string& _isProducer)
{
    m_isProducer = _isProducer;
    m_isProducerHasBeenSet = true;
}

bool CreateCRRightRequest::IsProducerHasBeenSet() const
{
    return m_isProducerHasBeenSet;
}

string CreateCRRightRequest::GetEvidenceFileUrl() const
{
    return m_evidenceFileUrl;
}

void CreateCRRightRequest::SetEvidenceFileUrl(const string& _evidenceFileUrl)
{
    m_evidenceFileUrl = _evidenceFileUrl;
    m_evidenceFileUrlHasBeenSet = true;
}

bool CreateCRRightRequest::EvidenceFileUrlHasBeenSet() const
{
    return m_evidenceFileUrlHasBeenSet;
}

string CreateCRRightRequest::GetEvidenceValidStartDate() const
{
    return m_evidenceValidStartDate;
}

void CreateCRRightRequest::SetEvidenceValidStartDate(const string& _evidenceValidStartDate)
{
    m_evidenceValidStartDate = _evidenceValidStartDate;
    m_evidenceValidStartDateHasBeenSet = true;
}

bool CreateCRRightRequest::EvidenceValidStartDateHasBeenSet() const
{
    return m_evidenceValidStartDateHasBeenSet;
}

string CreateCRRightRequest::GetEvidenceValidEndDate() const
{
    return m_evidenceValidEndDate;
}

void CreateCRRightRequest::SetEvidenceValidEndDate(const string& _evidenceValidEndDate)
{
    m_evidenceValidEndDate = _evidenceValidEndDate;
    m_evidenceValidEndDateHasBeenSet = true;
}

bool CreateCRRightRequest::EvidenceValidEndDateHasBeenSet() const
{
    return m_evidenceValidEndDateHasBeenSet;
}


