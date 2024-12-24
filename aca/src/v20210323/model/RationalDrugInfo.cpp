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

#include <tencentcloud/aca/v20210323/model/RationalDrugInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

RationalDrugInfo::RationalDrugInfo() :
    m_hitHasBeenSet(false),
    m_drugUsagesHasBeenSet(false),
    m_drugRepeatsHasBeenSet(false),
    m_drugRoutesHasBeenSet(false),
    m_specialPopulationsHasBeenSet(false),
    m_drugTaboosHasBeenSet(false),
    m_drugInteractionsHasBeenSet(false),
    m_drugIncompatibilityHasBeenSet(false),
    m_drugAllergysHasBeenSet(false),
    m_drugIndicationsHasBeenSet(false),
    m_abnormalsHasBeenSet(false),
    m_drugListHasBeenSet(false)
{
}

CoreInternalOutcome RationalDrugInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Hit") && !value["Hit"].IsNull())
    {
        if (!value["Hit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RationalDrugInfo.Hit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hit = value["Hit"].GetBool();
        m_hitHasBeenSet = true;
    }

    if (value.HasMember("DrugUsages") && !value["DrugUsages"].IsNull())
    {
        if (!value["DrugUsages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RationalDrugInfo.DrugUsages` is not array type"));

        const rapidjson::Value &tmpValue = value["DrugUsages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_drugUsages.push_back(item);
        }
        m_drugUsagesHasBeenSet = true;
    }

    if (value.HasMember("DrugRepeats") && !value["DrugRepeats"].IsNull())
    {
        if (!value["DrugRepeats"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RationalDrugInfo.DrugRepeats` is not array type"));

        const rapidjson::Value &tmpValue = value["DrugRepeats"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_drugRepeats.push_back(item);
        }
        m_drugRepeatsHasBeenSet = true;
    }

    if (value.HasMember("DrugRoutes") && !value["DrugRoutes"].IsNull())
    {
        if (!value["DrugRoutes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RationalDrugInfo.DrugRoutes` is not array type"));

        const rapidjson::Value &tmpValue = value["DrugRoutes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_drugRoutes.push_back(item);
        }
        m_drugRoutesHasBeenSet = true;
    }

    if (value.HasMember("SpecialPopulations") && !value["SpecialPopulations"].IsNull())
    {
        if (!value["SpecialPopulations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RationalDrugInfo.SpecialPopulations` is not array type"));

        const rapidjson::Value &tmpValue = value["SpecialPopulations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_specialPopulations.push_back(item);
        }
        m_specialPopulationsHasBeenSet = true;
    }

    if (value.HasMember("DrugTaboos") && !value["DrugTaboos"].IsNull())
    {
        if (!value["DrugTaboos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RationalDrugInfo.DrugTaboos` is not array type"));

        const rapidjson::Value &tmpValue = value["DrugTaboos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_drugTaboos.push_back(item);
        }
        m_drugTaboosHasBeenSet = true;
    }

    if (value.HasMember("DrugInteractions") && !value["DrugInteractions"].IsNull())
    {
        if (!value["DrugInteractions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RationalDrugInfo.DrugInteractions` is not array type"));

        const rapidjson::Value &tmpValue = value["DrugInteractions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_drugInteractions.push_back(item);
        }
        m_drugInteractionsHasBeenSet = true;
    }

    if (value.HasMember("DrugIncompatibility") && !value["DrugIncompatibility"].IsNull())
    {
        if (!value["DrugIncompatibility"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RationalDrugInfo.DrugIncompatibility` is not array type"));

        const rapidjson::Value &tmpValue = value["DrugIncompatibility"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_drugIncompatibility.push_back(item);
        }
        m_drugIncompatibilityHasBeenSet = true;
    }

    if (value.HasMember("DrugAllergys") && !value["DrugAllergys"].IsNull())
    {
        if (!value["DrugAllergys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RationalDrugInfo.DrugAllergys` is not array type"));

        const rapidjson::Value &tmpValue = value["DrugAllergys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_drugAllergys.push_back(item);
        }
        m_drugAllergysHasBeenSet = true;
    }

    if (value.HasMember("DrugIndications") && !value["DrugIndications"].IsNull())
    {
        if (!value["DrugIndications"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RationalDrugInfo.DrugIndications` is not array type"));

        const rapidjson::Value &tmpValue = value["DrugIndications"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_drugIndications.push_back(item);
        }
        m_drugIndicationsHasBeenSet = true;
    }

    if (value.HasMember("Abnormals") && !value["Abnormals"].IsNull())
    {
        if (!value["Abnormals"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RationalDrugInfo.Abnormals` is not array type"));

        const rapidjson::Value &tmpValue = value["Abnormals"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Abnormals item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_abnormals.push_back(item);
        }
        m_abnormalsHasBeenSet = true;
    }

    if (value.HasMember("DrugList") && !value["DrugList"].IsNull())
    {
        if (!value["DrugList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RationalDrugInfo.DrugList` is not array type"));

        const rapidjson::Value &tmpValue = value["DrugList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DrugList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_drugList.push_back(item);
        }
        m_drugListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RationalDrugInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hit, allocator);
    }

    if (m_drugUsagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugUsages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_drugUsages.begin(); itr != m_drugUsages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_drugRepeatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugRepeats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_drugRepeats.begin(); itr != m_drugRepeats.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_drugRoutesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugRoutes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_drugRoutes.begin(); itr != m_drugRoutes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_specialPopulationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecialPopulations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_specialPopulations.begin(); itr != m_specialPopulations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_drugTaboosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugTaboos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_drugTaboos.begin(); itr != m_drugTaboos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_drugInteractionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugInteractions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_drugInteractions.begin(); itr != m_drugInteractions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_drugIncompatibilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugIncompatibility";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_drugIncompatibility.begin(); itr != m_drugIncompatibility.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_drugAllergysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugAllergys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_drugAllergys.begin(); itr != m_drugAllergys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_drugIndicationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugIndications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_drugIndications.begin(); itr != m_drugIndications.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_abnormalsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Abnormals";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_abnormals.begin(); itr != m_abnormals.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_drugListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_drugList.begin(); itr != m_drugList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool RationalDrugInfo::GetHit() const
{
    return m_hit;
}

void RationalDrugInfo::SetHit(const bool& _hit)
{
    m_hit = _hit;
    m_hitHasBeenSet = true;
}

bool RationalDrugInfo::HitHasBeenSet() const
{
    return m_hitHasBeenSet;
}

vector<RiskInfo> RationalDrugInfo::GetDrugUsages() const
{
    return m_drugUsages;
}

void RationalDrugInfo::SetDrugUsages(const vector<RiskInfo>& _drugUsages)
{
    m_drugUsages = _drugUsages;
    m_drugUsagesHasBeenSet = true;
}

bool RationalDrugInfo::DrugUsagesHasBeenSet() const
{
    return m_drugUsagesHasBeenSet;
}

vector<RiskInfo> RationalDrugInfo::GetDrugRepeats() const
{
    return m_drugRepeats;
}

void RationalDrugInfo::SetDrugRepeats(const vector<RiskInfo>& _drugRepeats)
{
    m_drugRepeats = _drugRepeats;
    m_drugRepeatsHasBeenSet = true;
}

bool RationalDrugInfo::DrugRepeatsHasBeenSet() const
{
    return m_drugRepeatsHasBeenSet;
}

vector<RiskInfo> RationalDrugInfo::GetDrugRoutes() const
{
    return m_drugRoutes;
}

void RationalDrugInfo::SetDrugRoutes(const vector<RiskInfo>& _drugRoutes)
{
    m_drugRoutes = _drugRoutes;
    m_drugRoutesHasBeenSet = true;
}

bool RationalDrugInfo::DrugRoutesHasBeenSet() const
{
    return m_drugRoutesHasBeenSet;
}

vector<RiskInfo> RationalDrugInfo::GetSpecialPopulations() const
{
    return m_specialPopulations;
}

void RationalDrugInfo::SetSpecialPopulations(const vector<RiskInfo>& _specialPopulations)
{
    m_specialPopulations = _specialPopulations;
    m_specialPopulationsHasBeenSet = true;
}

bool RationalDrugInfo::SpecialPopulationsHasBeenSet() const
{
    return m_specialPopulationsHasBeenSet;
}

vector<RiskInfo> RationalDrugInfo::GetDrugTaboos() const
{
    return m_drugTaboos;
}

void RationalDrugInfo::SetDrugTaboos(const vector<RiskInfo>& _drugTaboos)
{
    m_drugTaboos = _drugTaboos;
    m_drugTaboosHasBeenSet = true;
}

bool RationalDrugInfo::DrugTaboosHasBeenSet() const
{
    return m_drugTaboosHasBeenSet;
}

vector<RiskInfo> RationalDrugInfo::GetDrugInteractions() const
{
    return m_drugInteractions;
}

void RationalDrugInfo::SetDrugInteractions(const vector<RiskInfo>& _drugInteractions)
{
    m_drugInteractions = _drugInteractions;
    m_drugInteractionsHasBeenSet = true;
}

bool RationalDrugInfo::DrugInteractionsHasBeenSet() const
{
    return m_drugInteractionsHasBeenSet;
}

vector<RiskInfo> RationalDrugInfo::GetDrugIncompatibility() const
{
    return m_drugIncompatibility;
}

void RationalDrugInfo::SetDrugIncompatibility(const vector<RiskInfo>& _drugIncompatibility)
{
    m_drugIncompatibility = _drugIncompatibility;
    m_drugIncompatibilityHasBeenSet = true;
}

bool RationalDrugInfo::DrugIncompatibilityHasBeenSet() const
{
    return m_drugIncompatibilityHasBeenSet;
}

vector<RiskInfo> RationalDrugInfo::GetDrugAllergys() const
{
    return m_drugAllergys;
}

void RationalDrugInfo::SetDrugAllergys(const vector<RiskInfo>& _drugAllergys)
{
    m_drugAllergys = _drugAllergys;
    m_drugAllergysHasBeenSet = true;
}

bool RationalDrugInfo::DrugAllergysHasBeenSet() const
{
    return m_drugAllergysHasBeenSet;
}

vector<RiskInfo> RationalDrugInfo::GetDrugIndications() const
{
    return m_drugIndications;
}

void RationalDrugInfo::SetDrugIndications(const vector<RiskInfo>& _drugIndications)
{
    m_drugIndications = _drugIndications;
    m_drugIndicationsHasBeenSet = true;
}

bool RationalDrugInfo::DrugIndicationsHasBeenSet() const
{
    return m_drugIndicationsHasBeenSet;
}

vector<Abnormals> RationalDrugInfo::GetAbnormals() const
{
    return m_abnormals;
}

void RationalDrugInfo::SetAbnormals(const vector<Abnormals>& _abnormals)
{
    m_abnormals = _abnormals;
    m_abnormalsHasBeenSet = true;
}

bool RationalDrugInfo::AbnormalsHasBeenSet() const
{
    return m_abnormalsHasBeenSet;
}

vector<DrugList> RationalDrugInfo::GetDrugList() const
{
    return m_drugList;
}

void RationalDrugInfo::SetDrugList(const vector<DrugList>& _drugList)
{
    m_drugList = _drugList;
    m_drugListHasBeenSet = true;
}

bool RationalDrugInfo::DrugListHasBeenSet() const
{
    return m_drugListHasBeenSet;
}

