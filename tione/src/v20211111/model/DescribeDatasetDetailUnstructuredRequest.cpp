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

#include <tencentcloud/tione/v20211111/model/DescribeDatasetDetailUnstructuredRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DescribeDatasetDetailUnstructuredRequest::DescribeDatasetDetailUnstructuredRequest() :
    m_datasetIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_labelListHasBeenSet(false),
    m_annotationStatusHasBeenSet(false),
    m_datasetIdsHasBeenSet(false)
{
}

string DescribeDatasetDetailUnstructuredRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_datasetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasetId.c_str(), allocator).Move(), allocator);
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

    if (m_labelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelList.begin(); itr != m_labelList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_annotationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_annotationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_datasetIds.begin(); itr != m_datasetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDatasetDetailUnstructuredRequest::GetDatasetId() const
{
    return m_datasetId;
}

void DescribeDatasetDetailUnstructuredRequest::SetDatasetId(const string& _datasetId)
{
    m_datasetId = _datasetId;
    m_datasetIdHasBeenSet = true;
}

bool DescribeDatasetDetailUnstructuredRequest::DatasetIdHasBeenSet() const
{
    return m_datasetIdHasBeenSet;
}

uint64_t DescribeDatasetDetailUnstructuredRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDatasetDetailUnstructuredRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDatasetDetailUnstructuredRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeDatasetDetailUnstructuredRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDatasetDetailUnstructuredRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDatasetDetailUnstructuredRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeDatasetDetailUnstructuredRequest::GetLabelList() const
{
    return m_labelList;
}

void DescribeDatasetDetailUnstructuredRequest::SetLabelList(const vector<string>& _labelList)
{
    m_labelList = _labelList;
    m_labelListHasBeenSet = true;
}

bool DescribeDatasetDetailUnstructuredRequest::LabelListHasBeenSet() const
{
    return m_labelListHasBeenSet;
}

string DescribeDatasetDetailUnstructuredRequest::GetAnnotationStatus() const
{
    return m_annotationStatus;
}

void DescribeDatasetDetailUnstructuredRequest::SetAnnotationStatus(const string& _annotationStatus)
{
    m_annotationStatus = _annotationStatus;
    m_annotationStatusHasBeenSet = true;
}

bool DescribeDatasetDetailUnstructuredRequest::AnnotationStatusHasBeenSet() const
{
    return m_annotationStatusHasBeenSet;
}

vector<string> DescribeDatasetDetailUnstructuredRequest::GetDatasetIds() const
{
    return m_datasetIds;
}

void DescribeDatasetDetailUnstructuredRequest::SetDatasetIds(const vector<string>& _datasetIds)
{
    m_datasetIds = _datasetIds;
    m_datasetIdsHasBeenSet = true;
}

bool DescribeDatasetDetailUnstructuredRequest::DatasetIdsHasBeenSet() const
{
    return m_datasetIdsHasBeenSet;
}


