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

#include <tencentcloud/vod/v20180717/model/ProductInstanceRecource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ProductInstanceRecource::ProductInstanceRecource() :
    m_resourceTypeHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_leftHasBeenSet(false)
{
}

CoreInternalOutcome ProductInstanceRecource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInstanceRecource.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInstanceRecource.Amount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_amount = value["Amount"].GetInt64();
        m_amountHasBeenSet = true;
    }

    if (value.HasMember("Left") && !value["Left"].IsNull())
    {
        if (!value["Left"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInstanceRecource.Left` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_left = value["Left"].GetInt64();
        m_leftHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductInstanceRecource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amount, allocator);
    }

    if (m_leftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Left";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_left, allocator);
    }

}


string ProductInstanceRecource::GetResourceType() const
{
    return m_resourceType;
}

void ProductInstanceRecource::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ProductInstanceRecource::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

int64_t ProductInstanceRecource::GetAmount() const
{
    return m_amount;
}

void ProductInstanceRecource::SetAmount(const int64_t& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool ProductInstanceRecource::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

int64_t ProductInstanceRecource::GetLeft() const
{
    return m_left;
}

void ProductInstanceRecource::SetLeft(const int64_t& _left)
{
    m_left = _left;
    m_leftHasBeenSet = true;
}

bool ProductInstanceRecource::LeftHasBeenSet() const
{
    return m_leftHasBeenSet;
}

