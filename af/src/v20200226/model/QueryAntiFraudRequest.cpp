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

#include <tencentcloud/af/v20200226/model/QueryAntiFraudRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Af::V20200226::Model;
using namespace std;

QueryAntiFraudRequest::QueryAntiFraudRequest() :
    m_phoneNumberHasBeenSet(false),
    m_idNumberHasBeenSet(false),
    m_bankCardNumberHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_imeiHasBeenSet(false),
    m_idfaHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_macHasBeenSet(false),
    m_imsiHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_appIdUHasBeenSet(false),
    m_wifiMacHasBeenSet(false),
    m_wifiSSIDHasBeenSet(false),
    m_wifiBSSIDHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_idCryptoTypeHasBeenSet(false),
    m_phoneCryptoTypeHasBeenSet(false),
    m_nameCryptoTypeHasBeenSet(false)
{
}

string QueryAntiFraudRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_idNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_bankCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankCardNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_userIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_imeiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Imei";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imei.c_str(), allocator).Move(), allocator);
    }

    if (m_idfaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Idfa";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idfa.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_emailAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_emailAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_macHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mac";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mac.c_str(), allocator).Move(), allocator);
    }

    if (m_imsiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Imsi";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imsi.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountType.c_str(), allocator).Move(), allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIdU";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appIdU.c_str(), allocator).Move(), allocator);
    }

    if (m_wifiMacHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WifiMac";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wifiMac.c_str(), allocator).Move(), allocator);
    }

    if (m_wifiSSIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WifiSSID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wifiSSID.c_str(), allocator).Move(), allocator);
    }

    if (m_wifiBSSIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WifiBSSID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wifiBSSID.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_idCryptoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCryptoType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCryptoType.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneCryptoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneCryptoType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneCryptoType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameCryptoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameCryptoType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nameCryptoType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryAntiFraudRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void QueryAntiFraudRequest::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool QueryAntiFraudRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string QueryAntiFraudRequest::GetIdNumber() const
{
    return m_idNumber;
}

void QueryAntiFraudRequest::SetIdNumber(const string& _idNumber)
{
    m_idNumber = _idNumber;
    m_idNumberHasBeenSet = true;
}

bool QueryAntiFraudRequest::IdNumberHasBeenSet() const
{
    return m_idNumberHasBeenSet;
}

string QueryAntiFraudRequest::GetBankCardNumber() const
{
    return m_bankCardNumber;
}

void QueryAntiFraudRequest::SetBankCardNumber(const string& _bankCardNumber)
{
    m_bankCardNumber = _bankCardNumber;
    m_bankCardNumberHasBeenSet = true;
}

bool QueryAntiFraudRequest::BankCardNumberHasBeenSet() const
{
    return m_bankCardNumberHasBeenSet;
}

string QueryAntiFraudRequest::GetUserIp() const
{
    return m_userIp;
}

void QueryAntiFraudRequest::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool QueryAntiFraudRequest::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

string QueryAntiFraudRequest::GetImei() const
{
    return m_imei;
}

void QueryAntiFraudRequest::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool QueryAntiFraudRequest::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

string QueryAntiFraudRequest::GetIdfa() const
{
    return m_idfa;
}

void QueryAntiFraudRequest::SetIdfa(const string& _idfa)
{
    m_idfa = _idfa;
    m_idfaHasBeenSet = true;
}

bool QueryAntiFraudRequest::IdfaHasBeenSet() const
{
    return m_idfaHasBeenSet;
}

string QueryAntiFraudRequest::GetScene() const
{
    return m_scene;
}

void QueryAntiFraudRequest::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool QueryAntiFraudRequest::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string QueryAntiFraudRequest::GetName() const
{
    return m_name;
}

void QueryAntiFraudRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool QueryAntiFraudRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string QueryAntiFraudRequest::GetEmailAddress() const
{
    return m_emailAddress;
}

void QueryAntiFraudRequest::SetEmailAddress(const string& _emailAddress)
{
    m_emailAddress = _emailAddress;
    m_emailAddressHasBeenSet = true;
}

bool QueryAntiFraudRequest::EmailAddressHasBeenSet() const
{
    return m_emailAddressHasBeenSet;
}

string QueryAntiFraudRequest::GetAddress() const
{
    return m_address;
}

void QueryAntiFraudRequest::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool QueryAntiFraudRequest::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string QueryAntiFraudRequest::GetMac() const
{
    return m_mac;
}

void QueryAntiFraudRequest::SetMac(const string& _mac)
{
    m_mac = _mac;
    m_macHasBeenSet = true;
}

bool QueryAntiFraudRequest::MacHasBeenSet() const
{
    return m_macHasBeenSet;
}

string QueryAntiFraudRequest::GetImsi() const
{
    return m_imsi;
}

void QueryAntiFraudRequest::SetImsi(const string& _imsi)
{
    m_imsi = _imsi;
    m_imsiHasBeenSet = true;
}

bool QueryAntiFraudRequest::ImsiHasBeenSet() const
{
    return m_imsiHasBeenSet;
}

string QueryAntiFraudRequest::GetAccountType() const
{
    return m_accountType;
}

void QueryAntiFraudRequest::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool QueryAntiFraudRequest::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string QueryAntiFraudRequest::GetUid() const
{
    return m_uid;
}

void QueryAntiFraudRequest::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool QueryAntiFraudRequest::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string QueryAntiFraudRequest::GetAppIdU() const
{
    return m_appIdU;
}

void QueryAntiFraudRequest::SetAppIdU(const string& _appIdU)
{
    m_appIdU = _appIdU;
    m_appIdUHasBeenSet = true;
}

bool QueryAntiFraudRequest::AppIdUHasBeenSet() const
{
    return m_appIdUHasBeenSet;
}

string QueryAntiFraudRequest::GetWifiMac() const
{
    return m_wifiMac;
}

void QueryAntiFraudRequest::SetWifiMac(const string& _wifiMac)
{
    m_wifiMac = _wifiMac;
    m_wifiMacHasBeenSet = true;
}

bool QueryAntiFraudRequest::WifiMacHasBeenSet() const
{
    return m_wifiMacHasBeenSet;
}

string QueryAntiFraudRequest::GetWifiSSID() const
{
    return m_wifiSSID;
}

void QueryAntiFraudRequest::SetWifiSSID(const string& _wifiSSID)
{
    m_wifiSSID = _wifiSSID;
    m_wifiSSIDHasBeenSet = true;
}

bool QueryAntiFraudRequest::WifiSSIDHasBeenSet() const
{
    return m_wifiSSIDHasBeenSet;
}

string QueryAntiFraudRequest::GetWifiBSSID() const
{
    return m_wifiBSSID;
}

void QueryAntiFraudRequest::SetWifiBSSID(const string& _wifiBSSID)
{
    m_wifiBSSID = _wifiBSSID;
    m_wifiBSSIDHasBeenSet = true;
}

bool QueryAntiFraudRequest::WifiBSSIDHasBeenSet() const
{
    return m_wifiBSSIDHasBeenSet;
}

string QueryAntiFraudRequest::GetBusinessId() const
{
    return m_businessId;
}

void QueryAntiFraudRequest::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool QueryAntiFraudRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string QueryAntiFraudRequest::GetIdCryptoType() const
{
    return m_idCryptoType;
}

void QueryAntiFraudRequest::SetIdCryptoType(const string& _idCryptoType)
{
    m_idCryptoType = _idCryptoType;
    m_idCryptoTypeHasBeenSet = true;
}

bool QueryAntiFraudRequest::IdCryptoTypeHasBeenSet() const
{
    return m_idCryptoTypeHasBeenSet;
}

string QueryAntiFraudRequest::GetPhoneCryptoType() const
{
    return m_phoneCryptoType;
}

void QueryAntiFraudRequest::SetPhoneCryptoType(const string& _phoneCryptoType)
{
    m_phoneCryptoType = _phoneCryptoType;
    m_phoneCryptoTypeHasBeenSet = true;
}

bool QueryAntiFraudRequest::PhoneCryptoTypeHasBeenSet() const
{
    return m_phoneCryptoTypeHasBeenSet;
}

string QueryAntiFraudRequest::GetNameCryptoType() const
{
    return m_nameCryptoType;
}

void QueryAntiFraudRequest::SetNameCryptoType(const string& _nameCryptoType)
{
    m_nameCryptoType = _nameCryptoType;
    m_nameCryptoTypeHasBeenSet = true;
}

bool QueryAntiFraudRequest::NameCryptoTypeHasBeenSet() const
{
    return m_nameCryptoTypeHasBeenSet;
}


