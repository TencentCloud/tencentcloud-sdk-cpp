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

#include <tencentcloud/mrs/v20200910/model/SurgeryBaseItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

SurgeryBaseItem::SurgeryBaseItem() :
    m_headNeckHasBeenSet(false),
    m_thyroidHasBeenSet(false),
    m_breastHasBeenSet(false),
    m_lymphNodeHasBeenSet(false),
    m_spinalExtremitiesHasBeenSet(false),
    m_skinHasBeenSet(false),
    m_anorectalHasBeenSet(false),
    m_urogenitalSystemHasBeenSet(false),
    m_othersHasBeenSet(false),
    m_briefSummaryHasBeenSet(false)
{
}

CoreInternalOutcome SurgeryBaseItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeadNeck") && !value["HeadNeck"].IsNull())
    {
        if (!value["HeadNeck"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryBaseItem.HeadNeck` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_headNeck.Deserialize(value["HeadNeck"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_headNeckHasBeenSet = true;
    }

    if (value.HasMember("Thyroid") && !value["Thyroid"].IsNull())
    {
        if (!value["Thyroid"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryBaseItem.Thyroid` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_thyroid.Deserialize(value["Thyroid"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_thyroidHasBeenSet = true;
    }

    if (value.HasMember("Breast") && !value["Breast"].IsNull())
    {
        if (!value["Breast"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryBaseItem.Breast` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_breast.Deserialize(value["Breast"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_breastHasBeenSet = true;
    }

    if (value.HasMember("LymphNode") && !value["LymphNode"].IsNull())
    {
        if (!value["LymphNode"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryBaseItem.LymphNode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lymphNode.Deserialize(value["LymphNode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lymphNodeHasBeenSet = true;
    }

    if (value.HasMember("SpinalExtremities") && !value["SpinalExtremities"].IsNull())
    {
        if (!value["SpinalExtremities"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryBaseItem.SpinalExtremities` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_spinalExtremities.Deserialize(value["SpinalExtremities"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_spinalExtremitiesHasBeenSet = true;
    }

    if (value.HasMember("Skin") && !value["Skin"].IsNull())
    {
        if (!value["Skin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryBaseItem.Skin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_skin.Deserialize(value["Skin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_skinHasBeenSet = true;
    }

    if (value.HasMember("Anorectal") && !value["Anorectal"].IsNull())
    {
        if (!value["Anorectal"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryBaseItem.Anorectal` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_anorectal.Deserialize(value["Anorectal"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_anorectalHasBeenSet = true;
    }

    if (value.HasMember("UrogenitalSystem") && !value["UrogenitalSystem"].IsNull())
    {
        if (!value["UrogenitalSystem"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryBaseItem.UrogenitalSystem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_urogenitalSystem.Deserialize(value["UrogenitalSystem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_urogenitalSystemHasBeenSet = true;
    }

    if (value.HasMember("Others") && !value["Others"].IsNull())
    {
        if (!value["Others"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SurgeryBaseItem.Others` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `SurgeryBaseItem.BriefSummary` is not object type").SetRequestId(requestId));
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

void SurgeryBaseItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_headNeckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadNeck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_headNeck.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_thyroidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Thyroid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_thyroid.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_breastHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Breast";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_breast.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lymphNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LymphNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lymphNode.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_spinalExtremitiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpinalExtremities";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spinalExtremities.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_skinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Skin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_skin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_anorectalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Anorectal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_anorectal.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_urogenitalSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrogenitalSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_urogenitalSystem.ToJsonObject(value[key.c_str()], allocator);
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


SurgeryHeadNeck SurgeryBaseItem::GetHeadNeck() const
{
    return m_headNeck;
}

void SurgeryBaseItem::SetHeadNeck(const SurgeryHeadNeck& _headNeck)
{
    m_headNeck = _headNeck;
    m_headNeckHasBeenSet = true;
}

bool SurgeryBaseItem::HeadNeckHasBeenSet() const
{
    return m_headNeckHasBeenSet;
}

SurgeryThyroid SurgeryBaseItem::GetThyroid() const
{
    return m_thyroid;
}

void SurgeryBaseItem::SetThyroid(const SurgeryThyroid& _thyroid)
{
    m_thyroid = _thyroid;
    m_thyroidHasBeenSet = true;
}

bool SurgeryBaseItem::ThyroidHasBeenSet() const
{
    return m_thyroidHasBeenSet;
}

SurgeryBreast SurgeryBaseItem::GetBreast() const
{
    return m_breast;
}

void SurgeryBaseItem::SetBreast(const SurgeryBreast& _breast)
{
    m_breast = _breast;
    m_breastHasBeenSet = true;
}

bool SurgeryBaseItem::BreastHasBeenSet() const
{
    return m_breastHasBeenSet;
}

SurgeryLymphNode SurgeryBaseItem::GetLymphNode() const
{
    return m_lymphNode;
}

void SurgeryBaseItem::SetLymphNode(const SurgeryLymphNode& _lymphNode)
{
    m_lymphNode = _lymphNode;
    m_lymphNodeHasBeenSet = true;
}

bool SurgeryBaseItem::LymphNodeHasBeenSet() const
{
    return m_lymphNodeHasBeenSet;
}

SurgerySpinalExtremities SurgeryBaseItem::GetSpinalExtremities() const
{
    return m_spinalExtremities;
}

void SurgeryBaseItem::SetSpinalExtremities(const SurgerySpinalExtremities& _spinalExtremities)
{
    m_spinalExtremities = _spinalExtremities;
    m_spinalExtremitiesHasBeenSet = true;
}

bool SurgeryBaseItem::SpinalExtremitiesHasBeenSet() const
{
    return m_spinalExtremitiesHasBeenSet;
}

SurgerySkin SurgeryBaseItem::GetSkin() const
{
    return m_skin;
}

void SurgeryBaseItem::SetSkin(const SurgerySkin& _skin)
{
    m_skin = _skin;
    m_skinHasBeenSet = true;
}

bool SurgeryBaseItem::SkinHasBeenSet() const
{
    return m_skinHasBeenSet;
}

SurgeryAnorectal SurgeryBaseItem::GetAnorectal() const
{
    return m_anorectal;
}

void SurgeryBaseItem::SetAnorectal(const SurgeryAnorectal& _anorectal)
{
    m_anorectal = _anorectal;
    m_anorectalHasBeenSet = true;
}

bool SurgeryBaseItem::AnorectalHasBeenSet() const
{
    return m_anorectalHasBeenSet;
}

SurgeryUrogenitalSystem SurgeryBaseItem::GetUrogenitalSystem() const
{
    return m_urogenitalSystem;
}

void SurgeryBaseItem::SetUrogenitalSystem(const SurgeryUrogenitalSystem& _urogenitalSystem)
{
    m_urogenitalSystem = _urogenitalSystem;
    m_urogenitalSystemHasBeenSet = true;
}

bool SurgeryBaseItem::UrogenitalSystemHasBeenSet() const
{
    return m_urogenitalSystemHasBeenSet;
}

vector<KeyValueItem> SurgeryBaseItem::GetOthers() const
{
    return m_others;
}

void SurgeryBaseItem::SetOthers(const vector<KeyValueItem>& _others)
{
    m_others = _others;
    m_othersHasBeenSet = true;
}

bool SurgeryBaseItem::OthersHasBeenSet() const
{
    return m_othersHasBeenSet;
}

SurgeryBriefSummary SurgeryBaseItem::GetBriefSummary() const
{
    return m_briefSummary;
}

void SurgeryBaseItem::SetBriefSummary(const SurgeryBriefSummary& _briefSummary)
{
    m_briefSummary = _briefSummary;
    m_briefSummaryHasBeenSet = true;
}

bool SurgeryBaseItem::BriefSummaryHasBeenSet() const
{
    return m_briefSummaryHasBeenSet;
}

