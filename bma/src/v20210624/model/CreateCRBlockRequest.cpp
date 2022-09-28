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

#include <tencentcloud/bma/v20210624/model/CreateCRBlockRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

CreateCRBlockRequest::CreateCRBlockRequest() :
    m_workIdHasBeenSet(false),
    m_tortUrlHasBeenSet(false),
    m_tortTitleHasBeenSet(false),
    m_tortPlatHasBeenSet(false),
    m_blockUrlHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_validStartDateHasBeenSet(false),
    m_validEndDateHasBeenSet(false),
    m_tortPicHasBeenSet(false),
    m_commFileUrlHasBeenSet(false),
    m_commValidStartDateHasBeenSet(false),
    m_commValidEndDateHasBeenSet(false),
    m_isProducerHasBeenSet(false),
    m_evidenceFileUrlHasBeenSet(false),
    m_evidenceValidStartDateHasBeenSet(false),
    m_evidenceValidEndDateHasBeenSet(false)
{
}

string CreateCRBlockRequest::ToJsonString() const
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

    if (m_blockUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_blockUrl.c_str(), allocator).Move(), allocator);
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

    if (m_tortPicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortPic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tortPic.c_str(), allocator).Move(), allocator);
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


int64_t CreateCRBlockRequest::GetWorkId() const
{
    return m_workId;
}

void CreateCRBlockRequest::SetWorkId(const int64_t& _workId)
{
    m_workId = _workId;
    m_workIdHasBeenSet = true;
}

bool CreateCRBlockRequest::WorkIdHasBeenSet() const
{
    return m_workIdHasBeenSet;
}

string CreateCRBlockRequest::GetTortUrl() const
{
    return m_tortUrl;
}

void CreateCRBlockRequest::SetTortUrl(const string& _tortUrl)
{
    m_tortUrl = _tortUrl;
    m_tortUrlHasBeenSet = true;
}

bool CreateCRBlockRequest::TortUrlHasBeenSet() const
{
    return m_tortUrlHasBeenSet;
}

string CreateCRBlockRequest::GetTortTitle() const
{
    return m_tortTitle;
}

void CreateCRBlockRequest::SetTortTitle(const string& _tortTitle)
{
    m_tortTitle = _tortTitle;
    m_tortTitleHasBeenSet = true;
}

bool CreateCRBlockRequest::TortTitleHasBeenSet() const
{
    return m_tortTitleHasBeenSet;
}

string CreateCRBlockRequest::GetTortPlat() const
{
    return m_tortPlat;
}

void CreateCRBlockRequest::SetTortPlat(const string& _tortPlat)
{
    m_tortPlat = _tortPlat;
    m_tortPlatHasBeenSet = true;
}

bool CreateCRBlockRequest::TortPlatHasBeenSet() const
{
    return m_tortPlatHasBeenSet;
}

string CreateCRBlockRequest::GetBlockUrl() const
{
    return m_blockUrl;
}

void CreateCRBlockRequest::SetBlockUrl(const string& _blockUrl)
{
    m_blockUrl = _blockUrl;
    m_blockUrlHasBeenSet = true;
}

bool CreateCRBlockRequest::BlockUrlHasBeenSet() const
{
    return m_blockUrlHasBeenSet;
}

string CreateCRBlockRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void CreateCRBlockRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool CreateCRBlockRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string CreateCRBlockRequest::GetValidStartDate() const
{
    return m_validStartDate;
}

void CreateCRBlockRequest::SetValidStartDate(const string& _validStartDate)
{
    m_validStartDate = _validStartDate;
    m_validStartDateHasBeenSet = true;
}

bool CreateCRBlockRequest::ValidStartDateHasBeenSet() const
{
    return m_validStartDateHasBeenSet;
}

string CreateCRBlockRequest::GetValidEndDate() const
{
    return m_validEndDate;
}

void CreateCRBlockRequest::SetValidEndDate(const string& _validEndDate)
{
    m_validEndDate = _validEndDate;
    m_validEndDateHasBeenSet = true;
}

bool CreateCRBlockRequest::ValidEndDateHasBeenSet() const
{
    return m_validEndDateHasBeenSet;
}

string CreateCRBlockRequest::GetTortPic() const
{
    return m_tortPic;
}

void CreateCRBlockRequest::SetTortPic(const string& _tortPic)
{
    m_tortPic = _tortPic;
    m_tortPicHasBeenSet = true;
}

bool CreateCRBlockRequest::TortPicHasBeenSet() const
{
    return m_tortPicHasBeenSet;
}

string CreateCRBlockRequest::GetCommFileUrl() const
{
    return m_commFileUrl;
}

void CreateCRBlockRequest::SetCommFileUrl(const string& _commFileUrl)
{
    m_commFileUrl = _commFileUrl;
    m_commFileUrlHasBeenSet = true;
}

bool CreateCRBlockRequest::CommFileUrlHasBeenSet() const
{
    return m_commFileUrlHasBeenSet;
}

string CreateCRBlockRequest::GetCommValidStartDate() const
{
    return m_commValidStartDate;
}

void CreateCRBlockRequest::SetCommValidStartDate(const string& _commValidStartDate)
{
    m_commValidStartDate = _commValidStartDate;
    m_commValidStartDateHasBeenSet = true;
}

bool CreateCRBlockRequest::CommValidStartDateHasBeenSet() const
{
    return m_commValidStartDateHasBeenSet;
}

string CreateCRBlockRequest::GetCommValidEndDate() const
{
    return m_commValidEndDate;
}

void CreateCRBlockRequest::SetCommValidEndDate(const string& _commValidEndDate)
{
    m_commValidEndDate = _commValidEndDate;
    m_commValidEndDateHasBeenSet = true;
}

bool CreateCRBlockRequest::CommValidEndDateHasBeenSet() const
{
    return m_commValidEndDateHasBeenSet;
}

string CreateCRBlockRequest::GetIsProducer() const
{
    return m_isProducer;
}

void CreateCRBlockRequest::SetIsProducer(const string& _isProducer)
{
    m_isProducer = _isProducer;
    m_isProducerHasBeenSet = true;
}

bool CreateCRBlockRequest::IsProducerHasBeenSet() const
{
    return m_isProducerHasBeenSet;
}

string CreateCRBlockRequest::GetEvidenceFileUrl() const
{
    return m_evidenceFileUrl;
}

void CreateCRBlockRequest::SetEvidenceFileUrl(const string& _evidenceFileUrl)
{
    m_evidenceFileUrl = _evidenceFileUrl;
    m_evidenceFileUrlHasBeenSet = true;
}

bool CreateCRBlockRequest::EvidenceFileUrlHasBeenSet() const
{
    return m_evidenceFileUrlHasBeenSet;
}

string CreateCRBlockRequest::GetEvidenceValidStartDate() const
{
    return m_evidenceValidStartDate;
}

void CreateCRBlockRequest::SetEvidenceValidStartDate(const string& _evidenceValidStartDate)
{
    m_evidenceValidStartDate = _evidenceValidStartDate;
    m_evidenceValidStartDateHasBeenSet = true;
}

bool CreateCRBlockRequest::EvidenceValidStartDateHasBeenSet() const
{
    return m_evidenceValidStartDateHasBeenSet;
}

string CreateCRBlockRequest::GetEvidenceValidEndDate() const
{
    return m_evidenceValidEndDate;
}

void CreateCRBlockRequest::SetEvidenceValidEndDate(const string& _evidenceValidEndDate)
{
    m_evidenceValidEndDate = _evidenceValidEndDate;
    m_evidenceValidEndDateHasBeenSet = true;
}

bool CreateCRBlockRequest::EvidenceValidEndDateHasBeenSet() const
{
    return m_evidenceValidEndDateHasBeenSet;
}


