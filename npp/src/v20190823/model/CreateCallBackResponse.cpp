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

#include <tencentcloud/npp/v20190823/model/CreateCallBackResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Npp::V20190823::Model;
using namespace rapidjson;
using namespace std;

CreateCallBackResponse::CreateCallBackResponse() :
    m_callIdHasBeenSet(false),
    m_srcDisplayNumHasBeenSet(false),
    m_dstDisplayNumHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_msgHasBeenSet(false)
{
}

CoreInternalOutcome CreateCallBackResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CallId") && !rsp["CallId"].IsNull())
    {
        if (!rsp["CallId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CallId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callId = string(rsp["CallId"].GetString());
        m_callIdHasBeenSet = true;
    }

    if (rsp.HasMember("SrcDisplayNum") && !rsp["SrcDisplayNum"].IsNull())
    {
        if (!rsp["SrcDisplayNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `SrcDisplayNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcDisplayNum = string(rsp["SrcDisplayNum"].GetString());
        m_srcDisplayNumHasBeenSet = true;
    }

    if (rsp.HasMember("DstDisplayNum") && !rsp["DstDisplayNum"].IsNull())
    {
        if (!rsp["DstDisplayNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `DstDisplayNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstDisplayNum = string(rsp["DstDisplayNum"].GetString());
        m_dstDisplayNumHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorCode") && !rsp["ErrorCode"].IsNull())
    {
        if (!rsp["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(rsp["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (rsp.HasMember("Msg") && !rsp["Msg"].IsNull())
    {
        if (!rsp["Msg"].IsString())
        {
            return CoreInternalOutcome(Error("response `Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(rsp["Msg"].GetString());
        m_msgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateCallBackResponse::GetCallId() const
{
    return m_callId;
}

bool CreateCallBackResponse::CallIdHasBeenSet() const
{
    return m_callIdHasBeenSet;
}

string CreateCallBackResponse::GetSrcDisplayNum() const
{
    return m_srcDisplayNum;
}

bool CreateCallBackResponse::SrcDisplayNumHasBeenSet() const
{
    return m_srcDisplayNumHasBeenSet;
}

string CreateCallBackResponse::GetDstDisplayNum() const
{
    return m_dstDisplayNum;
}

bool CreateCallBackResponse::DstDisplayNumHasBeenSet() const
{
    return m_dstDisplayNumHasBeenSet;
}

string CreateCallBackResponse::GetErrorCode() const
{
    return m_errorCode;
}

bool CreateCallBackResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string CreateCallBackResponse::GetMsg() const
{
    return m_msg;
}

bool CreateCallBackResponse::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}


