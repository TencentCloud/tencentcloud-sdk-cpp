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

#include <tencentcloud/wedata/v20210820/model/BatchRerunIntegrationTaskInstancesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BatchRerunIntegrationTaskInstancesResponse::BatchRerunIntegrationTaskInstancesResponse() :
    m_successCountHasBeenSet(false),
    m_failedCountHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_taskNamesHasBeenSet(false)
{
}

CoreInternalOutcome BatchRerunIntegrationTaskInstancesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SuccessCount") && !rsp["SuccessCount"].IsNull())
    {
        if (!rsp["SuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = rsp["SuccessCount"].GetInt64();
        m_successCountHasBeenSet = true;
    }

    if (rsp.HasMember("FailedCount") && !rsp["FailedCount"].IsNull())
    {
        if (!rsp["FailedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FailedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failedCount = rsp["FailedCount"].GetInt64();
        m_failedCountHasBeenSet = true;
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

    if (rsp.HasMember("TaskNames") && !rsp["TaskNames"].IsNull())
    {
        if (!rsp["TaskNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskNames` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TaskNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskNames.push_back((*itr).GetString());
        }
        m_taskNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string BatchRerunIntegrationTaskInstancesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_failedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedCount, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_taskNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskNames.begin(); itr != m_taskNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


int64_t BatchRerunIntegrationTaskInstancesResponse::GetSuccessCount() const
{
    return m_successCount;
}

bool BatchRerunIntegrationTaskInstancesResponse::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

int64_t BatchRerunIntegrationTaskInstancesResponse::GetFailedCount() const
{
    return m_failedCount;
}

bool BatchRerunIntegrationTaskInstancesResponse::FailedCountHasBeenSet() const
{
    return m_failedCountHasBeenSet;
}

int64_t BatchRerunIntegrationTaskInstancesResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool BatchRerunIntegrationTaskInstancesResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<string> BatchRerunIntegrationTaskInstancesResponse::GetTaskNames() const
{
    return m_taskNames;
}

bool BatchRerunIntegrationTaskInstancesResponse::TaskNamesHasBeenSet() const
{
    return m_taskNamesHasBeenSet;
}


