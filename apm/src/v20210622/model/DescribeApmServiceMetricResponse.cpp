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

#include <tencentcloud/apm/v20210622/model/DescribeApmServiceMetricResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

DescribeApmServiceMetricResponse::DescribeApmServiceMetricResponse() :
    m_serviceMetricListHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_warningErrorCountHasBeenSet(false),
    m_applicationCountHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_errorCountHasBeenSet(false),
    m_warningCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeApmServiceMetricResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ServiceMetricList") && !rsp["ServiceMetricList"].IsNull())
    {
        if (!rsp["ServiceMetricList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceMetricList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ServiceMetricList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApmServiceMetric item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceMetricList.push_back(item);
        }
        m_serviceMetricListHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("WarningErrorCount") && !rsp["WarningErrorCount"].IsNull())
    {
        if (!rsp["WarningErrorCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WarningErrorCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_warningErrorCount = rsp["WarningErrorCount"].GetInt64();
        m_warningErrorCountHasBeenSet = true;
    }

    if (rsp.HasMember("ApplicationCount") && !rsp["ApplicationCount"].IsNull())
    {
        if (!rsp["ApplicationCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationCount = rsp["ApplicationCount"].GetInt64();
        m_applicationCountHasBeenSet = true;
    }

    if (rsp.HasMember("Page") && !rsp["Page"].IsNull())
    {
        if (!rsp["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = rsp["Page"].GetInt64();
        m_pageHasBeenSet = true;
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

    if (rsp.HasMember("ErrorCount") && !rsp["ErrorCount"].IsNull())
    {
        if (!rsp["ErrorCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCount = rsp["ErrorCount"].GetInt64();
        m_errorCountHasBeenSet = true;
    }

    if (rsp.HasMember("WarningCount") && !rsp["WarningCount"].IsNull())
    {
        if (!rsp["WarningCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WarningCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_warningCount = rsp["WarningCount"].GetInt64();
        m_warningCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeApmServiceMetricResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_serviceMetricListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceMetricList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceMetricList.begin(); itr != m_serviceMetricList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_warningErrorCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarningErrorCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warningErrorCount, allocator);
    }

    if (m_applicationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationCount, allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_errorCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCount, allocator);
    }

    if (m_warningCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarningCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warningCount, allocator);
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


vector<ApmServiceMetric> DescribeApmServiceMetricResponse::GetServiceMetricList() const
{
    return m_serviceMetricList;
}

bool DescribeApmServiceMetricResponse::ServiceMetricListHasBeenSet() const
{
    return m_serviceMetricListHasBeenSet;
}

int64_t DescribeApmServiceMetricResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeApmServiceMetricResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t DescribeApmServiceMetricResponse::GetWarningErrorCount() const
{
    return m_warningErrorCount;
}

bool DescribeApmServiceMetricResponse::WarningErrorCountHasBeenSet() const
{
    return m_warningErrorCountHasBeenSet;
}

int64_t DescribeApmServiceMetricResponse::GetApplicationCount() const
{
    return m_applicationCount;
}

bool DescribeApmServiceMetricResponse::ApplicationCountHasBeenSet() const
{
    return m_applicationCountHasBeenSet;
}

int64_t DescribeApmServiceMetricResponse::GetPage() const
{
    return m_page;
}

bool DescribeApmServiceMetricResponse::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeApmServiceMetricResponse::GetPageSize() const
{
    return m_pageSize;
}

bool DescribeApmServiceMetricResponse::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeApmServiceMetricResponse::GetErrorCount() const
{
    return m_errorCount;
}

bool DescribeApmServiceMetricResponse::ErrorCountHasBeenSet() const
{
    return m_errorCountHasBeenSet;
}

int64_t DescribeApmServiceMetricResponse::GetWarningCount() const
{
    return m_warningCount;
}

bool DescribeApmServiceMetricResponse::WarningCountHasBeenSet() const
{
    return m_warningCountHasBeenSet;
}


