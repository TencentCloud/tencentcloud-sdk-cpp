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

#include <tencentcloud/wedata/v20210820/model/DescribeRuleTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeRuleTemplatesRequest::DescribeRuleTemplatesRequest() :
    m_typeHasBeenSet(false),
    m_sourceObjectTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_sourceEngineTypesHasBeenSet(false)
{
}

string DescribeRuleTemplatesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_sourceObjectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceObjectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceObjectType, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceEngineTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceEngineTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceEngineTypes.begin(); itr != m_sourceEngineTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeRuleTemplatesRequest::GetType() const
{
    return m_type;
}

void DescribeRuleTemplatesRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeRuleTemplatesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t DescribeRuleTemplatesRequest::GetSourceObjectType() const
{
    return m_sourceObjectType;
}

void DescribeRuleTemplatesRequest::SetSourceObjectType(const uint64_t& _sourceObjectType)
{
    m_sourceObjectType = _sourceObjectType;
    m_sourceObjectTypeHasBeenSet = true;
}

bool DescribeRuleTemplatesRequest::SourceObjectTypeHasBeenSet() const
{
    return m_sourceObjectTypeHasBeenSet;
}

string DescribeRuleTemplatesRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeRuleTemplatesRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeRuleTemplatesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<uint64_t> DescribeRuleTemplatesRequest::GetSourceEngineTypes() const
{
    return m_sourceEngineTypes;
}

void DescribeRuleTemplatesRequest::SetSourceEngineTypes(const vector<uint64_t>& _sourceEngineTypes)
{
    m_sourceEngineTypes = _sourceEngineTypes;
    m_sourceEngineTypesHasBeenSet = true;
}

bool DescribeRuleTemplatesRequest::SourceEngineTypesHasBeenSet() const
{
    return m_sourceEngineTypesHasBeenSet;
}


