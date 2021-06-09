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

#include <tencentcloud/cat/v20180409/model/VerifyResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

VerifyResultResponse::VerifyResultResponse() :
    m_errorReasonHasBeenSet(false),
    m_resultCodeHasBeenSet(false)
{
}

CoreInternalOutcome VerifyResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ErrorReason") && !rsp["ErrorReason"].IsNull())
    {
        if (!rsp["ErrorReason"].IsString())
        {
            return CoreInternalOutcome(Error("response `ErrorReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorReason = string(rsp["ErrorReason"].GetString());
        m_errorReasonHasBeenSet = true;
    }

    if (rsp.HasMember("ResultCode") && !rsp["ResultCode"].IsNull())
    {
        if (!rsp["ResultCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ResultCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultCode = rsp["ResultCode"].GetInt64();
        m_resultCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string VerifyResultResponse::GetErrorReason() const
{
    return m_errorReason;
}

bool VerifyResultResponse::ErrorReasonHasBeenSet() const
{
    return m_errorReasonHasBeenSet;
}

int64_t VerifyResultResponse::GetResultCode() const
{
    return m_resultCode;
}

bool VerifyResultResponse::ResultCodeHasBeenSet() const
{
    return m_resultCodeHasBeenSet;
}


