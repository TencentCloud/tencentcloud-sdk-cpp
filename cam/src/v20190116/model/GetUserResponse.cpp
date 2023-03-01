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

#include <tencentcloud/cam/v20190116/model/GetUserResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

GetUserResponse::GetUserResponse() :
    m_uinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_consoleLoginHasBeenSet(false),
    m_phoneNumHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_recentlyLoginIPHasBeenSet(false),
    m_recentlyLoginTimeHasBeenSet(false)
{
}

CoreInternalOutcome GetUserResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = rsp["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Uid") && !rsp["Uid"].IsNull())
    {
        if (!rsp["Uid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Uid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uid = rsp["Uid"].GetUint64();
        m_uidHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("ConsoleLogin") && !rsp["ConsoleLogin"].IsNull())
    {
        if (!rsp["ConsoleLogin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleLogin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_consoleLogin = rsp["ConsoleLogin"].GetUint64();
        m_consoleLoginHasBeenSet = true;
    }

    if (rsp.HasMember("PhoneNum") && !rsp["PhoneNum"].IsNull())
    {
        if (!rsp["PhoneNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNum = string(rsp["PhoneNum"].GetString());
        m_phoneNumHasBeenSet = true;
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

    if (rsp.HasMember("Email") && !rsp["Email"].IsNull())
    {
        if (!rsp["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(rsp["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (rsp.HasMember("RecentlyLoginIP") && !rsp["RecentlyLoginIP"].IsNull())
    {
        if (!rsp["RecentlyLoginIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecentlyLoginIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentlyLoginIP = string(rsp["RecentlyLoginIP"].GetString());
        m_recentlyLoginIPHasBeenSet = true;
    }

    if (rsp.HasMember("RecentlyLoginTime") && !rsp["RecentlyLoginTime"].IsNull())
    {
        if (!rsp["RecentlyLoginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecentlyLoginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentlyLoginTime = string(rsp["RecentlyLoginTime"].GetString());
        m_recentlyLoginTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetUserResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uid, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_consoleLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsoleLogin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consoleLogin, allocator);
    }

    if (m_phoneNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNum.c_str(), allocator).Move(), allocator);
    }

    if (m_countryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_recentlyLoginIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecentlyLoginIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recentlyLoginIP.c_str(), allocator).Move(), allocator);
    }

    if (m_recentlyLoginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecentlyLoginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recentlyLoginTime.c_str(), allocator).Move(), allocator);
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


uint64_t GetUserResponse::GetUin() const
{
    return m_uin;
}

bool GetUserResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string GetUserResponse::GetName() const
{
    return m_name;
}

bool GetUserResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t GetUserResponse::GetUid() const
{
    return m_uid;
}

bool GetUserResponse::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string GetUserResponse::GetRemark() const
{
    return m_remark;
}

bool GetUserResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t GetUserResponse::GetConsoleLogin() const
{
    return m_consoleLogin;
}

bool GetUserResponse::ConsoleLoginHasBeenSet() const
{
    return m_consoleLoginHasBeenSet;
}

string GetUserResponse::GetPhoneNum() const
{
    return m_phoneNum;
}

bool GetUserResponse::PhoneNumHasBeenSet() const
{
    return m_phoneNumHasBeenSet;
}

string GetUserResponse::GetCountryCode() const
{
    return m_countryCode;
}

bool GetUserResponse::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}

string GetUserResponse::GetEmail() const
{
    return m_email;
}

bool GetUserResponse::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string GetUserResponse::GetRecentlyLoginIP() const
{
    return m_recentlyLoginIP;
}

bool GetUserResponse::RecentlyLoginIPHasBeenSet() const
{
    return m_recentlyLoginIPHasBeenSet;
}

string GetUserResponse::GetRecentlyLoginTime() const
{
    return m_recentlyLoginTime;
}

bool GetUserResponse::RecentlyLoginTimeHasBeenSet() const
{
    return m_recentlyLoginTimeHasBeenSet;
}


