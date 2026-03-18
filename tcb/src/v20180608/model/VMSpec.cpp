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

#include <tencentcloud/tcb/v20180608/model/VMSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

VMSpec::VMSpec() :
    m_typeHasBeenSet(false),
    m_lightHouseSpecHasBeenSet(false),
    m_priceHasBeenSet(false)
{
}

CoreInternalOutcome VMSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VMSpec.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("LightHouseSpec") && !value["LightHouseSpec"].IsNull())
    {
        if (!value["LightHouseSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VMSpec.LightHouseSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lightHouseSpec.Deserialize(value["LightHouseSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lightHouseSpecHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VMSpec.Price` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_price.Deserialize(value["Price"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_priceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VMSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_lightHouseSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LightHouseSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lightHouseSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_price.ToJsonObject(value[key.c_str()], allocator);
    }

}


string VMSpec::GetType() const
{
    return m_type;
}

void VMSpec::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool VMSpec::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

VMSpecLightHouse VMSpec::GetLightHouseSpec() const
{
    return m_lightHouseSpec;
}

void VMSpec::SetLightHouseSpec(const VMSpecLightHouse& _lightHouseSpec)
{
    m_lightHouseSpec = _lightHouseSpec;
    m_lightHouseSpecHasBeenSet = true;
}

bool VMSpec::LightHouseSpecHasBeenSet() const
{
    return m_lightHouseSpecHasBeenSet;
}

VMPrice VMSpec::GetPrice() const
{
    return m_price;
}

void VMSpec::SetPrice(const VMPrice& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool VMSpec::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

