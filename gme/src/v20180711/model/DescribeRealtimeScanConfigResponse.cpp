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

#include <tencentcloud/gme/v20180711/model/DescribeRealtimeScanConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

DescribeRealtimeScanConfigResponse::DescribeRealtimeScanConfigResponse() :
    m_errorCodeHasBeenSet(false),
    m_bizIdHasBeenSet(false),
    m_auditTypeHasBeenSet(false),
    m_userIdRegexHasBeenSet(false),
    m_roomIdRegexHasBeenSet(false),
    m_userIdStringHasBeenSet(false),
    m_roomIdStringHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRealtimeScanConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ErrorCode") && !rsp["ErrorCode"].IsNull())
    {
        if (!rsp["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = rsp["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (rsp.HasMember("BizId") && !rsp["BizId"].IsNull())
    {
        if (!rsp["BizId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BizId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bizId = rsp["BizId"].GetUint64();
        m_bizIdHasBeenSet = true;
    }

    if (rsp.HasMember("AuditType") && !rsp["AuditType"].IsNull())
    {
        if (!rsp["AuditType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_auditType = rsp["AuditType"].GetInt64();
        m_auditTypeHasBeenSet = true;
    }

    if (rsp.HasMember("UserIdRegex") && !rsp["UserIdRegex"].IsNull())
    {
        if (!rsp["UserIdRegex"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserIdRegex` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UserIdRegex"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userIdRegex.push_back((*itr).GetString());
        }
        m_userIdRegexHasBeenSet = true;
    }

    if (rsp.HasMember("RoomIdRegex") && !rsp["RoomIdRegex"].IsNull())
    {
        if (!rsp["RoomIdRegex"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoomIdRegex` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RoomIdRegex"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_roomIdRegex.push_back((*itr).GetString());
        }
        m_roomIdRegexHasBeenSet = true;
    }

    if (rsp.HasMember("UserIdString") && !rsp["UserIdString"].IsNull())
    {
        if (!rsp["UserIdString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIdString = string(rsp["UserIdString"].GetString());
        m_userIdStringHasBeenSet = true;
    }

    if (rsp.HasMember("RoomIdString") && !rsp["RoomIdString"].IsNull())
    {
        if (!rsp["RoomIdString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomIdString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomIdString = string(rsp["RoomIdString"].GetString());
        m_roomIdStringHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRealtimeScanConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCode, allocator);
    }

    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bizId, allocator);
    }

    if (m_auditTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditType, allocator);
    }

    if (m_userIdRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIdRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userIdRegex.begin(); itr != m_userIdRegex.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_roomIdRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIdRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_roomIdRegex.begin(); itr != m_roomIdRegex.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userIdStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIdString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userIdString.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIdString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roomIdString.c_str(), allocator).Move(), allocator);
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


int64_t DescribeRealtimeScanConfigResponse::GetErrorCode() const
{
    return m_errorCode;
}

bool DescribeRealtimeScanConfigResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

uint64_t DescribeRealtimeScanConfigResponse::GetBizId() const
{
    return m_bizId;
}

bool DescribeRealtimeScanConfigResponse::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

int64_t DescribeRealtimeScanConfigResponse::GetAuditType() const
{
    return m_auditType;
}

bool DescribeRealtimeScanConfigResponse::AuditTypeHasBeenSet() const
{
    return m_auditTypeHasBeenSet;
}

vector<string> DescribeRealtimeScanConfigResponse::GetUserIdRegex() const
{
    return m_userIdRegex;
}

bool DescribeRealtimeScanConfigResponse::UserIdRegexHasBeenSet() const
{
    return m_userIdRegexHasBeenSet;
}

vector<string> DescribeRealtimeScanConfigResponse::GetRoomIdRegex() const
{
    return m_roomIdRegex;
}

bool DescribeRealtimeScanConfigResponse::RoomIdRegexHasBeenSet() const
{
    return m_roomIdRegexHasBeenSet;
}

string DescribeRealtimeScanConfigResponse::GetUserIdString() const
{
    return m_userIdString;
}

bool DescribeRealtimeScanConfigResponse::UserIdStringHasBeenSet() const
{
    return m_userIdStringHasBeenSet;
}

string DescribeRealtimeScanConfigResponse::GetRoomIdString() const
{
    return m_roomIdString;
}

bool DescribeRealtimeScanConfigResponse::RoomIdStringHasBeenSet() const
{
    return m_roomIdStringHasBeenSet;
}


