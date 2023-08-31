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

#include <tencentcloud/faceid/v20180301/model/GetEidResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetEidResultResponse::GetEidResultResponse() :
    m_textHasBeenSet(false),
    m_idCardDataHasBeenSet(false),
    m_bestFrameHasBeenSet(false),
    m_eidInfoHasBeenSet(false),
    m_intentionVerifyDataHasBeenSet(false),
    m_intentionQuestionResultHasBeenSet(false),
    m_intentionActionResultHasBeenSet(false)
{
}

CoreInternalOutcome GetEidResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Text") && !rsp["Text"].IsNull())
    {
        if (!rsp["Text"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Text` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_text.Deserialize(rsp["Text"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textHasBeenSet = true;
    }

    if (rsp.HasMember("IdCardData") && !rsp["IdCardData"].IsNull())
    {
        if (!rsp["IdCardData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IdCardData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_idCardData.Deserialize(rsp["IdCardData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_idCardDataHasBeenSet = true;
    }

    if (rsp.HasMember("BestFrame") && !rsp["BestFrame"].IsNull())
    {
        if (!rsp["BestFrame"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BestFrame` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bestFrame.Deserialize(rsp["BestFrame"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bestFrameHasBeenSet = true;
    }

    if (rsp.HasMember("EidInfo") && !rsp["EidInfo"].IsNull())
    {
        if (!rsp["EidInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EidInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eidInfo.Deserialize(rsp["EidInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eidInfoHasBeenSet = true;
    }

    if (rsp.HasMember("IntentionVerifyData") && !rsp["IntentionVerifyData"].IsNull())
    {
        if (!rsp["IntentionVerifyData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntentionVerifyData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_intentionVerifyData.Deserialize(rsp["IntentionVerifyData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_intentionVerifyDataHasBeenSet = true;
    }

    if (rsp.HasMember("IntentionQuestionResult") && !rsp["IntentionQuestionResult"].IsNull())
    {
        if (!rsp["IntentionQuestionResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntentionQuestionResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_intentionQuestionResult.Deserialize(rsp["IntentionQuestionResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_intentionQuestionResultHasBeenSet = true;
    }

    if (rsp.HasMember("IntentionActionResult") && !rsp["IntentionActionResult"].IsNull())
    {
        if (!rsp["IntentionActionResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntentionActionResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_intentionActionResult.Deserialize(rsp["IntentionActionResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_intentionActionResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetEidResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_text.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_idCardDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_idCardData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bestFrameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BestFrame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bestFrame.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eidInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EidInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eidInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_intentionVerifyDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionVerifyData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_intentionVerifyData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_intentionQuestionResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionQuestionResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_intentionQuestionResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_intentionActionResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionActionResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_intentionActionResult.ToJsonObject(value[key.c_str()], allocator);
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


DetectInfoText GetEidResultResponse::GetText() const
{
    return m_text;
}

bool GetEidResultResponse::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

DetectInfoIdCardData GetEidResultResponse::GetIdCardData() const
{
    return m_idCardData;
}

bool GetEidResultResponse::IdCardDataHasBeenSet() const
{
    return m_idCardDataHasBeenSet;
}

DetectInfoBestFrame GetEidResultResponse::GetBestFrame() const
{
    return m_bestFrame;
}

bool GetEidResultResponse::BestFrameHasBeenSet() const
{
    return m_bestFrameHasBeenSet;
}

EidInfo GetEidResultResponse::GetEidInfo() const
{
    return m_eidInfo;
}

bool GetEidResultResponse::EidInfoHasBeenSet() const
{
    return m_eidInfoHasBeenSet;
}

IntentionVerifyData GetEidResultResponse::GetIntentionVerifyData() const
{
    return m_intentionVerifyData;
}

bool GetEidResultResponse::IntentionVerifyDataHasBeenSet() const
{
    return m_intentionVerifyDataHasBeenSet;
}

IntentionQuestionResult GetEidResultResponse::GetIntentionQuestionResult() const
{
    return m_intentionQuestionResult;
}

bool GetEidResultResponse::IntentionQuestionResultHasBeenSet() const
{
    return m_intentionQuestionResultHasBeenSet;
}

IntentionActionResult GetEidResultResponse::GetIntentionActionResult() const
{
    return m_intentionActionResult;
}

bool GetEidResultResponse::IntentionActionResultHasBeenSet() const
{
    return m_intentionActionResultHasBeenSet;
}


