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

#include <tencentcloud/mrs/v20200910/model/InternalMedicineAbdomenKidney.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

InternalMedicineAbdomenKidney::InternalMedicineAbdomenKidney() :
    m_srcHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_palpationHasBeenSet(false),
    m_percussionHasBeenSet(false),
    m_tendernessHasBeenSet(false),
    m_consistencyHasBeenSet(false)
{
}

CoreInternalOutcome InternalMedicineAbdomenKidney::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineAbdomenKidney.Src` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_src.Deserialize(value["Src"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineAbdomenKidney.Size` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_size.Deserialize(value["Size"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Palpation") && !value["Palpation"].IsNull())
    {
        if (!value["Palpation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineAbdomenKidney.Palpation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_palpation.Deserialize(value["Palpation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_palpationHasBeenSet = true;
    }

    if (value.HasMember("Percussion") && !value["Percussion"].IsNull())
    {
        if (!value["Percussion"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineAbdomenKidney.Percussion` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_percussion.Deserialize(value["Percussion"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_percussionHasBeenSet = true;
    }

    if (value.HasMember("Tenderness") && !value["Tenderness"].IsNull())
    {
        if (!value["Tenderness"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineAbdomenKidney.Tenderness` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tenderness.Deserialize(value["Tenderness"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tendernessHasBeenSet = true;
    }

    if (value.HasMember("Consistency") && !value["Consistency"].IsNull())
    {
        if (!value["Consistency"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineAbdomenKidney.Consistency` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_consistency.Deserialize(value["Consistency"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_consistencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternalMedicineAbdomenKidney::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_src.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_size.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_palpationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Palpation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_palpation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_percussionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percussion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_percussion.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tendernessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tenderness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tenderness.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_consistencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Consistency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_consistency.ToJsonObject(value[key.c_str()], allocator);
    }

}


KeyValueItem InternalMedicineAbdomenKidney::GetSrc() const
{
    return m_src;
}

void InternalMedicineAbdomenKidney::SetSrc(const KeyValueItem& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool InternalMedicineAbdomenKidney::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

KeyValueItem InternalMedicineAbdomenKidney::GetSize() const
{
    return m_size;
}

void InternalMedicineAbdomenKidney::SetSize(const KeyValueItem& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool InternalMedicineAbdomenKidney::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

KeyValueItem InternalMedicineAbdomenKidney::GetPalpation() const
{
    return m_palpation;
}

void InternalMedicineAbdomenKidney::SetPalpation(const KeyValueItem& _palpation)
{
    m_palpation = _palpation;
    m_palpationHasBeenSet = true;
}

bool InternalMedicineAbdomenKidney::PalpationHasBeenSet() const
{
    return m_palpationHasBeenSet;
}

KeyValueItem InternalMedicineAbdomenKidney::GetPercussion() const
{
    return m_percussion;
}

void InternalMedicineAbdomenKidney::SetPercussion(const KeyValueItem& _percussion)
{
    m_percussion = _percussion;
    m_percussionHasBeenSet = true;
}

bool InternalMedicineAbdomenKidney::PercussionHasBeenSet() const
{
    return m_percussionHasBeenSet;
}

KeyValueItem InternalMedicineAbdomenKidney::GetTenderness() const
{
    return m_tenderness;
}

void InternalMedicineAbdomenKidney::SetTenderness(const KeyValueItem& _tenderness)
{
    m_tenderness = _tenderness;
    m_tendernessHasBeenSet = true;
}

bool InternalMedicineAbdomenKidney::TendernessHasBeenSet() const
{
    return m_tendernessHasBeenSet;
}

KeyValueItem InternalMedicineAbdomenKidney::GetConsistency() const
{
    return m_consistency;
}

void InternalMedicineAbdomenKidney::SetConsistency(const KeyValueItem& _consistency)
{
    m_consistency = _consistency;
    m_consistencyHasBeenSet = true;
}

bool InternalMedicineAbdomenKidney::ConsistencyHasBeenSet() const
{
    return m_consistencyHasBeenSet;
}

