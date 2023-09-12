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

#include <tencentcloud/mrs/v20200910/model/InternalMedicineVessel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

InternalMedicineVessel::InternalMedicineVessel() :
    m_textHasBeenSet(false),
    m_vascularMurmurHasBeenSet(false),
    m_peripheralVesselHasBeenSet(false)
{
}

CoreInternalOutcome InternalMedicineVessel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineVessel.Text` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_text.Deserialize(value["Text"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textHasBeenSet = true;
    }

    if (value.HasMember("VascularMurmur") && !value["VascularMurmur"].IsNull())
    {
        if (!value["VascularMurmur"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineVessel.VascularMurmur` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vascularMurmur.Deserialize(value["VascularMurmur"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vascularMurmurHasBeenSet = true;
    }

    if (value.HasMember("PeripheralVessel") && !value["PeripheralVessel"].IsNull())
    {
        if (!value["PeripheralVessel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineVessel.PeripheralVessel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_peripheralVessel.Deserialize(value["PeripheralVessel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_peripheralVesselHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternalMedicineVessel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_text.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vascularMurmurHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VascularMurmur";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vascularMurmur.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_peripheralVesselHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeripheralVessel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_peripheralVessel.ToJsonObject(value[key.c_str()], allocator);
    }

}


KeyValueItem InternalMedicineVessel::GetText() const
{
    return m_text;
}

void InternalMedicineVessel::SetText(const KeyValueItem& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool InternalMedicineVessel::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

KeyValueItem InternalMedicineVessel::GetVascularMurmur() const
{
    return m_vascularMurmur;
}

void InternalMedicineVessel::SetVascularMurmur(const KeyValueItem& _vascularMurmur)
{
    m_vascularMurmur = _vascularMurmur;
    m_vascularMurmurHasBeenSet = true;
}

bool InternalMedicineVessel::VascularMurmurHasBeenSet() const
{
    return m_vascularMurmurHasBeenSet;
}

KeyValueItem InternalMedicineVessel::GetPeripheralVessel() const
{
    return m_peripheralVessel;
}

void InternalMedicineVessel::SetPeripheralVessel(const KeyValueItem& _peripheralVessel)
{
    m_peripheralVessel = _peripheralVessel;
    m_peripheralVesselHasBeenSet = true;
}

bool InternalMedicineVessel::PeripheralVesselHasBeenSet() const
{
    return m_peripheralVesselHasBeenSet;
}

