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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAESDiscoveryTaskResultDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPAESDiscoveryTaskResultDetailRequest::DescribeDSPAESDiscoveryTaskResultDetailRequest() :
    m_dspaIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_complianceIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_categoryIdListHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_dbNameHasBeenSet(false)
{
}

string DescribeDSPAESDiscoveryTaskResultDetailRequest::ToJsonString() const
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

    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_complianceId, allocator);
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

    if (m_levelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_levelId, allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDSPAESDiscoveryTaskResultDetailRequest::GetDspaId() const
{
    return m_dspaId;
}

void DescribeDSPAESDiscoveryTaskResultDetailRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DescribeDSPAESDiscoveryTaskResultDetailRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t DescribeDSPAESDiscoveryTaskResultDetailRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeDSPAESDiscoveryTaskResultDetailRequest::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeDSPAESDiscoveryTaskResultDetailRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DescribeDSPAESDiscoveryTaskResultDetailRequest::GetComplianceId() const
{
    return m_complianceId;
}

void DescribeDSPAESDiscoveryTaskResultDetailRequest::SetComplianceId(const int64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool DescribeDSPAESDiscoveryTaskResultDetailRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

int64_t DescribeDSPAESDiscoveryTaskResultDetailRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDSPAESDiscoveryTaskResultDetailRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDSPAESDiscoveryTaskResultDetailRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDSPAESDiscoveryTaskResultDetailRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDSPAESDiscoveryTaskResultDetailRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDSPAESDiscoveryTaskResultDetailRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<int64_t> DescribeDSPAESDiscoveryTaskResultDetailRequest::GetCategoryIdList() const
{
    return m_categoryIdList;
}

void DescribeDSPAESDiscoveryTaskResultDetailRequest::SetCategoryIdList(const vector<int64_t>& _categoryIdList)
{
    m_categoryIdList = _categoryIdList;
    m_categoryIdListHasBeenSet = true;
}

bool DescribeDSPAESDiscoveryTaskResultDetailRequest::CategoryIdListHasBeenSet() const
{
    return m_categoryIdListHasBeenSet;
}

int64_t DescribeDSPAESDiscoveryTaskResultDetailRequest::GetLevelId() const
{
    return m_levelId;
}

void DescribeDSPAESDiscoveryTaskResultDetailRequest::SetLevelId(const int64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool DescribeDSPAESDiscoveryTaskResultDetailRequest::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

string DescribeDSPAESDiscoveryTaskResultDetailRequest::GetDbName() const
{
    return m_dbName;
}

void DescribeDSPAESDiscoveryTaskResultDetailRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DescribeDSPAESDiscoveryTaskResultDetailRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}


