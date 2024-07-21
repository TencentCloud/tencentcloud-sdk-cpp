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

#include <tencentcloud/cynosdb/v20190107/model/ExportResourcePackageDeductDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ExportResourcePackageDeductDetailsRequest::ExportResourcePackageDeductDetailsRequest() :
    m_packageIdHasBeenSet(false),
    m_clusterIdsHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_fileTypeHasBeenSet(false)
{
}

string ExportResourcePackageDeductDetailsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterIds.begin(); itr != m_clusterIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderByType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_limit.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_offset.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExportResourcePackageDeductDetailsRequest::GetPackageId() const
{
    return m_packageId;
}

void ExportResourcePackageDeductDetailsRequest::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool ExportResourcePackageDeductDetailsRequest::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

vector<string> ExportResourcePackageDeductDetailsRequest::GetClusterIds() const
{
    return m_clusterIds;
}

void ExportResourcePackageDeductDetailsRequest::SetClusterIds(const vector<string>& _clusterIds)
{
    m_clusterIds = _clusterIds;
    m_clusterIdsHasBeenSet = true;
}

bool ExportResourcePackageDeductDetailsRequest::ClusterIdsHasBeenSet() const
{
    return m_clusterIdsHasBeenSet;
}

string ExportResourcePackageDeductDetailsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void ExportResourcePackageDeductDetailsRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool ExportResourcePackageDeductDetailsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string ExportResourcePackageDeductDetailsRequest::GetOrderByType() const
{
    return m_orderByType;
}

void ExportResourcePackageDeductDetailsRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool ExportResourcePackageDeductDetailsRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}

string ExportResourcePackageDeductDetailsRequest::GetStartTime() const
{
    return m_startTime;
}

void ExportResourcePackageDeductDetailsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ExportResourcePackageDeductDetailsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ExportResourcePackageDeductDetailsRequest::GetEndTime() const
{
    return m_endTime;
}

void ExportResourcePackageDeductDetailsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ExportResourcePackageDeductDetailsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ExportResourcePackageDeductDetailsRequest::GetLimit() const
{
    return m_limit;
}

void ExportResourcePackageDeductDetailsRequest::SetLimit(const string& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ExportResourcePackageDeductDetailsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string ExportResourcePackageDeductDetailsRequest::GetOffset() const
{
    return m_offset;
}

void ExportResourcePackageDeductDetailsRequest::SetOffset(const string& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ExportResourcePackageDeductDetailsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string ExportResourcePackageDeductDetailsRequest::GetFileType() const
{
    return m_fileType;
}

void ExportResourcePackageDeductDetailsRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool ExportResourcePackageDeductDetailsRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}


