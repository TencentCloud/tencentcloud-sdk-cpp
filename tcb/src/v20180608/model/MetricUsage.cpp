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

#include <tencentcloud/tcb/v20180608/model/MetricUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

MetricUsage::MetricUsage() :
    m_metricNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_creditsValueHasBeenSet(false),
    m_billingCycleTypeHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_valueDetailListHasBeenSet(false),
    m_deductValueHasBeenSet(false),
    m_packageDeductValueHasBeenSet(false),
    m_reportValueHasBeenSet(false)
{
}

CoreInternalOutcome MetricUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricUsage.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricUsage.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricUsage.Value` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetInt64();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("CreditsValue") && !value["CreditsValue"].IsNull())
    {
        if (!value["CreditsValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricUsage.CreditsValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_creditsValue = value["CreditsValue"].GetDouble();
        m_creditsValueHasBeenSet = true;
    }

    if (value.HasMember("BillingCycleType") && !value["BillingCycleType"].IsNull())
    {
        if (!value["BillingCycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricUsage.BillingCycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingCycleType = string(value["BillingCycleType"].GetString());
        m_billingCycleTypeHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricUsage.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("ValueDetailList") && !value["ValueDetailList"].IsNull())
    {
        if (!value["ValueDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricUsage.ValueDetailList` is not array type"));

        const rapidjson::Value &tmpValue = value["ValueDetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ValueDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_valueDetailList.push_back(item);
        }
        m_valueDetailListHasBeenSet = true;
    }

    if (value.HasMember("DeductValue") && !value["DeductValue"].IsNull())
    {
        if (!value["DeductValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricUsage.DeductValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_deductValue = value["DeductValue"].GetDouble();
        m_deductValueHasBeenSet = true;
    }

    if (value.HasMember("PackageDeductValue") && !value["PackageDeductValue"].IsNull())
    {
        if (!value["PackageDeductValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricUsage.PackageDeductValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_packageDeductValue = value["PackageDeductValue"].GetDouble();
        m_packageDeductValueHasBeenSet = true;
    }

    if (value.HasMember("ReportValue") && !value["ReportValue"].IsNull())
    {
        if (!value["ReportValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricUsage.ReportValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_reportValue = value["ReportValue"].GetDouble();
        m_reportValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_creditsValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditsValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creditsValue, allocator);
    }

    if (m_billingCycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingCycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingCycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_valueDetailListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueDetailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_valueDetailList.begin(); itr != m_valueDetailList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deductValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deductValue, allocator);
    }

    if (m_packageDeductValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageDeductValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageDeductValue, allocator);
    }

    if (m_reportValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportValue, allocator);
    }

}


string MetricUsage::GetMetricName() const
{
    return m_metricName;
}

void MetricUsage::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool MetricUsage::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string MetricUsage::GetResourceType() const
{
    return m_resourceType;
}

void MetricUsage::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool MetricUsage::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

int64_t MetricUsage::GetValue() const
{
    return m_value;
}

void MetricUsage::SetValue(const int64_t& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool MetricUsage::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

double MetricUsage::GetCreditsValue() const
{
    return m_creditsValue;
}

void MetricUsage::SetCreditsValue(const double& _creditsValue)
{
    m_creditsValue = _creditsValue;
    m_creditsValueHasBeenSet = true;
}

bool MetricUsage::CreditsValueHasBeenSet() const
{
    return m_creditsValueHasBeenSet;
}

string MetricUsage::GetBillingCycleType() const
{
    return m_billingCycleType;
}

void MetricUsage::SetBillingCycleType(const string& _billingCycleType)
{
    m_billingCycleType = _billingCycleType;
    m_billingCycleTypeHasBeenSet = true;
}

bool MetricUsage::BillingCycleTypeHasBeenSet() const
{
    return m_billingCycleTypeHasBeenSet;
}

string MetricUsage::GetUnit() const
{
    return m_unit;
}

void MetricUsage::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool MetricUsage::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

vector<ValueDetail> MetricUsage::GetValueDetailList() const
{
    return m_valueDetailList;
}

void MetricUsage::SetValueDetailList(const vector<ValueDetail>& _valueDetailList)
{
    m_valueDetailList = _valueDetailList;
    m_valueDetailListHasBeenSet = true;
}

bool MetricUsage::ValueDetailListHasBeenSet() const
{
    return m_valueDetailListHasBeenSet;
}

double MetricUsage::GetDeductValue() const
{
    return m_deductValue;
}

void MetricUsage::SetDeductValue(const double& _deductValue)
{
    m_deductValue = _deductValue;
    m_deductValueHasBeenSet = true;
}

bool MetricUsage::DeductValueHasBeenSet() const
{
    return m_deductValueHasBeenSet;
}

double MetricUsage::GetPackageDeductValue() const
{
    return m_packageDeductValue;
}

void MetricUsage::SetPackageDeductValue(const double& _packageDeductValue)
{
    m_packageDeductValue = _packageDeductValue;
    m_packageDeductValueHasBeenSet = true;
}

bool MetricUsage::PackageDeductValueHasBeenSet() const
{
    return m_packageDeductValueHasBeenSet;
}

double MetricUsage::GetReportValue() const
{
    return m_reportValue;
}

void MetricUsage::SetReportValue(const double& _reportValue)
{
    m_reportValue = _reportValue;
    m_reportValueHasBeenSet = true;
}

bool MetricUsage::ReportValueHasBeenSet() const
{
    return m_reportValueHasBeenSet;
}

