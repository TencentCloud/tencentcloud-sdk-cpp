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

#include <tencentcloud/cdb/v20170320/model/DescribeParamTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeParamTemplatesRequest::DescribeParamTemplatesRequest() :
    m_engineVersionsHasBeenSet(false),
    m_engineTypesHasBeenSet(false),
    m_templateNamesHasBeenSet(false),
    m_templateIdsHasBeenSet(false)
{
}

string DescribeParamTemplatesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_engineVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_engineVersions.begin(); itr != m_engineVersions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_engineTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_engineTypes.begin(); itr != m_engineTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templateNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_templateNames.begin(); itr != m_templateNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_templateIds.begin(); itr != m_templateIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeParamTemplatesRequest::GetEngineVersions() const
{
    return m_engineVersions;
}

void DescribeParamTemplatesRequest::SetEngineVersions(const vector<string>& _engineVersions)
{
    m_engineVersions = _engineVersions;
    m_engineVersionsHasBeenSet = true;
}

bool DescribeParamTemplatesRequest::EngineVersionsHasBeenSet() const
{
    return m_engineVersionsHasBeenSet;
}

vector<string> DescribeParamTemplatesRequest::GetEngineTypes() const
{
    return m_engineTypes;
}

void DescribeParamTemplatesRequest::SetEngineTypes(const vector<string>& _engineTypes)
{
    m_engineTypes = _engineTypes;
    m_engineTypesHasBeenSet = true;
}

bool DescribeParamTemplatesRequest::EngineTypesHasBeenSet() const
{
    return m_engineTypesHasBeenSet;
}

vector<string> DescribeParamTemplatesRequest::GetTemplateNames() const
{
    return m_templateNames;
}

void DescribeParamTemplatesRequest::SetTemplateNames(const vector<string>& _templateNames)
{
    m_templateNames = _templateNames;
    m_templateNamesHasBeenSet = true;
}

bool DescribeParamTemplatesRequest::TemplateNamesHasBeenSet() const
{
    return m_templateNamesHasBeenSet;
}

vector<int64_t> DescribeParamTemplatesRequest::GetTemplateIds() const
{
    return m_templateIds;
}

void DescribeParamTemplatesRequest::SetTemplateIds(const vector<int64_t>& _templateIds)
{
    m_templateIds = _templateIds;
    m_templateIdsHasBeenSet = true;
}

bool DescribeParamTemplatesRequest::TemplateIdsHasBeenSet() const
{
    return m_templateIdsHasBeenSet;
}


