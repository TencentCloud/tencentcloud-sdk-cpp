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

#include <tencentcloud/wedata/v20210820/model/DescribeFormVersionParamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeFormVersionParamRequest::DescribeFormVersionParamRequest() :
    m_projectIdHasBeenSet(false),
    m_codeTemplateIdHasBeenSet(false),
    m_originalParamsHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_sizeHasBeenSet(false)
{
}

string DescribeFormVersionParamRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codeTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_originalParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originalParams.begin(); itr != m_originalParams.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_size, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeFormVersionParamRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeFormVersionParamRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeFormVersionParamRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeFormVersionParamRequest::GetCodeTemplateId() const
{
    return m_codeTemplateId;
}

void DescribeFormVersionParamRequest::SetCodeTemplateId(const string& _codeTemplateId)
{
    m_codeTemplateId = _codeTemplateId;
    m_codeTemplateIdHasBeenSet = true;
}

bool DescribeFormVersionParamRequest::CodeTemplateIdHasBeenSet() const
{
    return m_codeTemplateIdHasBeenSet;
}

vector<string> DescribeFormVersionParamRequest::GetOriginalParams() const
{
    return m_originalParams;
}

void DescribeFormVersionParamRequest::SetOriginalParams(const vector<string>& _originalParams)
{
    m_originalParams = _originalParams;
    m_originalParamsHasBeenSet = true;
}

bool DescribeFormVersionParamRequest::OriginalParamsHasBeenSet() const
{
    return m_originalParamsHasBeenSet;
}

int64_t DescribeFormVersionParamRequest::GetPage() const
{
    return m_page;
}

void DescribeFormVersionParamRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeFormVersionParamRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeFormVersionParamRequest::GetSize() const
{
    return m_size;
}

void DescribeFormVersionParamRequest::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool DescribeFormVersionParamRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}


