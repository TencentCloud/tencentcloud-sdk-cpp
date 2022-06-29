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

#include <tencentcloud/teo/v20220106/model/DownloadL7LogsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DownloadL7LogsResponse::DownloadL7LogsResponse() :
    m_dataHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_pagesHasBeenSet(false),
    m_totalSizeHasBeenSet(false)
{
}

CoreInternalOutcome DownloadL7LogsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            L7OfflineLog item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }

    if (rsp.HasMember("PageSize") && !rsp["PageSize"].IsNull())
    {
        if (!rsp["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = rsp["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (rsp.HasMember("PageNo") && !rsp["PageNo"].IsNull())
    {
        if (!rsp["PageNo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PageNo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNo = rsp["PageNo"].GetInt64();
        m_pageNoHasBeenSet = true;
    }

    if (rsp.HasMember("Pages") && !rsp["Pages"].IsNull())
    {
        if (!rsp["Pages"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Pages` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pages = rsp["Pages"].GetInt64();
        m_pagesHasBeenSet = true;
    }

    if (rsp.HasMember("TotalSize") && !rsp["TotalSize"].IsNull())
    {
        if (!rsp["TotalSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = rsp["TotalSize"].GetInt64();
        m_totalSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DownloadL7LogsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNo, allocator);
    }

    if (m_pagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pages, allocator);
    }

    if (m_totalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSize, allocator);
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


vector<L7OfflineLog> DownloadL7LogsResponse::GetData() const
{
    return m_data;
}

bool DownloadL7LogsResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

int64_t DownloadL7LogsResponse::GetPageSize() const
{
    return m_pageSize;
}

bool DownloadL7LogsResponse::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DownloadL7LogsResponse::GetPageNo() const
{
    return m_pageNo;
}

bool DownloadL7LogsResponse::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

int64_t DownloadL7LogsResponse::GetPages() const
{
    return m_pages;
}

bool DownloadL7LogsResponse::PagesHasBeenSet() const
{
    return m_pagesHasBeenSet;
}

int64_t DownloadL7LogsResponse::GetTotalSize() const
{
    return m_totalSize;
}

bool DownloadL7LogsResponse::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}


