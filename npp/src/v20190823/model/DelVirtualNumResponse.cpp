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

#include <tencentcloud/npp/v20190823/model/DelVirtualNumResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Npp::V20190823::Model;
using namespace std;

DelVirtualNumResponse::DelVirtualNumResponse() :
    m_errorCodeHasBeenSet(false),
    m_msgHasBeenSet(false),
    m_bindIdHasBeenSet(false),
    m_refLeftNumHasBeenSet(false)
{
}

CoreInternalOutcome DelVirtualNumResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("BindId") && !rsp["BindId"].IsNull())
    {
        if (!rsp["BindId"].IsString())
        {
            return CoreInternalOutcome(Error("response `BindId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindId = string(rsp["BindId"].GetString());
        m_bindIdHasBeenSet = true;
    }

    if (rsp.HasMember("RefLeftNum") && !rsp["RefLeftNum"].IsNull())
    {
        if (!rsp["RefLeftNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `RefLeftNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refLeftNum = string(rsp["RefLeftNum"].GetString());
        m_refLeftNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DelVirtualNumResponse::GetErrorCode() const
{
    return m_errorCode;
}

bool DelVirtualNumResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string DelVirtualNumResponse::GetMsg() const
{
    return m_msg;
}

bool DelVirtualNumResponse::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}

string DelVirtualNumResponse::GetBindId() const
{
    return m_bindId;
}

bool DelVirtualNumResponse::BindIdHasBeenSet() const
{
    return m_bindIdHasBeenSet;
}

string DelVirtualNumResponse::GetRefLeftNum() const
{
    return m_refLeftNum;
}

bool DelVirtualNumResponse::RefLeftNumHasBeenSet() const
{
    return m_refLeftNumHasBeenSet;
}


