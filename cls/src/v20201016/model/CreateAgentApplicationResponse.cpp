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

#include <tencentcloud/cls/v20201016/model/CreateAgentApplicationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateAgentApplicationResponse::CreateAgentApplicationResponse() :
    m_applicationIdHasBeenSet(false),
    m_logTopicsHasBeenSet(false),
    m_metricsTopicsHasBeenSet(false)
{
}

CoreInternalOutcome CreateAgentApplicationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ApplicationId") && !rsp["ApplicationId"].IsNull())
    {
        if (!rsp["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(rsp["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (rsp.HasMember("LogTopics") && !rsp["LogTopics"].IsNull())
    {
        if (!rsp["LogTopics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogTopics` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LogTopics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentTopicInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_logTopics.push_back(item);
        }
        m_logTopicsHasBeenSet = true;
    }

    if (rsp.HasMember("MetricsTopics") && !rsp["MetricsTopics"].IsNull())
    {
        if (!rsp["MetricsTopics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricsTopics` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MetricsTopics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentTopicInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metricsTopics.push_back(item);
        }
        m_metricsTopicsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateAgentApplicationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_logTopicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_logTopics.begin(); itr != m_logTopics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_metricsTopicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricsTopics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metricsTopics.begin(); itr != m_metricsTopics.end(); ++itr, ++i)
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


string CreateAgentApplicationResponse::GetApplicationId() const
{
    return m_applicationId;
}

bool CreateAgentApplicationResponse::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

vector<AgentTopicInfo> CreateAgentApplicationResponse::GetLogTopics() const
{
    return m_logTopics;
}

bool CreateAgentApplicationResponse::LogTopicsHasBeenSet() const
{
    return m_logTopicsHasBeenSet;
}

vector<AgentTopicInfo> CreateAgentApplicationResponse::GetMetricsTopics() const
{
    return m_metricsTopics;
}

bool CreateAgentApplicationResponse::MetricsTopicsHasBeenSet() const
{
    return m_metricsTopicsHasBeenSet;
}


