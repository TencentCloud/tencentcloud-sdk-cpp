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

#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoName.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ChemicalProductInfoName::ChemicalProductInfoName() :
    m_textHasBeenSet(false),
    m_genericNameHasBeenSet(false),
    m_barndNameHasBeenSet(false),
    m_enNameHasBeenSet(false),
    m_pinyinHasBeenSet(false),
    m_brandNameHasBeenSet(false)
{
}

CoreInternalOutcome ChemicalProductInfoName::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoName.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("GenericName") && !value["GenericName"].IsNull())
    {
        if (!value["GenericName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoName.GenericName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_genericName = string(value["GenericName"].GetString());
        m_genericNameHasBeenSet = true;
    }

    if (value.HasMember("BarndName") && !value["BarndName"].IsNull())
    {
        if (!value["BarndName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoName.BarndName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_barndName = string(value["BarndName"].GetString());
        m_barndNameHasBeenSet = true;
    }

    if (value.HasMember("EnName") && !value["EnName"].IsNull())
    {
        if (!value["EnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoName.EnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enName = string(value["EnName"].GetString());
        m_enNameHasBeenSet = true;
    }

    if (value.HasMember("Pinyin") && !value["Pinyin"].IsNull())
    {
        if (!value["Pinyin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoName.Pinyin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pinyin = string(value["Pinyin"].GetString());
        m_pinyinHasBeenSet = true;
    }

    if (value.HasMember("BrandName") && !value["BrandName"].IsNull())
    {
        if (!value["BrandName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoName.BrandName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brandName = string(value["BrandName"].GetString());
        m_brandNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChemicalProductInfoName::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_genericNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenericName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_genericName.c_str(), allocator).Move(), allocator);
    }

    if (m_barndNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BarndName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_barndName.c_str(), allocator).Move(), allocator);
    }

    if (m_enNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enName.c_str(), allocator).Move(), allocator);
    }

    if (m_pinyinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pinyin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pinyin.c_str(), allocator).Move(), allocator);
    }

    if (m_brandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brandName.c_str(), allocator).Move(), allocator);
    }

}


string ChemicalProductInfoName::GetText() const
{
    return m_text;
}

void ChemicalProductInfoName::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ChemicalProductInfoName::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string ChemicalProductInfoName::GetGenericName() const
{
    return m_genericName;
}

void ChemicalProductInfoName::SetGenericName(const string& _genericName)
{
    m_genericName = _genericName;
    m_genericNameHasBeenSet = true;
}

bool ChemicalProductInfoName::GenericNameHasBeenSet() const
{
    return m_genericNameHasBeenSet;
}

string ChemicalProductInfoName::GetBarndName() const
{
    return m_barndName;
}

void ChemicalProductInfoName::SetBarndName(const string& _barndName)
{
    m_barndName = _barndName;
    m_barndNameHasBeenSet = true;
}

bool ChemicalProductInfoName::BarndNameHasBeenSet() const
{
    return m_barndNameHasBeenSet;
}

string ChemicalProductInfoName::GetEnName() const
{
    return m_enName;
}

void ChemicalProductInfoName::SetEnName(const string& _enName)
{
    m_enName = _enName;
    m_enNameHasBeenSet = true;
}

bool ChemicalProductInfoName::EnNameHasBeenSet() const
{
    return m_enNameHasBeenSet;
}

string ChemicalProductInfoName::GetPinyin() const
{
    return m_pinyin;
}

void ChemicalProductInfoName::SetPinyin(const string& _pinyin)
{
    m_pinyin = _pinyin;
    m_pinyinHasBeenSet = true;
}

bool ChemicalProductInfoName::PinyinHasBeenSet() const
{
    return m_pinyinHasBeenSet;
}

string ChemicalProductInfoName::GetBrandName() const
{
    return m_brandName;
}

void ChemicalProductInfoName::SetBrandName(const string& _brandName)
{
    m_brandName = _brandName;
    m_brandNameHasBeenSet = true;
}

bool ChemicalProductInfoName::BrandNameHasBeenSet() const
{
    return m_brandNameHasBeenSet;
}

