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

#include <tencentcloud/faceid/v20180301/model/VerificationDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

VerificationDetail::VerificationDetail() :
    m_errorCodeHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_livenessErrorCodeHasBeenSet(false),
    m_livenessErrorMsgHasBeenSet(false),
    m_compareErrorCodeHasBeenSet(false),
    m_compareErrorMsgHasBeenSet(false),
    m_reqTimestampHasBeenSet(false),
    m_similarityHasBeenSet(false),
    m_seqHasBeenSet(false)
{
}

CoreInternalOutcome VerificationDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VerificationDetail.ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = value["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerificationDetail.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (value.HasMember("LivenessErrorCode") && !value["LivenessErrorCode"].IsNull())
    {
        if (!value["LivenessErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VerificationDetail.LivenessErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_livenessErrorCode = value["LivenessErrorCode"].GetInt64();
        m_livenessErrorCodeHasBeenSet = true;
    }

    if (value.HasMember("LivenessErrorMsg") && !value["LivenessErrorMsg"].IsNull())
    {
        if (!value["LivenessErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerificationDetail.LivenessErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_livenessErrorMsg = string(value["LivenessErrorMsg"].GetString());
        m_livenessErrorMsgHasBeenSet = true;
    }

    if (value.HasMember("CompareErrorCode") && !value["CompareErrorCode"].IsNull())
    {
        if (!value["CompareErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VerificationDetail.CompareErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_compareErrorCode = value["CompareErrorCode"].GetInt64();
        m_compareErrorCodeHasBeenSet = true;
    }

    if (value.HasMember("CompareErrorMsg") && !value["CompareErrorMsg"].IsNull())
    {
        if (!value["CompareErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerificationDetail.CompareErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compareErrorMsg = string(value["CompareErrorMsg"].GetString());
        m_compareErrorMsgHasBeenSet = true;
    }

    if (value.HasMember("ReqTimestamp") && !value["ReqTimestamp"].IsNull())
    {
        if (!value["ReqTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VerificationDetail.ReqTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reqTimestamp = value["ReqTimestamp"].GetUint64();
        m_reqTimestampHasBeenSet = true;
    }

    if (value.HasMember("Similarity") && !value["Similarity"].IsNull())
    {
        if (!value["Similarity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VerificationDetail.Similarity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_similarity = value["Similarity"].GetDouble();
        m_similarityHasBeenSet = true;
    }

    if (value.HasMember("Seq") && !value["Seq"].IsNull())
    {
        if (!value["Seq"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerificationDetail.Seq` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seq = string(value["Seq"].GetString());
        m_seqHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VerificationDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCode, allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_livenessErrorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivenessErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_livenessErrorCode, allocator);
    }

    if (m_livenessErrorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivenessErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_livenessErrorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_compareErrorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compareErrorCode, allocator);
    }

    if (m_compareErrorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compareErrorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_reqTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reqTimestamp, allocator);
    }

    if (m_similarityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Similarity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_similarity, allocator);
    }

    if (m_seqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seq.c_str(), allocator).Move(), allocator);
    }

}


int64_t VerificationDetail::GetErrorCode() const
{
    return m_errorCode;
}

void VerificationDetail::SetErrorCode(const int64_t& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool VerificationDetail::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string VerificationDetail::GetErrorMsg() const
{
    return m_errorMsg;
}

void VerificationDetail::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool VerificationDetail::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

int64_t VerificationDetail::GetLivenessErrorCode() const
{
    return m_livenessErrorCode;
}

void VerificationDetail::SetLivenessErrorCode(const int64_t& _livenessErrorCode)
{
    m_livenessErrorCode = _livenessErrorCode;
    m_livenessErrorCodeHasBeenSet = true;
}

bool VerificationDetail::LivenessErrorCodeHasBeenSet() const
{
    return m_livenessErrorCodeHasBeenSet;
}

string VerificationDetail::GetLivenessErrorMsg() const
{
    return m_livenessErrorMsg;
}

void VerificationDetail::SetLivenessErrorMsg(const string& _livenessErrorMsg)
{
    m_livenessErrorMsg = _livenessErrorMsg;
    m_livenessErrorMsgHasBeenSet = true;
}

bool VerificationDetail::LivenessErrorMsgHasBeenSet() const
{
    return m_livenessErrorMsgHasBeenSet;
}

int64_t VerificationDetail::GetCompareErrorCode() const
{
    return m_compareErrorCode;
}

void VerificationDetail::SetCompareErrorCode(const int64_t& _compareErrorCode)
{
    m_compareErrorCode = _compareErrorCode;
    m_compareErrorCodeHasBeenSet = true;
}

bool VerificationDetail::CompareErrorCodeHasBeenSet() const
{
    return m_compareErrorCodeHasBeenSet;
}

string VerificationDetail::GetCompareErrorMsg() const
{
    return m_compareErrorMsg;
}

void VerificationDetail::SetCompareErrorMsg(const string& _compareErrorMsg)
{
    m_compareErrorMsg = _compareErrorMsg;
    m_compareErrorMsgHasBeenSet = true;
}

bool VerificationDetail::CompareErrorMsgHasBeenSet() const
{
    return m_compareErrorMsgHasBeenSet;
}

uint64_t VerificationDetail::GetReqTimestamp() const
{
    return m_reqTimestamp;
}

void VerificationDetail::SetReqTimestamp(const uint64_t& _reqTimestamp)
{
    m_reqTimestamp = _reqTimestamp;
    m_reqTimestampHasBeenSet = true;
}

bool VerificationDetail::ReqTimestampHasBeenSet() const
{
    return m_reqTimestampHasBeenSet;
}

double VerificationDetail::GetSimilarity() const
{
    return m_similarity;
}

void VerificationDetail::SetSimilarity(const double& _similarity)
{
    m_similarity = _similarity;
    m_similarityHasBeenSet = true;
}

bool VerificationDetail::SimilarityHasBeenSet() const
{
    return m_similarityHasBeenSet;
}

string VerificationDetail::GetSeq() const
{
    return m_seq;
}

void VerificationDetail::SetSeq(const string& _seq)
{
    m_seq = _seq;
    m_seqHasBeenSet = true;
}

bool VerificationDetail::SeqHasBeenSet() const
{
    return m_seqHasBeenSet;
}

