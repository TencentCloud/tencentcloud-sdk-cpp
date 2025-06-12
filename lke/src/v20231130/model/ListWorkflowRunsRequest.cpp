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

#include <tencentcloud/lke/v20231130/model/ListWorkflowRunsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ListWorkflowRunsRequest::ListWorkflowRunsRequest() :
    m_runEnvHasBeenSet(false),
    m_appBizIdHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false)
{
}

string ListWorkflowRunsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_runEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunEnv";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runEnv, allocator);
    }

    if (m_appBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_loginUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginUin.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginSubAccountUin.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListWorkflowRunsRequest::GetRunEnv() const
{
    return m_runEnv;
}

void ListWorkflowRunsRequest::SetRunEnv(const uint64_t& _runEnv)
{
    m_runEnv = _runEnv;
    m_runEnvHasBeenSet = true;
}

bool ListWorkflowRunsRequest::RunEnvHasBeenSet() const
{
    return m_runEnvHasBeenSet;
}

string ListWorkflowRunsRequest::GetAppBizId() const
{
    return m_appBizId;
}

void ListWorkflowRunsRequest::SetAppBizId(const string& _appBizId)
{
    m_appBizId = _appBizId;
    m_appBizIdHasBeenSet = true;
}

bool ListWorkflowRunsRequest::AppBizIdHasBeenSet() const
{
    return m_appBizIdHasBeenSet;
}

uint64_t ListWorkflowRunsRequest::GetPage() const
{
    return m_page;
}

void ListWorkflowRunsRequest::SetPage(const uint64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool ListWorkflowRunsRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

uint64_t ListWorkflowRunsRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListWorkflowRunsRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListWorkflowRunsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListWorkflowRunsRequest::GetLoginUin() const
{
    return m_loginUin;
}

void ListWorkflowRunsRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool ListWorkflowRunsRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

string ListWorkflowRunsRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void ListWorkflowRunsRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool ListWorkflowRunsRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}


