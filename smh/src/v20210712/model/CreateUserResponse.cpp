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

#include <tencentcloud/smh/v20210712/model/CreateUserResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Smh::V20210712::Model;
using namespace std;

CreateUserResponse::CreateUserResponse() :
    m_libraryIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_accountUserIdHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_avatarHasBeenSet(false),
    m_customizeHasBeenSet(false)
{
}

CoreInternalOutcome CreateUserResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LibraryId") && !rsp["LibraryId"].IsNull())
    {
        if (!rsp["LibraryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libraryId = string(rsp["LibraryId"].GetString());
        m_libraryIdHasBeenSet = true;
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

    if (rsp.HasMember("CreationTime") && !rsp["CreationTime"].IsNull())
    {
        if (!rsp["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(rsp["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Role") && !rsp["Role"].IsNull())
    {
        if (!rsp["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(rsp["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (rsp.HasMember("Enabled") && !rsp["Enabled"].IsNull())
    {
        if (!rsp["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = rsp["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (rsp.HasMember("CountryCode") && !rsp["CountryCode"].IsNull())
    {
        if (!rsp["CountryCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryCode = string(rsp["CountryCode"].GetString());
        m_countryCodeHasBeenSet = true;
    }

    if (rsp.HasMember("PhoneNumber") && !rsp["PhoneNumber"].IsNull())
    {
        if (!rsp["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(rsp["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (rsp.HasMember("Email") && !rsp["Email"].IsNull())
    {
        if (!rsp["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(rsp["Email"].GetString());
        m_emailHasBeenSet = true;
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

    if (rsp.HasMember("AccountUserId") && !rsp["AccountUserId"].IsNull())
    {
        if (!rsp["AccountUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountUserId = string(rsp["AccountUserId"].GetString());
        m_accountUserIdHasBeenSet = true;
    }

    if (rsp.HasMember("Comment") && !rsp["Comment"].IsNull())
    {
        if (!rsp["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(rsp["Comment"].GetString());
        m_commentHasBeenSet = true;
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

    if (rsp.HasMember("Avatar") && !rsp["Avatar"].IsNull())
    {
        if (!rsp["Avatar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Avatar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatar = string(rsp["Avatar"].GetString());
        m_avatarHasBeenSet = true;
    }

    if (rsp.HasMember("Customize") && !rsp["Customize"].IsNull())
    {
        if (!rsp["Customize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Customize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customize = string(rsp["Customize"].GetString());
        m_customizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateUserResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_libraryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libraryId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_countryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatar.c_str(), allocator).Move(), allocator);
    }

    if (m_customizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Customize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customize.c_str(), allocator).Move(), allocator);
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


string CreateUserResponse::GetLibraryId() const
{
    return m_libraryId;
}

bool CreateUserResponse::LibraryIdHasBeenSet() const
{
    return m_libraryIdHasBeenSet;
}

string CreateUserResponse::GetUserId() const
{
    return m_userId;
}

bool CreateUserResponse::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CreateUserResponse::GetCreationTime() const
{
    return m_creationTime;
}

bool CreateUserResponse::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string CreateUserResponse::GetRole() const
{
    return m_role;
}

bool CreateUserResponse::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

bool CreateUserResponse::GetEnabled() const
{
    return m_enabled;
}

bool CreateUserResponse::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string CreateUserResponse::GetCountryCode() const
{
    return m_countryCode;
}

bool CreateUserResponse::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}

string CreateUserResponse::GetPhoneNumber() const
{
    return m_phoneNumber;
}

bool CreateUserResponse::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string CreateUserResponse::GetEmail() const
{
    return m_email;
}

bool CreateUserResponse::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string CreateUserResponse::GetAccountName() const
{
    return m_accountName;
}

bool CreateUserResponse::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string CreateUserResponse::GetAccountUserId() const
{
    return m_accountUserId;
}

bool CreateUserResponse::AccountUserIdHasBeenSet() const
{
    return m_accountUserIdHasBeenSet;
}

string CreateUserResponse::GetComment() const
{
    return m_comment;
}

bool CreateUserResponse::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string CreateUserResponse::GetNickname() const
{
    return m_nickname;
}

bool CreateUserResponse::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string CreateUserResponse::GetAvatar() const
{
    return m_avatar;
}

bool CreateUserResponse::AvatarHasBeenSet() const
{
    return m_avatarHasBeenSet;
}

string CreateUserResponse::GetCustomize() const
{
    return m_customize;
}

bool CreateUserResponse::CustomizeHasBeenSet() const
{
    return m_customizeHasBeenSet;
}


