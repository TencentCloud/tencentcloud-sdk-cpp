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

#include <tencentcloud/cpdp/v20190820/model/PayeeTaxTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

PayeeTaxTemplateInfo::PayeeTaxTemplateInfo() :
    m_incomeTypeHasBeenSet(false),
    m_taxTemplateIdHasBeenSet(false)
{
}

CoreInternalOutcome PayeeTaxTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IncomeType") && !value["IncomeType"].IsNull())
    {
        if (!value["IncomeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeTaxTemplateInfo.IncomeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incomeType = string(value["IncomeType"].GetString());
        m_incomeTypeHasBeenSet = true;
    }

    if (value.HasMember("TaxTemplateId") && !value["TaxTemplateId"].IsNull())
    {
        if (!value["TaxTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeTaxTemplateInfo.TaxTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxTemplateId = string(value["TaxTemplateId"].GetString());
        m_taxTemplateIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PayeeTaxTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_incomeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncomeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_incomeType.c_str(), allocator).Move(), allocator);
    }

    if (m_taxTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxTemplateId.c_str(), allocator).Move(), allocator);
    }

}


string PayeeTaxTemplateInfo::GetIncomeType() const
{
    return m_incomeType;
}

void PayeeTaxTemplateInfo::SetIncomeType(const string& _incomeType)
{
    m_incomeType = _incomeType;
    m_incomeTypeHasBeenSet = true;
}

bool PayeeTaxTemplateInfo::IncomeTypeHasBeenSet() const
{
    return m_incomeTypeHasBeenSet;
}

string PayeeTaxTemplateInfo::GetTaxTemplateId() const
{
    return m_taxTemplateId;
}

void PayeeTaxTemplateInfo::SetTaxTemplateId(const string& _taxTemplateId)
{
    m_taxTemplateId = _taxTemplateId;
    m_taxTemplateIdHasBeenSet = true;
}

bool PayeeTaxTemplateInfo::TaxTemplateIdHasBeenSet() const
{
    return m_taxTemplateIdHasBeenSet;
}

