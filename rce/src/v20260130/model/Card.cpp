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

#include <tencentcloud/rce/v20260130/model/Card.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Card::Card() :
    m_cardBinHasBeenSet(false),
    m_lastFourDigitsHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_bankHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_brandHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_holderNameHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome Card::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CardBin") && !value["CardBin"].IsNull())
    {
        if (!value["CardBin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Card.CardBin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardBin = string(value["CardBin"].GetString());
        m_cardBinHasBeenSet = true;
    }

    if (value.HasMember("LastFourDigits") && !value["LastFourDigits"].IsNull())
    {
        if (!value["LastFourDigits"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Card.LastFourDigits` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastFourDigits = string(value["LastFourDigits"].GetString());
        m_lastFourDigitsHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Card.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Bank") && !value["Bank"].IsNull())
    {
        if (!value["Bank"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Card.Bank` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bank = string(value["Bank"].GetString());
        m_bankHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Card.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Brand") && !value["Brand"].IsNull())
    {
        if (!value["Brand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Card.Brand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brand = string(value["Brand"].GetString());
        m_brandHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Card.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("HolderName") && !value["HolderName"].IsNull())
    {
        if (!value["HolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Card.HolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_holderName = string(value["HolderName"].GetString());
        m_holderNameHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Card.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Card::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cardBinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardBin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardBin.c_str(), allocator).Move(), allocator);
    }

    if (m_lastFourDigitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastFourDigits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastFourDigits.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_bankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bank.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_brandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brand.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_holderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_holderName.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

}


string Card::GetCardBin() const
{
    return m_cardBin;
}

void Card::SetCardBin(const string& _cardBin)
{
    m_cardBin = _cardBin;
    m_cardBinHasBeenSet = true;
}

bool Card::CardBinHasBeenSet() const
{
    return m_cardBinHasBeenSet;
}

string Card::GetLastFourDigits() const
{
    return m_lastFourDigits;
}

void Card::SetLastFourDigits(const string& _lastFourDigits)
{
    m_lastFourDigits = _lastFourDigits;
    m_lastFourDigitsHasBeenSet = true;
}

bool Card::LastFourDigitsHasBeenSet() const
{
    return m_lastFourDigitsHasBeenSet;
}

string Card::GetCountry() const
{
    return m_country;
}

void Card::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool Card::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string Card::GetBank() const
{
    return m_bank;
}

void Card::SetBank(const string& _bank)
{
    m_bank = _bank;
    m_bankHasBeenSet = true;
}

bool Card::BankHasBeenSet() const
{
    return m_bankHasBeenSet;
}

string Card::GetType() const
{
    return m_type;
}

void Card::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Card::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Card::GetBrand() const
{
    return m_brand;
}

void Card::SetBrand(const string& _brand)
{
    m_brand = _brand;
    m_brandHasBeenSet = true;
}

bool Card::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

string Card::GetLevel() const
{
    return m_level;
}

void Card::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool Card::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string Card::GetHolderName() const
{
    return m_holderName;
}

void Card::SetHolderName(const string& _holderName)
{
    m_holderName = _holderName;
    m_holderNameHasBeenSet = true;
}

bool Card::HolderNameHasBeenSet() const
{
    return m_holderNameHasBeenSet;
}

string Card::GetExpireTime() const
{
    return m_expireTime;
}

void Card::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool Card::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

