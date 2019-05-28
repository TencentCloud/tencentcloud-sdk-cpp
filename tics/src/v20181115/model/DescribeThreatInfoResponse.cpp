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

#include <tencentcloud/tics/v20181115/model/DescribeThreatInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tics::V20181115::Model;
using namespace rapidjson;
using namespace std;

DescribeThreatInfoResponse::DescribeThreatInfoResponse() :
    m_returnCodeHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_threatTypesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

CoreInternalOutcome DescribeThreatInfoResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ReturnCode") && !rsp["ReturnCode"].IsNull())
    {
        if (!rsp["ReturnCode"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ReturnCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_returnCode = rsp["ReturnCode"].GetUint64();
        m_returnCodeHasBeenSet = true;
    }

    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsString())
        {
            return CoreInternalOutcome(Error("response `Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(rsp["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("Confidence") && !rsp["Confidence"].IsNull())
    {
        if (!rsp["Confidence"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Confidence` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = rsp["Confidence"].GetUint64();
        m_confidenceHasBeenSet = true;
    }

    if (rsp.HasMember("ThreatTypes") && !rsp["ThreatTypes"].IsNull())
    {
        if (!rsp["ThreatTypes"].IsArray())
            return CoreInternalOutcome(Error("response `ThreatTypes` is not array type"));

        const Value &tmpValue = rsp["ThreatTypes"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_threatTypes.push_back((*itr).GetString());
        }
        m_threatTypesHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `Tags` is not array type"));

        const Value &tmpValue = rsp["Tags"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Context") && !rsp["Context"].IsNull())
    {
        if (!rsp["Context"].IsString())
        {
            return CoreInternalOutcome(Error("response `Context` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_context = string(rsp["Context"].GetString());
        m_contextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeThreatInfoResponse::GetReturnCode() const
{
    return m_returnCode;
}

bool DescribeThreatInfoResponse::ReturnCodeHasBeenSet() const
{
    return m_returnCodeHasBeenSet;
}

string DescribeThreatInfoResponse::GetResult() const
{
    return m_result;
}

bool DescribeThreatInfoResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

uint64_t DescribeThreatInfoResponse::GetConfidence() const
{
    return m_confidence;
}

bool DescribeThreatInfoResponse::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

vector<string> DescribeThreatInfoResponse::GetThreatTypes() const
{
    return m_threatTypes;
}

bool DescribeThreatInfoResponse::ThreatTypesHasBeenSet() const
{
    return m_threatTypesHasBeenSet;
}

vector<string> DescribeThreatInfoResponse::GetTags() const
{
    return m_tags;
}

bool DescribeThreatInfoResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DescribeThreatInfoResponse::GetStatus() const
{
    return m_status;
}

bool DescribeThreatInfoResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeThreatInfoResponse::GetContext() const
{
    return m_context;
}

bool DescribeThreatInfoResponse::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}


