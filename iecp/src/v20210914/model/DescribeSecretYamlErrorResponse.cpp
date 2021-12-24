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

#include <tencentcloud/iecp/v20210914/model/DescribeSecretYamlErrorResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeSecretYamlErrorResponse::DescribeSecretYamlErrorResponse() :
    m_checkPassHasBeenSet(false),
    m_errTypeHasBeenSet(false),
    m_errInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSecretYamlErrorResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CheckPass") && !rsp["CheckPass"].IsNull())
    {
        if (!rsp["CheckPass"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CheckPass` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_checkPass = rsp["CheckPass"].GetBool();
        m_checkPassHasBeenSet = true;
    }

    if (rsp.HasMember("ErrType") && !rsp["ErrType"].IsNull())
    {
        if (!rsp["ErrType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ErrType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_errType = rsp["ErrType"].GetUint64();
        m_errTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrInfo") && !rsp["ErrInfo"].IsNull())
    {
        if (!rsp["ErrInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errInfo = string(rsp["ErrInfo"].GetString());
        m_errInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSecretYamlErrorResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_checkPassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckPass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkPass, allocator);
    }

    if (m_errTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errType, allocator);
    }

    if (m_errInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errInfo.c_str(), allocator).Move(), allocator);
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


bool DescribeSecretYamlErrorResponse::GetCheckPass() const
{
    return m_checkPass;
}

bool DescribeSecretYamlErrorResponse::CheckPassHasBeenSet() const
{
    return m_checkPassHasBeenSet;
}

uint64_t DescribeSecretYamlErrorResponse::GetErrType() const
{
    return m_errType;
}

bool DescribeSecretYamlErrorResponse::ErrTypeHasBeenSet() const
{
    return m_errTypeHasBeenSet;
}

string DescribeSecretYamlErrorResponse::GetErrInfo() const
{
    return m_errInfo;
}

bool DescribeSecretYamlErrorResponse::ErrInfoHasBeenSet() const
{
    return m_errInfoHasBeenSet;
}


