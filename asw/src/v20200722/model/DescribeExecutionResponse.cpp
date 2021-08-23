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


    if (rsp.HasMember("ExecutionResourceName") && !rsp["ExecutionResourceName"].IsNull())
    {
        if (!rsp["ExecutionResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionResourceName = string(rsp["ExecutionResourceName"].GetString());
        m_executionResourceNameHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("StartDate") && !rsp["StartDate"].IsNull())
    {
        if (!rsp["StartDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDate = string(rsp["StartDate"].GetString());
        m_startDateHasBeenSet = true;
    }

    if (rsp.HasMember("StopDate") && !rsp["StopDate"].IsNull())
    {
        if (!rsp["StopDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StopDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopDate = string(rsp["StopDate"].GetString());
        m_stopDateHasBeenSet = true;
    }

    if (rsp.HasMember("StateMachineResourceName") && !rsp["StateMachineResourceName"].IsNull())
    {
        if (!rsp["StateMachineResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StateMachineResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateMachineResourceName = string(rsp["StateMachineResourceName"].GetString());
        m_stateMachineResourceNameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
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

    if (rsp.HasMember("Output") && !rsp["Output"].IsNull())
    {
        if (!rsp["Output"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Output` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_output = string(rsp["Output"].GetString());
        m_outputHasBeenSet = true;
    }

    if (rsp.HasMember("ExecutionDefinition") && !rsp["ExecutionDefinition"].IsNull())
    {
        if (!rsp["ExecutionDefinition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionDefinition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionDefinition = string(rsp["ExecutionDefinition"].GetString());
        m_executionDefinitionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeExecutionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_executionResourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionResourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_stopDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stopDate.c_str(), allocator).Move(), allocator);
    }

    if (m_stateMachineResourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateMachineResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateMachineResourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_input.c_str(), allocator).Move(), allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_output.c_str(), allocator).Move(), allocator);
    }

    if (m_executionDefinitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionDefinition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionDefinition.c_str(), allocator).Move(), allocator);
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


