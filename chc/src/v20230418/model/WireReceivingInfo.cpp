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

#include <tencentcloud/chc/v20230418/model/WireReceivingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

WireReceivingInfo::WireReceivingInfo() :
    m_typeNameHasBeenSet(false),
    m_quantityHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_receiptNumberHasBeenSet(false),
    m_hardwareMemoHasBeenSet(false)
{
}

CoreInternalOutcome WireReceivingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WireReceivingInfo.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("Quantity") && !value["Quantity"].IsNull())
    {
        if (!value["Quantity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WireReceivingInfo.Quantity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quantity = value["Quantity"].GetUint64();
        m_quantityHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WireReceivingInfo.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("ReceiptNumber") && !value["ReceiptNumber"].IsNull())
    {
        if (!value["ReceiptNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WireReceivingInfo.ReceiptNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiptNumber = string(value["ReceiptNumber"].GetString());
        m_receiptNumberHasBeenSet = true;
    }

    if (value.HasMember("HardwareMemo") && !value["HardwareMemo"].IsNull())
    {
        if (!value["HardwareMemo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WireReceivingInfo.HardwareMemo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hardwareMemo = string(value["HardwareMemo"].GetString());
        m_hardwareMemoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WireReceivingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_quantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quantity, allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_receiptNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiptNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiptNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_hardwareMemoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardwareMemo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hardwareMemo.c_str(), allocator).Move(), allocator);
    }

}


string WireReceivingInfo::GetTypeName() const
{
    return m_typeName;
}

void WireReceivingInfo::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool WireReceivingInfo::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

uint64_t WireReceivingInfo::GetQuantity() const
{
    return m_quantity;
}

void WireReceivingInfo::SetQuantity(const uint64_t& _quantity)
{
    m_quantity = _quantity;
    m_quantityHasBeenSet = true;
}

bool WireReceivingInfo::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

string WireReceivingInfo::GetUnit() const
{
    return m_unit;
}

void WireReceivingInfo::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool WireReceivingInfo::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string WireReceivingInfo::GetReceiptNumber() const
{
    return m_receiptNumber;
}

void WireReceivingInfo::SetReceiptNumber(const string& _receiptNumber)
{
    m_receiptNumber = _receiptNumber;
    m_receiptNumberHasBeenSet = true;
}

bool WireReceivingInfo::ReceiptNumberHasBeenSet() const
{
    return m_receiptNumberHasBeenSet;
}

string WireReceivingInfo::GetHardwareMemo() const
{
    return m_hardwareMemo;
}

void WireReceivingInfo::SetHardwareMemo(const string& _hardwareMemo)
{
    m_hardwareMemo = _hardwareMemo;
    m_hardwareMemoHasBeenSet = true;
}

bool WireReceivingInfo::HardwareMemoHasBeenSet() const
{
    return m_hardwareMemoHasBeenSet;
}

