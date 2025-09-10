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

#include <tencentcloud/ocr/v20181119/model/DescribeExtractDocAgentJobResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

DescribeExtractDocAgentJobResponse::DescribeExtractDocAgentJobResponse() :
    m_angleHasBeenSet(false),
    m_structuralListHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_jobStatusHasBeenSet(false),
    m_thoughtContentHasBeenSet(false)
{
}

CoreInternalOutcome DescribeExtractDocAgentJobResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("ErrorCode") && !rsp["ErrorCode"].IsNull())
    {
        if (!rsp["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(rsp["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMessage") && !rsp["ErrorMessage"].IsNull())
    {
        if (!rsp["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(rsp["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (rsp.HasMember("JobStatus") && !rsp["JobStatus"].IsNull())
    {
        if (!rsp["JobStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobStatus = string(rsp["JobStatus"].GetString());
        m_jobStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ThoughtContent") && !rsp["ThoughtContent"].IsNull())
    {
        if (!rsp["ThoughtContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThoughtContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thoughtContent = string(rsp["ThoughtContent"].GetString());
        m_thoughtContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeExtractDocAgentJobResponse::ToJsonString() const
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

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_jobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_thoughtContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThoughtContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thoughtContent.c_str(), allocator).Move(), allocator);
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


double DescribeExtractDocAgentJobResponse::GetAngle() const
{
    return m_angle;
}

bool DescribeExtractDocAgentJobResponse::AngleHasBeenSet() const
{
    return m_angleHasBeenSet;
}

vector<GroupInfo> DescribeExtractDocAgentJobResponse::GetStructuralList() const
{
    return m_structuralList;
}

bool DescribeExtractDocAgentJobResponse::StructuralListHasBeenSet() const
{
    return m_structuralListHasBeenSet;
}

string DescribeExtractDocAgentJobResponse::GetErrorCode() const
{
    return m_errorCode;
}

bool DescribeExtractDocAgentJobResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string DescribeExtractDocAgentJobResponse::GetErrorMessage() const
{
    return m_errorMessage;
}

bool DescribeExtractDocAgentJobResponse::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string DescribeExtractDocAgentJobResponse::GetJobStatus() const
{
    return m_jobStatus;
}

bool DescribeExtractDocAgentJobResponse::JobStatusHasBeenSet() const
{
    return m_jobStatusHasBeenSet;
}

string DescribeExtractDocAgentJobResponse::GetThoughtContent() const
{
    return m_thoughtContent;
}

bool DescribeExtractDocAgentJobResponse::ThoughtContentHasBeenSet() const
{
    return m_thoughtContentHasBeenSet;
}


