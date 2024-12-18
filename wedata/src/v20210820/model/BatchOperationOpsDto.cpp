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

#include <tencentcloud/wedata/v20210820/model/BatchOperationOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BatchOperationOpsDto::BatchOperationOpsDto() :
    m_successCountHasBeenSet(false),
    m_failedCountHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_asyncActionIdHasBeenSet(false)
{
}

CoreInternalOutcome BatchOperationOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchOperationOpsDto.SuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetInt64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("FailedCount") && !value["FailedCount"].IsNull())
    {
        if (!value["FailedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchOperationOpsDto.FailedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failedCount = value["FailedCount"].GetInt64();
        m_failedCountHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchOperationOpsDto.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("AsyncActionId") && !value["AsyncActionId"].IsNull())
    {
        if (!value["AsyncActionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchOperationOpsDto.AsyncActionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asyncActionId = string(value["AsyncActionId"].GetString());
        m_asyncActionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchOperationOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_asyncActionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asyncActionId.c_str(), allocator).Move(), allocator);
    }

}


int64_t BatchOperationOpsDto::GetSuccessCount() const
{
    return m_successCount;
}

void BatchOperationOpsDto::SetSuccessCount(const int64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool BatchOperationOpsDto::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

int64_t BatchOperationOpsDto::GetFailedCount() const
{
    return m_failedCount;
}

void BatchOperationOpsDto::SetFailedCount(const int64_t& _failedCount)
{
    m_failedCount = _failedCount;
    m_failedCountHasBeenSet = true;
}

bool BatchOperationOpsDto::FailedCountHasBeenSet() const
{
    return m_failedCountHasBeenSet;
}

int64_t BatchOperationOpsDto::GetTotalCount() const
{
    return m_totalCount;
}

void BatchOperationOpsDto::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool BatchOperationOpsDto::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

string BatchOperationOpsDto::GetAsyncActionId() const
{
    return m_asyncActionId;
}

void BatchOperationOpsDto::SetAsyncActionId(const string& _asyncActionId)
{
    m_asyncActionId = _asyncActionId;
    m_asyncActionIdHasBeenSet = true;
}

bool BatchOperationOpsDto::AsyncActionIdHasBeenSet() const
{
    return m_asyncActionIdHasBeenSet;
}

