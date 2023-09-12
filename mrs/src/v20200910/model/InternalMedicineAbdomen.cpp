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

#include <tencentcloud/mrs/v20200910/model/InternalMedicineAbdomen.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

InternalMedicineAbdomen::InternalMedicineAbdomen() :
    m_textHasBeenSet(false),
    m_liverHasBeenSet(false),
    m_gallBladderHasBeenSet(false),
    m_pancreasHasBeenSet(false),
    m_spleenHasBeenSet(false),
    m_kidneyHasBeenSet(false),
    m_othersHasBeenSet(false)
{
}

CoreInternalOutcome InternalMedicineAbdomen::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineAbdomen.Text` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_text.Deserialize(value["Text"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textHasBeenSet = true;
    }

    if (value.HasMember("Liver") && !value["Liver"].IsNull())
    {
        if (!value["Liver"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineAbdomen.Liver` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_liver.Deserialize(value["Liver"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_liverHasBeenSet = true;
    }

    if (value.HasMember("GallBladder") && !value["GallBladder"].IsNull())
    {
        if (!value["GallBladder"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineAbdomen.GallBladder` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gallBladder.Deserialize(value["GallBladder"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gallBladderHasBeenSet = true;
    }

    if (value.HasMember("Pancreas") && !value["Pancreas"].IsNull())
    {
        if (!value["Pancreas"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineAbdomen.Pancreas` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pancreas.Deserialize(value["Pancreas"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pancreasHasBeenSet = true;
    }

    if (value.HasMember("Spleen") && !value["Spleen"].IsNull())
    {
        if (!value["Spleen"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineAbdomen.Spleen` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_spleen.Deserialize(value["Spleen"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_spleenHasBeenSet = true;
    }

    if (value.HasMember("Kidney") && !value["Kidney"].IsNull())
    {
        if (!value["Kidney"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineAbdomen.Kidney` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kidney.Deserialize(value["Kidney"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kidneyHasBeenSet = true;
    }

    if (value.HasMember("Others") && !value["Others"].IsNull())
    {
        if (!value["Others"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InternalMedicineAbdomen.Others` is not array type"));

        const rapidjson::Value &tmpValue = value["Others"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValueItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_others.push_back(item);
        }
        m_othersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternalMedicineAbdomen::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_text.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_liverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Liver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_liver.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gallBladderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GallBladder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gallBladder.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pancreasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pancreas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pancreas.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_spleenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spleen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spleen.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_kidneyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kidney";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kidney.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_othersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Others";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_others.begin(); itr != m_others.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


KeyValueItem InternalMedicineAbdomen::GetText() const
{
    return m_text;
}

void InternalMedicineAbdomen::SetText(const KeyValueItem& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool InternalMedicineAbdomen::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

InternalMedicineAbdomenLiver InternalMedicineAbdomen::GetLiver() const
{
    return m_liver;
}

void InternalMedicineAbdomen::SetLiver(const InternalMedicineAbdomenLiver& _liver)
{
    m_liver = _liver;
    m_liverHasBeenSet = true;
}

bool InternalMedicineAbdomen::LiverHasBeenSet() const
{
    return m_liverHasBeenSet;
}

InternalMedicineAbdomenGallBladder InternalMedicineAbdomen::GetGallBladder() const
{
    return m_gallBladder;
}

void InternalMedicineAbdomen::SetGallBladder(const InternalMedicineAbdomenGallBladder& _gallBladder)
{
    m_gallBladder = _gallBladder;
    m_gallBladderHasBeenSet = true;
}

bool InternalMedicineAbdomen::GallBladderHasBeenSet() const
{
    return m_gallBladderHasBeenSet;
}

InternalMedicineAbdomenPancreas InternalMedicineAbdomen::GetPancreas() const
{
    return m_pancreas;
}

void InternalMedicineAbdomen::SetPancreas(const InternalMedicineAbdomenPancreas& _pancreas)
{
    m_pancreas = _pancreas;
    m_pancreasHasBeenSet = true;
}

bool InternalMedicineAbdomen::PancreasHasBeenSet() const
{
    return m_pancreasHasBeenSet;
}

InternalMedicineAbdomenSpleen InternalMedicineAbdomen::GetSpleen() const
{
    return m_spleen;
}

void InternalMedicineAbdomen::SetSpleen(const InternalMedicineAbdomenSpleen& _spleen)
{
    m_spleen = _spleen;
    m_spleenHasBeenSet = true;
}

bool InternalMedicineAbdomen::SpleenHasBeenSet() const
{
    return m_spleenHasBeenSet;
}

InternalMedicineAbdomenKidney InternalMedicineAbdomen::GetKidney() const
{
    return m_kidney;
}

void InternalMedicineAbdomen::SetKidney(const InternalMedicineAbdomenKidney& _kidney)
{
    m_kidney = _kidney;
    m_kidneyHasBeenSet = true;
}

bool InternalMedicineAbdomen::KidneyHasBeenSet() const
{
    return m_kidneyHasBeenSet;
}

vector<KeyValueItem> InternalMedicineAbdomen::GetOthers() const
{
    return m_others;
}

void InternalMedicineAbdomen::SetOthers(const vector<KeyValueItem>& _others)
{
    m_others = _others;
    m_othersHasBeenSet = true;
}

bool InternalMedicineAbdomen::OthersHasBeenSet() const
{
    return m_othersHasBeenSet;
}

