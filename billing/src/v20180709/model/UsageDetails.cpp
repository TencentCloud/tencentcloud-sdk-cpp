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

#include <tencentcloud/billing/v20180709/model/UsageDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

UsageDetails::UsageDetails() :
    m_productNameHasBeenSet(false),
    m_subProductNameHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_subProductCodeHasBeenSet(false),
    m_billingItemCodeHasBeenSet(false),
    m_subBillingItemCodeHasBeenSet(false),
    m_productEnNameHasBeenSet(false),
    m_subProductEnNameHasBeenSet(false),
    m_calcUnitHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

CoreInternalOutcome UsageDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetails.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("SubProductName") && !value["SubProductName"].IsNull())
    {
        if (!value["SubProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetails.SubProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductName = string(value["SubProductName"].GetString());
        m_subProductNameHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetails.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("SubProductCode") && !value["SubProductCode"].IsNull())
    {
        if (!value["SubProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetails.SubProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCode = string(value["SubProductCode"].GetString());
        m_subProductCodeHasBeenSet = true;
    }

    if (value.HasMember("BillingItemCode") && !value["BillingItemCode"].IsNull())
    {
        if (!value["BillingItemCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetails.BillingItemCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItemCode = string(value["BillingItemCode"].GetString());
        m_billingItemCodeHasBeenSet = true;
    }

    if (value.HasMember("SubBillingItemCode") && !value["SubBillingItemCode"].IsNull())
    {
        if (!value["SubBillingItemCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetails.SubBillingItemCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subBillingItemCode = string(value["SubBillingItemCode"].GetString());
        m_subBillingItemCodeHasBeenSet = true;
    }

    if (value.HasMember("ProductEnName") && !value["ProductEnName"].IsNull())
    {
        if (!value["ProductEnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetails.ProductEnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productEnName = string(value["ProductEnName"].GetString());
        m_productEnNameHasBeenSet = true;
    }

    if (value.HasMember("SubProductEnName") && !value["SubProductEnName"].IsNull())
    {
        if (!value["SubProductEnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetails.SubProductEnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductEnName = string(value["SubProductEnName"].GetString());
        m_subProductEnNameHasBeenSet = true;
    }

    if (value.HasMember("CalcUnit") && !value["CalcUnit"].IsNull())
    {
        if (!value["CalcUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetails.CalcUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calcUnit = string(value["CalcUnit"].GetString());
        m_calcUnitHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetails.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsageDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductName.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductCode.c_str(), allocator).Move(), allocator);
    }

    if (m_billingItemCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItemCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingItemCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subBillingItemCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubBillingItemCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subBillingItemCode.c_str(), allocator).Move(), allocator);
    }

    if (m_productEnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductEnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productEnName.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductEnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductEnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductEnName.c_str(), allocator).Move(), allocator);
    }

    if (m_calcUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalcUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calcUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

}


string UsageDetails::GetProductName() const
{
    return m_productName;
}

void UsageDetails::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool UsageDetails::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string UsageDetails::GetSubProductName() const
{
    return m_subProductName;
}

void UsageDetails::SetSubProductName(const string& _subProductName)
{
    m_subProductName = _subProductName;
    m_subProductNameHasBeenSet = true;
}

bool UsageDetails::SubProductNameHasBeenSet() const
{
    return m_subProductNameHasBeenSet;
}

string UsageDetails::GetProductCode() const
{
    return m_productCode;
}

void UsageDetails::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool UsageDetails::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string UsageDetails::GetSubProductCode() const
{
    return m_subProductCode;
}

void UsageDetails::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool UsageDetails::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

string UsageDetails::GetBillingItemCode() const
{
    return m_billingItemCode;
}

void UsageDetails::SetBillingItemCode(const string& _billingItemCode)
{
    m_billingItemCode = _billingItemCode;
    m_billingItemCodeHasBeenSet = true;
}

bool UsageDetails::BillingItemCodeHasBeenSet() const
{
    return m_billingItemCodeHasBeenSet;
}

string UsageDetails::GetSubBillingItemCode() const
{
    return m_subBillingItemCode;
}

void UsageDetails::SetSubBillingItemCode(const string& _subBillingItemCode)
{
    m_subBillingItemCode = _subBillingItemCode;
    m_subBillingItemCodeHasBeenSet = true;
}

bool UsageDetails::SubBillingItemCodeHasBeenSet() const
{
    return m_subBillingItemCodeHasBeenSet;
}

string UsageDetails::GetProductEnName() const
{
    return m_productEnName;
}

void UsageDetails::SetProductEnName(const string& _productEnName)
{
    m_productEnName = _productEnName;
    m_productEnNameHasBeenSet = true;
}

bool UsageDetails::ProductEnNameHasBeenSet() const
{
    return m_productEnNameHasBeenSet;
}

string UsageDetails::GetSubProductEnName() const
{
    return m_subProductEnName;
}

void UsageDetails::SetSubProductEnName(const string& _subProductEnName)
{
    m_subProductEnName = _subProductEnName;
    m_subProductEnNameHasBeenSet = true;
}

bool UsageDetails::SubProductEnNameHasBeenSet() const
{
    return m_subProductEnNameHasBeenSet;
}

string UsageDetails::GetCalcUnit() const
{
    return m_calcUnit;
}

void UsageDetails::SetCalcUnit(const string& _calcUnit)
{
    m_calcUnit = _calcUnit;
    m_calcUnitHasBeenSet = true;
}

bool UsageDetails::CalcUnitHasBeenSet() const
{
    return m_calcUnitHasBeenSet;
}

string UsageDetails::GetAction() const
{
    return m_action;
}

void UsageDetails::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool UsageDetails::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

