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

#include <tencentcloud/iotvideo/v20201215/model/SetForwardAuthResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace rapidjson;
using namespace std;

SetForwardAuthResponse::SetForwardAuthResponse() :
    m_endpointHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_roleIDHasBeenSet(false),
    m_queueTypeHasBeenSet(false),
    m_errMsgHasBeenSet(false)
{
}

CoreInternalOutcome SetForwardAuthResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Endpoint") && !rsp["Endpoint"].IsNull())
    {
        if (!rsp["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Error("response `Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(rsp["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Result` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_result = rsp["Result"].GetUint64();
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("RoleName") && !rsp["RoleName"].IsNull())
    {
        if (!rsp["RoleName"].IsString())
        {
            return CoreInternalOutcome(Error("response `RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(rsp["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (rsp.HasMember("RoleID") && !rsp["RoleID"].IsNull())
    {
        if (!rsp["RoleID"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RoleID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roleID = rsp["RoleID"].GetUint64();
        m_roleIDHasBeenSet = true;
    }

    if (rsp.HasMember("QueueType") && !rsp["QueueType"].IsNull())
    {
        if (!rsp["QueueType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `QueueType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_queueType = rsp["QueueType"].GetUint64();
        m_queueTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrMsg") && !rsp["ErrMsg"].IsNull())
    {
        if (!rsp["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(rsp["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string SetForwardAuthResponse::GetEndpoint() const
{
    return m_endpoint;
}

bool SetForwardAuthResponse::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

uint64_t SetForwardAuthResponse::GetResult() const
{
    return m_result;
}

bool SetForwardAuthResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string SetForwardAuthResponse::GetRoleName() const
{
    return m_roleName;
}

bool SetForwardAuthResponse::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

uint64_t SetForwardAuthResponse::GetRoleID() const
{
    return m_roleID;
}

bool SetForwardAuthResponse::RoleIDHasBeenSet() const
{
    return m_roleIDHasBeenSet;
}

uint64_t SetForwardAuthResponse::GetQueueType() const
{
    return m_queueType;
}

bool SetForwardAuthResponse::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}

string SetForwardAuthResponse::GetErrMsg() const
{
    return m_errMsg;
}

bool SetForwardAuthResponse::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}


