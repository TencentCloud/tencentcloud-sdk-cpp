/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tokenhub/v20260322/model/DescribeModelListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

DescribeModelListRequest::DescribeModelListRequest() :
    m_modelIdsHasBeenSet(false),
    m_modelNamesHasBeenSet(false),
    m_modelTypesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeModelListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modelIds.begin(); itr != m_modelIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modelNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modelNames.begin(); itr != m_modelNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modelTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modelTypes.begin(); itr != m_modelTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeModelListRequest::GetModelIds() const
{
    return m_modelIds;
}

void DescribeModelListRequest::SetModelIds(const vector<string>& _modelIds)
{
    m_modelIds = _modelIds;
    m_modelIdsHasBeenSet = true;
}

bool DescribeModelListRequest::ModelIdsHasBeenSet() const
{
    return m_modelIdsHasBeenSet;
}

vector<string> DescribeModelListRequest::GetModelNames() const
{
    return m_modelNames;
}

void DescribeModelListRequest::SetModelNames(const vector<string>& _modelNames)
{
    m_modelNames = _modelNames;
    m_modelNamesHasBeenSet = true;
}

bool DescribeModelListRequest::ModelNamesHasBeenSet() const
{
    return m_modelNamesHasBeenSet;
}

vector<string> DescribeModelListRequest::GetModelTypes() const
{
    return m_modelTypes;
}

void DescribeModelListRequest::SetModelTypes(const vector<string>& _modelTypes)
{
    m_modelTypes = _modelTypes;
    m_modelTypesHasBeenSet = true;
}

bool DescribeModelListRequest::ModelTypesHasBeenSet() const
{
    return m_modelTypesHasBeenSet;
}

vector<string> DescribeModelListRequest::GetTags() const
{
    return m_tags;
}

void DescribeModelListRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeModelListRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t DescribeModelListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeModelListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeModelListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeModelListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeModelListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeModelListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


