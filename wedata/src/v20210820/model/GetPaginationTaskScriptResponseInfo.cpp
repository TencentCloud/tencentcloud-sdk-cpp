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

#include <tencentcloud/wedata/v20210820/model/GetPaginationTaskScriptResponseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

GetPaginationTaskScriptResponseInfo::GetPaginationTaskScriptResponseInfo() :
    m_projectIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_pageTotalHasBeenSet(false),
    m_base64ScriptContentHasBeenSet(false)
{
}

CoreInternalOutcome GetPaginationTaskScriptResponseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetPaginationTaskScriptResponseInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetPaginationTaskScriptResponseInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GetPaginationTaskScriptResponseInfo.PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("PageNum") && !value["PageNum"].IsNull())
    {
        if (!value["PageNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GetPaginationTaskScriptResponseInfo.PageNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNum = value["PageNum"].GetInt64();
        m_pageNumHasBeenSet = true;
    }

    if (value.HasMember("PageTotal") && !value["PageTotal"].IsNull())
    {
        if (!value["PageTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GetPaginationTaskScriptResponseInfo.PageTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageTotal = value["PageTotal"].GetInt64();
        m_pageTotalHasBeenSet = true;
    }

    if (value.HasMember("Base64ScriptContent") && !value["Base64ScriptContent"].IsNull())
    {
        if (!value["Base64ScriptContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetPaginationTaskScriptResponseInfo.Base64ScriptContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_base64ScriptContent = string(value["Base64ScriptContent"].GetString());
        m_base64ScriptContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GetPaginationTaskScriptResponseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_pageTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageTotal, allocator);
    }

    if (m_base64ScriptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Base64ScriptContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_base64ScriptContent.c_str(), allocator).Move(), allocator);
    }

}


string GetPaginationTaskScriptResponseInfo::GetProjectId() const
{
    return m_projectId;
}

void GetPaginationTaskScriptResponseInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GetPaginationTaskScriptResponseInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string GetPaginationTaskScriptResponseInfo::GetTaskId() const
{
    return m_taskId;
}

void GetPaginationTaskScriptResponseInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool GetPaginationTaskScriptResponseInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t GetPaginationTaskScriptResponseInfo::GetPageSize() const
{
    return m_pageSize;
}

void GetPaginationTaskScriptResponseInfo::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool GetPaginationTaskScriptResponseInfo::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t GetPaginationTaskScriptResponseInfo::GetPageNum() const
{
    return m_pageNum;
}

void GetPaginationTaskScriptResponseInfo::SetPageNum(const int64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool GetPaginationTaskScriptResponseInfo::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

int64_t GetPaginationTaskScriptResponseInfo::GetPageTotal() const
{
    return m_pageTotal;
}

void GetPaginationTaskScriptResponseInfo::SetPageTotal(const int64_t& _pageTotal)
{
    m_pageTotal = _pageTotal;
    m_pageTotalHasBeenSet = true;
}

bool GetPaginationTaskScriptResponseInfo::PageTotalHasBeenSet() const
{
    return m_pageTotalHasBeenSet;
}

string GetPaginationTaskScriptResponseInfo::GetBase64ScriptContent() const
{
    return m_base64ScriptContent;
}

void GetPaginationTaskScriptResponseInfo::SetBase64ScriptContent(const string& _base64ScriptContent)
{
    m_base64ScriptContent = _base64ScriptContent;
    m_base64ScriptContentHasBeenSet = true;
}

bool GetPaginationTaskScriptResponseInfo::Base64ScriptContentHasBeenSet() const
{
    return m_base64ScriptContentHasBeenSet;
}

