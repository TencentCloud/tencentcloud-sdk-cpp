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

#include <tencentcloud/faceid/v20180301/model/GetDetectInfoEnhancedResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetDetectInfoEnhancedResponse::GetDetectInfoEnhancedResponse() :
    m_textHasBeenSet(false),
    m_idCardDataHasBeenSet(false),
    m_bestFrameHasBeenSet(false),
    m_videoDataHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_intentionVerifyDataHasBeenSet(false),
    m_intentionQuestionResultHasBeenSet(false),
    m_intentionActionResultHasBeenSet(false),
    m_encryptedBodyHasBeenSet(false)
{
}

CoreInternalOutcome GetDetectInfoEnhancedResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("VideoData") && !rsp["VideoData"].IsNull())
    {
        if (!rsp["VideoData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoData.Deserialize(rsp["VideoData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoDataHasBeenSet = true;
    }

    if (rsp.HasMember("Encryption") && !rsp["Encryption"].IsNull())
    {
        if (!rsp["Encryption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Encryption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_encryption.Deserialize(rsp["Encryption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_encryptionHasBeenSet = true;
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

    if (rsp.HasMember("EncryptedBody") && !rsp["EncryptedBody"].IsNull())
    {
        if (!rsp["EncryptedBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptedBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptedBody = string(rsp["EncryptedBody"].GetString());
        m_encryptedBodyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetDetectInfoEnhancedResponse::ToJsonString() const
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

    if (m_videoDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_encryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encryption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_encryption.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_encryptedBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptedBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptedBody.c_str(), allocator).Move(), allocator);
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


DetectInfoText GetDetectInfoEnhancedResponse::GetText() const
{
    return m_text;
}

bool GetDetectInfoEnhancedResponse::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

DetectInfoIdCardData GetDetectInfoEnhancedResponse::GetIdCardData() const
{
    return m_idCardData;
}

bool GetDetectInfoEnhancedResponse::IdCardDataHasBeenSet() const
{
    return m_idCardDataHasBeenSet;
}

DetectInfoBestFrame GetDetectInfoEnhancedResponse::GetBestFrame() const
{
    return m_bestFrame;
}

bool GetDetectInfoEnhancedResponse::BestFrameHasBeenSet() const
{
    return m_bestFrameHasBeenSet;
}

DetectInfoVideoData GetDetectInfoEnhancedResponse::GetVideoData() const
{
    return m_videoData;
}

bool GetDetectInfoEnhancedResponse::VideoDataHasBeenSet() const
{
    return m_videoDataHasBeenSet;
}

Encryption GetDetectInfoEnhancedResponse::GetEncryption() const
{
    return m_encryption;
}

bool GetDetectInfoEnhancedResponse::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}

IntentionVerifyData GetDetectInfoEnhancedResponse::GetIntentionVerifyData() const
{
    return m_intentionVerifyData;
}

bool GetDetectInfoEnhancedResponse::IntentionVerifyDataHasBeenSet() const
{
    return m_intentionVerifyDataHasBeenSet;
}

IntentionQuestionResult GetDetectInfoEnhancedResponse::GetIntentionQuestionResult() const
{
    return m_intentionQuestionResult;
}

bool GetDetectInfoEnhancedResponse::IntentionQuestionResultHasBeenSet() const
{
    return m_intentionQuestionResultHasBeenSet;
}

IntentionActionResult GetDetectInfoEnhancedResponse::GetIntentionActionResult() const
{
    return m_intentionActionResult;
}

bool GetDetectInfoEnhancedResponse::IntentionActionResultHasBeenSet() const
{
    return m_intentionActionResultHasBeenSet;
}

string GetDetectInfoEnhancedResponse::GetEncryptedBody() const
{
    return m_encryptedBody;
}

bool GetDetectInfoEnhancedResponse::EncryptedBodyHasBeenSet() const
{
    return m_encryptedBodyHasBeenSet;
}


