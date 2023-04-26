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

#include <tencentcloud/nlp/v20190408/model/ParseWordsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

ParseWordsResponse::ParseWordsResponse() :
    m_normalTextHasBeenSet(false),
    m_basicParticiplesHasBeenSet(false),
    m_compoundParticiplesHasBeenSet(false),
    m_entitiesHasBeenSet(false)
{
}

CoreInternalOutcome ParseWordsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NormalText") && !rsp["NormalText"].IsNull())
    {
        if (!rsp["NormalText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_normalText = string(rsp["NormalText"].GetString());
        m_normalTextHasBeenSet = true;
    }

    if (rsp.HasMember("BasicParticiples") && !rsp["BasicParticiples"].IsNull())
    {
        if (!rsp["BasicParticiples"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BasicParticiples` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BasicParticiples"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BasicParticiple item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_basicParticiples.push_back(item);
        }
        m_basicParticiplesHasBeenSet = true;
    }

    if (rsp.HasMember("CompoundParticiples") && !rsp["CompoundParticiples"].IsNull())
    {
        if (!rsp["CompoundParticiples"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompoundParticiples` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CompoundParticiples"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CompoundParticiple item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_compoundParticiples.push_back(item);
        }
        m_compoundParticiplesHasBeenSet = true;
    }

    if (rsp.HasMember("Entities") && !rsp["Entities"].IsNull())
    {
        if (!rsp["Entities"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Entities` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Entities"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Entity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_entities.push_back(item);
        }
        m_entitiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ParseWordsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_normalTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_normalText.c_str(), allocator).Move(), allocator);
    }

    if (m_basicParticiplesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicParticiples";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_basicParticiples.begin(); itr != m_basicParticiples.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_compoundParticiplesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompoundParticiples";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_compoundParticiples.begin(); itr != m_compoundParticiples.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_entitiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entities";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_entities.begin(); itr != m_entities.end(); ++itr, ++i)
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


string ParseWordsResponse::GetNormalText() const
{
    return m_normalText;
}

bool ParseWordsResponse::NormalTextHasBeenSet() const
{
    return m_normalTextHasBeenSet;
}

vector<BasicParticiple> ParseWordsResponse::GetBasicParticiples() const
{
    return m_basicParticiples;
}

bool ParseWordsResponse::BasicParticiplesHasBeenSet() const
{
    return m_basicParticiplesHasBeenSet;
}

vector<CompoundParticiple> ParseWordsResponse::GetCompoundParticiples() const
{
    return m_compoundParticiples;
}

bool ParseWordsResponse::CompoundParticiplesHasBeenSet() const
{
    return m_compoundParticiplesHasBeenSet;
}

vector<Entity> ParseWordsResponse::GetEntities() const
{
    return m_entities;
}

bool ParseWordsResponse::EntitiesHasBeenSet() const
{
    return m_entitiesHasBeenSet;
}


