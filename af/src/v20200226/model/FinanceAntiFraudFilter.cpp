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

#include <tencentcloud/af/v20200226/model/FinanceAntiFraudFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Af::V20200226::Model;
using namespace std;

FinanceAntiFraudFilter::FinanceAntiFraudFilter() :
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
    m_phoneCryptoTypeHasBeenSet(false),
    m_idCryptoTypeHasBeenSet(false),
    m_nameCryptoTypeHasBeenSet(false)
{
}

CoreInternalOutcome FinanceAntiFraudFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("IdNumber") && !value["IdNumber"].IsNull())
    {
        if (!value["IdNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.IdNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idNumber = string(value["IdNumber"].GetString());
        m_idNumberHasBeenSet = true;
    }

    if (value.HasMember("BankCardNumber") && !value["BankCardNumber"].IsNull())
    {
        if (!value["BankCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.BankCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankCardNumber = string(value["BankCardNumber"].GetString());
        m_bankCardNumberHasBeenSet = true;
    }

    if (value.HasMember("UserIp") && !value["UserIp"].IsNull())
    {
        if (!value["UserIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.UserIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIp = string(value["UserIp"].GetString());
        m_userIpHasBeenSet = true;
    }

    if (value.HasMember("Imei") && !value["Imei"].IsNull())
    {
        if (!value["Imei"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.Imei` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imei = string(value["Imei"].GetString());
        m_imeiHasBeenSet = true;
    }

    if (value.HasMember("Idfa") && !value["Idfa"].IsNull())
    {
        if (!value["Idfa"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.Idfa` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idfa = string(value["Idfa"].GetString());
        m_idfaHasBeenSet = true;
    }

    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.Scene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scene = string(value["Scene"].GetString());
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("EmailAddress") && !value["EmailAddress"].IsNull())
    {
        if (!value["EmailAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.EmailAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emailAddress = string(value["EmailAddress"].GetString());
        m_emailAddressHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Mac") && !value["Mac"].IsNull())
    {
        if (!value["Mac"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.Mac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mac = string(value["Mac"].GetString());
        m_macHasBeenSet = true;
    }

    if (value.HasMember("Imsi") && !value["Imsi"].IsNull())
    {
        if (!value["Imsi"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.Imsi` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imsi = string(value["Imsi"].GetString());
        m_imsiHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.AccountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = string(value["AccountType"].GetString());
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("AppIdU") && !value["AppIdU"].IsNull())
    {
        if (!value["AppIdU"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.AppIdU` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appIdU = string(value["AppIdU"].GetString());
        m_appIdUHasBeenSet = true;
    }

    if (value.HasMember("WifiMac") && !value["WifiMac"].IsNull())
    {
        if (!value["WifiMac"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.WifiMac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wifiMac = string(value["WifiMac"].GetString());
        m_wifiMacHasBeenSet = true;
    }

    if (value.HasMember("WifiSSID") && !value["WifiSSID"].IsNull())
    {
        if (!value["WifiSSID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.WifiSSID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wifiSSID = string(value["WifiSSID"].GetString());
        m_wifiSSIDHasBeenSet = true;
    }

    if (value.HasMember("WifiBSSID") && !value["WifiBSSID"].IsNull())
    {
        if (!value["WifiBSSID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.WifiBSSID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wifiBSSID = string(value["WifiBSSID"].GetString());
        m_wifiBSSIDHasBeenSet = true;
    }

    if (value.HasMember("BusinessId") && !value["BusinessId"].IsNull())
    {
        if (!value["BusinessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.BusinessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessId = string(value["BusinessId"].GetString());
        m_businessIdHasBeenSet = true;
    }

    if (value.HasMember("PhoneCryptoType") && !value["PhoneCryptoType"].IsNull())
    {
        if (!value["PhoneCryptoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.PhoneCryptoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneCryptoType = string(value["PhoneCryptoType"].GetString());
        m_phoneCryptoTypeHasBeenSet = true;
    }

    if (value.HasMember("IdCryptoType") && !value["IdCryptoType"].IsNull())
    {
        if (!value["IdCryptoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.IdCryptoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCryptoType = string(value["IdCryptoType"].GetString());
        m_idCryptoTypeHasBeenSet = true;
    }

    if (value.HasMember("NameCryptoType") && !value["NameCryptoType"].IsNull())
    {
        if (!value["NameCryptoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceAntiFraudFilter.NameCryptoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameCryptoType = string(value["NameCryptoType"].GetString());
        m_nameCryptoTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FinanceAntiFraudFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_idNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_bankCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_userIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_imeiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Imei";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imei.c_str(), allocator).Move(), allocator);
    }

    if (m_idfaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Idfa";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idfa.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_emailAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_emailAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_macHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mac";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mac.c_str(), allocator).Move(), allocator);
    }

    if (m_imsiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Imsi";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imsi.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountType.c_str(), allocator).Move(), allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIdU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appIdU.c_str(), allocator).Move(), allocator);
    }

    if (m_wifiMacHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WifiMac";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wifiMac.c_str(), allocator).Move(), allocator);
    }

    if (m_wifiSSIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WifiSSID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wifiSSID.c_str(), allocator).Move(), allocator);
    }

    if (m_wifiBSSIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WifiBSSID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wifiBSSID.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneCryptoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneCryptoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneCryptoType.c_str(), allocator).Move(), allocator);
    }

    if (m_idCryptoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCryptoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCryptoType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameCryptoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameCryptoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameCryptoType.c_str(), allocator).Move(), allocator);
    }

}


string FinanceAntiFraudFilter::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void FinanceAntiFraudFilter::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool FinanceAntiFraudFilter::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string FinanceAntiFraudFilter::GetIdNumber() const
{
    return m_idNumber;
}

void FinanceAntiFraudFilter::SetIdNumber(const string& _idNumber)
{
    m_idNumber = _idNumber;
    m_idNumberHasBeenSet = true;
}

bool FinanceAntiFraudFilter::IdNumberHasBeenSet() const
{
    return m_idNumberHasBeenSet;
}

string FinanceAntiFraudFilter::GetBankCardNumber() const
{
    return m_bankCardNumber;
}

void FinanceAntiFraudFilter::SetBankCardNumber(const string& _bankCardNumber)
{
    m_bankCardNumber = _bankCardNumber;
    m_bankCardNumberHasBeenSet = true;
}

bool FinanceAntiFraudFilter::BankCardNumberHasBeenSet() const
{
    return m_bankCardNumberHasBeenSet;
}

string FinanceAntiFraudFilter::GetUserIp() const
{
    return m_userIp;
}

void FinanceAntiFraudFilter::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool FinanceAntiFraudFilter::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

string FinanceAntiFraudFilter::GetImei() const
{
    return m_imei;
}

void FinanceAntiFraudFilter::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool FinanceAntiFraudFilter::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

string FinanceAntiFraudFilter::GetIdfa() const
{
    return m_idfa;
}

void FinanceAntiFraudFilter::SetIdfa(const string& _idfa)
{
    m_idfa = _idfa;
    m_idfaHasBeenSet = true;
}

bool FinanceAntiFraudFilter::IdfaHasBeenSet() const
{
    return m_idfaHasBeenSet;
}

string FinanceAntiFraudFilter::GetScene() const
{
    return m_scene;
}

void FinanceAntiFraudFilter::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool FinanceAntiFraudFilter::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string FinanceAntiFraudFilter::GetName() const
{
    return m_name;
}

void FinanceAntiFraudFilter::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FinanceAntiFraudFilter::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FinanceAntiFraudFilter::GetEmailAddress() const
{
    return m_emailAddress;
}

void FinanceAntiFraudFilter::SetEmailAddress(const string& _emailAddress)
{
    m_emailAddress = _emailAddress;
    m_emailAddressHasBeenSet = true;
}

bool FinanceAntiFraudFilter::EmailAddressHasBeenSet() const
{
    return m_emailAddressHasBeenSet;
}

string FinanceAntiFraudFilter::GetAddress() const
{
    return m_address;
}

void FinanceAntiFraudFilter::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool FinanceAntiFraudFilter::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string FinanceAntiFraudFilter::GetMac() const
{
    return m_mac;
}

void FinanceAntiFraudFilter::SetMac(const string& _mac)
{
    m_mac = _mac;
    m_macHasBeenSet = true;
}

bool FinanceAntiFraudFilter::MacHasBeenSet() const
{
    return m_macHasBeenSet;
}

string FinanceAntiFraudFilter::GetImsi() const
{
    return m_imsi;
}

void FinanceAntiFraudFilter::SetImsi(const string& _imsi)
{
    m_imsi = _imsi;
    m_imsiHasBeenSet = true;
}

bool FinanceAntiFraudFilter::ImsiHasBeenSet() const
{
    return m_imsiHasBeenSet;
}

string FinanceAntiFraudFilter::GetAccountType() const
{
    return m_accountType;
}

void FinanceAntiFraudFilter::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool FinanceAntiFraudFilter::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string FinanceAntiFraudFilter::GetUid() const
{
    return m_uid;
}

void FinanceAntiFraudFilter::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool FinanceAntiFraudFilter::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string FinanceAntiFraudFilter::GetAppIdU() const
{
    return m_appIdU;
}

void FinanceAntiFraudFilter::SetAppIdU(const string& _appIdU)
{
    m_appIdU = _appIdU;
    m_appIdUHasBeenSet = true;
}

bool FinanceAntiFraudFilter::AppIdUHasBeenSet() const
{
    return m_appIdUHasBeenSet;
}

string FinanceAntiFraudFilter::GetWifiMac() const
{
    return m_wifiMac;
}

void FinanceAntiFraudFilter::SetWifiMac(const string& _wifiMac)
{
    m_wifiMac = _wifiMac;
    m_wifiMacHasBeenSet = true;
}

bool FinanceAntiFraudFilter::WifiMacHasBeenSet() const
{
    return m_wifiMacHasBeenSet;
}

string FinanceAntiFraudFilter::GetWifiSSID() const
{
    return m_wifiSSID;
}

void FinanceAntiFraudFilter::SetWifiSSID(const string& _wifiSSID)
{
    m_wifiSSID = _wifiSSID;
    m_wifiSSIDHasBeenSet = true;
}

bool FinanceAntiFraudFilter::WifiSSIDHasBeenSet() const
{
    return m_wifiSSIDHasBeenSet;
}

string FinanceAntiFraudFilter::GetWifiBSSID() const
{
    return m_wifiBSSID;
}

void FinanceAntiFraudFilter::SetWifiBSSID(const string& _wifiBSSID)
{
    m_wifiBSSID = _wifiBSSID;
    m_wifiBSSIDHasBeenSet = true;
}

bool FinanceAntiFraudFilter::WifiBSSIDHasBeenSet() const
{
    return m_wifiBSSIDHasBeenSet;
}

string FinanceAntiFraudFilter::GetBusinessId() const
{
    return m_businessId;
}

void FinanceAntiFraudFilter::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool FinanceAntiFraudFilter::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string FinanceAntiFraudFilter::GetPhoneCryptoType() const
{
    return m_phoneCryptoType;
}

void FinanceAntiFraudFilter::SetPhoneCryptoType(const string& _phoneCryptoType)
{
    m_phoneCryptoType = _phoneCryptoType;
    m_phoneCryptoTypeHasBeenSet = true;
}

bool FinanceAntiFraudFilter::PhoneCryptoTypeHasBeenSet() const
{
    return m_phoneCryptoTypeHasBeenSet;
}

string FinanceAntiFraudFilter::GetIdCryptoType() const
{
    return m_idCryptoType;
}

void FinanceAntiFraudFilter::SetIdCryptoType(const string& _idCryptoType)
{
    m_idCryptoType = _idCryptoType;
    m_idCryptoTypeHasBeenSet = true;
}

bool FinanceAntiFraudFilter::IdCryptoTypeHasBeenSet() const
{
    return m_idCryptoTypeHasBeenSet;
}

string FinanceAntiFraudFilter::GetNameCryptoType() const
{
    return m_nameCryptoType;
}

void FinanceAntiFraudFilter::SetNameCryptoType(const string& _nameCryptoType)
{
    m_nameCryptoType = _nameCryptoType;
    m_nameCryptoTypeHasBeenSet = true;
}

bool FinanceAntiFraudFilter::NameCryptoTypeHasBeenSet() const
{
    return m_nameCryptoTypeHasBeenSet;
}

