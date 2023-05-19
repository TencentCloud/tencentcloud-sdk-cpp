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

#include <tencentcloud/ssl/v20191205/model/DescribeHostDeployRecordDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DescribeHostDeployRecordDetailResponse::DescribeHostDeployRecordDetailResponse() :
    m_totalCountHasBeenSet(false),
    m_deployRecordDetailListHasBeenSet(false),
    m_successTotalCountHasBeenSet(false),
    m_failedTotalCountHasBeenSet(false),
    m_runningTotalCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeHostDeployRecordDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("DeployRecordDetailList") && !rsp["DeployRecordDetailList"].IsNull())
    {
        if (!rsp["DeployRecordDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeployRecordDetailList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DeployRecordDetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeployRecordDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deployRecordDetailList.push_back(item);
        }
        m_deployRecordDetailListHasBeenSet = true;
    }

    if (rsp.HasMember("SuccessTotalCount") && !rsp["SuccessTotalCount"].IsNull())
    {
        if (!rsp["SuccessTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successTotalCount = rsp["SuccessTotalCount"].GetInt64();
        m_successTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("FailedTotalCount") && !rsp["FailedTotalCount"].IsNull())
    {
        if (!rsp["FailedTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FailedTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failedTotalCount = rsp["FailedTotalCount"].GetInt64();
        m_failedTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("RunningTotalCount") && !rsp["RunningTotalCount"].IsNull())
    {
        if (!rsp["RunningTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RunningTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningTotalCount = rsp["RunningTotalCount"].GetInt64();
        m_runningTotalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeHostDeployRecordDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_deployRecordDetailListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployRecordDetailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deployRecordDetailList.begin(); itr != m_deployRecordDetailList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_successTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successTotalCount, allocator);
    }

    if (m_failedTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedTotalCount, allocator);
    }

    if (m_runningTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningTotalCount, allocator);
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


int64_t DescribeHostDeployRecordDetailResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeHostDeployRecordDetailResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<DeployRecordDetail> DescribeHostDeployRecordDetailResponse::GetDeployRecordDetailList() const
{
    return m_deployRecordDetailList;
}

bool DescribeHostDeployRecordDetailResponse::DeployRecordDetailListHasBeenSet() const
{
    return m_deployRecordDetailListHasBeenSet;
}

int64_t DescribeHostDeployRecordDetailResponse::GetSuccessTotalCount() const
{
    return m_successTotalCount;
}

bool DescribeHostDeployRecordDetailResponse::SuccessTotalCountHasBeenSet() const
{
    return m_successTotalCountHasBeenSet;
}

int64_t DescribeHostDeployRecordDetailResponse::GetFailedTotalCount() const
{
    return m_failedTotalCount;
}

bool DescribeHostDeployRecordDetailResponse::FailedTotalCountHasBeenSet() const
{
    return m_failedTotalCountHasBeenSet;
}

int64_t DescribeHostDeployRecordDetailResponse::GetRunningTotalCount() const
{
    return m_runningTotalCount;
}

bool DescribeHostDeployRecordDetailResponse::RunningTotalCountHasBeenSet() const
{
    return m_runningTotalCountHasBeenSet;
}


