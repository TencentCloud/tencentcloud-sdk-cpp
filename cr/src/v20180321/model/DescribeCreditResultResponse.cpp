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

#include <tencentcloud/cr/v20180321/model/DescribeCreditResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud;
using namespace TencentCloud::Cr::V20180321;
using namespace TencentCloud::Cr::V20180321::Model;
using namespace rapidjson;
using namespace std;

DescribeCreditResultResponse::DescribeCreditResultResponse() :
    m_resultCodeHasBeenSet(false),
    m_clientCodeHasBeenSet(false),
    m_ringStartTimeHasBeenSet(false),
    m_ringDurationHasBeenSet(false),
    m_answerDurationHasBeenSet(false),
    m_contextValueHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCreditResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ResultCode") && !rsp["ResultCode"].IsNull())
    {
        if (!rsp["ResultCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResultCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultCode = string(rsp["ResultCode"].GetString());
        m_resultCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ClientCode") && !rsp["ClientCode"].IsNull())
    {
        if (!rsp["ClientCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClientCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientCode = string(rsp["ClientCode"].GetString());
        m_clientCodeHasBeenSet = true;
    }

    if (rsp.HasMember("RingStartTime") && !rsp["RingStartTime"].IsNull())
    {
        if (!rsp["RingStartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `RingStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ringStartTime = string(rsp["RingStartTime"].GetString());
        m_ringStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RingDuration") && !rsp["RingDuration"].IsNull())
    {
        if (!rsp["RingDuration"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RingDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ringDuration = rsp["RingDuration"].GetInt64();
        m_ringDurationHasBeenSet = true;
    }

    if (rsp.HasMember("AnswerDuration") && !rsp["AnswerDuration"].IsNull())
    {
        if (!rsp["AnswerDuration"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AnswerDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_answerDuration = rsp["AnswerDuration"].GetInt64();
        m_answerDurationHasBeenSet = true;
    }

    if (rsp.HasMember("ContextValue") && !rsp["ContextValue"].IsNull())
    {
        if (!rsp["ContextValue"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContextValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contextValue = string(rsp["ContextValue"].GetString());
        m_contextValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeCreditResultResponse::GetResultCode() const
{
    return m_resultCode;
}

bool DescribeCreditResultResponse::ResultCodeHasBeenSet() const
{
    return m_resultCodeHasBeenSet;
}

string DescribeCreditResultResponse::GetClientCode() const
{
    return m_clientCode;
}

bool DescribeCreditResultResponse::ClientCodeHasBeenSet() const
{
    return m_clientCodeHasBeenSet;
}

string DescribeCreditResultResponse::GetRingStartTime() const
{
    return m_ringStartTime;
}

bool DescribeCreditResultResponse::RingStartTimeHasBeenSet() const
{
    return m_ringStartTimeHasBeenSet;
}

int64_t DescribeCreditResultResponse::GetRingDuration() const
{
    return m_ringDuration;
}

bool DescribeCreditResultResponse::RingDurationHasBeenSet() const
{
    return m_ringDurationHasBeenSet;
}

int64_t DescribeCreditResultResponse::GetAnswerDuration() const
{
    return m_answerDuration;
}

bool DescribeCreditResultResponse::AnswerDurationHasBeenSet() const
{
    return m_answerDurationHasBeenSet;
}

string DescribeCreditResultResponse::GetContextValue() const
{
    return m_contextValue;
}

bool DescribeCreditResultResponse::ContextValueHasBeenSet() const
{
    return m_contextValueHasBeenSet;
}


