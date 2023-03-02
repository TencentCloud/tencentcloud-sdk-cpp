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

#include <tencentcloud/mrs/v20200910/model/NormSize.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

NormSize::NormSize() :
    m_numberHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_implHasBeenSet(false)
{
}

CoreInternalOutcome NormSize::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NormSize.Number` is not array type"));

        const rapidjson::Value &tmpValue = value["Number"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_number.push_back((*itr).GetString());
        }
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormSize.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormSize.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Impl") && !value["Impl"].IsNull())
    {
        if (!value["Impl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormSize.Impl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_impl = string(value["Impl"].GetString());
        m_implHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NormSize::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_number.begin(); itr != m_number.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_implHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Impl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_impl.c_str(), allocator).Move(), allocator);
    }

}


vector<string> NormSize::GetNumber() const
{
    return m_number;
}

void NormSize::SetNumber(const vector<string>& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool NormSize::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string NormSize::GetType() const
{
    return m_type;
}

void NormSize::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool NormSize::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string NormSize::GetUnit() const
{
    return m_unit;
}

void NormSize::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool NormSize::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string NormSize::GetImpl() const
{
    return m_impl;
}

void NormSize::SetImpl(const string& _impl)
{
    m_impl = _impl;
    m_implHasBeenSet = true;
}

bool NormSize::ImplHasBeenSet() const
{
    return m_implHasBeenSet;
}

