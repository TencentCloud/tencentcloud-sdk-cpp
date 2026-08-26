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

#include <tencentcloud/csip/v20221121/model/UserAKInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

UserAKInfo::UserAKInfo() :
    m_appIDHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_aKNumHasBeenSet(false),
    m_isSharedHasBeenSet(false),
    m_isSelfBuyHasBeenSet(false),
    m_shareFromAppIDHasBeenSet(false),
    m_cloudTypeHasBeenSet(false)
{
}

CoreInternalOutcome UserAKInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserAKInfo.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserAKInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserAKInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("AKNum") && !value["AKNum"].IsNull())
    {
        if (!value["AKNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserAKInfo.AKNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aKNum = value["AKNum"].GetInt64();
        m_aKNumHasBeenSet = true;
    }

    if (value.HasMember("IsShared") && !value["IsShared"].IsNull())
    {
        if (!value["IsShared"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserAKInfo.IsShared` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isShared = value["IsShared"].GetInt64();
        m_isSharedHasBeenSet = true;
    }

    if (value.HasMember("IsSelfBuy") && !value["IsSelfBuy"].IsNull())
    {
        if (!value["IsSelfBuy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserAKInfo.IsSelfBuy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSelfBuy = value["IsSelfBuy"].GetInt64();
        m_isSelfBuyHasBeenSet = true;
    }

    if (value.HasMember("ShareFromAppID") && !value["ShareFromAppID"].IsNull())
    {
        if (!value["ShareFromAppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserAKInfo.ShareFromAppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shareFromAppID = value["ShareFromAppID"].GetInt64();
        m_shareFromAppIDHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserAKInfo.CloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = value["CloudType"].GetInt64();
        m_cloudTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserAKInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_aKNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AKNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aKNum, allocator);
    }

    if (m_isSharedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShared";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isShared, allocator);
    }

    if (m_isSelfBuyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSelfBuy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSelfBuy, allocator);
    }

    if (m_shareFromAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareFromAppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareFromAppID, allocator);
    }

    if (m_cloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudType, allocator);
    }

}


int64_t UserAKInfo::GetAppID() const
{
    return m_appID;
}

void UserAKInfo::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool UserAKInfo::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string UserAKInfo::GetUin() const
{
    return m_uin;
}

void UserAKInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool UserAKInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string UserAKInfo::GetNickName() const
{
    return m_nickName;
}

void UserAKInfo::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool UserAKInfo::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

int64_t UserAKInfo::GetAKNum() const
{
    return m_aKNum;
}

void UserAKInfo::SetAKNum(const int64_t& _aKNum)
{
    m_aKNum = _aKNum;
    m_aKNumHasBeenSet = true;
}

bool UserAKInfo::AKNumHasBeenSet() const
{
    return m_aKNumHasBeenSet;
}

int64_t UserAKInfo::GetIsShared() const
{
    return m_isShared;
}

void UserAKInfo::SetIsShared(const int64_t& _isShared)
{
    m_isShared = _isShared;
    m_isSharedHasBeenSet = true;
}

bool UserAKInfo::IsSharedHasBeenSet() const
{
    return m_isSharedHasBeenSet;
}

int64_t UserAKInfo::GetIsSelfBuy() const
{
    return m_isSelfBuy;
}

void UserAKInfo::SetIsSelfBuy(const int64_t& _isSelfBuy)
{
    m_isSelfBuy = _isSelfBuy;
    m_isSelfBuyHasBeenSet = true;
}

bool UserAKInfo::IsSelfBuyHasBeenSet() const
{
    return m_isSelfBuyHasBeenSet;
}

int64_t UserAKInfo::GetShareFromAppID() const
{
    return m_shareFromAppID;
}

void UserAKInfo::SetShareFromAppID(const int64_t& _shareFromAppID)
{
    m_shareFromAppID = _shareFromAppID;
    m_shareFromAppIDHasBeenSet = true;
}

bool UserAKInfo::ShareFromAppIDHasBeenSet() const
{
    return m_shareFromAppIDHasBeenSet;
}

int64_t UserAKInfo::GetCloudType() const
{
    return m_cloudType;
}

void UserAKInfo::SetCloudType(const int64_t& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool UserAKInfo::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

