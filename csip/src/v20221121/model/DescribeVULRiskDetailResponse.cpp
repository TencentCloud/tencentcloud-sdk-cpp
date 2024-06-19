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

#include <tencentcloud/csip/v20221121/model/DescribeVULRiskDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeVULRiskDetailResponse::DescribeVULRiskDetailResponse() :
    m_serviceSupportHasBeenSet(false),
    m_vulTrendHasBeenSet(false),
    m_vulDataHasBeenSet(false),
    m_questionIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVULRiskDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ServiceSupport") && !rsp["ServiceSupport"].IsNull())
    {
        if (!rsp["ServiceSupport"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceSupport` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ServiceSupport"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceSupport item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceSupport.push_back(item);
        }
        m_serviceSupportHasBeenSet = true;
    }

    if (rsp.HasMember("VulTrend") && !rsp["VulTrend"].IsNull())
    {
        if (!rsp["VulTrend"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulTrend` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VulTrend"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulTrend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vulTrend.push_back(item);
        }
        m_vulTrendHasBeenSet = true;
    }

    if (rsp.HasMember("VulData") && !rsp["VulData"].IsNull())
    {
        if (!rsp["VulData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VulData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vulData.Deserialize(rsp["VulData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vulDataHasBeenSet = true;
    }

    if (rsp.HasMember("QuestionId") && !rsp["QuestionId"].IsNull())
    {
        if (!rsp["QuestionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_questionId = string(rsp["QuestionId"].GetString());
        m_questionIdHasBeenSet = true;
    }

    if (rsp.HasMember("SessionId") && !rsp["SessionId"].IsNull())
    {
        if (!rsp["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(rsp["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVULRiskDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_serviceSupportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSupport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceSupport.begin(); itr != m_serviceSupport.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vulTrendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulTrend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vulTrend.begin(); itr != m_vulTrend.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vulDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vulData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_questionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_questionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
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


vector<ServiceSupport> DescribeVULRiskDetailResponse::GetServiceSupport() const
{
    return m_serviceSupport;
}

bool DescribeVULRiskDetailResponse::ServiceSupportHasBeenSet() const
{
    return m_serviceSupportHasBeenSet;
}

vector<VulTrend> DescribeVULRiskDetailResponse::GetVulTrend() const
{
    return m_vulTrend;
}

bool DescribeVULRiskDetailResponse::VulTrendHasBeenSet() const
{
    return m_vulTrendHasBeenSet;
}

VULRiskInfo DescribeVULRiskDetailResponse::GetVulData() const
{
    return m_vulData;
}

bool DescribeVULRiskDetailResponse::VulDataHasBeenSet() const
{
    return m_vulDataHasBeenSet;
}

string DescribeVULRiskDetailResponse::GetQuestionId() const
{
    return m_questionId;
}

bool DescribeVULRiskDetailResponse::QuestionIdHasBeenSet() const
{
    return m_questionIdHasBeenSet;
}

string DescribeVULRiskDetailResponse::GetSessionId() const
{
    return m_sessionId;
}

bool DescribeVULRiskDetailResponse::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}


