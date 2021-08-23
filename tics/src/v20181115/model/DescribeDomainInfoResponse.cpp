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

#include <tencentcloud/tics/v20181115/model/DescribeDomainInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tics::V20181115::Model;
using namespace std;

DescribeDomainInfoResponse::DescribeDomainInfoResponse() :
    m_returnCodeHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_threatTypesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_intelligencesHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDomainInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ReturnCode") && !rsp["ReturnCode"].IsNull())
    {
        if (!rsp["ReturnCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReturnCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_returnCode = rsp["ReturnCode"].GetUint64();
        m_returnCodeHasBeenSet = true;
    }

    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(rsp["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("Confidence") && !rsp["Confidence"].IsNull())
    {
        if (!rsp["Confidence"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Confidence` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = rsp["Confidence"].GetUint64();
        m_confidenceHasBeenSet = true;
    }

    if (rsp.HasMember("ThreatTypes") && !rsp["ThreatTypes"].IsNull())
    {
        if (!rsp["ThreatTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ThreatTypes` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ThreatTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_threatTypes.push_back((*itr).GetString());
        }
        m_threatTypesHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("Intelligences") && !rsp["Intelligences"].IsNull())
    {
        if (!rsp["Intelligences"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Intelligences` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Intelligences"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IntelligenceType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_intelligences.push_back(item);
        }
        m_intelligencesHasBeenSet = true;
    }

    if (rsp.HasMember("Context") && !rsp["Context"].IsNull())
    {
        if (!rsp["Context"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Context` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_context = string(rsp["Context"].GetString());
        m_contextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDomainInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_returnCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_returnCode, allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_threatTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreatTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_threatTypes.begin(); itr != m_threatTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_intelligencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Intelligences";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_intelligences.begin(); itr != m_intelligences.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeDomainInfoResponse::GetReturnCode() const
{
    return m_returnCode;
}

bool DescribeDomainInfoResponse::ReturnCodeHasBeenSet() const
{
    return m_returnCodeHasBeenSet;
}

string DescribeDomainInfoResponse::GetResult() const
{
    return m_result;
}

bool DescribeDomainInfoResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

uint64_t DescribeDomainInfoResponse::GetConfidence() const
{
    return m_confidence;
}

bool DescribeDomainInfoResponse::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

vector<string> DescribeDomainInfoResponse::GetThreatTypes() const
{
    return m_threatTypes;
}

bool DescribeDomainInfoResponse::ThreatTypesHasBeenSet() const
{
    return m_threatTypesHasBeenSet;
}

vector<TagType> DescribeDomainInfoResponse::GetTags() const
{
    return m_tags;
}

bool DescribeDomainInfoResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<IntelligenceType> DescribeDomainInfoResponse::GetIntelligences() const
{
    return m_intelligences;
}

bool DescribeDomainInfoResponse::IntelligencesHasBeenSet() const
{
    return m_intelligencesHasBeenSet;
}

string DescribeDomainInfoResponse::GetContext() const
{
    return m_context;
}

bool DescribeDomainInfoResponse::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}


