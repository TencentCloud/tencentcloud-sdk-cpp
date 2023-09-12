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

#include <tencentcloud/mrs/v20200910/model/InternalMedicineRespiratorySystem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

InternalMedicineRespiratorySystem::InternalMedicineRespiratorySystem() :
    m_textHasBeenSet(false),
    m_thoracicHasBeenSet(false),
    m_sputumHasBeenSet(false),
    m_lungPercussionHasBeenSet(false),
    m_lungAuscultationHasBeenSet(false)
{
}

CoreInternalOutcome InternalMedicineRespiratorySystem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineRespiratorySystem.Text` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_text.Deserialize(value["Text"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textHasBeenSet = true;
    }

    if (value.HasMember("Thoracic") && !value["Thoracic"].IsNull())
    {
        if (!value["Thoracic"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineRespiratorySystem.Thoracic` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_thoracic.Deserialize(value["Thoracic"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_thoracicHasBeenSet = true;
    }

    if (value.HasMember("Sputum") && !value["Sputum"].IsNull())
    {
        if (!value["Sputum"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineRespiratorySystem.Sputum` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sputum.Deserialize(value["Sputum"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sputumHasBeenSet = true;
    }

    if (value.HasMember("LungPercussion") && !value["LungPercussion"].IsNull())
    {
        if (!value["LungPercussion"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineRespiratorySystem.LungPercussion` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lungPercussion.Deserialize(value["LungPercussion"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lungPercussionHasBeenSet = true;
    }

    if (value.HasMember("LungAuscultation") && !value["LungAuscultation"].IsNull())
    {
        if (!value["LungAuscultation"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InternalMedicineRespiratorySystem.LungAuscultation` is not array type"));

        const rapidjson::Value &tmpValue = value["LungAuscultation"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValueItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lungAuscultation.push_back(item);
        }
        m_lungAuscultationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternalMedicineRespiratorySystem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_text.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_thoracicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Thoracic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_thoracic.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sputumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sputum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sputum.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lungPercussionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LungPercussion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lungPercussion.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lungAuscultationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LungAuscultation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lungAuscultation.begin(); itr != m_lungAuscultation.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


KeyValueItem InternalMedicineRespiratorySystem::GetText() const
{
    return m_text;
}

void InternalMedicineRespiratorySystem::SetText(const KeyValueItem& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool InternalMedicineRespiratorySystem::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

KeyValueItem InternalMedicineRespiratorySystem::GetThoracic() const
{
    return m_thoracic;
}

void InternalMedicineRespiratorySystem::SetThoracic(const KeyValueItem& _thoracic)
{
    m_thoracic = _thoracic;
    m_thoracicHasBeenSet = true;
}

bool InternalMedicineRespiratorySystem::ThoracicHasBeenSet() const
{
    return m_thoracicHasBeenSet;
}

KeyValueItem InternalMedicineRespiratorySystem::GetSputum() const
{
    return m_sputum;
}

void InternalMedicineRespiratorySystem::SetSputum(const KeyValueItem& _sputum)
{
    m_sputum = _sputum;
    m_sputumHasBeenSet = true;
}

bool InternalMedicineRespiratorySystem::SputumHasBeenSet() const
{
    return m_sputumHasBeenSet;
}

KeyValueItem InternalMedicineRespiratorySystem::GetLungPercussion() const
{
    return m_lungPercussion;
}

void InternalMedicineRespiratorySystem::SetLungPercussion(const KeyValueItem& _lungPercussion)
{
    m_lungPercussion = _lungPercussion;
    m_lungPercussionHasBeenSet = true;
}

bool InternalMedicineRespiratorySystem::LungPercussionHasBeenSet() const
{
    return m_lungPercussionHasBeenSet;
}

vector<KeyValueItem> InternalMedicineRespiratorySystem::GetLungAuscultation() const
{
    return m_lungAuscultation;
}

void InternalMedicineRespiratorySystem::SetLungAuscultation(const vector<KeyValueItem>& _lungAuscultation)
{
    m_lungAuscultation = _lungAuscultation;
    m_lungAuscultationHasBeenSet = true;
}

bool InternalMedicineRespiratorySystem::LungAuscultationHasBeenSet() const
{
    return m_lungAuscultationHasBeenSet;
}

