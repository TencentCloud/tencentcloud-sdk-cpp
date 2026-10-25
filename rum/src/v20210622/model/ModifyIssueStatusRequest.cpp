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

#include <tencentcloud/rum/v20210622/model/ModifyIssueStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

ModifyIssueStatusRequest::ModifyIssueStatusRequest() :
    m_appIdHasBeenSet(false),
    m_issueIdHasBeenSet(false),
    m_issueActionHasBeenSet(false),
    m_resolvedReleaseHasBeenSet(false)
{
}

string ModifyIssueStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_issueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_issueId.c_str(), allocator).Move(), allocator);
    }

    if (m_issueActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_issueAction.c_str(), allocator).Move(), allocator);
    }

    if (m_resolvedReleaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResolvedRelease";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resolvedRelease.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyIssueStatusRequest::GetAppId() const
{
    return m_appId;
}

void ModifyIssueStatusRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ModifyIssueStatusRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ModifyIssueStatusRequest::GetIssueId() const
{
    return m_issueId;
}

void ModifyIssueStatusRequest::SetIssueId(const string& _issueId)
{
    m_issueId = _issueId;
    m_issueIdHasBeenSet = true;
}

bool ModifyIssueStatusRequest::IssueIdHasBeenSet() const
{
    return m_issueIdHasBeenSet;
}

string ModifyIssueStatusRequest::GetIssueAction() const
{
    return m_issueAction;
}

void ModifyIssueStatusRequest::SetIssueAction(const string& _issueAction)
{
    m_issueAction = _issueAction;
    m_issueActionHasBeenSet = true;
}

bool ModifyIssueStatusRequest::IssueActionHasBeenSet() const
{
    return m_issueActionHasBeenSet;
}

string ModifyIssueStatusRequest::GetResolvedRelease() const
{
    return m_resolvedRelease;
}

void ModifyIssueStatusRequest::SetResolvedRelease(const string& _resolvedRelease)
{
    m_resolvedRelease = _resolvedRelease;
    m_resolvedReleaseHasBeenSet = true;
}

bool ModifyIssueStatusRequest::ResolvedReleaseHasBeenSet() const
{
    return m_resolvedReleaseHasBeenSet;
}


