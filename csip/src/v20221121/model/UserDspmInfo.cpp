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

#include <tencentcloud/csip/v20221121/model/UserDspmInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

UserDspmInfo::UserDspmInfo() :
    m_appIDHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_assetNumHasBeenSet(false),
    m_usedAssetNumHasBeenSet(false),
    m_isSharedHasBeenSet(false),
    m_isSelfBuyHasBeenSet(false),
    m_shareFromAppIDHasBeenSet(false),
    m_cloudTypeHasBeenSet(false),
    m_isIsolatingHasBeenSet(false),
    m_isDataCleaningHasBeenSet(false)
{
}

CoreInternalOutcome UserDspmInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserDspmInfo.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDspmInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDspmInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("AssetNum") && !value["AssetNum"].IsNull())
    {
        if (!value["AssetNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserDspmInfo.AssetNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetNum = value["AssetNum"].GetInt64();
        m_assetNumHasBeenSet = true;
    }

    if (value.HasMember("UsedAssetNum") && !value["UsedAssetNum"].IsNull())
    {
        if (!value["UsedAssetNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserDspmInfo.UsedAssetNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedAssetNum = value["UsedAssetNum"].GetInt64();
        m_usedAssetNumHasBeenSet = true;
    }

    if (value.HasMember("IsShared") && !value["IsShared"].IsNull())
    {
        if (!value["IsShared"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserDspmInfo.IsShared` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isShared = value["IsShared"].GetInt64();
        m_isSharedHasBeenSet = true;
    }

    if (value.HasMember("IsSelfBuy") && !value["IsSelfBuy"].IsNull())
    {
        if (!value["IsSelfBuy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserDspmInfo.IsSelfBuy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSelfBuy = value["IsSelfBuy"].GetInt64();
        m_isSelfBuyHasBeenSet = true;
    }

    if (value.HasMember("ShareFromAppID") && !value["ShareFromAppID"].IsNull())
    {
        if (!value["ShareFromAppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserDspmInfo.ShareFromAppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shareFromAppID = value["ShareFromAppID"].GetInt64();
        m_shareFromAppIDHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserDspmInfo.CloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = value["CloudType"].GetInt64();
        m_cloudTypeHasBeenSet = true;
    }

    if (value.HasMember("IsIsolating") && !value["IsIsolating"].IsNull())
    {
        if (!value["IsIsolating"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserDspmInfo.IsIsolating` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isIsolating = value["IsIsolating"].GetBool();
        m_isIsolatingHasBeenSet = true;
    }

    if (value.HasMember("IsDataCleaning") && !value["IsDataCleaning"].IsNull())
    {
        if (!value["IsDataCleaning"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserDspmInfo.IsDataCleaning` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDataCleaning = value["IsDataCleaning"].GetBool();
        m_isDataCleaningHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserDspmInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_assetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetNum, allocator);
    }

    if (m_usedAssetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedAssetNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedAssetNum, allocator);
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

    if (m_isIsolatingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIsolating";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isIsolating, allocator);
    }

    if (m_isDataCleaningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDataCleaning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDataCleaning, allocator);
    }

}


int64_t UserDspmInfo::GetAppID() const
{
    return m_appID;
}

void UserDspmInfo::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool UserDspmInfo::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string UserDspmInfo::GetUin() const
{
    return m_uin;
}

void UserDspmInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool UserDspmInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string UserDspmInfo::GetNickName() const
{
    return m_nickName;
}

void UserDspmInfo::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool UserDspmInfo::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

int64_t UserDspmInfo::GetAssetNum() const
{
    return m_assetNum;
}

void UserDspmInfo::SetAssetNum(const int64_t& _assetNum)
{
    m_assetNum = _assetNum;
    m_assetNumHasBeenSet = true;
}

bool UserDspmInfo::AssetNumHasBeenSet() const
{
    return m_assetNumHasBeenSet;
}

int64_t UserDspmInfo::GetUsedAssetNum() const
{
    return m_usedAssetNum;
}

void UserDspmInfo::SetUsedAssetNum(const int64_t& _usedAssetNum)
{
    m_usedAssetNum = _usedAssetNum;
    m_usedAssetNumHasBeenSet = true;
}

bool UserDspmInfo::UsedAssetNumHasBeenSet() const
{
    return m_usedAssetNumHasBeenSet;
}

int64_t UserDspmInfo::GetIsShared() const
{
    return m_isShared;
}

void UserDspmInfo::SetIsShared(const int64_t& _isShared)
{
    m_isShared = _isShared;
    m_isSharedHasBeenSet = true;
}

bool UserDspmInfo::IsSharedHasBeenSet() const
{
    return m_isSharedHasBeenSet;
}

int64_t UserDspmInfo::GetIsSelfBuy() const
{
    return m_isSelfBuy;
}

void UserDspmInfo::SetIsSelfBuy(const int64_t& _isSelfBuy)
{
    m_isSelfBuy = _isSelfBuy;
    m_isSelfBuyHasBeenSet = true;
}

bool UserDspmInfo::IsSelfBuyHasBeenSet() const
{
    return m_isSelfBuyHasBeenSet;
}

int64_t UserDspmInfo::GetShareFromAppID() const
{
    return m_shareFromAppID;
}

void UserDspmInfo::SetShareFromAppID(const int64_t& _shareFromAppID)
{
    m_shareFromAppID = _shareFromAppID;
    m_shareFromAppIDHasBeenSet = true;
}

bool UserDspmInfo::ShareFromAppIDHasBeenSet() const
{
    return m_shareFromAppIDHasBeenSet;
}

int64_t UserDspmInfo::GetCloudType() const
{
    return m_cloudType;
}

void UserDspmInfo::SetCloudType(const int64_t& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool UserDspmInfo::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

bool UserDspmInfo::GetIsIsolating() const
{
    return m_isIsolating;
}

void UserDspmInfo::SetIsIsolating(const bool& _isIsolating)
{
    m_isIsolating = _isIsolating;
    m_isIsolatingHasBeenSet = true;
}

bool UserDspmInfo::IsIsolatingHasBeenSet() const
{
    return m_isIsolatingHasBeenSet;
}

bool UserDspmInfo::GetIsDataCleaning() const
{
    return m_isDataCleaning;
}

void UserDspmInfo::SetIsDataCleaning(const bool& _isDataCleaning)
{
    m_isDataCleaning = _isDataCleaning;
    m_isDataCleaningHasBeenSet = true;
}

bool UserDspmInfo::IsDataCleaningHasBeenSet() const
{
    return m_isDataCleaningHasBeenSet;
}

