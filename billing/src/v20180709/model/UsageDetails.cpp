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
    m_subProductNameHasBeenSet(false)
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

