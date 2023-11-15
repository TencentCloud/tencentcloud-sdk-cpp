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

#include <tencentcloud/weilingwith/v20230427/model/DescribeAdministrationByTagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeAdministrationByTagRequest::DescribeAdministrationByTagRequest() :
    m_applicationTokenHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_tagHasBeenSet(false)
{
}

string DescribeAdministrationByTagRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAdministrationByTagRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void DescribeAdministrationByTagRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool DescribeAdministrationByTagRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

int64_t DescribeAdministrationByTagRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DescribeAdministrationByTagRequest::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DescribeAdministrationByTagRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string DescribeAdministrationByTagRequest::GetTag() const
{
    return m_tag;
}

void DescribeAdministrationByTagRequest::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool DescribeAdministrationByTagRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}


