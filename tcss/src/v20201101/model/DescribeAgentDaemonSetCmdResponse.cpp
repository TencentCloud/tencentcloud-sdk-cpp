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

#include <tencentcloud/tcss/v20201101/model/DescribeAgentDaemonSetCmdResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAgentDaemonSetCmdResponse::DescribeAgentDaemonSetCmdResponse() :
    m_commandHasBeenSet(false),
    m_uRLHasBeenSet(false),
    m_fileContentHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAgentDaemonSetCmdResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Command") && !rsp["Command"].IsNull())
    {
        if (!rsp["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(rsp["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (rsp.HasMember("URL") && !rsp["URL"].IsNull())
    {
        if (!rsp["URL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `URL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRL = string(rsp["URL"].GetString());
        m_uRLHasBeenSet = true;
    }

    if (rsp.HasMember("FileContent") && !rsp["FileContent"].IsNull())
    {
        if (!rsp["FileContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileContent = string(rsp["FileContent"].GetString());
        m_fileContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAgentDaemonSetCmdResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileContent.c_str(), allocator).Move(), allocator);
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


string DescribeAgentDaemonSetCmdResponse::GetCommand() const
{
    return m_command;
}

bool DescribeAgentDaemonSetCmdResponse::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string DescribeAgentDaemonSetCmdResponse::GetURL() const
{
    return m_uRL;
}

bool DescribeAgentDaemonSetCmdResponse::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

string DescribeAgentDaemonSetCmdResponse::GetFileContent() const
{
    return m_fileContent;
}

bool DescribeAgentDaemonSetCmdResponse::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}


