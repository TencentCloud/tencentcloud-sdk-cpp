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

#include <tencentcloud/dbs/v20211108/model/DescribeBackupCheckJobResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

DescribeBackupCheckJobResponse::DescribeBackupCheckJobResponse() :
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_checkFlagHasBeenSet(false),
    m_errMessageHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupCheckJobResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = rsp["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (rsp.HasMember("CheckFlag") && !rsp["CheckFlag"].IsNull())
    {
        if (!rsp["CheckFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkFlag = rsp["CheckFlag"].GetInt64();
        m_checkFlagHasBeenSet = true;
    }

    if (rsp.HasMember("ErrMessage") && !rsp["ErrMessage"].IsNull())
    {
        if (!rsp["ErrMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMessage = string(rsp["ErrMessage"].GetString());
        m_errMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupCheckJobResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_checkFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkFlag, allocator);
    }

    if (m_errMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMessage.c_str(), allocator).Move(), allocator);
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


string DescribeBackupCheckJobResponse::GetStatus() const
{
    return m_status;
}

bool DescribeBackupCheckJobResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeBackupCheckJobResponse::GetProgress() const
{
    return m_progress;
}

bool DescribeBackupCheckJobResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

int64_t DescribeBackupCheckJobResponse::GetCheckFlag() const
{
    return m_checkFlag;
}

bool DescribeBackupCheckJobResponse::CheckFlagHasBeenSet() const
{
    return m_checkFlagHasBeenSet;
}

string DescribeBackupCheckJobResponse::GetErrMessage() const
{
    return m_errMessage;
}

bool DescribeBackupCheckJobResponse::ErrMessageHasBeenSet() const
{
    return m_errMessageHasBeenSet;
}


