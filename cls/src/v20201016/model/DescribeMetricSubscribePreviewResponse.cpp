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

#include <tencentcloud/cls/v20201016/model/DescribeMetricSubscribePreviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeMetricSubscribePreviewResponse::DescribeMetricSubscribePreviewResponse() :
    m_totalCountHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_failCountHasBeenSet(false),
    m_successInstancesHasBeenSet(false),
    m_failInstancesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMetricSubscribePreviewResponse::Deserialize(const string &payload)
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
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("SuccessCount") && !rsp["SuccessCount"].IsNull())
    {
        if (!rsp["SuccessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = rsp["SuccessCount"].GetUint64();
        m_successCountHasBeenSet = true;
    }

    if (rsp.HasMember("FailCount") && !rsp["FailCount"].IsNull())
    {
        if (!rsp["FailCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FailCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failCount = rsp["FailCount"].GetUint64();
        m_failCountHasBeenSet = true;
    }

    if (rsp.HasMember("SuccessInstances") && !rsp["SuccessInstances"].IsNull())
    {
        if (!rsp["SuccessInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SuccessInstances` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SuccessInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_successInstances.push_back(item);
        }
        m_successInstancesHasBeenSet = true;
    }

    if (rsp.HasMember("FailInstances") && !rsp["FailInstances"].IsNull())
    {
        if (!rsp["FailInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailInstances` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failInstances.push_back(item);
        }
        m_failInstancesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMetricSubscribePreviewResponse::ToJsonString() const
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

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_failCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failCount, allocator);
    }

    if (m_successInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_successInstances.begin(); itr != m_successInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_failInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failInstances.begin(); itr != m_failInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
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


uint64_t DescribeMetricSubscribePreviewResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeMetricSubscribePreviewResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t DescribeMetricSubscribePreviewResponse::GetSuccessCount() const
{
    return m_successCount;
}

bool DescribeMetricSubscribePreviewResponse::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

uint64_t DescribeMetricSubscribePreviewResponse::GetFailCount() const
{
    return m_failCount;
}

bool DescribeMetricSubscribePreviewResponse::FailCountHasBeenSet() const
{
    return m_failCountHasBeenSet;
}

vector<InstanceData> DescribeMetricSubscribePreviewResponse::GetSuccessInstances() const
{
    return m_successInstances;
}

bool DescribeMetricSubscribePreviewResponse::SuccessInstancesHasBeenSet() const
{
    return m_successInstancesHasBeenSet;
}

vector<InstanceData> DescribeMetricSubscribePreviewResponse::GetFailInstances() const
{
    return m_failInstances;
}

bool DescribeMetricSubscribePreviewResponse::FailInstancesHasBeenSet() const
{
    return m_failInstancesHasBeenSet;
}


