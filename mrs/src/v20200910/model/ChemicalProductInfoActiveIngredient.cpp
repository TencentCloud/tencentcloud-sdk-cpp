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

#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoActiveIngredient.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ChemicalProductInfoActiveIngredient::ChemicalProductInfoActiveIngredient() :
    m_textHasBeenSet(false),
    m_chemicalNameHasBeenSet(false),
    m_chemicalFormulaHasBeenSet(false),
    m_molecularFormulaHasBeenSet(false),
    m_molecularWeightHasBeenSet(false)
{
}

CoreInternalOutcome ChemicalProductInfoActiveIngredient::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoActiveIngredient.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("ChemicalName") && !value["ChemicalName"].IsNull())
    {
        if (!value["ChemicalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoActiveIngredient.ChemicalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chemicalName = string(value["ChemicalName"].GetString());
        m_chemicalNameHasBeenSet = true;
    }

    if (value.HasMember("ChemicalFormula") && !value["ChemicalFormula"].IsNull())
    {
        if (!value["ChemicalFormula"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoActiveIngredient.ChemicalFormula` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chemicalFormula = string(value["ChemicalFormula"].GetString());
        m_chemicalFormulaHasBeenSet = true;
    }

    if (value.HasMember("MolecularFormula") && !value["MolecularFormula"].IsNull())
    {
        if (!value["MolecularFormula"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoActiveIngredient.MolecularFormula` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_molecularFormula = string(value["MolecularFormula"].GetString());
        m_molecularFormulaHasBeenSet = true;
    }

    if (value.HasMember("MolecularWeight") && !value["MolecularWeight"].IsNull())
    {
        if (!value["MolecularWeight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoActiveIngredient.MolecularWeight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_molecularWeight = string(value["MolecularWeight"].GetString());
        m_molecularWeightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChemicalProductInfoActiveIngredient::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_chemicalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChemicalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chemicalName.c_str(), allocator).Move(), allocator);
    }

    if (m_chemicalFormulaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChemicalFormula";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chemicalFormula.c_str(), allocator).Move(), allocator);
    }

    if (m_molecularFormulaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MolecularFormula";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_molecularFormula.c_str(), allocator).Move(), allocator);
    }

    if (m_molecularWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MolecularWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_molecularWeight.c_str(), allocator).Move(), allocator);
    }

}


string ChemicalProductInfoActiveIngredient::GetText() const
{
    return m_text;
}

void ChemicalProductInfoActiveIngredient::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ChemicalProductInfoActiveIngredient::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string ChemicalProductInfoActiveIngredient::GetChemicalName() const
{
    return m_chemicalName;
}

void ChemicalProductInfoActiveIngredient::SetChemicalName(const string& _chemicalName)
{
    m_chemicalName = _chemicalName;
    m_chemicalNameHasBeenSet = true;
}

bool ChemicalProductInfoActiveIngredient::ChemicalNameHasBeenSet() const
{
    return m_chemicalNameHasBeenSet;
}

string ChemicalProductInfoActiveIngredient::GetChemicalFormula() const
{
    return m_chemicalFormula;
}

void ChemicalProductInfoActiveIngredient::SetChemicalFormula(const string& _chemicalFormula)
{
    m_chemicalFormula = _chemicalFormula;
    m_chemicalFormulaHasBeenSet = true;
}

bool ChemicalProductInfoActiveIngredient::ChemicalFormulaHasBeenSet() const
{
    return m_chemicalFormulaHasBeenSet;
}

string ChemicalProductInfoActiveIngredient::GetMolecularFormula() const
{
    return m_molecularFormula;
}

void ChemicalProductInfoActiveIngredient::SetMolecularFormula(const string& _molecularFormula)
{
    m_molecularFormula = _molecularFormula;
    m_molecularFormulaHasBeenSet = true;
}

bool ChemicalProductInfoActiveIngredient::MolecularFormulaHasBeenSet() const
{
    return m_molecularFormulaHasBeenSet;
}

string ChemicalProductInfoActiveIngredient::GetMolecularWeight() const
{
    return m_molecularWeight;
}

void ChemicalProductInfoActiveIngredient::SetMolecularWeight(const string& _molecularWeight)
{
    m_molecularWeight = _molecularWeight;
    m_molecularWeightHasBeenSet = true;
}

bool ChemicalProductInfoActiveIngredient::MolecularWeightHasBeenSet() const
{
    return m_molecularWeightHasBeenSet;
}

