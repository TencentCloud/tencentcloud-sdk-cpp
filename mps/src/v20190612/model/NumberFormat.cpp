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

#include <tencentcloud/mps/v20190612/model/NumberFormat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

NumberFormat::NumberFormat() :
    m_initialValueHasBeenSet(false),
    m_incrementHasBeenSet(false),
    m_minLengthHasBeenSet(false),
    m_placeHolderHasBeenSet(false)
{
}

CoreInternalOutcome NumberFormat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InitialValue") && !value["InitialValue"].IsNull())
    {
        if (!value["InitialValue"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NumberFormat.InitialValue` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_initialValue = value["InitialValue"].GetUint64();
        m_initialValueHasBeenSet = true;
    }

    if (value.HasMember("Increment") && !value["Increment"].IsNull())
    {
        if (!value["Increment"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NumberFormat.Increment` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_increment = value["Increment"].GetUint64();
        m_incrementHasBeenSet = true;
    }

    if (value.HasMember("MinLength") && !value["MinLength"].IsNull())
    {
        if (!value["MinLength"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NumberFormat.MinLength` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minLength = value["MinLength"].GetUint64();
        m_minLengthHasBeenSet = true;
    }

    if (value.HasMember("PlaceHolder") && !value["PlaceHolder"].IsNull())
    {
        if (!value["PlaceHolder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NumberFormat.PlaceHolder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_placeHolder = string(value["PlaceHolder"].GetString());
        m_placeHolderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NumberFormat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_initialValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitialValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initialValue, allocator);
    }

    if (m_incrementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Increment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_increment, allocator);
    }

    if (m_minLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minLength, allocator);
    }

    if (m_placeHolderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaceHolder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_placeHolder.c_str(), allocator).Move(), allocator);
    }

}


uint64_t NumberFormat::GetInitialValue() const
{
    return m_initialValue;
}

void NumberFormat::SetInitialValue(const uint64_t& _initialValue)
{
    m_initialValue = _initialValue;
    m_initialValueHasBeenSet = true;
}

bool NumberFormat::InitialValueHasBeenSet() const
{
    return m_initialValueHasBeenSet;
}

uint64_t NumberFormat::GetIncrement() const
{
    return m_increment;
}

void NumberFormat::SetIncrement(const uint64_t& _increment)
{
    m_increment = _increment;
    m_incrementHasBeenSet = true;
}

bool NumberFormat::IncrementHasBeenSet() const
{
    return m_incrementHasBeenSet;
}

uint64_t NumberFormat::GetMinLength() const
{
    return m_minLength;
}

void NumberFormat::SetMinLength(const uint64_t& _minLength)
{
    m_minLength = _minLength;
    m_minLengthHasBeenSet = true;
}

bool NumberFormat::MinLengthHasBeenSet() const
{
    return m_minLengthHasBeenSet;
}

string NumberFormat::GetPlaceHolder() const
{
    return m_placeHolder;
}

void NumberFormat::SetPlaceHolder(const string& _placeHolder)
{
    m_placeHolder = _placeHolder;
    m_placeHolderHasBeenSet = true;
}

bool NumberFormat::PlaceHolderHasBeenSet() const
{
    return m_placeHolderHasBeenSet;
}

