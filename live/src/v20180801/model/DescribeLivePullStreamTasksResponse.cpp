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

#include <tencentcloud/live/v20180801/model/DescribeLivePullStreamTasksResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeLivePullStreamTasksResponse::DescribeLivePullStreamTasksResponse() :
    m_taskInfosHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_totalPageHasBeenSet(false),
    m_limitTaskNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLivePullStreamTasksResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskInfos") && !rsp["TaskInfos"].IsNull())
    {
        if (!rsp["TaskInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TaskInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PullStreamTaskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskInfos.push_back(item);
        }
        m_taskInfosHasBeenSet = true;
    }

    if (rsp.HasMember("PageNum") && !rsp["PageNum"].IsNull())
    {
        if (!rsp["PageNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PageNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNum = rsp["PageNum"].GetUint64();
        m_pageNumHasBeenSet = true;
    }

    if (rsp.HasMember("PageSize") && !rsp["PageSize"].IsNull())
    {
        if (!rsp["PageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = rsp["PageSize"].GetUint64();
        m_pageSizeHasBeenSet = true;
    }

    if (rsp.HasMember("TotalNum") && !rsp["TotalNum"].IsNull())
    {
        if (!rsp["TotalNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = rsp["TotalNum"].GetUint64();
        m_totalNumHasBeenSet = true;
    }

    if (rsp.HasMember("TotalPage") && !rsp["TotalPage"].IsNull())
    {
        if (!rsp["TotalPage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalPage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPage = rsp["TotalPage"].GetUint64();
        m_totalPageHasBeenSet = true;
    }

    if (rsp.HasMember("LimitTaskNum") && !rsp["LimitTaskNum"].IsNull())
    {
        if (!rsp["LimitTaskNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitTaskNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_limitTaskNum = rsp["LimitTaskNum"].GetUint64();
        m_limitTaskNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLivePullStreamTasksResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskInfos.begin(); itr != m_taskInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNum, allocator);
    }

    if (m_totalPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPage, allocator);
    }

    if (m_limitTaskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitTaskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitTaskNum, allocator);
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


vector<PullStreamTaskInfo> DescribeLivePullStreamTasksResponse::GetTaskInfos() const
{
    return m_taskInfos;
}

bool DescribeLivePullStreamTasksResponse::TaskInfosHasBeenSet() const
{
    return m_taskInfosHasBeenSet;
}

uint64_t DescribeLivePullStreamTasksResponse::GetPageNum() const
{
    return m_pageNum;
}

bool DescribeLivePullStreamTasksResponse::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t DescribeLivePullStreamTasksResponse::GetPageSize() const
{
    return m_pageSize;
}

bool DescribeLivePullStreamTasksResponse::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t DescribeLivePullStreamTasksResponse::GetTotalNum() const
{
    return m_totalNum;
}

bool DescribeLivePullStreamTasksResponse::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

uint64_t DescribeLivePullStreamTasksResponse::GetTotalPage() const
{
    return m_totalPage;
}

bool DescribeLivePullStreamTasksResponse::TotalPageHasBeenSet() const
{
    return m_totalPageHasBeenSet;
}

uint64_t DescribeLivePullStreamTasksResponse::GetLimitTaskNum() const
{
    return m_limitTaskNum;
}

bool DescribeLivePullStreamTasksResponse::LimitTaskNumHasBeenSet() const
{
    return m_limitTaskNumHasBeenSet;
}


