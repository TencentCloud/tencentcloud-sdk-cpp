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

#include <tencentcloud/lowcode/v20210108/model/DeployAppResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

DeployAppResponse::DeployAppResponse() :
    m_buildIdHasBeenSet(false),
    m_deployErrCodeHasBeenSet(false),
    m_deployErrMsgHasBeenSet(false)
{
}

CoreInternalOutcome DeployAppResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BuildId") && !rsp["BuildId"].IsNull())
    {
        if (!rsp["BuildId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildId = string(rsp["BuildId"].GetString());
        m_buildIdHasBeenSet = true;
    }

    if (rsp.HasMember("DeployErrCode") && !rsp["DeployErrCode"].IsNull())
    {
        if (!rsp["DeployErrCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployErrCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deployErrCode = rsp["DeployErrCode"].GetUint64();
        m_deployErrCodeHasBeenSet = true;
    }

    if (rsp.HasMember("DeployErrMsg") && !rsp["DeployErrMsg"].IsNull())
    {
        if (!rsp["DeployErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployErrMsg = string(rsp["DeployErrMsg"].GetString());
        m_deployErrMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DeployAppResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_buildIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildId.c_str(), allocator).Move(), allocator);
    }

    if (m_deployErrCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deployErrCode, allocator);
    }

    if (m_deployErrMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployErrMsg.c_str(), allocator).Move(), allocator);
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


string DeployAppResponse::GetBuildId() const
{
    return m_buildId;
}

bool DeployAppResponse::BuildIdHasBeenSet() const
{
    return m_buildIdHasBeenSet;
}

uint64_t DeployAppResponse::GetDeployErrCode() const
{
    return m_deployErrCode;
}

bool DeployAppResponse::DeployErrCodeHasBeenSet() const
{
    return m_deployErrCodeHasBeenSet;
}

string DeployAppResponse::GetDeployErrMsg() const
{
    return m_deployErrMsg;
}

bool DeployAppResponse::DeployErrMsgHasBeenSet() const
{
    return m_deployErrMsgHasBeenSet;
}


