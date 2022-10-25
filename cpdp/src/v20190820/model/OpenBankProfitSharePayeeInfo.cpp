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

#include <tencentcloud/cpdp/v20190820/model/OpenBankProfitSharePayeeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OpenBankProfitSharePayeeInfo::OpenBankProfitSharePayeeInfo() :
    m_accountNameHasBeenSet(false),
    m_bankNameHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_natureHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_depositCountryHasBeenSet(false),
    m_expireDateHasBeenSet(false),
    m_flagHasBeenSet(false),
    m_bankAddressHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_isOSAHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_legalIdNoHasBeenSet(false),
    m_telephoneHasBeenSet(false),
    m_bicCodeHasBeenSet(false),
    m_swiftCodeHasBeenSet(false),
    m_cnapsHasBeenSet(false),
    m_transferBankNoHasBeenSet(false),
    m_fidHasBeenSet(false)
{
}

CoreInternalOutcome OpenBankProfitSharePayeeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(value["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (value.HasMember("BankName") && !value["BankName"].IsNull())
    {
        if (!value["BankName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.BankName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankName = string(value["BankName"].GetString());
        m_bankNameHasBeenSet = true;
    }

    if (value.HasMember("Currency") && !value["Currency"].IsNull())
    {
        if (!value["Currency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.Currency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currency = string(value["Currency"].GetString());
        m_currencyHasBeenSet = true;
    }

    if (value.HasMember("Nature") && !value["Nature"].IsNull())
    {
        if (!value["Nature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.Nature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nature = string(value["Nature"].GetString());
        m_natureHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("DepositCountry") && !value["DepositCountry"].IsNull())
    {
        if (!value["DepositCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.DepositCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_depositCountry = string(value["DepositCountry"].GetString());
        m_depositCountryHasBeenSet = true;
    }

    if (value.HasMember("ExpireDate") && !value["ExpireDate"].IsNull())
    {
        if (!value["ExpireDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.ExpireDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireDate = string(value["ExpireDate"].GetString());
        m_expireDateHasBeenSet = true;
    }

    if (value.HasMember("Flag") && !value["Flag"].IsNull())
    {
        if (!value["Flag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.Flag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flag = string(value["Flag"].GetString());
        m_flagHasBeenSet = true;
    }

    if (value.HasMember("BankAddress") && !value["BankAddress"].IsNull())
    {
        if (!value["BankAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.BankAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankAddress = string(value["BankAddress"].GetString());
        m_bankAddressHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("IsOSA") && !value["IsOSA"].IsNull())
    {
        if (!value["IsOSA"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.IsOSA` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isOSA = string(value["IsOSA"].GetString());
        m_isOSAHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("LegalIdNo") && !value["LegalIdNo"].IsNull())
    {
        if (!value["LegalIdNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.LegalIdNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalIdNo = string(value["LegalIdNo"].GetString());
        m_legalIdNoHasBeenSet = true;
    }

    if (value.HasMember("Telephone") && !value["Telephone"].IsNull())
    {
        if (!value["Telephone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.Telephone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_telephone = string(value["Telephone"].GetString());
        m_telephoneHasBeenSet = true;
    }

    if (value.HasMember("BicCode") && !value["BicCode"].IsNull())
    {
        if (!value["BicCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.BicCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bicCode = string(value["BicCode"].GetString());
        m_bicCodeHasBeenSet = true;
    }

    if (value.HasMember("SwiftCode") && !value["SwiftCode"].IsNull())
    {
        if (!value["SwiftCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.SwiftCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_swiftCode = string(value["SwiftCode"].GetString());
        m_swiftCodeHasBeenSet = true;
    }

    if (value.HasMember("Cnaps") && !value["Cnaps"].IsNull())
    {
        if (!value["Cnaps"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.Cnaps` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnaps = string(value["Cnaps"].GetString());
        m_cnapsHasBeenSet = true;
    }

    if (value.HasMember("TransferBankNo") && !value["TransferBankNo"].IsNull())
    {
        if (!value["TransferBankNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.TransferBankNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferBankNo = string(value["TransferBankNo"].GetString());
        m_transferBankNoHasBeenSet = true;
    }

    if (value.HasMember("Fid") && !value["Fid"].IsNull())
    {
        if (!value["Fid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitSharePayeeInfo.Fid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fid = string(value["Fid"].GetString());
        m_fidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenBankProfitSharePayeeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_bankNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankName.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }

    if (m_natureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nature.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_depositCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepositCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_depositCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_expireDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireDate.c_str(), allocator).Move(), allocator);
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flag.c_str(), allocator).Move(), allocator);
    }

    if (m_bankAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_isOSAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOSA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isOSA.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_legalIdNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalIdNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalIdNo.c_str(), allocator).Move(), allocator);
    }

    if (m_telephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Telephone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_telephone.c_str(), allocator).Move(), allocator);
    }

    if (m_bicCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BicCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bicCode.c_str(), allocator).Move(), allocator);
    }

    if (m_swiftCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwiftCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_swiftCode.c_str(), allocator).Move(), allocator);
    }

    if (m_cnapsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cnaps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnaps.c_str(), allocator).Move(), allocator);
    }

    if (m_transferBankNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferBankNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferBankNo.c_str(), allocator).Move(), allocator);
    }

    if (m_fidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fid.c_str(), allocator).Move(), allocator);
    }

}


string OpenBankProfitSharePayeeInfo::GetAccountName() const
{
    return m_accountName;
}

void OpenBankProfitSharePayeeInfo::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetBankName() const
{
    return m_bankName;
}

void OpenBankProfitSharePayeeInfo::SetBankName(const string& _bankName)
{
    m_bankName = _bankName;
    m_bankNameHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::BankNameHasBeenSet() const
{
    return m_bankNameHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetCurrency() const
{
    return m_currency;
}

void OpenBankProfitSharePayeeInfo::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetNature() const
{
    return m_nature;
}

void OpenBankProfitSharePayeeInfo::SetNature(const string& _nature)
{
    m_nature = _nature;
    m_natureHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::NatureHasBeenSet() const
{
    return m_natureHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetCountry() const
{
    return m_country;
}

void OpenBankProfitSharePayeeInfo::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetDepositCountry() const
{
    return m_depositCountry;
}

void OpenBankProfitSharePayeeInfo::SetDepositCountry(const string& _depositCountry)
{
    m_depositCountry = _depositCountry;
    m_depositCountryHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::DepositCountryHasBeenSet() const
{
    return m_depositCountryHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetExpireDate() const
{
    return m_expireDate;
}

void OpenBankProfitSharePayeeInfo::SetExpireDate(const string& _expireDate)
{
    m_expireDate = _expireDate;
    m_expireDateHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::ExpireDateHasBeenSet() const
{
    return m_expireDateHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetFlag() const
{
    return m_flag;
}

void OpenBankProfitSharePayeeInfo::SetFlag(const string& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetBankAddress() const
{
    return m_bankAddress;
}

void OpenBankProfitSharePayeeInfo::SetBankAddress(const string& _bankAddress)
{
    m_bankAddress = _bankAddress;
    m_bankAddressHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::BankAddressHasBeenSet() const
{
    return m_bankAddressHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetAddress() const
{
    return m_address;
}

void OpenBankProfitSharePayeeInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetIsOSA() const
{
    return m_isOSA;
}

void OpenBankProfitSharePayeeInfo::SetIsOSA(const string& _isOSA)
{
    m_isOSA = _isOSA;
    m_isOSAHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::IsOSAHasBeenSet() const
{
    return m_isOSAHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetProvince() const
{
    return m_province;
}

void OpenBankProfitSharePayeeInfo::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetCity() const
{
    return m_city;
}

void OpenBankProfitSharePayeeInfo::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetLegalIdNo() const
{
    return m_legalIdNo;
}

void OpenBankProfitSharePayeeInfo::SetLegalIdNo(const string& _legalIdNo)
{
    m_legalIdNo = _legalIdNo;
    m_legalIdNoHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::LegalIdNoHasBeenSet() const
{
    return m_legalIdNoHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetTelephone() const
{
    return m_telephone;
}

void OpenBankProfitSharePayeeInfo::SetTelephone(const string& _telephone)
{
    m_telephone = _telephone;
    m_telephoneHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::TelephoneHasBeenSet() const
{
    return m_telephoneHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetBicCode() const
{
    return m_bicCode;
}

void OpenBankProfitSharePayeeInfo::SetBicCode(const string& _bicCode)
{
    m_bicCode = _bicCode;
    m_bicCodeHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::BicCodeHasBeenSet() const
{
    return m_bicCodeHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetSwiftCode() const
{
    return m_swiftCode;
}

void OpenBankProfitSharePayeeInfo::SetSwiftCode(const string& _swiftCode)
{
    m_swiftCode = _swiftCode;
    m_swiftCodeHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::SwiftCodeHasBeenSet() const
{
    return m_swiftCodeHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetCnaps() const
{
    return m_cnaps;
}

void OpenBankProfitSharePayeeInfo::SetCnaps(const string& _cnaps)
{
    m_cnaps = _cnaps;
    m_cnapsHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::CnapsHasBeenSet() const
{
    return m_cnapsHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetTransferBankNo() const
{
    return m_transferBankNo;
}

void OpenBankProfitSharePayeeInfo::SetTransferBankNo(const string& _transferBankNo)
{
    m_transferBankNo = _transferBankNo;
    m_transferBankNoHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::TransferBankNoHasBeenSet() const
{
    return m_transferBankNoHasBeenSet;
}

string OpenBankProfitSharePayeeInfo::GetFid() const
{
    return m_fid;
}

void OpenBankProfitSharePayeeInfo::SetFid(const string& _fid)
{
    m_fid = _fid;
    m_fidHasBeenSet = true;
}

bool OpenBankProfitSharePayeeInfo::FidHasBeenSet() const
{
    return m_fidHasBeenSet;
}

