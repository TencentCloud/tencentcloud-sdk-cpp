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

#include <tencentcloud/ocr/v20181119/model/HandwritingEssayOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

HandwritingEssayOCRResponse::HandwritingEssayOCRResponse() :
    m_angleHasBeenSet(false),
    m_wordListHasBeenSet(false)
{
}

CoreInternalOutcome HandwritingEssayOCRResponse::Deserialize(const string &payload)
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


    return CoreInternalOutcome(true);
}

string HandwritingEssayOCRResponse::ToJsonString() const
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


double HandwritingEssayOCRResponse::GetAngle() const
{
    return m_angle;
}

bool HandwritingEssayOCRResponse::AngleHasBeenSet() const
{
    return m_angleHasBeenSet;
}

vector<WordItem> HandwritingEssayOCRResponse::GetWordList() const
{
    return m_wordList;
}

bool HandwritingEssayOCRResponse::WordListHasBeenSet() const
{
    return m_wordListHasBeenSet;
}


