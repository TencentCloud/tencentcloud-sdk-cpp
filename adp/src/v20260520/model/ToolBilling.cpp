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

#include <tencentcloud/adp/v20260520/model/ToolBilling.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ToolBilling::ToolBilling() :
    m_basicBillingHasBeenSet(false),
    m_billingTypeHasBeenSet(false),
    m_complexBillingHasBeenSet(false),
    m_duplexBillingHasBeenSet(false)
{
}

CoreInternalOutcome ToolBilling::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BasicBilling") && !value["BasicBilling"].IsNull())
    {
        if (!value["BasicBilling"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ToolBilling.BasicBilling` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_basicBilling.Deserialize(value["BasicBilling"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_basicBillingHasBeenSet = true;
    }

    if (value.HasMember("BillingType") && !value["BillingType"].IsNull())
    {
        if (!value["BillingType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ToolBilling.BillingType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingType = value["BillingType"].GetInt64();
        m_billingTypeHasBeenSet = true;
    }

    if (value.HasMember("ComplexBilling") && !value["ComplexBilling"].IsNull())
    {
        if (!value["ComplexBilling"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ToolBilling.ComplexBilling` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_complexBilling.Deserialize(value["ComplexBilling"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_complexBillingHasBeenSet = true;
    }

    if (value.HasMember("DuplexBilling") && !value["DuplexBilling"].IsNull())
    {
        if (!value["DuplexBilling"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ToolBilling.DuplexBilling` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_duplexBilling.Deserialize(value["DuplexBilling"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_duplexBillingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ToolBilling::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_basicBillingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicBilling";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicBilling.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_billingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingType, allocator);
    }

    if (m_complexBillingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplexBilling";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_complexBilling.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_duplexBillingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DuplexBilling";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_duplexBilling.ToJsonObject(value[key.c_str()], allocator);
    }

}


BasicBilling ToolBilling::GetBasicBilling() const
{
    return m_basicBilling;
}

void ToolBilling::SetBasicBilling(const BasicBilling& _basicBilling)
{
    m_basicBilling = _basicBilling;
    m_basicBillingHasBeenSet = true;
}

bool ToolBilling::BasicBillingHasBeenSet() const
{
    return m_basicBillingHasBeenSet;
}

int64_t ToolBilling::GetBillingType() const
{
    return m_billingType;
}

void ToolBilling::SetBillingType(const int64_t& _billingType)
{
    m_billingType = _billingType;
    m_billingTypeHasBeenSet = true;
}

bool ToolBilling::BillingTypeHasBeenSet() const
{
    return m_billingTypeHasBeenSet;
}

ComplexBilling ToolBilling::GetComplexBilling() const
{
    return m_complexBilling;
}

void ToolBilling::SetComplexBilling(const ComplexBilling& _complexBilling)
{
    m_complexBilling = _complexBilling;
    m_complexBillingHasBeenSet = true;
}

bool ToolBilling::ComplexBillingHasBeenSet() const
{
    return m_complexBillingHasBeenSet;
}

DuplexBilling ToolBilling::GetDuplexBilling() const
{
    return m_duplexBilling;
}

void ToolBilling::SetDuplexBilling(const DuplexBilling& _duplexBilling)
{
    m_duplexBilling = _duplexBilling;
    m_duplexBillingHasBeenSet = true;
}

bool ToolBilling::DuplexBillingHasBeenSet() const
{
    return m_duplexBillingHasBeenSet;
}

