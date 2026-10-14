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

#include <tencentcloud/adp/v20260520/model/DescribeNodeBatchRunResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeNodeBatchRunResponse::DescribeNodeBatchRunResponse() :
    m_failCodeHasBeenSet(false),
    m_failMessageHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_inputRefHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_outputRefHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNodeBatchRunResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FailCode") && !rsp["FailCode"].IsNull())
    {
        if (!rsp["FailCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failCode = string(rsp["FailCode"].GetString());
        m_failCodeHasBeenSet = true;
    }

    if (rsp.HasMember("FailMessage") && !rsp["FailMessage"].IsNull())
    {
        if (!rsp["FailMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failMessage = string(rsp["FailMessage"].GetString());
        m_failMessageHasBeenSet = true;
    }

    if (rsp.HasMember("Input") && !rsp["Input"].IsNull())
    {
        if (!rsp["Input"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Input` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_input = string(rsp["Input"].GetString());
        m_inputHasBeenSet = true;
    }

    if (rsp.HasMember("InputRef") && !rsp["InputRef"].IsNull())
    {
        if (!rsp["InputRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputRef = string(rsp["InputRef"].GetString());
        m_inputRefHasBeenSet = true;
    }

    if (rsp.HasMember("Output") && !rsp["Output"].IsNull())
    {
        if (!rsp["Output"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Output` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_output = string(rsp["Output"].GetString());
        m_outputHasBeenSet = true;
    }

    if (rsp.HasMember("OutputRef") && !rsp["OutputRef"].IsNull())
    {
        if (!rsp["OutputRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputRef = string(rsp["OutputRef"].GetString());
        m_outputRefHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNodeBatchRunResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_failCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failCode.c_str(), allocator).Move(), allocator);
    }

    if (m_failMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_input.c_str(), allocator).Move(), allocator);
    }

    if (m_inputRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputRef.c_str(), allocator).Move(), allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_output.c_str(), allocator).Move(), allocator);
    }

    if (m_outputRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputRef.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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


string DescribeNodeBatchRunResponse::GetFailCode() const
{
    return m_failCode;
}

bool DescribeNodeBatchRunResponse::FailCodeHasBeenSet() const
{
    return m_failCodeHasBeenSet;
}

string DescribeNodeBatchRunResponse::GetFailMessage() const
{
    return m_failMessage;
}

bool DescribeNodeBatchRunResponse::FailMessageHasBeenSet() const
{
    return m_failMessageHasBeenSet;
}

string DescribeNodeBatchRunResponse::GetInput() const
{
    return m_input;
}

bool DescribeNodeBatchRunResponse::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

string DescribeNodeBatchRunResponse::GetInputRef() const
{
    return m_inputRef;
}

bool DescribeNodeBatchRunResponse::InputRefHasBeenSet() const
{
    return m_inputRefHasBeenSet;
}

string DescribeNodeBatchRunResponse::GetOutput() const
{
    return m_output;
}

bool DescribeNodeBatchRunResponse::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string DescribeNodeBatchRunResponse::GetOutputRef() const
{
    return m_outputRef;
}

bool DescribeNodeBatchRunResponse::OutputRefHasBeenSet() const
{
    return m_outputRefHasBeenSet;
}

int64_t DescribeNodeBatchRunResponse::GetStatus() const
{
    return m_status;
}

bool DescribeNodeBatchRunResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


