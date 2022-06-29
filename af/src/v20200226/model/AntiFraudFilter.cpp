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

#include <tencentcloud/af/v20200226/model/AntiFraudFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Af::V20200226::Model;
using namespace std;

AntiFraudFilter::AntiFraudFilter() :
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
    m_nameCryptoTypeHasBeenSet(false),
    m_oldResponseTypeHasBeenSet(false)
{
}

CoreInternalOutcome AntiFraudFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerUin") && !value["CustomerUin"].IsNull())
    {
        if (!value["CustomerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.CustomerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerUin = string(value["CustomerUin"].GetString());
        m_customerUinHasBeenSet = true;
    }

    if (value.HasMember("CustomerAppid") && !value["CustomerAppid"].IsNull())
    {
        if (!value["CustomerAppid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.CustomerAppid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerAppid = string(value["CustomerAppid"].GetString());
        m_customerAppidHasBeenSet = true;
    }

    if (value.HasMember("IdNumber") && !value["IdNumber"].IsNull())
    {
        if (!value["IdNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.IdNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idNumber = string(value["IdNumber"].GetString());
        m_idNumberHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.Scene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scene = string(value["Scene"].GetString());
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("CustomerSubUin") && !value["CustomerSubUin"].IsNull())
    {
        if (!value["CustomerSubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.CustomerSubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerSubUin = string(value["CustomerSubUin"].GetString());
        m_customerSubUinHasBeenSet = true;
    }

    if (value.HasMember("Authorization") && !value["Authorization"].IsNull())
    {
        if (!value["Authorization"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.Authorization` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorization = string(value["Authorization"].GetString());
        m_authorizationHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("BankCardNumber") && !value["BankCardNumber"].IsNull())
    {
        if (!value["BankCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.BankCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankCardNumber = string(value["BankCardNumber"].GetString());
        m_bankCardNumberHasBeenSet = true;
    }

    if (value.HasMember("UserIp") && !value["UserIp"].IsNull())
    {
        if (!value["UserIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.UserIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIp = string(value["UserIp"].GetString());
        m_userIpHasBeenSet = true;
    }

    if (value.HasMember("Imei") && !value["Imei"].IsNull())
    {
        if (!value["Imei"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.Imei` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imei = string(value["Imei"].GetString());
        m_imeiHasBeenSet = true;
    }

    if (value.HasMember("Idfa") && !value["Idfa"].IsNull())
    {
        if (!value["Idfa"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.Idfa` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idfa = string(value["Idfa"].GetString());
        m_idfaHasBeenSet = true;
    }

    if (value.HasMember("EmailAddress") && !value["EmailAddress"].IsNull())
    {
        if (!value["EmailAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.EmailAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emailAddress = string(value["EmailAddress"].GetString());
        m_emailAddressHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Mac") && !value["Mac"].IsNull())
    {
        if (!value["Mac"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.Mac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mac = string(value["Mac"].GetString());
        m_macHasBeenSet = true;
    }

    if (value.HasMember("Imsi") && !value["Imsi"].IsNull())
    {
        if (!value["Imsi"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.Imsi` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imsi = string(value["Imsi"].GetString());
        m_imsiHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.AccountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = string(value["AccountType"].GetString());
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("AppIdU") && !value["AppIdU"].IsNull())
    {
        if (!value["AppIdU"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.AppIdU` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appIdU = string(value["AppIdU"].GetString());
        m_appIdUHasBeenSet = true;
    }

    if (value.HasMember("WifiMac") && !value["WifiMac"].IsNull())
    {
        if (!value["WifiMac"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.WifiMac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wifiMac = string(value["WifiMac"].GetString());
        m_wifiMacHasBeenSet = true;
    }

    if (value.HasMember("WifiSSID") && !value["WifiSSID"].IsNull())
    {
        if (!value["WifiSSID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.WifiSSID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wifiSSID = string(value["WifiSSID"].GetString());
        m_wifiSSIDHasBeenSet = true;
    }

    if (value.HasMember("WifiBSSID") && !value["WifiBSSID"].IsNull())
    {
        if (!value["WifiBSSID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.WifiBSSID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wifiBSSID = string(value["WifiBSSID"].GetString());
        m_wifiBSSIDHasBeenSet = true;
    }

    if (value.HasMember("ExtensionId") && !value["ExtensionId"].IsNull())
    {
        if (!value["ExtensionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.ExtensionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extensionId = string(value["ExtensionId"].GetString());
        m_extensionIdHasBeenSet = true;
    }

    if (value.HasMember("ExtensionIn") && !value["ExtensionIn"].IsNull())
    {
        if (!value["ExtensionIn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.ExtensionIn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extensionIn = string(value["ExtensionIn"].GetString());
        m_extensionInHasBeenSet = true;
    }

    if (value.HasMember("BusinessId") && !value["BusinessId"].IsNull())
    {
        if (!value["BusinessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.BusinessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessId = string(value["BusinessId"].GetString());
        m_businessIdHasBeenSet = true;
    }

    if (value.HasMember("IdCryptoType") && !value["IdCryptoType"].IsNull())
    {
        if (!value["IdCryptoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.IdCryptoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCryptoType = string(value["IdCryptoType"].GetString());
        m_idCryptoTypeHasBeenSet = true;
    }

    if (value.HasMember("PhoneCryptoType") && !value["PhoneCryptoType"].IsNull())
    {
        if (!value["PhoneCryptoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.PhoneCryptoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneCryptoType = string(value["PhoneCryptoType"].GetString());
        m_phoneCryptoTypeHasBeenSet = true;
    }

    if (value.HasMember("NameCryptoType") && !value["NameCryptoType"].IsNull())
    {
        if (!value["NameCryptoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.NameCryptoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameCryptoType = string(value["NameCryptoType"].GetString());
        m_nameCryptoTypeHasBeenSet = true;
    }

    if (value.HasMember("OldResponseType") && !value["OldResponseType"].IsNull())
    {
        if (!value["OldResponseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudFilter.OldResponseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldResponseType = string(value["OldResponseType"].GetString());
        m_oldResponseTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AntiFraudFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_oldResponseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldResponseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldResponseType.c_str(), allocator).Move(), allocator);
    }

}


string AntiFraudFilter::GetCustomerUin() const
{
    return m_customerUin;
}

void AntiFraudFilter::SetCustomerUin(const string& _customerUin)
{
    m_customerUin = _customerUin;
    m_customerUinHasBeenSet = true;
}

bool AntiFraudFilter::CustomerUinHasBeenSet() const
{
    return m_customerUinHasBeenSet;
}

string AntiFraudFilter::GetCustomerAppid() const
{
    return m_customerAppid;
}

void AntiFraudFilter::SetCustomerAppid(const string& _customerAppid)
{
    m_customerAppid = _customerAppid;
    m_customerAppidHasBeenSet = true;
}

bool AntiFraudFilter::CustomerAppidHasBeenSet() const
{
    return m_customerAppidHasBeenSet;
}

string AntiFraudFilter::GetIdNumber() const
{
    return m_idNumber;
}

void AntiFraudFilter::SetIdNumber(const string& _idNumber)
{
    m_idNumber = _idNumber;
    m_idNumberHasBeenSet = true;
}

bool AntiFraudFilter::IdNumberHasBeenSet() const
{
    return m_idNumberHasBeenSet;
}

string AntiFraudFilter::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void AntiFraudFilter::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool AntiFraudFilter::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string AntiFraudFilter::GetScene() const
{
    return m_scene;
}

void AntiFraudFilter::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool AntiFraudFilter::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string AntiFraudFilter::GetCustomerSubUin() const
{
    return m_customerSubUin;
}

void AntiFraudFilter::SetCustomerSubUin(const string& _customerSubUin)
{
    m_customerSubUin = _customerSubUin;
    m_customerSubUinHasBeenSet = true;
}

bool AntiFraudFilter::CustomerSubUinHasBeenSet() const
{
    return m_customerSubUinHasBeenSet;
}

string AntiFraudFilter::GetAuthorization() const
{
    return m_authorization;
}

void AntiFraudFilter::SetAuthorization(const string& _authorization)
{
    m_authorization = _authorization;
    m_authorizationHasBeenSet = true;
}

bool AntiFraudFilter::AuthorizationHasBeenSet() const
{
    return m_authorizationHasBeenSet;
}

string AntiFraudFilter::GetName() const
{
    return m_name;
}

void AntiFraudFilter::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AntiFraudFilter::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AntiFraudFilter::GetBankCardNumber() const
{
    return m_bankCardNumber;
}

void AntiFraudFilter::SetBankCardNumber(const string& _bankCardNumber)
{
    m_bankCardNumber = _bankCardNumber;
    m_bankCardNumberHasBeenSet = true;
}

bool AntiFraudFilter::BankCardNumberHasBeenSet() const
{
    return m_bankCardNumberHasBeenSet;
}

string AntiFraudFilter::GetUserIp() const
{
    return m_userIp;
}

void AntiFraudFilter::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool AntiFraudFilter::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

string AntiFraudFilter::GetImei() const
{
    return m_imei;
}

void AntiFraudFilter::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool AntiFraudFilter::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

string AntiFraudFilter::GetIdfa() const
{
    return m_idfa;
}

void AntiFraudFilter::SetIdfa(const string& _idfa)
{
    m_idfa = _idfa;
    m_idfaHasBeenSet = true;
}

bool AntiFraudFilter::IdfaHasBeenSet() const
{
    return m_idfaHasBeenSet;
}

string AntiFraudFilter::GetEmailAddress() const
{
    return m_emailAddress;
}

void AntiFraudFilter::SetEmailAddress(const string& _emailAddress)
{
    m_emailAddress = _emailAddress;
    m_emailAddressHasBeenSet = true;
}

bool AntiFraudFilter::EmailAddressHasBeenSet() const
{
    return m_emailAddressHasBeenSet;
}

string AntiFraudFilter::GetAddress() const
{
    return m_address;
}

void AntiFraudFilter::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool AntiFraudFilter::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string AntiFraudFilter::GetMac() const
{
    return m_mac;
}

void AntiFraudFilter::SetMac(const string& _mac)
{
    m_mac = _mac;
    m_macHasBeenSet = true;
}

bool AntiFraudFilter::MacHasBeenSet() const
{
    return m_macHasBeenSet;
}

string AntiFraudFilter::GetImsi() const
{
    return m_imsi;
}

void AntiFraudFilter::SetImsi(const string& _imsi)
{
    m_imsi = _imsi;
    m_imsiHasBeenSet = true;
}

bool AntiFraudFilter::ImsiHasBeenSet() const
{
    return m_imsiHasBeenSet;
}

string AntiFraudFilter::GetAccountType() const
{
    return m_accountType;
}

void AntiFraudFilter::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool AntiFraudFilter::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string AntiFraudFilter::GetUid() const
{
    return m_uid;
}

void AntiFraudFilter::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool AntiFraudFilter::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string AntiFraudFilter::GetAppIdU() const
{
    return m_appIdU;
}

void AntiFraudFilter::SetAppIdU(const string& _appIdU)
{
    m_appIdU = _appIdU;
    m_appIdUHasBeenSet = true;
}

bool AntiFraudFilter::AppIdUHasBeenSet() const
{
    return m_appIdUHasBeenSet;
}

string AntiFraudFilter::GetWifiMac() const
{
    return m_wifiMac;
}

void AntiFraudFilter::SetWifiMac(const string& _wifiMac)
{
    m_wifiMac = _wifiMac;
    m_wifiMacHasBeenSet = true;
}

bool AntiFraudFilter::WifiMacHasBeenSet() const
{
    return m_wifiMacHasBeenSet;
}

string AntiFraudFilter::GetWifiSSID() const
{
    return m_wifiSSID;
}

void AntiFraudFilter::SetWifiSSID(const string& _wifiSSID)
{
    m_wifiSSID = _wifiSSID;
    m_wifiSSIDHasBeenSet = true;
}

bool AntiFraudFilter::WifiSSIDHasBeenSet() const
{
    return m_wifiSSIDHasBeenSet;
}

string AntiFraudFilter::GetWifiBSSID() const
{
    return m_wifiBSSID;
}

void AntiFraudFilter::SetWifiBSSID(const string& _wifiBSSID)
{
    m_wifiBSSID = _wifiBSSID;
    m_wifiBSSIDHasBeenSet = true;
}

bool AntiFraudFilter::WifiBSSIDHasBeenSet() const
{
    return m_wifiBSSIDHasBeenSet;
}

string AntiFraudFilter::GetExtensionId() const
{
    return m_extensionId;
}

void AntiFraudFilter::SetExtensionId(const string& _extensionId)
{
    m_extensionId = _extensionId;
    m_extensionIdHasBeenSet = true;
}

bool AntiFraudFilter::ExtensionIdHasBeenSet() const
{
    return m_extensionIdHasBeenSet;
}

string AntiFraudFilter::GetExtensionIn() const
{
    return m_extensionIn;
}

void AntiFraudFilter::SetExtensionIn(const string& _extensionIn)
{
    m_extensionIn = _extensionIn;
    m_extensionInHasBeenSet = true;
}

bool AntiFraudFilter::ExtensionInHasBeenSet() const
{
    return m_extensionInHasBeenSet;
}

string AntiFraudFilter::GetBusinessId() const
{
    return m_businessId;
}

void AntiFraudFilter::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool AntiFraudFilter::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string AntiFraudFilter::GetIdCryptoType() const
{
    return m_idCryptoType;
}

void AntiFraudFilter::SetIdCryptoType(const string& _idCryptoType)
{
    m_idCryptoType = _idCryptoType;
    m_idCryptoTypeHasBeenSet = true;
}

bool AntiFraudFilter::IdCryptoTypeHasBeenSet() const
{
    return m_idCryptoTypeHasBeenSet;
}

string AntiFraudFilter::GetPhoneCryptoType() const
{
    return m_phoneCryptoType;
}

void AntiFraudFilter::SetPhoneCryptoType(const string& _phoneCryptoType)
{
    m_phoneCryptoType = _phoneCryptoType;
    m_phoneCryptoTypeHasBeenSet = true;
}

bool AntiFraudFilter::PhoneCryptoTypeHasBeenSet() const
{
    return m_phoneCryptoTypeHasBeenSet;
}

string AntiFraudFilter::GetNameCryptoType() const
{
    return m_nameCryptoType;
}

void AntiFraudFilter::SetNameCryptoType(const string& _nameCryptoType)
{
    m_nameCryptoType = _nameCryptoType;
    m_nameCryptoTypeHasBeenSet = true;
}

bool AntiFraudFilter::NameCryptoTypeHasBeenSet() const
{
    return m_nameCryptoTypeHasBeenSet;
}

string AntiFraudFilter::GetOldResponseType() const
{
    return m_oldResponseType;
}

void AntiFraudFilter::SetOldResponseType(const string& _oldResponseType)
{
    m_oldResponseType = _oldResponseType;
    m_oldResponseTypeHasBeenSet = true;
}

bool AntiFraudFilter::OldResponseTypeHasBeenSet() const
{
    return m_oldResponseTypeHasBeenSet;
}

