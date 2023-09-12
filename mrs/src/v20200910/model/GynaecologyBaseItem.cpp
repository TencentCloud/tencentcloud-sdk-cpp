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

#include <tencentcloud/mrs/v20200910/model/GynaecologyBaseItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

GynaecologyBaseItem::GynaecologyBaseItem() :
    m_vulvaHasBeenSet(false),
    m_vaginaHasBeenSet(false),
    m_cervixHasBeenSet(false),
    m_uterusHasBeenSet(false),
    m_adnexalHasBeenSet(false),
    m_pelvicCavityHasBeenSet(false),
    m_othersHasBeenSet(false),
    m_menstrualHistoryHasBeenSet(false),
    m_briefSummaryHasBeenSet(false)
{
}

CoreInternalOutcome GynaecologyBaseItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Vulva") && !value["Vulva"].IsNull())
    {
        if (!value["Vulva"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GynaecologyBaseItem.Vulva` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vulva.Deserialize(value["Vulva"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vulvaHasBeenSet = true;
    }

    if (value.HasMember("Vagina") && !value["Vagina"].IsNull())
    {
        if (!value["Vagina"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GynaecologyBaseItem.Vagina` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vagina.Deserialize(value["Vagina"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vaginaHasBeenSet = true;
    }

    if (value.HasMember("Cervix") && !value["Cervix"].IsNull())
    {
        if (!value["Cervix"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GynaecologyBaseItem.Cervix` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cervix.Deserialize(value["Cervix"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cervixHasBeenSet = true;
    }

    if (value.HasMember("Uterus") && !value["Uterus"].IsNull())
    {
        if (!value["Uterus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GynaecologyBaseItem.Uterus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_uterus.Deserialize(value["Uterus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_uterusHasBeenSet = true;
    }

    if (value.HasMember("Adnexal") && !value["Adnexal"].IsNull())
    {
        if (!value["Adnexal"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GynaecologyBaseItem.Adnexal` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_adnexal.Deserialize(value["Adnexal"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adnexalHasBeenSet = true;
    }

    if (value.HasMember("PelvicCavity") && !value["PelvicCavity"].IsNull())
    {
        if (!value["PelvicCavity"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GynaecologyBaseItem.PelvicCavity` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pelvicCavity.Deserialize(value["PelvicCavity"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pelvicCavityHasBeenSet = true;
    }

    if (value.HasMember("Others") && !value["Others"].IsNull())
    {
        if (!value["Others"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GynaecologyBaseItem.Others` is not array type"));

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

    if (value.HasMember("MenstrualHistory") && !value["MenstrualHistory"].IsNull())
    {
        if (!value["MenstrualHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GynaecologyBaseItem.MenstrualHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_menstrualHistory.Deserialize(value["MenstrualHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_menstrualHistoryHasBeenSet = true;
    }

    if (value.HasMember("BriefSummary") && !value["BriefSummary"].IsNull())
    {
        if (!value["BriefSummary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GynaecologyBaseItem.BriefSummary` is not object type").SetRequestId(requestId));
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

void GynaecologyBaseItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulvaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vulva";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vulva.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vaginaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vagina";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vagina.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cervixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cervix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cervix.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_uterusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uterus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_uterus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_adnexalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Adnexal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_adnexal.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pelvicCavityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PelvicCavity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pelvicCavity.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_menstrualHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenstrualHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_menstrualHistory.ToJsonObject(value[key.c_str()], allocator);
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


GynaecologyVulva GynaecologyBaseItem::GetVulva() const
{
    return m_vulva;
}

void GynaecologyBaseItem::SetVulva(const GynaecologyVulva& _vulva)
{
    m_vulva = _vulva;
    m_vulvaHasBeenSet = true;
}

bool GynaecologyBaseItem::VulvaHasBeenSet() const
{
    return m_vulvaHasBeenSet;
}

GynaecologyVagina GynaecologyBaseItem::GetVagina() const
{
    return m_vagina;
}

void GynaecologyBaseItem::SetVagina(const GynaecologyVagina& _vagina)
{
    m_vagina = _vagina;
    m_vaginaHasBeenSet = true;
}

bool GynaecologyBaseItem::VaginaHasBeenSet() const
{
    return m_vaginaHasBeenSet;
}

GynaecologyCervix GynaecologyBaseItem::GetCervix() const
{
    return m_cervix;
}

void GynaecologyBaseItem::SetCervix(const GynaecologyCervix& _cervix)
{
    m_cervix = _cervix;
    m_cervixHasBeenSet = true;
}

bool GynaecologyBaseItem::CervixHasBeenSet() const
{
    return m_cervixHasBeenSet;
}

GynaecologyUterus GynaecologyBaseItem::GetUterus() const
{
    return m_uterus;
}

void GynaecologyBaseItem::SetUterus(const GynaecologyUterus& _uterus)
{
    m_uterus = _uterus;
    m_uterusHasBeenSet = true;
}

bool GynaecologyBaseItem::UterusHasBeenSet() const
{
    return m_uterusHasBeenSet;
}

GynaecologyAdnexal GynaecologyBaseItem::GetAdnexal() const
{
    return m_adnexal;
}

void GynaecologyBaseItem::SetAdnexal(const GynaecologyAdnexal& _adnexal)
{
    m_adnexal = _adnexal;
    m_adnexalHasBeenSet = true;
}

bool GynaecologyBaseItem::AdnexalHasBeenSet() const
{
    return m_adnexalHasBeenSet;
}

GynaecologyPelvicCavity GynaecologyBaseItem::GetPelvicCavity() const
{
    return m_pelvicCavity;
}

void GynaecologyBaseItem::SetPelvicCavity(const GynaecologyPelvicCavity& _pelvicCavity)
{
    m_pelvicCavity = _pelvicCavity;
    m_pelvicCavityHasBeenSet = true;
}

bool GynaecologyBaseItem::PelvicCavityHasBeenSet() const
{
    return m_pelvicCavityHasBeenSet;
}

vector<KeyValueItem> GynaecologyBaseItem::GetOthers() const
{
    return m_others;
}

void GynaecologyBaseItem::SetOthers(const vector<KeyValueItem>& _others)
{
    m_others = _others;
    m_othersHasBeenSet = true;
}

bool GynaecologyBaseItem::OthersHasBeenSet() const
{
    return m_othersHasBeenSet;
}

GynaecologyMenstrualHistory GynaecologyBaseItem::GetMenstrualHistory() const
{
    return m_menstrualHistory;
}

void GynaecologyBaseItem::SetMenstrualHistory(const GynaecologyMenstrualHistory& _menstrualHistory)
{
    m_menstrualHistory = _menstrualHistory;
    m_menstrualHistoryHasBeenSet = true;
}

bool GynaecologyBaseItem::MenstrualHistoryHasBeenSet() const
{
    return m_menstrualHistoryHasBeenSet;
}

GynaecologyBriefSummary GynaecologyBaseItem::GetBriefSummary() const
{
    return m_briefSummary;
}

void GynaecologyBaseItem::SetBriefSummary(const GynaecologyBriefSummary& _briefSummary)
{
    m_briefSummary = _briefSummary;
    m_briefSummaryHasBeenSet = true;
}

bool GynaecologyBaseItem::BriefSummaryHasBeenSet() const
{
    return m_briefSummaryHasBeenSet;
}

