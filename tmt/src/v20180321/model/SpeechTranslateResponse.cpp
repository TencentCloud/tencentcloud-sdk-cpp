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

#include <tencentcloud/tmt/v20180321/model/SpeechTranslateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tmt::V20180321::Model;
using namespace std;

SpeechTranslateResponse::SpeechTranslateResponse() :
    m_sessionUuidHasBeenSet(false),
    m_recognizeStatusHasBeenSet(false),
    m_sourceTextHasBeenSet(false),
    m_targetTextHasBeenSet(false),
    m_seqHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_vadSeqHasBeenSet(false)
{
}

CoreInternalOutcome SpeechTranslateResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SessionUuid") && !rsp["SessionUuid"].IsNull())
    {
        if (!rsp["SessionUuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionUuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionUuid = string(rsp["SessionUuid"].GetString());
        m_sessionUuidHasBeenSet = true;
    }

    if (rsp.HasMember("RecognizeStatus") && !rsp["RecognizeStatus"].IsNull())
    {
        if (!rsp["RecognizeStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecognizeStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recognizeStatus = rsp["RecognizeStatus"].GetInt64();
        m_recognizeStatusHasBeenSet = true;
    }

    if (rsp.HasMember("SourceText") && !rsp["SourceText"].IsNull())
    {
        if (!rsp["SourceText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceText = string(rsp["SourceText"].GetString());
        m_sourceTextHasBeenSet = true;
    }

    if (rsp.HasMember("TargetText") && !rsp["TargetText"].IsNull())
    {
        if (!rsp["TargetText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetText = string(rsp["TargetText"].GetString());
        m_targetTextHasBeenSet = true;
    }

    if (rsp.HasMember("Seq") && !rsp["Seq"].IsNull())
    {
        if (!rsp["Seq"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Seq` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_seq = rsp["Seq"].GetInt64();
        m_seqHasBeenSet = true;
    }

    if (rsp.HasMember("Source") && !rsp["Source"].IsNull())
    {
        if (!rsp["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(rsp["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (rsp.HasMember("Target") && !rsp["Target"].IsNull())
    {
        if (!rsp["Target"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Target` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_target = string(rsp["Target"].GetString());
        m_targetHasBeenSet = true;
    }

    if (rsp.HasMember("VadSeq") && !rsp["VadSeq"].IsNull())
    {
        if (!rsp["VadSeq"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VadSeq` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vadSeq = rsp["VadSeq"].GetInt64();
        m_vadSeqHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string SpeechTranslateResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sessionUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_recognizeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecognizeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recognizeStatus, allocator);
    }

    if (m_sourceTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceText.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetText.c_str(), allocator).Move(), allocator);
    }

    if (m_seqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seq, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_vadSeqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VadSeq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vadSeq, allocator);
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


string SpeechTranslateResponse::GetSessionUuid() const
{
    return m_sessionUuid;
}

bool SpeechTranslateResponse::SessionUuidHasBeenSet() const
{
    return m_sessionUuidHasBeenSet;
}

int64_t SpeechTranslateResponse::GetRecognizeStatus() const
{
    return m_recognizeStatus;
}

bool SpeechTranslateResponse::RecognizeStatusHasBeenSet() const
{
    return m_recognizeStatusHasBeenSet;
}

string SpeechTranslateResponse::GetSourceText() const
{
    return m_sourceText;
}

bool SpeechTranslateResponse::SourceTextHasBeenSet() const
{
    return m_sourceTextHasBeenSet;
}

string SpeechTranslateResponse::GetTargetText() const
{
    return m_targetText;
}

bool SpeechTranslateResponse::TargetTextHasBeenSet() const
{
    return m_targetTextHasBeenSet;
}

int64_t SpeechTranslateResponse::GetSeq() const
{
    return m_seq;
}

bool SpeechTranslateResponse::SeqHasBeenSet() const
{
    return m_seqHasBeenSet;
}

string SpeechTranslateResponse::GetSource() const
{
    return m_source;
}

bool SpeechTranslateResponse::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string SpeechTranslateResponse::GetTarget() const
{
    return m_target;
}

bool SpeechTranslateResponse::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

int64_t SpeechTranslateResponse::GetVadSeq() const
{
    return m_vadSeq;
}

bool SpeechTranslateResponse::VadSeqHasBeenSet() const
{
    return m_vadSeqHasBeenSet;
}


