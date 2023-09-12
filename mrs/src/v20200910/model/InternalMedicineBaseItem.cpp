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

#include <tencentcloud/mrs/v20200910/model/InternalMedicineBaseItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

InternalMedicineBaseItem::InternalMedicineBaseItem() :
    m_abdomenHasBeenSet(false),
    m_heartHasBeenSet(false),
    m_vesselHasBeenSet(false),
    m_respiratorySystemHasBeenSet(false),
    m_othersHasBeenSet(false),
    m_briefSummaryHasBeenSet(false)
{
}

CoreInternalOutcome InternalMedicineBaseItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Abdomen") && !value["Abdomen"].IsNull())
    {
        if (!value["Abdomen"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineBaseItem.Abdomen` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_abdomen.Deserialize(value["Abdomen"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_abdomenHasBeenSet = true;
    }

    if (value.HasMember("Heart") && !value["Heart"].IsNull())
    {
        if (!value["Heart"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineBaseItem.Heart` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_heart.Deserialize(value["Heart"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_heartHasBeenSet = true;
    }

    if (value.HasMember("Vessel") && !value["Vessel"].IsNull())
    {
        if (!value["Vessel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineBaseItem.Vessel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vessel.Deserialize(value["Vessel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vesselHasBeenSet = true;
    }

    if (value.HasMember("RespiratorySystem") && !value["RespiratorySystem"].IsNull())
    {
        if (!value["RespiratorySystem"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineBaseItem.RespiratorySystem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_respiratorySystem.Deserialize(value["RespiratorySystem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_respiratorySystemHasBeenSet = true;
    }

    if (value.HasMember("Others") && !value["Others"].IsNull())
    {
        if (!value["Others"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InternalMedicineBaseItem.Others` is not array type"));

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

    if (value.HasMember("BriefSummary") && !value["BriefSummary"].IsNull())
    {
        if (!value["BriefSummary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineBaseItem.BriefSummary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_briefSummary.Deserialize(value["BriefSummary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_briefSummaryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternalMedicineBaseItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_abdomenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Abdomen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_abdomen.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_heartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Heart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_heart.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vesselHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vessel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vessel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_respiratorySystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RespiratorySystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_respiratorySystem.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_briefSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BriefSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_briefSummary.ToJsonObject(value[key.c_str()], allocator);
    }

}


InternalMedicineAbdomen InternalMedicineBaseItem::GetAbdomen() const
{
    return m_abdomen;
}

void InternalMedicineBaseItem::SetAbdomen(const InternalMedicineAbdomen& _abdomen)
{
    m_abdomen = _abdomen;
    m_abdomenHasBeenSet = true;
}

bool InternalMedicineBaseItem::AbdomenHasBeenSet() const
{
    return m_abdomenHasBeenSet;
}

InternalMedicineHeart InternalMedicineBaseItem::GetHeart() const
{
    return m_heart;
}

void InternalMedicineBaseItem::SetHeart(const InternalMedicineHeart& _heart)
{
    m_heart = _heart;
    m_heartHasBeenSet = true;
}

bool InternalMedicineBaseItem::HeartHasBeenSet() const
{
    return m_heartHasBeenSet;
}

InternalMedicineVessel InternalMedicineBaseItem::GetVessel() const
{
    return m_vessel;
}

void InternalMedicineBaseItem::SetVessel(const InternalMedicineVessel& _vessel)
{
    m_vessel = _vessel;
    m_vesselHasBeenSet = true;
}

bool InternalMedicineBaseItem::VesselHasBeenSet() const
{
    return m_vesselHasBeenSet;
}

InternalMedicineRespiratorySystem InternalMedicineBaseItem::GetRespiratorySystem() const
{
    return m_respiratorySystem;
}

void InternalMedicineBaseItem::SetRespiratorySystem(const InternalMedicineRespiratorySystem& _respiratorySystem)
{
    m_respiratorySystem = _respiratorySystem;
    m_respiratorySystemHasBeenSet = true;
}

bool InternalMedicineBaseItem::RespiratorySystemHasBeenSet() const
{
    return m_respiratorySystemHasBeenSet;
}

vector<KeyValueItem> InternalMedicineBaseItem::GetOthers() const
{
    return m_others;
}

void InternalMedicineBaseItem::SetOthers(const vector<KeyValueItem>& _others)
{
    m_others = _others;
    m_othersHasBeenSet = true;
}

bool InternalMedicineBaseItem::OthersHasBeenSet() const
{
    return m_othersHasBeenSet;
}

InternalMedicineBriefSummary InternalMedicineBaseItem::GetBriefSummary() const
{
    return m_briefSummary;
}

void InternalMedicineBaseItem::SetBriefSummary(const InternalMedicineBriefSummary& _briefSummary)
{
    m_briefSummary = _briefSummary;
    m_briefSummaryHasBeenSet = true;
}

bool InternalMedicineBaseItem::BriefSummaryHasBeenSet() const
{
    return m_briefSummaryHasBeenSet;
}

