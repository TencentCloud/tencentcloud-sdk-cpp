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

#include <tencentcloud/dts/v20180330/model/DescribeSyncCheckJobResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace rapidjson;
using namespace std;

DescribeSyncCheckJobResponse::DescribeSyncCheckJobResponse() :
    m_statusHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_stepInfoHasBeenSet(false),
    m_checkFlagHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSyncCheckJobResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorCode") && !rsp["ErrorCode"].IsNull())
    {
        if (!rsp["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = rsp["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMessage") && !rsp["ErrorMessage"].IsNull())
    {
        if (!rsp["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Error("response `ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(rsp["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (rsp.HasMember("StepInfo") && !rsp["StepInfo"].IsNull())
    {
        if (!rsp["StepInfo"].IsArray())
            return CoreInternalOutcome(Error("response `StepInfo` is not array type"));

        const Value &tmpValue = rsp["StepInfo"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SyncCheckStepInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_stepInfo.push_back(item);
        }
        m_stepInfoHasBeenSet = true;
    }

    if (rsp.HasMember("CheckFlag") && !rsp["CheckFlag"].IsNull())
    {
        if (!rsp["CheckFlag"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CheckFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkFlag = rsp["CheckFlag"].GetInt64();
        m_checkFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeSyncCheckJobResponse::GetStatus() const
{
    return m_status;
}

bool DescribeSyncCheckJobResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeSyncCheckJobResponse::GetErrorCode() const
{
    return m_errorCode;
}

bool DescribeSyncCheckJobResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string DescribeSyncCheckJobResponse::GetErrorMessage() const
{
    return m_errorMessage;
}

bool DescribeSyncCheckJobResponse::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

vector<SyncCheckStepInfo> DescribeSyncCheckJobResponse::GetStepInfo() const
{
    return m_stepInfo;
}

bool DescribeSyncCheckJobResponse::StepInfoHasBeenSet() const
{
    return m_stepInfoHasBeenSet;
}

int64_t DescribeSyncCheckJobResponse::GetCheckFlag() const
{
    return m_checkFlag;
}

bool DescribeSyncCheckJobResponse::CheckFlagHasBeenSet() const
{
    return m_checkFlagHasBeenSet;
}


