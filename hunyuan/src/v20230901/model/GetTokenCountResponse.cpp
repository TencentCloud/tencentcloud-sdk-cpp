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

#include <tencentcloud/hunyuan/v20230901/model/GetTokenCountResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

GetTokenCountResponse::GetTokenCountResponse() :
    m_tokenCountHasBeenSet(false),
    m_characterCountHasBeenSet(false),
    m_tokensHasBeenSet(false)
{
}

CoreInternalOutcome GetTokenCountResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TokenCount") && !rsp["TokenCount"].IsNull())
    {
        if (!rsp["TokenCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tokenCount = rsp["TokenCount"].GetInt64();
        m_tokenCountHasBeenSet = true;
    }

    if (rsp.HasMember("CharacterCount") && !rsp["CharacterCount"].IsNull())
    {
        if (!rsp["CharacterCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CharacterCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_characterCount = rsp["CharacterCount"].GetInt64();
        m_characterCountHasBeenSet = true;
    }

    if (rsp.HasMember("Tokens") && !rsp["Tokens"].IsNull())
    {
        if (!rsp["Tokens"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tokens` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tokens"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tokens.push_back((*itr).GetString());
        }
        m_tokensHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetTokenCountResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_tokenCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tokenCount, allocator);
    }

    if (m_characterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CharacterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_characterCount, allocator);
    }

    if (m_tokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tokens.begin(); itr != m_tokens.end(); ++itr)
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


int64_t GetTokenCountResponse::GetTokenCount() const
{
    return m_tokenCount;
}

bool GetTokenCountResponse::TokenCountHasBeenSet() const
{
    return m_tokenCountHasBeenSet;
}

int64_t GetTokenCountResponse::GetCharacterCount() const
{
    return m_characterCount;
}

bool GetTokenCountResponse::CharacterCountHasBeenSet() const
{
    return m_characterCountHasBeenSet;
}

vector<string> GetTokenCountResponse::GetTokens() const
{
    return m_tokens;
}

bool GetTokenCountResponse::TokensHasBeenSet() const
{
    return m_tokensHasBeenSet;
}


