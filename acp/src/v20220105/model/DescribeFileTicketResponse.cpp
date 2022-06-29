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

#include <tencentcloud/acp/v20220105/model/DescribeFileTicketResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Acp::V20220105::Model;
using namespace std;

DescribeFileTicketResponse::DescribeFileTicketResponse() :
    m_resultHasBeenSet(false),
    m_uploadUrlHasBeenSet(false),
    m_uploadSignHasBeenSet(false),
    m_fildIDHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFileTicketResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Result` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_result = rsp["Result"].GetInt64();
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("UploadUrl") && !rsp["UploadUrl"].IsNull())
    {
        if (!rsp["UploadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadUrl = string(rsp["UploadUrl"].GetString());
        m_uploadUrlHasBeenSet = true;
    }

    if (rsp.HasMember("UploadSign") && !rsp["UploadSign"].IsNull())
    {
        if (!rsp["UploadSign"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadSign` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadSign = string(rsp["UploadSign"].GetString());
        m_uploadSignHasBeenSet = true;
    }

    if (rsp.HasMember("FildID") && !rsp["FildID"].IsNull())
    {
        if (!rsp["FildID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FildID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fildID = string(rsp["FildID"].GetString());
        m_fildIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeFileTicketResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_uploadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadSignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadSign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadSign.c_str(), allocator).Move(), allocator);
    }

    if (m_fildIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FildID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fildID.c_str(), allocator).Move(), allocator);
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


int64_t DescribeFileTicketResponse::GetResult() const
{
    return m_result;
}

bool DescribeFileTicketResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string DescribeFileTicketResponse::GetUploadUrl() const
{
    return m_uploadUrl;
}

bool DescribeFileTicketResponse::UploadUrlHasBeenSet() const
{
    return m_uploadUrlHasBeenSet;
}

string DescribeFileTicketResponse::GetUploadSign() const
{
    return m_uploadSign;
}

bool DescribeFileTicketResponse::UploadSignHasBeenSet() const
{
    return m_uploadSignHasBeenSet;
}

string DescribeFileTicketResponse::GetFildID() const
{
    return m_fildID;
}

bool DescribeFileTicketResponse::FildIDHasBeenSet() const
{
    return m_fildIDHasBeenSet;
}


