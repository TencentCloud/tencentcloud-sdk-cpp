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

#include <tencentcloud/asw/v20200722/model/DescribeExecutionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asw::V20200722::Model;
using namespace rapidjson;
using namespace std;

DescribeExecutionResponse::DescribeExecutionResponse() :
    m_executionResourceNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_stopDateHasBeenSet(false),
    m_stateMachineResourceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_executionDefinitionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeExecutionResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ExecutionResourceName") && !rsp["ExecutionResourceName"].IsNull())
    {
        if (!rsp["ExecutionResourceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ExecutionResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionResourceName = string(rsp["ExecutionResourceName"].GetString());
        m_executionResourceNameHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("StartDate") && !rsp["StartDate"].IsNull())
    {
        if (!rsp["StartDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `StartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDate = string(rsp["StartDate"].GetString());
        m_startDateHasBeenSet = true;
    }

    if (rsp.HasMember("StopDate") && !rsp["StopDate"].IsNull())
    {
        if (!rsp["StopDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `StopDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopDate = string(rsp["StopDate"].GetString());
        m_stopDateHasBeenSet = true;
    }

    if (rsp.HasMember("StateMachineResourceName") && !rsp["StateMachineResourceName"].IsNull())
    {
        if (!rsp["StateMachineResourceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `StateMachineResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateMachineResourceName = string(rsp["StateMachineResourceName"].GetString());
        m_stateMachineResourceNameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Input") && !rsp["Input"].IsNull())
    {
        if (!rsp["Input"].IsString())
        {
            return CoreInternalOutcome(Error("response `Input` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_input = string(rsp["Input"].GetString());
        m_inputHasBeenSet = true;
    }

    if (rsp.HasMember("Output") && !rsp["Output"].IsNull())
    {
        if (!rsp["Output"].IsString())
        {
            return CoreInternalOutcome(Error("response `Output` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_output = string(rsp["Output"].GetString());
        m_outputHasBeenSet = true;
    }

    if (rsp.HasMember("ExecutionDefinition") && !rsp["ExecutionDefinition"].IsNull())
    {
        if (!rsp["ExecutionDefinition"].IsString())
        {
            return CoreInternalOutcome(Error("response `ExecutionDefinition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionDefinition = string(rsp["ExecutionDefinition"].GetString());
        m_executionDefinitionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeExecutionResponse::GetExecutionResourceName() const
{
    return m_executionResourceName;
}

bool DescribeExecutionResponse::ExecutionResourceNameHasBeenSet() const
{
    return m_executionResourceNameHasBeenSet;
}

string DescribeExecutionResponse::GetName() const
{
    return m_name;
}

bool DescribeExecutionResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeExecutionResponse::GetStartDate() const
{
    return m_startDate;
}

bool DescribeExecutionResponse::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string DescribeExecutionResponse::GetStopDate() const
{
    return m_stopDate;
}

bool DescribeExecutionResponse::StopDateHasBeenSet() const
{
    return m_stopDateHasBeenSet;
}

string DescribeExecutionResponse::GetStateMachineResourceName() const
{
    return m_stateMachineResourceName;
}

bool DescribeExecutionResponse::StateMachineResourceNameHasBeenSet() const
{
    return m_stateMachineResourceNameHasBeenSet;
}

string DescribeExecutionResponse::GetStatus() const
{
    return m_status;
}

bool DescribeExecutionResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeExecutionResponse::GetInput() const
{
    return m_input;
}

bool DescribeExecutionResponse::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

string DescribeExecutionResponse::GetOutput() const
{
    return m_output;
}

bool DescribeExecutionResponse::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string DescribeExecutionResponse::GetExecutionDefinition() const
{
    return m_executionDefinition;
}

bool DescribeExecutionResponse::ExecutionDefinitionHasBeenSet() const
{
    return m_executionDefinitionHasBeenSet;
}


