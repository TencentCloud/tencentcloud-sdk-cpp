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

#include <tencentcloud/afc/v20200226/model/AntiFraudVipFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Afc::V20200226::Model;
using namespace std;

AntiFraudVipFilter::AntiFraudVipFilter() :
    m_customerUinHasBeenSet(false),
    m_customerAppidHasBeenSet(false),
    m_idNumberHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_customerSubUinHasBeenSet(false),
    m_authorizationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_bankCardNumberHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_imeiHasBeenSet(false),
    m_idfaHasBeenSet(false),
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
    m_extensionIdHasBeenSet(false),
    m_extensionInHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_idCryptoTypeHasBeenSet(false),
    m_phoneCryptoTypeHasBeenSet(false),
    m_nameCryptoTypeHasBeenSet(false)
{
}

CoreInternalOutcome AntiFraudVipFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerUin") && !value["CustomerUin"].IsNull())
    {
        if (!value["CustomerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.CustomerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerUin = string(value["CustomerUin"].GetString());
        m_customerUinHasBeenSet = true;
    }

    if (value.HasMember("CustomerAppid") && !value["CustomerAppid"].IsNull())
    {
        if (!value["CustomerAppid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.CustomerAppid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerAppid = string(value["CustomerAppid"].GetString());
        m_customerAppidHasBeenSet = true;
    }

    if (value.HasMember("IdNumber") && !value["IdNumber"].IsNull())
    {
        if (!value["IdNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.IdNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idNumber = string(value["IdNumber"].GetString());
        m_idNumberHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.Scene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scene = string(value["Scene"].GetString());
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("CustomerSubUin") && !value["CustomerSubUin"].IsNull())
    {
        if (!value["CustomerSubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.CustomerSubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerSubUin = string(value["CustomerSubUin"].GetString());
        m_customerSubUinHasBeenSet = true;
    }

    if (value.HasMember("Authorization") && !value["Authorization"].IsNull())
    {
        if (!value["Authorization"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.Authorization` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorization = string(value["Authorization"].GetString());
        m_authorizationHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("BankCardNumber") && !value["BankCardNumber"].IsNull())
    {
        if (!value["BankCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.BankCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankCardNumber = string(value["BankCardNumber"].GetString());
        m_bankCardNumberHasBeenSet = true;
    }

    if (value.HasMember("UserIp") && !value["UserIp"].IsNull())
    {
        if (!value["UserIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.UserIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIp = string(value["UserIp"].GetString());
        m_userIpHasBeenSet = true;
    }

    if (value.HasMember("Imei") && !value["Imei"].IsNull())
    {
        if (!value["Imei"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.Imei` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imei = string(value["Imei"].GetString());
        m_imeiHasBeenSet = true;
    }

    if (value.HasMember("Idfa") && !value["Idfa"].IsNull())
    {
        if (!value["Idfa"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.Idfa` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idfa = string(value["Idfa"].GetString());
        m_idfaHasBeenSet = true;
    }

    if (value.HasMember("EmailAddress") && !value["EmailAddress"].IsNull())
    {
        if (!value["EmailAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.EmailAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emailAddress = string(value["EmailAddress"].GetString());
        m_emailAddressHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Mac") && !value["Mac"].IsNull())
    {
        if (!value["Mac"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.Mac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mac = string(value["Mac"].GetString());
        m_macHasBeenSet = true;
    }

    if (value.HasMember("Imsi") && !value["Imsi"].IsNull())
    {
        if (!value["Imsi"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.Imsi` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imsi = string(value["Imsi"].GetString());
        m_imsiHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.AccountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = string(value["AccountType"].GetString());
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("AppIdU") && !value["AppIdU"].IsNull())
    {
        if (!value["AppIdU"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.AppIdU` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appIdU = string(value["AppIdU"].GetString());
        m_appIdUHasBeenSet = true;
    }

    if (value.HasMember("WifiMac") && !value["WifiMac"].IsNull())
    {
        if (!value["WifiMac"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.WifiMac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wifiMac = string(value["WifiMac"].GetString());
        m_wifiMacHasBeenSet = true;
    }

    if (value.HasMember("WifiSSID") && !value["WifiSSID"].IsNull())
    {
        if (!value["WifiSSID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.WifiSSID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wifiSSID = string(value["WifiSSID"].GetString());
        m_wifiSSIDHasBeenSet = true;
    }

    if (value.HasMember("WifiBSSID") && !value["WifiBSSID"].IsNull())
    {
        if (!value["WifiBSSID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.WifiBSSID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wifiBSSID = string(value["WifiBSSID"].GetString());
        m_wifiBSSIDHasBeenSet = true;
    }

    if (value.HasMember("ExtensionId") && !value["ExtensionId"].IsNull())
    {
        if (!value["ExtensionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.ExtensionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extensionId = string(value["ExtensionId"].GetString());
        m_extensionIdHasBeenSet = true;
    }

    if (value.HasMember("ExtensionIn") && !value["ExtensionIn"].IsNull())
    {
        if (!value["ExtensionIn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.ExtensionIn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extensionIn = string(value["ExtensionIn"].GetString());
        m_extensionInHasBeenSet = true;
    }

    if (value.HasMember("BusinessId") && !value["BusinessId"].IsNull())
    {
        if (!value["BusinessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.BusinessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessId = string(value["BusinessId"].GetString());
        m_businessIdHasBeenSet = true;
    }

    if (value.HasMember("IdCryptoType") && !value["IdCryptoType"].IsNull())
    {
        if (!value["IdCryptoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.IdCryptoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCryptoType = string(value["IdCryptoType"].GetString());
        m_idCryptoTypeHasBeenSet = true;
    }

    if (value.HasMember("PhoneCryptoType") && !value["PhoneCryptoType"].IsNull())
    {
        if (!value["PhoneCryptoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.PhoneCryptoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneCryptoType = string(value["PhoneCryptoType"].GetString());
        m_phoneCryptoTypeHasBeenSet = true;
    }

    if (value.HasMember("NameCryptoType") && !value["NameCryptoType"].IsNull())
    {
        if (!value["NameCryptoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipFilter.NameCryptoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameCryptoType = string(value["NameCryptoType"].GetString());
        m_nameCryptoTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AntiFraudVipFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_customerAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerAppid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerAppid.c_str(), allocator).Move(), allocator);
    }

    if (m_idNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_customerSubUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerSubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerSubUin.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authorization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorization.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_extensionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extensionId.c_str(), allocator).Move(), allocator);
    }

    if (m_extensionInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extensionIn.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_idCryptoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCryptoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCryptoType.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneCryptoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneCryptoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneCryptoType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameCryptoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameCryptoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameCryptoType.c_str(), allocator).Move(), allocator);
    }

}


string AntiFraudVipFilter::GetCustomerUin() const
{
    return m_customerUin;
}

void AntiFraudVipFilter::SetCustomerUin(const string& _customerUin)
{
    m_customerUin = _customerUin;
    m_customerUinHasBeenSet = true;
}

bool AntiFraudVipFilter::CustomerUinHasBeenSet() const
{
    return m_customerUinHasBeenSet;
}

string AntiFraudVipFilter::GetCustomerAppid() const
{
    return m_customerAppid;
}

void AntiFraudVipFilter::SetCustomerAppid(const string& _customerAppid)
{
    m_customerAppid = _customerAppid;
    m_customerAppidHasBeenSet = true;
}

bool AntiFraudVipFilter::CustomerAppidHasBeenSet() const
{
    return m_customerAppidHasBeenSet;
}

string AntiFraudVipFilter::GetIdNumber() const
{
    return m_idNumber;
}

void AntiFraudVipFilter::SetIdNumber(const string& _idNumber)
{
    m_idNumber = _idNumber;
    m_idNumberHasBeenSet = true;
}

bool AntiFraudVipFilter::IdNumberHasBeenSet() const
{
    return m_idNumberHasBeenSet;
}

string AntiFraudVipFilter::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void AntiFraudVipFilter::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool AntiFraudVipFilter::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string AntiFraudVipFilter::GetScene() const
{
    return m_scene;
}

void AntiFraudVipFilter::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool AntiFraudVipFilter::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string AntiFraudVipFilter::GetCustomerSubUin() const
{
    return m_customerSubUin;
}

void AntiFraudVipFilter::SetCustomerSubUin(const string& _customerSubUin)
{
    m_customerSubUin = _customerSubUin;
    m_customerSubUinHasBeenSet = true;
}

bool AntiFraudVipFilter::CustomerSubUinHasBeenSet() const
{
    return m_customerSubUinHasBeenSet;
}

string AntiFraudVipFilter::GetAuthorization() const
{
    return m_authorization;
}

void AntiFraudVipFilter::SetAuthorization(const string& _authorization)
{
    m_authorization = _authorization;
    m_authorizationHasBeenSet = true;
}

bool AntiFraudVipFilter::AuthorizationHasBeenSet() const
{
    return m_authorizationHasBeenSet;
}

string AntiFraudVipFilter::GetName() const
{
    return m_name;
}

void AntiFraudVipFilter::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AntiFraudVipFilter::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AntiFraudVipFilter::GetBankCardNumber() const
{
    return m_bankCardNumber;
}

void AntiFraudVipFilter::SetBankCardNumber(const string& _bankCardNumber)
{
    m_bankCardNumber = _bankCardNumber;
    m_bankCardNumberHasBeenSet = true;
}

bool AntiFraudVipFilter::BankCardNumberHasBeenSet() const
{
    return m_bankCardNumberHasBeenSet;
}

string AntiFraudVipFilter::GetUserIp() const
{
    return m_userIp;
}

void AntiFraudVipFilter::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool AntiFraudVipFilter::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

string AntiFraudVipFilter::GetImei() const
{
    return m_imei;
}

void AntiFraudVipFilter::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool AntiFraudVipFilter::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

string AntiFraudVipFilter::GetIdfa() const
{
    return m_idfa;
}

void AntiFraudVipFilter::SetIdfa(const string& _idfa)
{
    m_idfa = _idfa;
    m_idfaHasBeenSet = true;
}

bool AntiFraudVipFilter::IdfaHasBeenSet() const
{
    return m_idfaHasBeenSet;
}

string AntiFraudVipFilter::GetEmailAddress() const
{
    return m_emailAddress;
}

void AntiFraudVipFilter::SetEmailAddress(const string& _emailAddress)
{
    m_emailAddress = _emailAddress;
    m_emailAddressHasBeenSet = true;
}

bool AntiFraudVipFilter::EmailAddressHasBeenSet() const
{
    return m_emailAddressHasBeenSet;
}

string AntiFraudVipFilter::GetAddress() const
{
    return m_address;
}

void AntiFraudVipFilter::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool AntiFraudVipFilter::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string AntiFraudVipFilter::GetMac() const
{
    return m_mac;
}

void AntiFraudVipFilter::SetMac(const string& _mac)
{
    m_mac = _mac;
    m_macHasBeenSet = true;
}

bool AntiFraudVipFilter::MacHasBeenSet() const
{
    return m_macHasBeenSet;
}

string AntiFraudVipFilter::GetImsi() const
{
    return m_imsi;
}

void AntiFraudVipFilter::SetImsi(const string& _imsi)
{
    m_imsi = _imsi;
    m_imsiHasBeenSet = true;
}

bool AntiFraudVipFilter::ImsiHasBeenSet() const
{
    return m_imsiHasBeenSet;
}

string AntiFraudVipFilter::GetAccountType() const
{
    return m_accountType;
}

void AntiFraudVipFilter::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool AntiFraudVipFilter::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string AntiFraudVipFilter::GetUid() const
{
    return m_uid;
}

void AntiFraudVipFilter::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool AntiFraudVipFilter::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string AntiFraudVipFilter::GetAppIdU() const
{
    return m_appIdU;
}

void AntiFraudVipFilter::SetAppIdU(const string& _appIdU)
{
    m_appIdU = _appIdU;
    m_appIdUHasBeenSet = true;
}

bool AntiFraudVipFilter::AppIdUHasBeenSet() const
{
    return m_appIdUHasBeenSet;
}

string AntiFraudVipFilter::GetWifiMac() const
{
    return m_wifiMac;
}

void AntiFraudVipFilter::SetWifiMac(const string& _wifiMac)
{
    m_wifiMac = _wifiMac;
    m_wifiMacHasBeenSet = true;
}

bool AntiFraudVipFilter::WifiMacHasBeenSet() const
{
    return m_wifiMacHasBeenSet;
}

string AntiFraudVipFilter::GetWifiSSID() const
{
    return m_wifiSSID;
}

void AntiFraudVipFilter::SetWifiSSID(const string& _wifiSSID)
{
    m_wifiSSID = _wifiSSID;
    m_wifiSSIDHasBeenSet = true;
}

bool AntiFraudVipFilter::WifiSSIDHasBeenSet() const
{
    return m_wifiSSIDHasBeenSet;
}

string AntiFraudVipFilter::GetWifiBSSID() const
{
    return m_wifiBSSID;
}

void AntiFraudVipFilter::SetWifiBSSID(const string& _wifiBSSID)
{
    m_wifiBSSID = _wifiBSSID;
    m_wifiBSSIDHasBeenSet = true;
}

bool AntiFraudVipFilter::WifiBSSIDHasBeenSet() const
{
    return m_wifiBSSIDHasBeenSet;
}

string AntiFraudVipFilter::GetExtensionId() const
{
    return m_extensionId;
}

void AntiFraudVipFilter::SetExtensionId(const string& _extensionId)
{
    m_extensionId = _extensionId;
    m_extensionIdHasBeenSet = true;
}

bool AntiFraudVipFilter::ExtensionIdHasBeenSet() const
{
    return m_extensionIdHasBeenSet;
}

string AntiFraudVipFilter::GetExtensionIn() const
{
    return m_extensionIn;
}

void AntiFraudVipFilter::SetExtensionIn(const string& _extensionIn)
{
    m_extensionIn = _extensionIn;
    m_extensionInHasBeenSet = true;
}

bool AntiFraudVipFilter::ExtensionInHasBeenSet() const
{
    return m_extensionInHasBeenSet;
}

string AntiFraudVipFilter::GetBusinessId() const
{
    return m_businessId;
}

void AntiFraudVipFilter::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool AntiFraudVipFilter::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string AntiFraudVipFilter::GetIdCryptoType() const
{
    return m_idCryptoType;
}

void AntiFraudVipFilter::SetIdCryptoType(const string& _idCryptoType)
{
    m_idCryptoType = _idCryptoType;
    m_idCryptoTypeHasBeenSet = true;
}

bool AntiFraudVipFilter::IdCryptoTypeHasBeenSet() const
{
    return m_idCryptoTypeHasBeenSet;
}

string AntiFraudVipFilter::GetPhoneCryptoType() const
{
    return m_phoneCryptoType;
}

void AntiFraudVipFilter::SetPhoneCryptoType(const string& _phoneCryptoType)
{
    m_phoneCryptoType = _phoneCryptoType;
    m_phoneCryptoTypeHasBeenSet = true;
}

bool AntiFraudVipFilter::PhoneCryptoTypeHasBeenSet() const
{
    return m_phoneCryptoTypeHasBeenSet;
}

string AntiFraudVipFilter::GetNameCryptoType() const
{
    return m_nameCryptoType;
}

void AntiFraudVipFilter::SetNameCryptoType(const string& _nameCryptoType)
{
    m_nameCryptoType = _nameCryptoType;
    m_nameCryptoTypeHasBeenSet = true;
}

bool AntiFraudVipFilter::NameCryptoTypeHasBeenSet() const
{
    return m_nameCryptoTypeHasBeenSet;
}

