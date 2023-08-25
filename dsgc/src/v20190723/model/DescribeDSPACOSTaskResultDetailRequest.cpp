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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACOSTaskResultDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPACOSTaskResultDetailRequest::DescribeDSPACOSTaskResultDetailRequest() :
    m_dspaIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_bucketResultIdHasBeenSet(false),
    m_complianceIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_categoryIdListHasBeenSet(false)
{
}

string DescribeDSPACOSTaskResultDetailRequest::ToJsonString() const
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

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }

    if (m_bucketResultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketResultId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bucketResultId, allocator);
    }

    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_complianceId, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_levelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_levelId, allocator);
    }

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

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryIdList.begin(); itr != m_categoryIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDSPACOSTaskResultDetailRequest::GetDspaId() const
{
    return m_dspaId;
}

void DescribeDSPACOSTaskResultDetailRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DescribeDSPACOSTaskResultDetailRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t DescribeDSPACOSTaskResultDetailRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeDSPACOSTaskResultDetailRequest::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeDSPACOSTaskResultDetailRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DescribeDSPACOSTaskResultDetailRequest::GetBucketResultId() const
{
    return m_bucketResultId;
}

void DescribeDSPACOSTaskResultDetailRequest::SetBucketResultId(const int64_t& _bucketResultId)
{
    m_bucketResultId = _bucketResultId;
    m_bucketResultIdHasBeenSet = true;
}

bool DescribeDSPACOSTaskResultDetailRequest::BucketResultIdHasBeenSet() const
{
    return m_bucketResultIdHasBeenSet;
}

int64_t DescribeDSPACOSTaskResultDetailRequest::GetComplianceId() const
{
    return m_complianceId;
}

void DescribeDSPACOSTaskResultDetailRequest::SetComplianceId(const int64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool DescribeDSPACOSTaskResultDetailRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

string DescribeDSPACOSTaskResultDetailRequest::GetFileName() const
{
    return m_fileName;
}

void DescribeDSPACOSTaskResultDetailRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool DescribeDSPACOSTaskResultDetailRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t DescribeDSPACOSTaskResultDetailRequest::GetCategoryId() const
{
    return m_categoryId;
}

void DescribeDSPACOSTaskResultDetailRequest::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool DescribeDSPACOSTaskResultDetailRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

int64_t DescribeDSPACOSTaskResultDetailRequest::GetLevelId() const
{
    return m_levelId;
}

void DescribeDSPACOSTaskResultDetailRequest::SetLevelId(const int64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool DescribeDSPACOSTaskResultDetailRequest::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

int64_t DescribeDSPACOSTaskResultDetailRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDSPACOSTaskResultDetailRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDSPACOSTaskResultDetailRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDSPACOSTaskResultDetailRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDSPACOSTaskResultDetailRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDSPACOSTaskResultDetailRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDSPACOSTaskResultDetailRequest::GetBucketName() const
{
    return m_bucketName;
}

void DescribeDSPACOSTaskResultDetailRequest::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool DescribeDSPACOSTaskResultDetailRequest::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

vector<int64_t> DescribeDSPACOSTaskResultDetailRequest::GetCategoryIdList() const
{
    return m_categoryIdList;
}

void DescribeDSPACOSTaskResultDetailRequest::SetCategoryIdList(const vector<int64_t>& _categoryIdList)
{
    m_categoryIdList = _categoryIdList;
    m_categoryIdListHasBeenSet = true;
}

bool DescribeDSPACOSTaskResultDetailRequest::CategoryIdListHasBeenSet() const
{
    return m_categoryIdListHasBeenSet;
}


