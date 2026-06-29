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

#include <tencentcloud/adp/v20260520/model/DuplexBilling.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DuplexBilling::DuplexBilling() :
    m_billingUnitHasBeenSet(false),
    m_inputCashPriceHasBeenSet(false),
    m_inputPuPriceHasBeenSet(false),
    m_outputCashPriceHasBeenSet(false),
    m_outputPuPriceHasBeenSet(false)
{
}

CoreInternalOutcome DuplexBilling::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BillingUnit") && !value["BillingUnit"].IsNull())
    {
        if (!value["BillingUnit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DuplexBilling.BillingUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingUnit = value["BillingUnit"].GetInt64();
        m_billingUnitHasBeenSet = true;
    }

    if (value.HasMember("InputCashPrice") && !value["InputCashPrice"].IsNull())
    {
        if (!value["InputCashPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DuplexBilling.InputCashPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_inputCashPrice = value["InputCashPrice"].GetDouble();
        m_inputCashPriceHasBeenSet = true;
    }

    if (value.HasMember("InputPuPrice") && !value["InputPuPrice"].IsNull())
    {
        if (!value["InputPuPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DuplexBilling.InputPuPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_inputPuPrice = value["InputPuPrice"].GetDouble();
        m_inputPuPriceHasBeenSet = true;
    }

    if (value.HasMember("OutputCashPrice") && !value["OutputCashPrice"].IsNull())
    {
        if (!value["OutputCashPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DuplexBilling.OutputCashPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_outputCashPrice = value["OutputCashPrice"].GetDouble();
        m_outputCashPriceHasBeenSet = true;
    }

    if (value.HasMember("OutputPuPrice") && !value["OutputPuPrice"].IsNull())
    {
        if (!value["OutputPuPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DuplexBilling.OutputPuPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_outputPuPrice = value["OutputPuPrice"].GetDouble();
        m_outputPuPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DuplexBilling::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_billingUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingUnit, allocator);
    }

    if (m_inputCashPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputCashPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputCashPrice, allocator);
    }

    if (m_inputPuPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputPuPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputPuPrice, allocator);
    }

    if (m_outputCashPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputCashPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputCashPrice, allocator);
    }

    if (m_outputPuPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputPuPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputPuPrice, allocator);
    }

}


int64_t DuplexBilling::GetBillingUnit() const
{
    return m_billingUnit;
}

void DuplexBilling::SetBillingUnit(const int64_t& _billingUnit)
{
    m_billingUnit = _billingUnit;
    m_billingUnitHasBeenSet = true;
}

bool DuplexBilling::BillingUnitHasBeenSet() const
{
    return m_billingUnitHasBeenSet;
}

double DuplexBilling::GetInputCashPrice() const
{
    return m_inputCashPrice;
}

void DuplexBilling::SetInputCashPrice(const double& _inputCashPrice)
{
    m_inputCashPrice = _inputCashPrice;
    m_inputCashPriceHasBeenSet = true;
}

bool DuplexBilling::InputCashPriceHasBeenSet() const
{
    return m_inputCashPriceHasBeenSet;
}

double DuplexBilling::GetInputPuPrice() const
{
    return m_inputPuPrice;
}

void DuplexBilling::SetInputPuPrice(const double& _inputPuPrice)
{
    m_inputPuPrice = _inputPuPrice;
    m_inputPuPriceHasBeenSet = true;
}

bool DuplexBilling::InputPuPriceHasBeenSet() const
{
    return m_inputPuPriceHasBeenSet;
}

double DuplexBilling::GetOutputCashPrice() const
{
    return m_outputCashPrice;
}

void DuplexBilling::SetOutputCashPrice(const double& _outputCashPrice)
{
    m_outputCashPrice = _outputCashPrice;
    m_outputCashPriceHasBeenSet = true;
}

bool DuplexBilling::OutputCashPriceHasBeenSet() const
{
    return m_outputCashPriceHasBeenSet;
}

double DuplexBilling::GetOutputPuPrice() const
{
    return m_outputPuPrice;
}

void DuplexBilling::SetOutputPuPrice(const double& _outputPuPrice)
{
    m_outputPuPrice = _outputPuPrice;
    m_outputPuPriceHasBeenSet = true;
}

bool DuplexBilling::OutputPuPriceHasBeenSet() const
{
    return m_outputPuPriceHasBeenSet;
}

