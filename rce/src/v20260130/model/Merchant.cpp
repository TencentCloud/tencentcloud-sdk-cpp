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

#include <tencentcloud/rce/v20260130/model/Merchant.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Merchant::Merchant() :
    m_merchantIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_registerTimeHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_uRLHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_businessTypeHasBeenSet(false),
    m_goodsQuantityHasBeenSet(false),
    m_historicSalesQuantityHasBeenSet(false),
    m_historicSalesAmountHasBeenSet(false)
{
}

CoreInternalOutcome Merchant::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RegisterTime") && !value["RegisterTime"].IsNull())
    {
        if (!value["RegisterTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.RegisterTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerTime = string(value["RegisterTime"].GetString());
        m_registerTimeHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("URL") && !value["URL"].IsNull())
    {
        if (!value["URL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.URL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRL = string(value["URL"].GetString());
        m_uRLHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.Address` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_address.Deserialize(value["Address"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("BusinessType") && !value["BusinessType"].IsNull())
    {
        if (!value["BusinessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.BusinessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessType = string(value["BusinessType"].GetString());
        m_businessTypeHasBeenSet = true;
    }

    if (value.HasMember("GoodsQuantity") && !value["GoodsQuantity"].IsNull())
    {
        if (!value["GoodsQuantity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.GoodsQuantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_goodsQuantity = value["GoodsQuantity"].GetInt64();
        m_goodsQuantityHasBeenSet = true;
    }

    if (value.HasMember("HistoricSalesQuantity") && !value["HistoricSalesQuantity"].IsNull())
    {
        if (!value["HistoricSalesQuantity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.HistoricSalesQuantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_historicSalesQuantity = value["HistoricSalesQuantity"].GetInt64();
        m_historicSalesQuantityHasBeenSet = true;
    }

    if (value.HasMember("HistoricSalesAmount") && !value["HistoricSalesAmount"].IsNull())
    {
        if (!value["HistoricSalesAmount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.HistoricSalesAmount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_historicSalesAmount.Deserialize(value["HistoricSalesAmount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_historicSalesAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Merchant::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_registerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerTime.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_address.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_businessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessType.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsQuantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsQuantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_goodsQuantity, allocator);
    }

    if (m_historicSalesQuantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistoricSalesQuantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_historicSalesQuantity, allocator);
    }

    if (m_historicSalesAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistoricSalesAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_historicSalesAmount.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Merchant::GetMerchantId() const
{
    return m_merchantId;
}

void Merchant::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool Merchant::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string Merchant::GetName() const
{
    return m_name;
}

void Merchant::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Merchant::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Merchant::GetRegisterTime() const
{
    return m_registerTime;
}

void Merchant::SetRegisterTime(const string& _registerTime)
{
    m_registerTime = _registerTime;
    m_registerTimeHasBeenSet = true;
}

bool Merchant::RegisterTimeHasBeenSet() const
{
    return m_registerTimeHasBeenSet;
}

string Merchant::GetCategory() const
{
    return m_category;
}

void Merchant::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool Merchant::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string Merchant::GetPhone() const
{
    return m_phone;
}

void Merchant::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool Merchant::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string Merchant::GetEmail() const
{
    return m_email;
}

void Merchant::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool Merchant::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string Merchant::GetURL() const
{
    return m_uRL;
}

void Merchant::SetURL(const string& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool Merchant::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

Address Merchant::GetAddress() const
{
    return m_address;
}

void Merchant::SetAddress(const Address& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool Merchant::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string Merchant::GetLevel() const
{
    return m_level;
}

void Merchant::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool Merchant::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string Merchant::GetBusinessType() const
{
    return m_businessType;
}

void Merchant::SetBusinessType(const string& _businessType)
{
    m_businessType = _businessType;
    m_businessTypeHasBeenSet = true;
}

bool Merchant::BusinessTypeHasBeenSet() const
{
    return m_businessTypeHasBeenSet;
}

int64_t Merchant::GetGoodsQuantity() const
{
    return m_goodsQuantity;
}

void Merchant::SetGoodsQuantity(const int64_t& _goodsQuantity)
{
    m_goodsQuantity = _goodsQuantity;
    m_goodsQuantityHasBeenSet = true;
}

bool Merchant::GoodsQuantityHasBeenSet() const
{
    return m_goodsQuantityHasBeenSet;
}

int64_t Merchant::GetHistoricSalesQuantity() const
{
    return m_historicSalesQuantity;
}

void Merchant::SetHistoricSalesQuantity(const int64_t& _historicSalesQuantity)
{
    m_historicSalesQuantity = _historicSalesQuantity;
    m_historicSalesQuantityHasBeenSet = true;
}

bool Merchant::HistoricSalesQuantityHasBeenSet() const
{
    return m_historicSalesQuantityHasBeenSet;
}

Amount Merchant::GetHistoricSalesAmount() const
{
    return m_historicSalesAmount;
}

void Merchant::SetHistoricSalesAmount(const Amount& _historicSalesAmount)
{
    m_historicSalesAmount = _historicSalesAmount;
    m_historicSalesAmountHasBeenSet = true;
}

bool Merchant::HistoricSalesAmountHasBeenSet() const
{
    return m_historicSalesAmountHasBeenSet;
}

