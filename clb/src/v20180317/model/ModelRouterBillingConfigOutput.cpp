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

#include <tencentcloud/clb/v20180317/model/ModelRouterBillingConfigOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModelRouterBillingConfigOutput::ModelRouterBillingConfigOutput() :
    m_chargeTypeHasBeenSet(false),
    m_slaTypeHasBeenSet(false),
    m_associateResourcePackageHasBeenSet(false)
{
}

CoreInternalOutcome ModelRouterBillingConfigOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterBillingConfigOutput.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("SlaType") && !value["SlaType"].IsNull())
    {
        if (!value["SlaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterBillingConfigOutput.SlaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slaType = string(value["SlaType"].GetString());
        m_slaTypeHasBeenSet = true;
    }

    if (value.HasMember("AssociateResourcePackage") && !value["AssociateResourcePackage"].IsNull())
    {
        if (!value["AssociateResourcePackage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterBillingConfigOutput.AssociateResourcePackage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_associateResourcePackage = value["AssociateResourcePackage"].GetBool();
        m_associateResourcePackageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelRouterBillingConfigOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_slaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slaType.c_str(), allocator).Move(), allocator);
    }

    if (m_associateResourcePackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociateResourcePackage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_associateResourcePackage, allocator);
    }

}


string ModelRouterBillingConfigOutput::GetChargeType() const
{
    return m_chargeType;
}

void ModelRouterBillingConfigOutput::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool ModelRouterBillingConfigOutput::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string ModelRouterBillingConfigOutput::GetSlaType() const
{
    return m_slaType;
}

void ModelRouterBillingConfigOutput::SetSlaType(const string& _slaType)
{
    m_slaType = _slaType;
    m_slaTypeHasBeenSet = true;
}

bool ModelRouterBillingConfigOutput::SlaTypeHasBeenSet() const
{
    return m_slaTypeHasBeenSet;
}

bool ModelRouterBillingConfigOutput::GetAssociateResourcePackage() const
{
    return m_associateResourcePackage;
}

void ModelRouterBillingConfigOutput::SetAssociateResourcePackage(const bool& _associateResourcePackage)
{
    m_associateResourcePackage = _associateResourcePackage;
    m_associateResourcePackageHasBeenSet = true;
}

bool ModelRouterBillingConfigOutput::AssociateResourcePackageHasBeenSet() const
{
    return m_associateResourcePackageHasBeenSet;
}

