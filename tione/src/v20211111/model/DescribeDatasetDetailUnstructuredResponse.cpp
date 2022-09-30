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

#include <tencentcloud/tione/v20211111/model/DescribeDatasetDetailUnstructuredResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DescribeDatasetDetailUnstructuredResponse::DescribeDatasetDetailUnstructuredResponse() :
    m_annotatedTotalCountHasBeenSet(false),
    m_nonAnnotatedTotalCountHasBeenSet(false),
    m_filterTotalCountHasBeenSet(false),
    m_filterLabelListHasBeenSet(false),
    m_rowTextsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDatasetDetailUnstructuredResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("AnnotatedTotalCount") && !rsp["AnnotatedTotalCount"].IsNull())
    {
        if (!rsp["AnnotatedTotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotatedTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_annotatedTotalCount = rsp["AnnotatedTotalCount"].GetUint64();
        m_annotatedTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("NonAnnotatedTotalCount") && !rsp["NonAnnotatedTotalCount"].IsNull())
    {
        if (!rsp["NonAnnotatedTotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NonAnnotatedTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nonAnnotatedTotalCount = rsp["NonAnnotatedTotalCount"].GetUint64();
        m_nonAnnotatedTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("FilterTotalCount") && !rsp["FilterTotalCount"].IsNull())
    {
        if (!rsp["FilterTotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FilterTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_filterTotalCount = rsp["FilterTotalCount"].GetUint64();
        m_filterTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("FilterLabelList") && !rsp["FilterLabelList"].IsNull())
    {
        if (!rsp["FilterLabelList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FilterLabelList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FilterLabelList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterLabelInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_filterLabelList.push_back(item);
        }
        m_filterLabelListHasBeenSet = true;
    }

    if (rsp.HasMember("RowTexts") && !rsp["RowTexts"].IsNull())
    {
        if (!rsp["RowTexts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RowTexts` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RowTexts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rowTexts.push_back((*itr).GetString());
        }
        m_rowTextsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDatasetDetailUnstructuredResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_annotatedTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotatedTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_annotatedTotalCount, allocator);
    }

    if (m_nonAnnotatedTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonAnnotatedTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nonAnnotatedTotalCount, allocator);
    }

    if (m_filterTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filterTotalCount, allocator);
    }

    if (m_filterLabelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterLabelList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filterLabelList.begin(); itr != m_filterLabelList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rowTextsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowTexts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rowTexts.begin(); itr != m_rowTexts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeDatasetDetailUnstructuredResponse::GetAnnotatedTotalCount() const
{
    return m_annotatedTotalCount;
}

bool DescribeDatasetDetailUnstructuredResponse::AnnotatedTotalCountHasBeenSet() const
{
    return m_annotatedTotalCountHasBeenSet;
}

uint64_t DescribeDatasetDetailUnstructuredResponse::GetNonAnnotatedTotalCount() const
{
    return m_nonAnnotatedTotalCount;
}

bool DescribeDatasetDetailUnstructuredResponse::NonAnnotatedTotalCountHasBeenSet() const
{
    return m_nonAnnotatedTotalCountHasBeenSet;
}

uint64_t DescribeDatasetDetailUnstructuredResponse::GetFilterTotalCount() const
{
    return m_filterTotalCount;
}

bool DescribeDatasetDetailUnstructuredResponse::FilterTotalCountHasBeenSet() const
{
    return m_filterTotalCountHasBeenSet;
}

vector<FilterLabelInfo> DescribeDatasetDetailUnstructuredResponse::GetFilterLabelList() const
{
    return m_filterLabelList;
}

bool DescribeDatasetDetailUnstructuredResponse::FilterLabelListHasBeenSet() const
{
    return m_filterLabelListHasBeenSet;
}

vector<string> DescribeDatasetDetailUnstructuredResponse::GetRowTexts() const
{
    return m_rowTexts;
}

bool DescribeDatasetDetailUnstructuredResponse::RowTextsHasBeenSet() const
{
    return m_rowTextsHasBeenSet;
}


