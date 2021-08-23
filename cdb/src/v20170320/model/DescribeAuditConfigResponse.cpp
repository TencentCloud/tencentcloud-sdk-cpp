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

#include <tencentcloud/cdb/v20170320/model/DescribeAuditConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeAuditConfigResponse::DescribeAuditConfigResponse() :
    m_logExpireDayHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_isClosingHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAuditConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LogExpireDay") && !rsp["LogExpireDay"].IsNull())
    {
        if (!rsp["LogExpireDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogExpireDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logExpireDay = rsp["LogExpireDay"].GetInt64();
        m_logExpireDayHasBeenSet = true;
    }

    if (rsp.HasMember("LogType") && !rsp["LogType"].IsNull())
    {
        if (!rsp["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(rsp["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (rsp.HasMember("IsClosing") && !rsp["IsClosing"].IsNull())
    {
        if (!rsp["IsClosing"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsClosing` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isClosing = string(rsp["IsClosing"].GetString());
        m_isClosingHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAuditConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_logExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logExpireDay, allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_isClosingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsClosing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isClosing.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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


int64_t DescribeAuditConfigResponse::GetLogExpireDay() const
{
    return m_logExpireDay;
}

bool DescribeAuditConfigResponse::LogExpireDayHasBeenSet() const
{
    return m_logExpireDayHasBeenSet;
}

string DescribeAuditConfigResponse::GetLogType() const
{
    return m_logType;
}

bool DescribeAuditConfigResponse::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string DescribeAuditConfigResponse::GetIsClosing() const
{
    return m_isClosing;
}

bool DescribeAuditConfigResponse::IsClosingHasBeenSet() const
{
    return m_isClosingHasBeenSet;
}

string DescribeAuditConfigResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeAuditConfigResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


