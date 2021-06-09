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

#include <tencentcloud/iotvideo/v20191126/model/CreateUsrTokenResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

CreateUsrTokenResponse::CreateUsrTokenResponse() :
    m_accessIdHasBeenSet(false),
    m_accessTokenHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_terminalIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateUsrTokenResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("AccessId") && !rsp["AccessId"].IsNull())
    {
        if (!rsp["AccessId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessId = string(rsp["AccessId"].GetString());
        m_accessIdHasBeenSet = true;
    }

    if (rsp.HasMember("AccessToken") && !rsp["AccessToken"].IsNull())
    {
        if (!rsp["AccessToken"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccessToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessToken = string(rsp["AccessToken"].GetString());
        m_accessTokenHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = rsp["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("TerminalId") && !rsp["TerminalId"].IsNull())
    {
        if (!rsp["TerminalId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TerminalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_terminalId = string(rsp["TerminalId"].GetString());
        m_terminalIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateUsrTokenResponse::GetAccessId() const
{
    return m_accessId;
}

bool CreateUsrTokenResponse::AccessIdHasBeenSet() const
{
    return m_accessIdHasBeenSet;
}

string CreateUsrTokenResponse::GetAccessToken() const
{
    return m_accessToken;
}

bool CreateUsrTokenResponse::AccessTokenHasBeenSet() const
{
    return m_accessTokenHasBeenSet;
}

uint64_t CreateUsrTokenResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool CreateUsrTokenResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string CreateUsrTokenResponse::GetTerminalId() const
{
    return m_terminalId;
}

bool CreateUsrTokenResponse::TerminalIdHasBeenSet() const
{
    return m_terminalIdHasBeenSet;
}


