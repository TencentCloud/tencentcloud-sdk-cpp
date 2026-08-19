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

#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisSMTPResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeAIAnalysisSMTPResponse::DescribeAIAnalysisSMTPResponse() :
    m_existHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAIAnalysisSMTPResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Exist") && !rsp["Exist"].IsNull())
    {
        if (!rsp["Exist"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Exist` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_exist = rsp["Exist"].GetBool();
        m_existHasBeenSet = true;
    }

    if (rsp.HasMember("AccountName") && !rsp["AccountName"].IsNull())
    {
        if (!rsp["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(rsp["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = rsp["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Password") && !rsp["Password"].IsNull())
    {
        if (!rsp["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(rsp["Password"].GetString());
        m_passwordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAIAnalysisSMTPResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_existHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exist, allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
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


bool DescribeAIAnalysisSMTPResponse::GetExist() const
{
    return m_exist;
}

bool DescribeAIAnalysisSMTPResponse::ExistHasBeenSet() const
{
    return m_existHasBeenSet;
}

string DescribeAIAnalysisSMTPResponse::GetAccountName() const
{
    return m_accountName;
}

bool DescribeAIAnalysisSMTPResponse::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

int64_t DescribeAIAnalysisSMTPResponse::GetType() const
{
    return m_type;
}

bool DescribeAIAnalysisSMTPResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeAIAnalysisSMTPResponse::GetPassword() const
{
    return m_password;
}

bool DescribeAIAnalysisSMTPResponse::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}


