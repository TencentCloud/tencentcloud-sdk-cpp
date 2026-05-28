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

#include <tencentcloud/ig/v20210518/model/DrugInstructionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

DrugInstructionInfo::DrugInstructionInfo() :
    m_drugIdHasBeenSet(false),
    m_drugNameHasBeenSet(false),
    m_tradeNameHasBeenSet(false),
    m_specificationHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_drugUsageHasBeenSet(false),
    m_indicationHasBeenSet(false),
    m_adverseReactionHasBeenSet(false),
    m_drugRxTypeHasBeenSet(false),
    m_docUrlHasBeenSet(false)
{
}

CoreInternalOutcome DrugInstructionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DrugId") && !value["DrugId"].IsNull())
    {
        if (!value["DrugId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugInstructionInfo.DrugId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugId = string(value["DrugId"].GetString());
        m_drugIdHasBeenSet = true;
    }

    if (value.HasMember("DrugName") && !value["DrugName"].IsNull())
    {
        if (!value["DrugName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugInstructionInfo.DrugName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugName = string(value["DrugName"].GetString());
        m_drugNameHasBeenSet = true;
    }

    if (value.HasMember("TradeName") && !value["TradeName"].IsNull())
    {
        if (!value["TradeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugInstructionInfo.TradeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeName = string(value["TradeName"].GetString());
        m_tradeNameHasBeenSet = true;
    }

    if (value.HasMember("Specification") && !value["Specification"].IsNull())
    {
        if (!value["Specification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugInstructionInfo.Specification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specification = string(value["Specification"].GetString());
        m_specificationHasBeenSet = true;
    }

    if (value.HasMember("Manufacturer") && !value["Manufacturer"].IsNull())
    {
        if (!value["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugInstructionInfo.Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(value["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }

    if (value.HasMember("DrugUsage") && !value["DrugUsage"].IsNull())
    {
        if (!value["DrugUsage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugInstructionInfo.DrugUsage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugUsage = string(value["DrugUsage"].GetString());
        m_drugUsageHasBeenSet = true;
    }

    if (value.HasMember("Indication") && !value["Indication"].IsNull())
    {
        if (!value["Indication"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugInstructionInfo.Indication` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indication = string(value["Indication"].GetString());
        m_indicationHasBeenSet = true;
    }

    if (value.HasMember("AdverseReaction") && !value["AdverseReaction"].IsNull())
    {
        if (!value["AdverseReaction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugInstructionInfo.AdverseReaction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adverseReaction = string(value["AdverseReaction"].GetString());
        m_adverseReactionHasBeenSet = true;
    }

    if (value.HasMember("DrugRxType") && !value["DrugRxType"].IsNull())
    {
        if (!value["DrugRxType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DrugInstructionInfo.DrugRxType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_drugRxType = value["DrugRxType"].GetInt64();
        m_drugRxTypeHasBeenSet = true;
    }

    if (value.HasMember("DocUrl") && !value["DocUrl"].IsNull())
    {
        if (!value["DocUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugInstructionInfo.DocUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docUrl = string(value["DocUrl"].GetString());
        m_docUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DrugInstructionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_drugIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugId.c_str(), allocator).Move(), allocator);
    }

    if (m_drugNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugName.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeName.c_str(), allocator).Move(), allocator);
    }

    if (m_specificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Specification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specification.c_str(), allocator).Move(), allocator);
    }

    if (m_manufacturerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manufacturer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturer.c_str(), allocator).Move(), allocator);
    }

    if (m_drugUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_indicationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Indication";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indication.c_str(), allocator).Move(), allocator);
    }

    if (m_adverseReactionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdverseReaction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adverseReaction.c_str(), allocator).Move(), allocator);
    }

    if (m_drugRxTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugRxType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_drugRxType, allocator);
    }

    if (m_docUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docUrl.c_str(), allocator).Move(), allocator);
    }

}


string DrugInstructionInfo::GetDrugId() const
{
    return m_drugId;
}

void DrugInstructionInfo::SetDrugId(const string& _drugId)
{
    m_drugId = _drugId;
    m_drugIdHasBeenSet = true;
}

bool DrugInstructionInfo::DrugIdHasBeenSet() const
{
    return m_drugIdHasBeenSet;
}

string DrugInstructionInfo::GetDrugName() const
{
    return m_drugName;
}

void DrugInstructionInfo::SetDrugName(const string& _drugName)
{
    m_drugName = _drugName;
    m_drugNameHasBeenSet = true;
}

bool DrugInstructionInfo::DrugNameHasBeenSet() const
{
    return m_drugNameHasBeenSet;
}

string DrugInstructionInfo::GetTradeName() const
{
    return m_tradeName;
}

void DrugInstructionInfo::SetTradeName(const string& _tradeName)
{
    m_tradeName = _tradeName;
    m_tradeNameHasBeenSet = true;
}

bool DrugInstructionInfo::TradeNameHasBeenSet() const
{
    return m_tradeNameHasBeenSet;
}

string DrugInstructionInfo::GetSpecification() const
{
    return m_specification;
}

void DrugInstructionInfo::SetSpecification(const string& _specification)
{
    m_specification = _specification;
    m_specificationHasBeenSet = true;
}

bool DrugInstructionInfo::SpecificationHasBeenSet() const
{
    return m_specificationHasBeenSet;
}

string DrugInstructionInfo::GetManufacturer() const
{
    return m_manufacturer;
}

void DrugInstructionInfo::SetManufacturer(const string& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool DrugInstructionInfo::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

string DrugInstructionInfo::GetDrugUsage() const
{
    return m_drugUsage;
}

void DrugInstructionInfo::SetDrugUsage(const string& _drugUsage)
{
    m_drugUsage = _drugUsage;
    m_drugUsageHasBeenSet = true;
}

bool DrugInstructionInfo::DrugUsageHasBeenSet() const
{
    return m_drugUsageHasBeenSet;
}

string DrugInstructionInfo::GetIndication() const
{
    return m_indication;
}

void DrugInstructionInfo::SetIndication(const string& _indication)
{
    m_indication = _indication;
    m_indicationHasBeenSet = true;
}

bool DrugInstructionInfo::IndicationHasBeenSet() const
{
    return m_indicationHasBeenSet;
}

string DrugInstructionInfo::GetAdverseReaction() const
{
    return m_adverseReaction;
}

void DrugInstructionInfo::SetAdverseReaction(const string& _adverseReaction)
{
    m_adverseReaction = _adverseReaction;
    m_adverseReactionHasBeenSet = true;
}

bool DrugInstructionInfo::AdverseReactionHasBeenSet() const
{
    return m_adverseReactionHasBeenSet;
}

int64_t DrugInstructionInfo::GetDrugRxType() const
{
    return m_drugRxType;
}

void DrugInstructionInfo::SetDrugRxType(const int64_t& _drugRxType)
{
    m_drugRxType = _drugRxType;
    m_drugRxTypeHasBeenSet = true;
}

bool DrugInstructionInfo::DrugRxTypeHasBeenSet() const
{
    return m_drugRxTypeHasBeenSet;
}

string DrugInstructionInfo::GetDocUrl() const
{
    return m_docUrl;
}

void DrugInstructionInfo::SetDocUrl(const string& _docUrl)
{
    m_docUrl = _docUrl;
    m_docUrlHasBeenSet = true;
}

bool DrugInstructionInfo::DocUrlHasBeenSet() const
{
    return m_docUrlHasBeenSet;
}

