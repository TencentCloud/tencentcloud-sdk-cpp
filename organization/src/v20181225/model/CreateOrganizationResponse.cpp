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
using namespace rapidjson;
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


    if (rsp.HasMember("OrgId") && !rsp["OrgId"].IsNull())
    {
        if (!rsp["OrgId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `OrgId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orgId = rsp["OrgId"].GetUint64();
        m_orgIdHasBeenSet = true;
    }

    if (rsp.HasMember("Nickname") && !rsp["Nickname"].IsNull())
    {
        if (!rsp["Nickname"].IsString())
        {
            return CoreInternalOutcome(Error("response `Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(rsp["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (rsp.HasMember("Mail") && !rsp["Mail"].IsNull())
    {
        if (!rsp["Mail"].IsString())
        {
            return CoreInternalOutcome(Error("response `Mail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mail = string(rsp["Mail"].GetString());
        m_mailHasBeenSet = true;
    }

    if (rsp.HasMember("OrgType") && !rsp["OrgType"].IsNull())
    {
        if (!rsp["OrgType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `OrgType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orgType = rsp["OrgType"].GetUint64();
        m_orgTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


