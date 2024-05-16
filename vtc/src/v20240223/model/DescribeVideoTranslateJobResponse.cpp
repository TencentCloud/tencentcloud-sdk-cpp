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

#include <tencentcloud/vtc/v20240223/model/DescribeVideoTranslateJobResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vtc::V20240223::Model;
using namespace std;

DescribeVideoTranslateJobResponse::DescribeVideoTranslateJobResponse() :
    m_jobStatusHasBeenSet(false),
    m_jobErrorCodeHasBeenSet(false),
    m_jobErrorMsgHasBeenSet(false),
    m_resultVideoUrlHasBeenSet(false),
    m_translateResultsHasBeenSet(false),
    m_jobConfirmHasBeenSet(false),
    m_jobAudioTaskIdHasBeenSet(false),
    m_jobVideoModerationIdHasBeenSet(false),
    m_jobVideoIdHasBeenSet(false),
    m_originalVideoUrlHasBeenSet(false),
    m_asrTimestampsHasBeenSet(false),
    m_jobSubmitReqIdHasBeenSet(false),
    m_jobAudioModerationIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVideoTranslateJobResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("JobStatus") && !rsp["JobStatus"].IsNull())
    {
        if (!rsp["JobStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobStatus = rsp["JobStatus"].GetInt64();
        m_jobStatusHasBeenSet = true;
    }

    if (rsp.HasMember("JobErrorCode") && !rsp["JobErrorCode"].IsNull())
    {
        if (!rsp["JobErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobErrorCode = string(rsp["JobErrorCode"].GetString());
        m_jobErrorCodeHasBeenSet = true;
    }

    if (rsp.HasMember("JobErrorMsg") && !rsp["JobErrorMsg"].IsNull())
    {
        if (!rsp["JobErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobErrorMsg = string(rsp["JobErrorMsg"].GetString());
        m_jobErrorMsgHasBeenSet = true;
    }

    if (rsp.HasMember("ResultVideoUrl") && !rsp["ResultVideoUrl"].IsNull())
    {
        if (!rsp["ResultVideoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultVideoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultVideoUrl = string(rsp["ResultVideoUrl"].GetString());
        m_resultVideoUrlHasBeenSet = true;
    }

    if (rsp.HasMember("TranslateResults") && !rsp["TranslateResults"].IsNull())
    {
        if (!rsp["TranslateResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TranslateResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TranslateResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TranslateResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_translateResults.push_back(item);
        }
        m_translateResultsHasBeenSet = true;
    }

    if (rsp.HasMember("JobConfirm") && !rsp["JobConfirm"].IsNull())
    {
        if (!rsp["JobConfirm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfirm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobConfirm = rsp["JobConfirm"].GetInt64();
        m_jobConfirmHasBeenSet = true;
    }

    if (rsp.HasMember("JobAudioTaskId") && !rsp["JobAudioTaskId"].IsNull())
    {
        if (!rsp["JobAudioTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobAudioTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobAudioTaskId = string(rsp["JobAudioTaskId"].GetString());
        m_jobAudioTaskIdHasBeenSet = true;
    }

    if (rsp.HasMember("JobVideoModerationId") && !rsp["JobVideoModerationId"].IsNull())
    {
        if (!rsp["JobVideoModerationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobVideoModerationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobVideoModerationId = string(rsp["JobVideoModerationId"].GetString());
        m_jobVideoModerationIdHasBeenSet = true;
    }

    if (rsp.HasMember("JobVideoId") && !rsp["JobVideoId"].IsNull())
    {
        if (!rsp["JobVideoId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobVideoId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobVideoId = string(rsp["JobVideoId"].GetString());
        m_jobVideoIdHasBeenSet = true;
    }

    if (rsp.HasMember("OriginalVideoUrl") && !rsp["OriginalVideoUrl"].IsNull())
    {
        if (!rsp["OriginalVideoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginalVideoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalVideoUrl = string(rsp["OriginalVideoUrl"].GetString());
        m_originalVideoUrlHasBeenSet = true;
    }

    if (rsp.HasMember("AsrTimestamps") && !rsp["AsrTimestamps"].IsNull())
    {
        if (!rsp["AsrTimestamps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AsrTimestamps` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AsrTimestamps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AsrTimestamps item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_asrTimestamps.push_back(item);
        }
        m_asrTimestampsHasBeenSet = true;
    }

    if (rsp.HasMember("JobSubmitReqId") && !rsp["JobSubmitReqId"].IsNull())
    {
        if (!rsp["JobSubmitReqId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSubmitReqId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobSubmitReqId = string(rsp["JobSubmitReqId"].GetString());
        m_jobSubmitReqIdHasBeenSet = true;
    }

    if (rsp.HasMember("JobAudioModerationId") && !rsp["JobAudioModerationId"].IsNull())
    {
        if (!rsp["JobAudioModerationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobAudioModerationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobAudioModerationId = string(rsp["JobAudioModerationId"].GetString());
        m_jobAudioModerationIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVideoTranslateJobResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_jobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobStatus, allocator);
    }

    if (m_jobErrorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobErrorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_jobErrorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobErrorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_resultVideoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultVideoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultVideoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_translateResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslateResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_translateResults.begin(); itr != m_translateResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_jobConfirmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobConfirm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobConfirm, allocator);
    }

    if (m_jobAudioTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobAudioTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobAudioTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobVideoModerationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobVideoModerationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobVideoModerationId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobVideoIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobVideoId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobVideoId.c_str(), allocator).Move(), allocator);
    }

    if (m_originalVideoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalVideoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalVideoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_asrTimestampsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrTimestamps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_asrTimestamps.begin(); itr != m_asrTimestamps.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_jobSubmitReqIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobSubmitReqId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobSubmitReqId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobAudioModerationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobAudioModerationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobAudioModerationId.c_str(), allocator).Move(), allocator);
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


int64_t DescribeVideoTranslateJobResponse::GetJobStatus() const
{
    return m_jobStatus;
}

bool DescribeVideoTranslateJobResponse::JobStatusHasBeenSet() const
{
    return m_jobStatusHasBeenSet;
}

string DescribeVideoTranslateJobResponse::GetJobErrorCode() const
{
    return m_jobErrorCode;
}

bool DescribeVideoTranslateJobResponse::JobErrorCodeHasBeenSet() const
{
    return m_jobErrorCodeHasBeenSet;
}

string DescribeVideoTranslateJobResponse::GetJobErrorMsg() const
{
    return m_jobErrorMsg;
}

bool DescribeVideoTranslateJobResponse::JobErrorMsgHasBeenSet() const
{
    return m_jobErrorMsgHasBeenSet;
}

string DescribeVideoTranslateJobResponse::GetResultVideoUrl() const
{
    return m_resultVideoUrl;
}

bool DescribeVideoTranslateJobResponse::ResultVideoUrlHasBeenSet() const
{
    return m_resultVideoUrlHasBeenSet;
}

vector<TranslateResult> DescribeVideoTranslateJobResponse::GetTranslateResults() const
{
    return m_translateResults;
}

bool DescribeVideoTranslateJobResponse::TranslateResultsHasBeenSet() const
{
    return m_translateResultsHasBeenSet;
}

int64_t DescribeVideoTranslateJobResponse::GetJobConfirm() const
{
    return m_jobConfirm;
}

bool DescribeVideoTranslateJobResponse::JobConfirmHasBeenSet() const
{
    return m_jobConfirmHasBeenSet;
}

string DescribeVideoTranslateJobResponse::GetJobAudioTaskId() const
{
    return m_jobAudioTaskId;
}

bool DescribeVideoTranslateJobResponse::JobAudioTaskIdHasBeenSet() const
{
    return m_jobAudioTaskIdHasBeenSet;
}

string DescribeVideoTranslateJobResponse::GetJobVideoModerationId() const
{
    return m_jobVideoModerationId;
}

bool DescribeVideoTranslateJobResponse::JobVideoModerationIdHasBeenSet() const
{
    return m_jobVideoModerationIdHasBeenSet;
}

string DescribeVideoTranslateJobResponse::GetJobVideoId() const
{
    return m_jobVideoId;
}

bool DescribeVideoTranslateJobResponse::JobVideoIdHasBeenSet() const
{
    return m_jobVideoIdHasBeenSet;
}

string DescribeVideoTranslateJobResponse::GetOriginalVideoUrl() const
{
    return m_originalVideoUrl;
}

bool DescribeVideoTranslateJobResponse::OriginalVideoUrlHasBeenSet() const
{
    return m_originalVideoUrlHasBeenSet;
}

vector<AsrTimestamps> DescribeVideoTranslateJobResponse::GetAsrTimestamps() const
{
    return m_asrTimestamps;
}

bool DescribeVideoTranslateJobResponse::AsrTimestampsHasBeenSet() const
{
    return m_asrTimestampsHasBeenSet;
}

string DescribeVideoTranslateJobResponse::GetJobSubmitReqId() const
{
    return m_jobSubmitReqId;
}

bool DescribeVideoTranslateJobResponse::JobSubmitReqIdHasBeenSet() const
{
    return m_jobSubmitReqIdHasBeenSet;
}

string DescribeVideoTranslateJobResponse::GetJobAudioModerationId() const
{
    return m_jobAudioModerationId;
}

bool DescribeVideoTranslateJobResponse::JobAudioModerationIdHasBeenSet() const
{
    return m_jobAudioModerationIdHasBeenSet;
}


