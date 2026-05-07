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

#include <tencentcloud/tcb/v20180608/model/ManagedAIModelChargingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ManagedAIModelChargingInfo::ManagedAIModelChargingInfo() :
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_inputPriceHasBeenSet(false),
    m_outputPriceHasBeenSet(false),
    m_cachePriceHasBeenSet(false),
    m_inputOutputUnitHasBeenSet(false)
{
}

CoreInternalOutcome ManagedAIModelChargingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedAIModelChargingInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedAIModelChargingInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("InputPrice") && !value["InputPrice"].IsNull())
    {
        if (!value["InputPrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedAIModelChargingInfo.InputPrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputPrice = string(value["InputPrice"].GetString());
        m_inputPriceHasBeenSet = true;
    }

    if (value.HasMember("OutputPrice") && !value["OutputPrice"].IsNull())
    {
        if (!value["OutputPrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedAIModelChargingInfo.OutputPrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputPrice = string(value["OutputPrice"].GetString());
        m_outputPriceHasBeenSet = true;
    }

    if (value.HasMember("CachePrice") && !value["CachePrice"].IsNull())
    {
        if (!value["CachePrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedAIModelChargingInfo.CachePrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cachePrice = string(value["CachePrice"].GetString());
        m_cachePriceHasBeenSet = true;
    }

    if (value.HasMember("InputOutputUnit") && !value["InputOutputUnit"].IsNull())
    {
        if (!value["InputOutputUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedAIModelChargingInfo.InputOutputUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputOutputUnit = string(value["InputOutputUnit"].GetString());
        m_inputOutputUnitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManagedAIModelChargingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_inputPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputPrice.c_str(), allocator).Move(), allocator);
    }

    if (m_outputPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputPrice.c_str(), allocator).Move(), allocator);
    }

    if (m_cachePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CachePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cachePrice.c_str(), allocator).Move(), allocator);
    }

    if (m_inputOutputUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputOutputUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputOutputUnit.c_str(), allocator).Move(), allocator);
    }

}


string ManagedAIModelChargingInfo::GetType() const
{
    return m_type;
}

void ManagedAIModelChargingInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ManagedAIModelChargingInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ManagedAIModelChargingInfo::GetName() const
{
    return m_name;
}

void ManagedAIModelChargingInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ManagedAIModelChargingInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ManagedAIModelChargingInfo::GetInputPrice() const
{
    return m_inputPrice;
}

void ManagedAIModelChargingInfo::SetInputPrice(const string& _inputPrice)
{
    m_inputPrice = _inputPrice;
    m_inputPriceHasBeenSet = true;
}

bool ManagedAIModelChargingInfo::InputPriceHasBeenSet() const
{
    return m_inputPriceHasBeenSet;
}

string ManagedAIModelChargingInfo::GetOutputPrice() const
{
    return m_outputPrice;
}

void ManagedAIModelChargingInfo::SetOutputPrice(const string& _outputPrice)
{
    m_outputPrice = _outputPrice;
    m_outputPriceHasBeenSet = true;
}

bool ManagedAIModelChargingInfo::OutputPriceHasBeenSet() const
{
    return m_outputPriceHasBeenSet;
}

string ManagedAIModelChargingInfo::GetCachePrice() const
{
    return m_cachePrice;
}

void ManagedAIModelChargingInfo::SetCachePrice(const string& _cachePrice)
{
    m_cachePrice = _cachePrice;
    m_cachePriceHasBeenSet = true;
}

bool ManagedAIModelChargingInfo::CachePriceHasBeenSet() const
{
    return m_cachePriceHasBeenSet;
}

string ManagedAIModelChargingInfo::GetInputOutputUnit() const
{
    return m_inputOutputUnit;
}

void ManagedAIModelChargingInfo::SetInputOutputUnit(const string& _inputOutputUnit)
{
    m_inputOutputUnit = _inputOutputUnit;
    m_inputOutputUnitHasBeenSet = true;
}

bool ManagedAIModelChargingInfo::InputOutputUnitHasBeenSet() const
{
    return m_inputOutputUnitHasBeenSet;
}

