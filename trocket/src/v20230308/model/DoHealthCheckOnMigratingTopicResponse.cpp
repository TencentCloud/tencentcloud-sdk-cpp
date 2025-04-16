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

#include <tencentcloud/trocket/v20230308/model/DoHealthCheckOnMigratingTopicResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

DoHealthCheckOnMigratingTopicResponse::DoHealthCheckOnMigratingTopicResponse() :
    m_passedHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_reasonListHasBeenSet(false)
{
}

CoreInternalOutcome DoHealthCheckOnMigratingTopicResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Passed") && !rsp["Passed"].IsNull())
    {
        if (!rsp["Passed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Passed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_passed = rsp["Passed"].GetBool();
        m_passedHasBeenSet = true;
    }

    if (rsp.HasMember("Reason") && !rsp["Reason"].IsNull())
    {
        if (!rsp["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(rsp["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (rsp.HasMember("ReasonList") && !rsp["ReasonList"].IsNull())
    {
        if (!rsp["ReasonList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReasonList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ReasonList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_reasonList.push_back((*itr).GetString());
        }
        m_reasonListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DoHealthCheckOnMigratingTopicResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_passedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Passed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passed, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasonList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reasonList.begin(); itr != m_reasonList.end(); ++itr)
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


bool DoHealthCheckOnMigratingTopicResponse::GetPassed() const
{
    return m_passed;
}

bool DoHealthCheckOnMigratingTopicResponse::PassedHasBeenSet() const
{
    return m_passedHasBeenSet;
}

string DoHealthCheckOnMigratingTopicResponse::GetReason() const
{
    return m_reason;
}

bool DoHealthCheckOnMigratingTopicResponse::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

vector<string> DoHealthCheckOnMigratingTopicResponse::GetReasonList() const
{
    return m_reasonList;
}

bool DoHealthCheckOnMigratingTopicResponse::ReasonListHasBeenSet() const
{
    return m_reasonListHasBeenSet;
}


