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

#include <tencentcloud/organization/v20210331/model/OrgProductFinancial.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

OrgProductFinancial::OrgProductFinancial() :
    m_productNameHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_ratioHasBeenSet(false)
{
}

CoreInternalOutcome OrgProductFinancial::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgProductFinancial.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgProductFinancial.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OrgProductFinancial.TotalCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = value["TotalCost"].GetDouble();
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgProductFinancial.Ratio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = string(value["Ratio"].GetString());
        m_ratioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrgProductFinancial::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCost, allocator);
    }

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ratio.c_str(), allocator).Move(), allocator);
    }

}


string OrgProductFinancial::GetProductName() const
{
    return m_productName;
}

void OrgProductFinancial::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool OrgProductFinancial::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string OrgProductFinancial::GetProductCode() const
{
    return m_productCode;
}

void OrgProductFinancial::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool OrgProductFinancial::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

double OrgProductFinancial::GetTotalCost() const
{
    return m_totalCost;
}

void OrgProductFinancial::SetTotalCost(const double& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool OrgProductFinancial::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

string OrgProductFinancial::GetRatio() const
{
    return m_ratio;
}

void OrgProductFinancial::SetRatio(const string& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool OrgProductFinancial::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

