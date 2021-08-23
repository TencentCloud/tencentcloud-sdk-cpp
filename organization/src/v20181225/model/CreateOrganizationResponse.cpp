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

#include <tencentcloud/organization/v20181225/model/CreateOrganizationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20181225::Model;
using namespace std;

CreateOrganizationResponse::CreateOrganizationResponse() :
    m_orgIdHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_mailHasBeenSet(false),
    m_orgTypeHasBeenSet(false)
{
}

CoreInternalOutcome CreateOrganizationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OrgId") && !rsp["OrgId"].IsNull())
    {
        if (!rsp["OrgId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orgId = rsp["OrgId"].GetUint64();
        m_orgIdHasBeenSet = true;
    }

    if (rsp.HasMember("Nickname") && !rsp["Nickname"].IsNull())
    {
        if (!rsp["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(rsp["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (rsp.HasMember("Mail") && !rsp["Mail"].IsNull())
    {
        if (!rsp["Mail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Mail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mail = string(rsp["Mail"].GetString());
        m_mailHasBeenSet = true;
    }

    if (rsp.HasMember("OrgType") && !rsp["OrgType"].IsNull())
    {
        if (!rsp["OrgType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orgType = rsp["OrgType"].GetUint64();
        m_orgTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateOrganizationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_orgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orgId, allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_mailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mail.c_str(), allocator).Move(), allocator);
    }

    if (m_orgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orgType, allocator);
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


uint64_t CreateOrganizationResponse::GetOrgId() const
{
    return m_orgId;
}

bool CreateOrganizationResponse::OrgIdHasBeenSet() const
{
    return m_orgIdHasBeenSet;
}

string CreateOrganizationResponse::GetNickname() const
{
    return m_nickname;
}

bool CreateOrganizationResponse::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string CreateOrganizationResponse::GetMail() const
{
    return m_mail;
}

bool CreateOrganizationResponse::MailHasBeenSet() const
{
    return m_mailHasBeenSet;
}

uint64_t CreateOrganizationResponse::GetOrgType() const
{
    return m_orgType;
}

bool CreateOrganizationResponse::OrgTypeHasBeenSet() const
{
    return m_orgTypeHasBeenSet;
}


