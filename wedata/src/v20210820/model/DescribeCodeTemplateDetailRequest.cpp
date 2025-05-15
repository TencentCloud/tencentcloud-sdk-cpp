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

#include <tencentcloud/wedata/v20210820/model/DescribeCodeTemplateDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeCodeTemplateDetailRequest::DescribeCodeTemplateDetailRequest() :
    m_projectIdHasBeenSet(false),
    m_codeTemplateIdHasBeenSet(false),
    m_needReturnScriptContentHasBeenSet(false)
{
}

string DescribeCodeTemplateDetailRequest::ToJsonString() const
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

    if (m_needReturnScriptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedReturnScriptContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needReturnScriptContent, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCodeTemplateDetailRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeCodeTemplateDetailRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeCodeTemplateDetailRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeCodeTemplateDetailRequest::GetCodeTemplateId() const
{
    return m_codeTemplateId;
}

void DescribeCodeTemplateDetailRequest::SetCodeTemplateId(const string& _codeTemplateId)
{
    m_codeTemplateId = _codeTemplateId;
    m_codeTemplateIdHasBeenSet = true;
}

bool DescribeCodeTemplateDetailRequest::CodeTemplateIdHasBeenSet() const
{
    return m_codeTemplateIdHasBeenSet;
}

bool DescribeCodeTemplateDetailRequest::GetNeedReturnScriptContent() const
{
    return m_needReturnScriptContent;
}

void DescribeCodeTemplateDetailRequest::SetNeedReturnScriptContent(const bool& _needReturnScriptContent)
{
    m_needReturnScriptContent = _needReturnScriptContent;
    m_needReturnScriptContentHasBeenSet = true;
}

bool DescribeCodeTemplateDetailRequest::NeedReturnScriptContentHasBeenSet() const
{
    return m_needReturnScriptContentHasBeenSet;
}


