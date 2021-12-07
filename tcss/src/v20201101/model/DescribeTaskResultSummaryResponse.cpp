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

#include <tencentcloud/tcss/v20201101/model/DescribeTaskResultSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeTaskResultSummaryResponse::DescribeTaskResultSummaryResponse() :
    m_seriousRiskNodeCountHasBeenSet(false),
    m_highRiskNodeCountHasBeenSet(false),
    m_middleRiskNodeCountHasBeenSet(false),
    m_hintRiskNodeCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTaskResultSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SeriousRiskNodeCount") && !rsp["SeriousRiskNodeCount"].IsNull())
    {
        if (!rsp["SeriousRiskNodeCount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SeriousRiskNodeCount` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SeriousRiskNodeCount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_seriousRiskNodeCount.push_back((*itr).GetUint64());
        }
        m_seriousRiskNodeCountHasBeenSet = true;
    }

    if (rsp.HasMember("HighRiskNodeCount") && !rsp["HighRiskNodeCount"].IsNull())
    {
        if (!rsp["HighRiskNodeCount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HighRiskNodeCount` is not array type"));

        const rapidjson::Value &tmpValue = rsp["HighRiskNodeCount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_highRiskNodeCount.push_back((*itr).GetUint64());
        }
        m_highRiskNodeCountHasBeenSet = true;
    }

    if (rsp.HasMember("MiddleRiskNodeCount") && !rsp["MiddleRiskNodeCount"].IsNull())
    {
        if (!rsp["MiddleRiskNodeCount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MiddleRiskNodeCount` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MiddleRiskNodeCount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_middleRiskNodeCount.push_back((*itr).GetUint64());
        }
        m_middleRiskNodeCountHasBeenSet = true;
    }

    if (rsp.HasMember("HintRiskNodeCount") && !rsp["HintRiskNodeCount"].IsNull())
    {
        if (!rsp["HintRiskNodeCount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HintRiskNodeCount` is not array type"));

        const rapidjson::Value &tmpValue = rsp["HintRiskNodeCount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hintRiskNodeCount.push_back((*itr).GetUint64());
        }
        m_hintRiskNodeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTaskResultSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_seriousRiskNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriousRiskNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_seriousRiskNodeCount.begin(); itr != m_seriousRiskNodeCount.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_highRiskNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_highRiskNodeCount.begin(); itr != m_highRiskNodeCount.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_middleRiskNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiddleRiskNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_middleRiskNodeCount.begin(); itr != m_middleRiskNodeCount.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_hintRiskNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HintRiskNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hintRiskNodeCount.begin(); itr != m_hintRiskNodeCount.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
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


vector<uint64_t> DescribeTaskResultSummaryResponse::GetSeriousRiskNodeCount() const
{
    return m_seriousRiskNodeCount;
}

bool DescribeTaskResultSummaryResponse::SeriousRiskNodeCountHasBeenSet() const
{
    return m_seriousRiskNodeCountHasBeenSet;
}

vector<uint64_t> DescribeTaskResultSummaryResponse::GetHighRiskNodeCount() const
{
    return m_highRiskNodeCount;
}

bool DescribeTaskResultSummaryResponse::HighRiskNodeCountHasBeenSet() const
{
    return m_highRiskNodeCountHasBeenSet;
}

vector<uint64_t> DescribeTaskResultSummaryResponse::GetMiddleRiskNodeCount() const
{
    return m_middleRiskNodeCount;
}

bool DescribeTaskResultSummaryResponse::MiddleRiskNodeCountHasBeenSet() const
{
    return m_middleRiskNodeCountHasBeenSet;
}

vector<uint64_t> DescribeTaskResultSummaryResponse::GetHintRiskNodeCount() const
{
    return m_hintRiskNodeCount;
}

bool DescribeTaskResultSummaryResponse::HintRiskNodeCountHasBeenSet() const
{
    return m_hintRiskNodeCountHasBeenSet;
}


