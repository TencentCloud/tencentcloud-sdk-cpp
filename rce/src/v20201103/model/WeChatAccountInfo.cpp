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

#include <tencentcloud/rce/v20201103/model/WeChatAccountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

WeChatAccountInfo::WeChatAccountInfo() :
    m_weChatOpenIdHasBeenSet(false),
    m_weChatSubTypeHasBeenSet(false),
    m_randStrHasBeenSet(false),
    m_weChatAccessTokenHasBeenSet(false),
    m_associateAccountHasBeenSet(false),
    m_mobilePhoneHasBeenSet(false),
    m_deviceIdHasBeenSet(false)
{
}

CoreInternalOutcome WeChatAccountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WeChatOpenId") && !value["WeChatOpenId"].IsNull())
    {
        if (!value["WeChatOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatAccountInfo.WeChatOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weChatOpenId = string(value["WeChatOpenId"].GetString());
        m_weChatOpenIdHasBeenSet = true;
    }

    if (value.HasMember("WeChatSubType") && !value["WeChatSubType"].IsNull())
    {
        if (!value["WeChatSubType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatAccountInfo.WeChatSubType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weChatSubType = value["WeChatSubType"].GetUint64();
        m_weChatSubTypeHasBeenSet = true;
    }

    if (value.HasMember("RandStr") && !value["RandStr"].IsNull())
    {
        if (!value["RandStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatAccountInfo.RandStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_randStr = string(value["RandStr"].GetString());
        m_randStrHasBeenSet = true;
    }

    if (value.HasMember("WeChatAccessToken") && !value["WeChatAccessToken"].IsNull())
    {
        if (!value["WeChatAccessToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatAccountInfo.WeChatAccessToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weChatAccessToken = string(value["WeChatAccessToken"].GetString());
        m_weChatAccessTokenHasBeenSet = true;
    }

    if (value.HasMember("AssociateAccount") && !value["AssociateAccount"].IsNull())
    {
        if (!value["AssociateAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatAccountInfo.AssociateAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_associateAccount = string(value["AssociateAccount"].GetString());
        m_associateAccountHasBeenSet = true;
    }

    if (value.HasMember("MobilePhone") && !value["MobilePhone"].IsNull())
    {
        if (!value["MobilePhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatAccountInfo.MobilePhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobilePhone = string(value["MobilePhone"].GetString());
        m_mobilePhoneHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatAccountInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WeChatAccountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_weChatOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeChatOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weChatOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_weChatSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeChatSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weChatSubType, allocator);
    }

    if (m_randStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RandStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_randStr.c_str(), allocator).Move(), allocator);
    }

    if (m_weChatAccessTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeChatAccessToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weChatAccessToken.c_str(), allocator).Move(), allocator);
    }

    if (m_associateAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociateAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_associateAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_mobilePhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MobilePhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobilePhone.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

}


string WeChatAccountInfo::GetWeChatOpenId() const
{
    return m_weChatOpenId;
}

void WeChatAccountInfo::SetWeChatOpenId(const string& _weChatOpenId)
{
    m_weChatOpenId = _weChatOpenId;
    m_weChatOpenIdHasBeenSet = true;
}

bool WeChatAccountInfo::WeChatOpenIdHasBeenSet() const
{
    return m_weChatOpenIdHasBeenSet;
}

uint64_t WeChatAccountInfo::GetWeChatSubType() const
{
    return m_weChatSubType;
}

void WeChatAccountInfo::SetWeChatSubType(const uint64_t& _weChatSubType)
{
    m_weChatSubType = _weChatSubType;
    m_weChatSubTypeHasBeenSet = true;
}

bool WeChatAccountInfo::WeChatSubTypeHasBeenSet() const
{
    return m_weChatSubTypeHasBeenSet;
}

string WeChatAccountInfo::GetRandStr() const
{
    return m_randStr;
}

void WeChatAccountInfo::SetRandStr(const string& _randStr)
{
    m_randStr = _randStr;
    m_randStrHasBeenSet = true;
}

bool WeChatAccountInfo::RandStrHasBeenSet() const
{
    return m_randStrHasBeenSet;
}

string WeChatAccountInfo::GetWeChatAccessToken() const
{
    return m_weChatAccessToken;
}

void WeChatAccountInfo::SetWeChatAccessToken(const string& _weChatAccessToken)
{
    m_weChatAccessToken = _weChatAccessToken;
    m_weChatAccessTokenHasBeenSet = true;
}

bool WeChatAccountInfo::WeChatAccessTokenHasBeenSet() const
{
    return m_weChatAccessTokenHasBeenSet;
}

string WeChatAccountInfo::GetAssociateAccount() const
{
    return m_associateAccount;
}

void WeChatAccountInfo::SetAssociateAccount(const string& _associateAccount)
{
    m_associateAccount = _associateAccount;
    m_associateAccountHasBeenSet = true;
}

bool WeChatAccountInfo::AssociateAccountHasBeenSet() const
{
    return m_associateAccountHasBeenSet;
}

string WeChatAccountInfo::GetMobilePhone() const
{
    return m_mobilePhone;
}

void WeChatAccountInfo::SetMobilePhone(const string& _mobilePhone)
{
    m_mobilePhone = _mobilePhone;
    m_mobilePhoneHasBeenSet = true;
}

bool WeChatAccountInfo::MobilePhoneHasBeenSet() const
{
    return m_mobilePhoneHasBeenSet;
}

string WeChatAccountInfo::GetDeviceId() const
{
    return m_deviceId;
}

void WeChatAccountInfo::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool WeChatAccountInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

