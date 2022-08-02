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

#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeScriptResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribeTKEEdgeScriptResponse::DescribeTKEEdgeScriptResponse() :
    m_linkHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_scriptVersionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTKEEdgeScriptResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Link") && !rsp["Link"].IsNull())
    {
        if (!rsp["Link"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Link` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_link = string(rsp["Link"].GetString());
        m_linkHasBeenSet = true;
    }

    if (rsp.HasMember("Token") && !rsp["Token"].IsNull())
    {
        if (!rsp["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(rsp["Token"].GetString());
        m_tokenHasBeenSet = true;
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

    if (rsp.HasMember("ScriptVersion") && !rsp["ScriptVersion"].IsNull())
    {
        if (!rsp["ScriptVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptVersion = string(rsp["ScriptVersion"].GetString());
        m_scriptVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTKEEdgeScriptResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_linkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Link";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_link.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptVersion.c_str(), allocator).Move(), allocator);
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


string DescribeTKEEdgeScriptResponse::GetLink() const
{
    return m_link;
}

bool DescribeTKEEdgeScriptResponse::LinkHasBeenSet() const
{
    return m_linkHasBeenSet;
}

string DescribeTKEEdgeScriptResponse::GetToken() const
{
    return m_token;
}

bool DescribeTKEEdgeScriptResponse::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

string DescribeTKEEdgeScriptResponse::GetCommand() const
{
    return m_command;
}

bool DescribeTKEEdgeScriptResponse::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string DescribeTKEEdgeScriptResponse::GetScriptVersion() const
{
    return m_scriptVersion;
}

bool DescribeTKEEdgeScriptResponse::ScriptVersionHasBeenSet() const
{
    return m_scriptVersionHasBeenSet;
}


