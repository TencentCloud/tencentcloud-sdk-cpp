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

#include <tencentcloud/faceid/v20180301/model/IntentionVerifyData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

IntentionVerifyData::IntentionVerifyData() :
    m_intentionVerifyVideoHasBeenSet(false),
    m_asrResultHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_intentionVerifyBestFrameHasBeenSet(false),
    m_asrResultSimilarityHasBeenSet(false)
{
}

CoreInternalOutcome IntentionVerifyData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IntentionVerifyVideo") && !value["IntentionVerifyVideo"].IsNull())
    {
        if (!value["IntentionVerifyVideo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentionVerifyData.IntentionVerifyVideo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intentionVerifyVideo = string(value["IntentionVerifyVideo"].GetString());
        m_intentionVerifyVideoHasBeenSet = true;
    }

    if (value.HasMember("AsrResult") && !value["AsrResult"].IsNull())
    {
        if (!value["AsrResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentionVerifyData.AsrResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asrResult = string(value["AsrResult"].GetString());
        m_asrResultHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntentionVerifyData.ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = value["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentionVerifyData.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("IntentionVerifyBestFrame") && !value["IntentionVerifyBestFrame"].IsNull())
    {
        if (!value["IntentionVerifyBestFrame"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentionVerifyData.IntentionVerifyBestFrame` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intentionVerifyBestFrame = string(value["IntentionVerifyBestFrame"].GetString());
        m_intentionVerifyBestFrameHasBeenSet = true;
    }

    if (value.HasMember("AsrResultSimilarity") && !value["AsrResultSimilarity"].IsNull())
    {
        if (!value["AsrResultSimilarity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentionVerifyData.AsrResultSimilarity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asrResultSimilarity = string(value["AsrResultSimilarity"].GetString());
        m_asrResultSimilarityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntentionVerifyData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_intentionVerifyVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionVerifyVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intentionVerifyVideo.c_str(), allocator).Move(), allocator);
    }

    if (m_asrResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asrResult.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCode, allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_intentionVerifyBestFrameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionVerifyBestFrame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intentionVerifyBestFrame.c_str(), allocator).Move(), allocator);
    }

    if (m_asrResultSimilarityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrResultSimilarity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asrResultSimilarity.c_str(), allocator).Move(), allocator);
    }

}


string IntentionVerifyData::GetIntentionVerifyVideo() const
{
    return m_intentionVerifyVideo;
}

void IntentionVerifyData::SetIntentionVerifyVideo(const string& _intentionVerifyVideo)
{
    m_intentionVerifyVideo = _intentionVerifyVideo;
    m_intentionVerifyVideoHasBeenSet = true;
}

bool IntentionVerifyData::IntentionVerifyVideoHasBeenSet() const
{
    return m_intentionVerifyVideoHasBeenSet;
}

string IntentionVerifyData::GetAsrResult() const
{
    return m_asrResult;
}

void IntentionVerifyData::SetAsrResult(const string& _asrResult)
{
    m_asrResult = _asrResult;
    m_asrResultHasBeenSet = true;
}

bool IntentionVerifyData::AsrResultHasBeenSet() const
{
    return m_asrResultHasBeenSet;
}

int64_t IntentionVerifyData::GetErrorCode() const
{
    return m_errorCode;
}

void IntentionVerifyData::SetErrorCode(const int64_t& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool IntentionVerifyData::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string IntentionVerifyData::GetErrorMessage() const
{
    return m_errorMessage;
}

void IntentionVerifyData::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool IntentionVerifyData::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string IntentionVerifyData::GetIntentionVerifyBestFrame() const
{
    return m_intentionVerifyBestFrame;
}

void IntentionVerifyData::SetIntentionVerifyBestFrame(const string& _intentionVerifyBestFrame)
{
    m_intentionVerifyBestFrame = _intentionVerifyBestFrame;
    m_intentionVerifyBestFrameHasBeenSet = true;
}

bool IntentionVerifyData::IntentionVerifyBestFrameHasBeenSet() const
{
    return m_intentionVerifyBestFrameHasBeenSet;
}

string IntentionVerifyData::GetAsrResultSimilarity() const
{
    return m_asrResultSimilarity;
}

void IntentionVerifyData::SetAsrResultSimilarity(const string& _asrResultSimilarity)
{
    m_asrResultSimilarity = _asrResultSimilarity;
    m_asrResultSimilarityHasBeenSet = true;
}

bool IntentionVerifyData::AsrResultSimilarityHasBeenSet() const
{
    return m_asrResultSimilarityHasBeenSet;
}

