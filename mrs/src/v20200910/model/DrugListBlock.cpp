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

#include <tencentcloud/mrs/v20200910/model/DrugListBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

DrugListBlock::DrugListBlock() :
    m_commonNameHasBeenSet(false),
    m_tradeNameHasBeenSet(false),
    m_dosageHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome DrugListBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CommonName") && !value["CommonName"].IsNull())
    {
        if (!value["CommonName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugListBlock.CommonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commonName = string(value["CommonName"].GetString());
        m_commonNameHasBeenSet = true;
    }

    if (value.HasMember("TradeName") && !value["TradeName"].IsNull())
    {
        if (!value["TradeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugListBlock.TradeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeName = string(value["TradeName"].GetString());
        m_tradeNameHasBeenSet = true;
    }

    if (value.HasMember("Dosage") && !value["Dosage"].IsNull())
    {
        if (!value["Dosage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DrugListBlock.Dosage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dosage.Deserialize(value["Dosage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dosageHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugListBlock.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DrugListBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_commonNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commonName.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeName.c_str(), allocator).Move(), allocator);
    }

    if (m_dosageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dosage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dosage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


string DrugListBlock::GetCommonName() const
{
    return m_commonName;
}

void DrugListBlock::SetCommonName(const string& _commonName)
{
    m_commonName = _commonName;
    m_commonNameHasBeenSet = true;
}

bool DrugListBlock::CommonNameHasBeenSet() const
{
    return m_commonNameHasBeenSet;
}

string DrugListBlock::GetTradeName() const
{
    return m_tradeName;
}

void DrugListBlock::SetTradeName(const string& _tradeName)
{
    m_tradeName = _tradeName;
    m_tradeNameHasBeenSet = true;
}

bool DrugListBlock::TradeNameHasBeenSet() const
{
    return m_tradeNameHasBeenSet;
}

DosageBlock DrugListBlock::GetDosage() const
{
    return m_dosage;
}

void DrugListBlock::SetDosage(const DosageBlock& _dosage)
{
    m_dosage = _dosage;
    m_dosageHasBeenSet = true;
}

bool DrugListBlock::DosageHasBeenSet() const
{
    return m_dosageHasBeenSet;
}

string DrugListBlock::GetValue() const
{
    return m_value;
}

void DrugListBlock::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool DrugListBlock::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

