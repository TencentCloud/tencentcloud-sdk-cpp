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

#include <tencentcloud/cdn/v20180606/model/ReportData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ReportData::ReportData() :
    m_resourceIdHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_percentageHasBeenSet(false),
    m_billingValueHasBeenSet(false),
    m_billingPercentageHasBeenSet(false)
{
}

CoreInternalOutcome ReportData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportData.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportData.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportData.Value` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetInt64();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Percentage") && !value["Percentage"].IsNull())
    {
        if (!value["Percentage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReportData.Percentage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_percentage = value["Percentage"].GetDouble();
        m_percentageHasBeenSet = true;
    }

    if (value.HasMember("BillingValue") && !value["BillingValue"].IsNull())
    {
        if (!value["BillingValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportData.BillingValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingValue = value["BillingValue"].GetInt64();
        m_billingValueHasBeenSet = true;
    }

    if (value.HasMember("BillingPercentage") && !value["BillingPercentage"].IsNull())
    {
        if (!value["BillingPercentage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReportData.BillingPercentage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_billingPercentage = value["BillingPercentage"].GetDouble();
        m_billingPercentageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReportData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_percentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percentage, allocator);
    }

    if (m_billingValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingValue, allocator);
    }

    if (m_billingPercentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingPercentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingPercentage, allocator);
    }

}


string ReportData::GetResourceId() const
{
    return m_resourceId;
}

void ReportData::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ReportData::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ReportData::GetResource() const
{
    return m_resource;
}

void ReportData::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ReportData::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

int64_t ReportData::GetValue() const
{
    return m_value;
}

void ReportData::SetValue(const int64_t& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ReportData::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

double ReportData::GetPercentage() const
{
    return m_percentage;
}

void ReportData::SetPercentage(const double& _percentage)
{
    m_percentage = _percentage;
    m_percentageHasBeenSet = true;
}

bool ReportData::PercentageHasBeenSet() const
{
    return m_percentageHasBeenSet;
}

int64_t ReportData::GetBillingValue() const
{
    return m_billingValue;
}

void ReportData::SetBillingValue(const int64_t& _billingValue)
{
    m_billingValue = _billingValue;
    m_billingValueHasBeenSet = true;
}

bool ReportData::BillingValueHasBeenSet() const
{
    return m_billingValueHasBeenSet;
}

double ReportData::GetBillingPercentage() const
{
    return m_billingPercentage;
}

void ReportData::SetBillingPercentage(const double& _billingPercentage)
{
    m_billingPercentage = _billingPercentage;
    m_billingPercentageHasBeenSet = true;
}

bool ReportData::BillingPercentageHasBeenSet() const
{
    return m_billingPercentageHasBeenSet;
}

