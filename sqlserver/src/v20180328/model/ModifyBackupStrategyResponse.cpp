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

#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupStrategyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ModifyBackupStrategyResponse::ModifyBackupStrategyResponse() :
    m_errnoHasBeenSet(false),
    m_msgHasBeenSet(false),
    m_codeHasBeenSet(false)
{
}

CoreInternalOutcome ModifyBackupStrategyResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Errno") && !rsp["Errno"].IsNull())
    {
        if (!rsp["Errno"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Errno` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errno = rsp["Errno"].GetInt64();
        m_errnoHasBeenSet = true;
    }

    if (rsp.HasMember("Msg") && !rsp["Msg"].IsNull())
    {
        if (!rsp["Msg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(rsp["Msg"].GetString());
        m_msgHasBeenSet = true;
    }

    if (rsp.HasMember("Code") && !rsp["Code"].IsNull())
    {
        if (!rsp["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = rsp["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModifyBackupStrategyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_errnoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Errno";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errno, allocator);
    }

    if (m_msgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msg.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
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


int64_t ModifyBackupStrategyResponse::GetErrno() const
{
    return m_errno;
}

bool ModifyBackupStrategyResponse::ErrnoHasBeenSet() const
{
    return m_errnoHasBeenSet;
}

string ModifyBackupStrategyResponse::GetMsg() const
{
    return m_msg;
}

bool ModifyBackupStrategyResponse::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}

int64_t ModifyBackupStrategyResponse::GetCode() const
{
    return m_code;
}

bool ModifyBackupStrategyResponse::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}


