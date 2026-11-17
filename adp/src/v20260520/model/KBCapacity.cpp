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

#include <tencentcloud/adp/v20260520/model/KBCapacity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

KBCapacity::KBCapacity() :
    m_maxCharSizeHasBeenSet(false),
    m_overCharSizeHasBeenSet(false),
    m_usedCharSizeHasBeenSet(false),
    m_characterSizeHasBeenSet(false),
    m_byteCapacityHasBeenSet(false),
    m_capacityStatusHasBeenSet(false)
{
}

CoreInternalOutcome KBCapacity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxCharSize") && !value["MaxCharSize"].IsNull())
    {
        if (!value["MaxCharSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBCapacity.MaxCharSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxCharSize = string(value["MaxCharSize"].GetString());
        m_maxCharSizeHasBeenSet = true;
    }

    if (value.HasMember("OverCharSize") && !value["OverCharSize"].IsNull())
    {
        if (!value["OverCharSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBCapacity.OverCharSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_overCharSize = string(value["OverCharSize"].GetString());
        m_overCharSizeHasBeenSet = true;
    }

    if (value.HasMember("UsedCharSize") && !value["UsedCharSize"].IsNull())
    {
        if (!value["UsedCharSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBCapacity.UsedCharSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedCharSize = string(value["UsedCharSize"].GetString());
        m_usedCharSizeHasBeenSet = true;
    }

    if (value.HasMember("CharacterSize") && !value["CharacterSize"].IsNull())
    {
        if (!value["CharacterSize"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KBCapacity.CharacterSize` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_characterSize.Deserialize(value["CharacterSize"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_characterSizeHasBeenSet = true;
    }

    if (value.HasMember("ByteCapacity") && !value["ByteCapacity"].IsNull())
    {
        if (!value["ByteCapacity"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KBCapacity.ByteCapacity` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_byteCapacity.Deserialize(value["ByteCapacity"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_byteCapacityHasBeenSet = true;
    }

    if (value.HasMember("CapacityStatus") && !value["CapacityStatus"].IsNull())
    {
        if (!value["CapacityStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KBCapacity.CapacityStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_capacityStatus = value["CapacityStatus"].GetInt64();
        m_capacityStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KBCapacity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxCharSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCharSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxCharSize.c_str(), allocator).Move(), allocator);
    }

    if (m_overCharSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverCharSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_overCharSize.c_str(), allocator).Move(), allocator);
    }

    if (m_usedCharSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedCharSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usedCharSize.c_str(), allocator).Move(), allocator);
    }

    if (m_characterSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CharacterSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_characterSize.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_byteCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ByteCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_byteCapacity.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_capacityStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacityStatus, allocator);
    }

}


string KBCapacity::GetMaxCharSize() const
{
    return m_maxCharSize;
}

void KBCapacity::SetMaxCharSize(const string& _maxCharSize)
{
    m_maxCharSize = _maxCharSize;
    m_maxCharSizeHasBeenSet = true;
}

bool KBCapacity::MaxCharSizeHasBeenSet() const
{
    return m_maxCharSizeHasBeenSet;
}

string KBCapacity::GetOverCharSize() const
{
    return m_overCharSize;
}

void KBCapacity::SetOverCharSize(const string& _overCharSize)
{
    m_overCharSize = _overCharSize;
    m_overCharSizeHasBeenSet = true;
}

bool KBCapacity::OverCharSizeHasBeenSet() const
{
    return m_overCharSizeHasBeenSet;
}

string KBCapacity::GetUsedCharSize() const
{
    return m_usedCharSize;
}

void KBCapacity::SetUsedCharSize(const string& _usedCharSize)
{
    m_usedCharSize = _usedCharSize;
    m_usedCharSizeHasBeenSet = true;
}

bool KBCapacity::UsedCharSizeHasBeenSet() const
{
    return m_usedCharSizeHasBeenSet;
}

CharacterSize KBCapacity::GetCharacterSize() const
{
    return m_characterSize;
}

void KBCapacity::SetCharacterSize(const CharacterSize& _characterSize)
{
    m_characterSize = _characterSize;
    m_characterSizeHasBeenSet = true;
}

bool KBCapacity::CharacterSizeHasBeenSet() const
{
    return m_characterSizeHasBeenSet;
}

ByteCapacity KBCapacity::GetByteCapacity() const
{
    return m_byteCapacity;
}

void KBCapacity::SetByteCapacity(const ByteCapacity& _byteCapacity)
{
    m_byteCapacity = _byteCapacity;
    m_byteCapacityHasBeenSet = true;
}

bool KBCapacity::ByteCapacityHasBeenSet() const
{
    return m_byteCapacityHasBeenSet;
}

int64_t KBCapacity::GetCapacityStatus() const
{
    return m_capacityStatus;
}

void KBCapacity::SetCapacityStatus(const int64_t& _capacityStatus)
{
    m_capacityStatus = _capacityStatus;
    m_capacityStatusHasBeenSet = true;
}

bool KBCapacity::CapacityStatusHasBeenSet() const
{
    return m_capacityStatusHasBeenSet;
}

