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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPADiscoveryTaskResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPADiscoveryTaskResultRequest::DescribeDSPADiscoveryTaskResultRequest() :
    m_dspaIdHasBeenSet(false),
    m_dataSourceTypeHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_resourceRegionHasBeenSet(false)
{
}

string DescribeDSPADiscoveryTaskResultRequest::ToJsonString() const
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

    if (m_dataSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
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

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDSPADiscoveryTaskResultRequest::GetDspaId() const
{
    return m_dspaId;
}

void DescribeDSPADiscoveryTaskResultRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DescribeDSPADiscoveryTaskResultRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string DescribeDSPADiscoveryTaskResultRequest::GetDataSourceType() const
{
    return m_dataSourceType;
}

void DescribeDSPADiscoveryTaskResultRequest::SetDataSourceType(const string& _dataSourceType)
{
    m_dataSourceType = _dataSourceType;
    m_dataSourceTypeHasBeenSet = true;
}

bool DescribeDSPADiscoveryTaskResultRequest::DataSourceTypeHasBeenSet() const
{
    return m_dataSourceTypeHasBeenSet;
}

int64_t DescribeDSPADiscoveryTaskResultRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeDSPADiscoveryTaskResultRequest::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeDSPADiscoveryTaskResultRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeDSPADiscoveryTaskResultRequest::GetTaskName() const
{
    return m_taskName;
}

void DescribeDSPADiscoveryTaskResultRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DescribeDSPADiscoveryTaskResultRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DescribeDSPADiscoveryTaskResultRequest::GetDataSourceId() const
{
    return m_dataSourceId;
}

void DescribeDSPADiscoveryTaskResultRequest::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool DescribeDSPADiscoveryTaskResultRequest::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string DescribeDSPADiscoveryTaskResultRequest::GetDbName() const
{
    return m_dbName;
}

void DescribeDSPADiscoveryTaskResultRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DescribeDSPADiscoveryTaskResultRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

int64_t DescribeDSPADiscoveryTaskResultRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDSPADiscoveryTaskResultRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDSPADiscoveryTaskResultRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDSPADiscoveryTaskResultRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDSPADiscoveryTaskResultRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDSPADiscoveryTaskResultRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDSPADiscoveryTaskResultRequest::GetResourceRegion() const
{
    return m_resourceRegion;
}

void DescribeDSPADiscoveryTaskResultRequest::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool DescribeDSPADiscoveryTaskResultRequest::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}


