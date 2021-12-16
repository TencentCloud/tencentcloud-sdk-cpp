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

#include <tencentcloud/sts/v20180813/model/GetCallerIdentityResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sts::V20180813::Model;
using namespace std;

GetCallerIdentityResponse::GetCallerIdentityResponse() :
    m_arnHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome GetCallerIdentityResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Arn") && !rsp["Arn"].IsNull())
    {
        if (!rsp["Arn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Arn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arn = string(rsp["Arn"].GetString());
        m_arnHasBeenSet = true;
    }

    if (rsp.HasMember("AccountId") && !rsp["AccountId"].IsNull())
    {
        if (!rsp["AccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountId = string(rsp["AccountId"].GetString());
        m_accountIdHasBeenSet = true;
    }

    if (rsp.HasMember("UserId") && !rsp["UserId"].IsNull())
    {
        if (!rsp["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(rsp["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (rsp.HasMember("PrincipalId") && !rsp["PrincipalId"].IsNull())
    {
        if (!rsp["PrincipalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrincipalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principalId = string(rsp["PrincipalId"].GetString());
        m_principalIdHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetCallerIdentityResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_arnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_arn.c_str(), allocator).Move(), allocator);
    }

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_principalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_principalId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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


string GetCallerIdentityResponse::GetArn() const
{
    return m_arn;
}

bool GetCallerIdentityResponse::ArnHasBeenSet() const
{
    return m_arnHasBeenSet;
}

string GetCallerIdentityResponse::GetAccountId() const
{
    return m_accountId;
}

bool GetCallerIdentityResponse::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

string GetCallerIdentityResponse::GetUserId() const
{
    return m_userId;
}

bool GetCallerIdentityResponse::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string GetCallerIdentityResponse::GetPrincipalId() const
{
    return m_principalId;
}

bool GetCallerIdentityResponse::PrincipalIdHasBeenSet() const
{
    return m_principalIdHasBeenSet;
}

string GetCallerIdentityResponse::GetType() const
{
    return m_type;
}

bool GetCallerIdentityResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


