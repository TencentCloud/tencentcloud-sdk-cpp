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

#include <tencentcloud/ccc/v20200210/model/DescribeCallInMetricsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeCallInMetricsResponse::DescribeCallInMetricsResponse() :
    m_timestampHasBeenSet(false),
    m_totalMetricsHasBeenSet(false),
    m_numberMetricsHasBeenSet(false),
    m_skillGroupMetricsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCallInMetricsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Timestamp") && !rsp["Timestamp"].IsNull())
    {
        if (!rsp["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = rsp["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (rsp.HasMember("TotalMetrics") && !rsp["TotalMetrics"].IsNull())
    {
        if (!rsp["TotalMetrics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TotalMetrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_totalMetrics.Deserialize(rsp["TotalMetrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_totalMetricsHasBeenSet = true;
    }

    if (rsp.HasMember("NumberMetrics") && !rsp["NumberMetrics"].IsNull())
    {
        if (!rsp["NumberMetrics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NumberMetrics` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NumberMetrics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CallInNumberMetrics item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_numberMetrics.push_back(item);
        }
        m_numberMetricsHasBeenSet = true;
    }

    if (rsp.HasMember("SkillGroupMetrics") && !rsp["SkillGroupMetrics"].IsNull())
    {
        if (!rsp["SkillGroupMetrics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkillGroupMetrics` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SkillGroupMetrics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CallInSkillGroupMetrics item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_skillGroupMetrics.push_back(item);
        }
        m_skillGroupMetricsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCallInMetricsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_totalMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_totalMetrics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_numberMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_numberMetrics.begin(); itr != m_numberMetrics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_skillGroupMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_skillGroupMetrics.begin(); itr != m_skillGroupMetrics.end(); ++itr, ++i)
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


int64_t DescribeCallInMetricsResponse::GetTimestamp() const
{
    return m_timestamp;
}

bool DescribeCallInMetricsResponse::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

CallInMetrics DescribeCallInMetricsResponse::GetTotalMetrics() const
{
    return m_totalMetrics;
}

bool DescribeCallInMetricsResponse::TotalMetricsHasBeenSet() const
{
    return m_totalMetricsHasBeenSet;
}

vector<CallInNumberMetrics> DescribeCallInMetricsResponse::GetNumberMetrics() const
{
    return m_numberMetrics;
}

bool DescribeCallInMetricsResponse::NumberMetricsHasBeenSet() const
{
    return m_numberMetricsHasBeenSet;
}

vector<CallInSkillGroupMetrics> DescribeCallInMetricsResponse::GetSkillGroupMetrics() const
{
    return m_skillGroupMetrics;
}

bool DescribeCallInMetricsResponse::SkillGroupMetricsHasBeenSet() const
{
    return m_skillGroupMetricsHasBeenSet;
}


