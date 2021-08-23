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

#include <tencentcloud/ticm/v20181127/model/ImageModerationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ticm::V20181127::Model;
using namespace std;

ImageModerationResponse::ImageModerationResponse() :
    m_suggestionHasBeenSet(false),
    m_pornResultHasBeenSet(false),
    m_terrorismResultHasBeenSet(false),
    m_politicsResultHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_disgustResultHasBeenSet(false)
{
}

CoreInternalOutcome ImageModerationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Suggestion") && !rsp["Suggestion"].IsNull())
    {
        if (!rsp["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(rsp["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (rsp.HasMember("PornResult") && !rsp["PornResult"].IsNull())
    {
        if (!rsp["PornResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PornResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pornResult.Deserialize(rsp["PornResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pornResultHasBeenSet = true;
    }

    if (rsp.HasMember("TerrorismResult") && !rsp["TerrorismResult"].IsNull())
    {
        if (!rsp["TerrorismResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TerrorismResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_terrorismResult.Deserialize(rsp["TerrorismResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_terrorismResultHasBeenSet = true;
    }

    if (rsp.HasMember("PoliticsResult") && !rsp["PoliticsResult"].IsNull())
    {
        if (!rsp["PoliticsResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PoliticsResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_politicsResult.Deserialize(rsp["PoliticsResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_politicsResultHasBeenSet = true;
    }

    if (rsp.HasMember("Extra") && !rsp["Extra"].IsNull())
    {
        if (!rsp["Extra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(rsp["Extra"].GetString());
        m_extraHasBeenSet = true;
    }

    if (rsp.HasMember("DisgustResult") && !rsp["DisgustResult"].IsNull())
    {
        if (!rsp["DisgustResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisgustResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_disgustResult.Deserialize(rsp["DisgustResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_disgustResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ImageModerationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_pornResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PornResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pornResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_terrorismResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerrorismResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_terrorismResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_politicsResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoliticsResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_politicsResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    if (m_disgustResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisgustResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_disgustResult.ToJsonObject(value[key.c_str()], allocator);
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


string ImageModerationResponse::GetSuggestion() const
{
    return m_suggestion;
}

bool ImageModerationResponse::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

PornResult ImageModerationResponse::GetPornResult() const
{
    return m_pornResult;
}

bool ImageModerationResponse::PornResultHasBeenSet() const
{
    return m_pornResultHasBeenSet;
}

TerrorismResult ImageModerationResponse::GetTerrorismResult() const
{
    return m_terrorismResult;
}

bool ImageModerationResponse::TerrorismResultHasBeenSet() const
{
    return m_terrorismResultHasBeenSet;
}

PoliticsResult ImageModerationResponse::GetPoliticsResult() const
{
    return m_politicsResult;
}

bool ImageModerationResponse::PoliticsResultHasBeenSet() const
{
    return m_politicsResultHasBeenSet;
}

string ImageModerationResponse::GetExtra() const
{
    return m_extra;
}

bool ImageModerationResponse::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

DisgustResult ImageModerationResponse::GetDisgustResult() const
{
    return m_disgustResult;
}

bool ImageModerationResponse::DisgustResultHasBeenSet() const
{
    return m_disgustResultHasBeenSet;
}


