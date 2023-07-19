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

#include <tencentcloud/cam/v20190116/model/GetAccountSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

GetAccountSummaryResponse::GetAccountSummaryResponse() :
    m_policiesHasBeenSet(false),
    m_rolesHasBeenSet(false),
    m_idpsHasBeenSet(false),
    m_userHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_memberHasBeenSet(false),
    m_identityProvidersHasBeenSet(false)
{
}

CoreInternalOutcome GetAccountSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Policies") && !rsp["Policies"].IsNull())
    {
        if (!rsp["Policies"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Policies` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policies = rsp["Policies"].GetUint64();
        m_policiesHasBeenSet = true;
    }

    if (rsp.HasMember("Roles") && !rsp["Roles"].IsNull())
    {
        if (!rsp["Roles"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Roles` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roles = rsp["Roles"].GetUint64();
        m_rolesHasBeenSet = true;
    }

    if (rsp.HasMember("Idps") && !rsp["Idps"].IsNull())
    {
        if (!rsp["Idps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Idps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idps = rsp["Idps"].GetUint64();
        m_idpsHasBeenSet = true;
    }

    if (rsp.HasMember("User") && !rsp["User"].IsNull())
    {
        if (!rsp["User"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `User` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_user = rsp["User"].GetUint64();
        m_userHasBeenSet = true;
    }

    if (rsp.HasMember("Group") && !rsp["Group"].IsNull())
    {
        if (!rsp["Group"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Group` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_group = rsp["Group"].GetUint64();
        m_groupHasBeenSet = true;
    }

    if (rsp.HasMember("Member") && !rsp["Member"].IsNull())
    {
        if (!rsp["Member"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Member` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_member = rsp["Member"].GetUint64();
        m_memberHasBeenSet = true;
    }

    if (rsp.HasMember("IdentityProviders") && !rsp["IdentityProviders"].IsNull())
    {
        if (!rsp["IdentityProviders"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IdentityProviders` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_identityProviders = rsp["IdentityProviders"].GetUint64();
        m_identityProvidersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetAccountSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_policiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policies, allocator);
    }

    if (m_rolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Roles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roles, allocator);
    }

    if (m_idpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Idps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idps, allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_user, allocator);
    }

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_group, allocator);
    }

    if (m_memberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Member";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_member, allocator);
    }

    if (m_identityProvidersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityProviders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identityProviders, allocator);
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


uint64_t GetAccountSummaryResponse::GetPolicies() const
{
    return m_policies;
}

bool GetAccountSummaryResponse::PoliciesHasBeenSet() const
{
    return m_policiesHasBeenSet;
}

uint64_t GetAccountSummaryResponse::GetRoles() const
{
    return m_roles;
}

bool GetAccountSummaryResponse::RolesHasBeenSet() const
{
    return m_rolesHasBeenSet;
}

uint64_t GetAccountSummaryResponse::GetIdps() const
{
    return m_idps;
}

bool GetAccountSummaryResponse::IdpsHasBeenSet() const
{
    return m_idpsHasBeenSet;
}

uint64_t GetAccountSummaryResponse::GetUser() const
{
    return m_user;
}

bool GetAccountSummaryResponse::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

uint64_t GetAccountSummaryResponse::GetGroup() const
{
    return m_group;
}

bool GetAccountSummaryResponse::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

uint64_t GetAccountSummaryResponse::GetMember() const
{
    return m_member;
}

bool GetAccountSummaryResponse::MemberHasBeenSet() const
{
    return m_memberHasBeenSet;
}

uint64_t GetAccountSummaryResponse::GetIdentityProviders() const
{
    return m_identityProviders;
}

bool GetAccountSummaryResponse::IdentityProvidersHasBeenSet() const
{
    return m_identityProvidersHasBeenSet;
}


