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

#include <tencentcloud/ocr/v20181119/model/ExtractDocMultiProResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ExtractDocMultiProResponse::ExtractDocMultiProResponse() :
    m_angleHasBeenSet(false),
    m_structuralListHasBeenSet(false),
    m_wordListHasBeenSet(false),
    m_tokenNumHasBeenSet(false)
{
}

CoreInternalOutcome ExtractDocMultiProResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Angle") && !rsp["Angle"].IsNull())
    {
        if (!rsp["Angle"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Angle` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_angle = rsp["Angle"].GetDouble();
        m_angleHasBeenSet = true;
    }

    if (rsp.HasMember("StructuralList") && !rsp["StructuralList"].IsNull())
    {
        if (!rsp["StructuralList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StructuralList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["StructuralList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GroupInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_structuralList.push_back(item);
        }
        m_structuralListHasBeenSet = true;
    }

    if (rsp.HasMember("WordList") && !rsp["WordList"].IsNull())
    {
        if (!rsp["WordList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WordList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WordList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WordItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_wordList.push_back(item);
        }
        m_wordListHasBeenSet = true;
    }

    if (rsp.HasMember("TokenNum") && !rsp["TokenNum"].IsNull())
    {
        if (!rsp["TokenNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tokenNum = rsp["TokenNum"].GetInt64();
        m_tokenNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ExtractDocMultiProResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_angleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Angle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_angle, allocator);
    }

    if (m_structuralListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StructuralList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_structuralList.begin(); itr != m_structuralList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_wordListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_wordList.begin(); itr != m_wordList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tokenNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tokenNum, allocator);
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


double ExtractDocMultiProResponse::GetAngle() const
{
    return m_angle;
}

bool ExtractDocMultiProResponse::AngleHasBeenSet() const
{
    return m_angleHasBeenSet;
}

vector<GroupInfo> ExtractDocMultiProResponse::GetStructuralList() const
{
    return m_structuralList;
}

bool ExtractDocMultiProResponse::StructuralListHasBeenSet() const
{
    return m_structuralListHasBeenSet;
}

vector<WordItem> ExtractDocMultiProResponse::GetWordList() const
{
    return m_wordList;
}

bool ExtractDocMultiProResponse::WordListHasBeenSet() const
{
    return m_wordListHasBeenSet;
}

int64_t ExtractDocMultiProResponse::GetTokenNum() const
{
    return m_tokenNum;
}

bool ExtractDocMultiProResponse::TokenNumHasBeenSet() const
{
    return m_tokenNumHasBeenSet;
}


