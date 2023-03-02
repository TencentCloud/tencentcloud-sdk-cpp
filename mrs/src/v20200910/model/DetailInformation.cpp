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

#include <tencentcloud/mrs/v20200910/model/DetailInformation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

DetailInformation::DetailInformation() :
    m_partHasBeenSet(false),
    m_tissueSizesHasBeenSet(false),
    m_tuberSizesHasBeenSet(false),
    m_cancerSizesHasBeenSet(false),
    m_histologyLevelHasBeenSet(false),
    m_histologyTypeHasBeenSet(false),
    m_invasiveHasBeenSet(false),
    m_pTNMHasBeenSet(false),
    m_infiltrationDepthHasBeenSet(false),
    m_tuberNumHasBeenSet(false),
    m_calcificationHasBeenSet(false),
    m_necrosisHasBeenSet(false),
    m_abnormityHasBeenSet(false),
    m_breakedHasBeenSet(false)
{
}

CoreInternalOutcome DetailInformation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Part") && !value["Part"].IsNull())
    {
        if (!value["Part"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformation.Part` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_part.Deserialize(value["Part"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_partHasBeenSet = true;
    }

    if (value.HasMember("TissueSizes") && !value["TissueSizes"].IsNull())
    {
        if (!value["TissueSizes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetailInformation.TissueSizes` is not array type"));

        const rapidjson::Value &tmpValue = value["TissueSizes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Size item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tissueSizes.push_back(item);
        }
        m_tissueSizesHasBeenSet = true;
    }

    if (value.HasMember("TuberSizes") && !value["TuberSizes"].IsNull())
    {
        if (!value["TuberSizes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetailInformation.TuberSizes` is not array type"));

        const rapidjson::Value &tmpValue = value["TuberSizes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Size item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tuberSizes.push_back(item);
        }
        m_tuberSizesHasBeenSet = true;
    }

    if (value.HasMember("CancerSizes") && !value["CancerSizes"].IsNull())
    {
        if (!value["CancerSizes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetailInformation.CancerSizes` is not array type"));

        const rapidjson::Value &tmpValue = value["CancerSizes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Size item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cancerSizes.push_back(item);
        }
        m_cancerSizesHasBeenSet = true;
    }

    if (value.HasMember("HistologyLevel") && !value["HistologyLevel"].IsNull())
    {
        if (!value["HistologyLevel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformation.HistologyLevel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_histologyLevel.Deserialize(value["HistologyLevel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_histologyLevelHasBeenSet = true;
    }

    if (value.HasMember("HistologyType") && !value["HistologyType"].IsNull())
    {
        if (!value["HistologyType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformation.HistologyType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_histologyType.Deserialize(value["HistologyType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_histologyTypeHasBeenSet = true;
    }

    if (value.HasMember("Invasive") && !value["Invasive"].IsNull())
    {
        if (!value["Invasive"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetailInformation.Invasive` is not array type"));

        const rapidjson::Value &tmpValue = value["Invasive"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InvasiveV2 item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_invasive.push_back(item);
        }
        m_invasiveHasBeenSet = true;
    }

    if (value.HasMember("PTNM") && !value["PTNM"].IsNull())
    {
        if (!value["PTNM"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformation.PTNM` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pTNM.Deserialize(value["PTNM"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pTNMHasBeenSet = true;
    }

    if (value.HasMember("InfiltrationDepth") && !value["InfiltrationDepth"].IsNull())
    {
        if (!value["InfiltrationDepth"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformation.InfiltrationDepth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_infiltrationDepth.Deserialize(value["InfiltrationDepth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_infiltrationDepthHasBeenSet = true;
    }

    if (value.HasMember("TuberNum") && !value["TuberNum"].IsNull())
    {
        if (!value["TuberNum"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformation.TuberNum` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tuberNum.Deserialize(value["TuberNum"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tuberNumHasBeenSet = true;
    }

    if (value.HasMember("Calcification") && !value["Calcification"].IsNull())
    {
        if (!value["Calcification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformation.Calcification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_calcification.Deserialize(value["Calcification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_calcificationHasBeenSet = true;
    }

    if (value.HasMember("Necrosis") && !value["Necrosis"].IsNull())
    {
        if (!value["Necrosis"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformation.Necrosis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_necrosis.Deserialize(value["Necrosis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_necrosisHasBeenSet = true;
    }

    if (value.HasMember("Abnormity") && !value["Abnormity"].IsNull())
    {
        if (!value["Abnormity"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformation.Abnormity` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_abnormity.Deserialize(value["Abnormity"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_abnormityHasBeenSet = true;
    }

    if (value.HasMember("Breaked") && !value["Breaked"].IsNull())
    {
        if (!value["Breaked"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformation.Breaked` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_breaked.Deserialize(value["Breaked"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_breakedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetailInformation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Part";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_part.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tissueSizesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TissueSizes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tissueSizes.begin(); itr != m_tissueSizes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tuberSizesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TuberSizes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tuberSizes.begin(); itr != m_tuberSizes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cancerSizesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancerSizes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cancerSizes.begin(); itr != m_cancerSizes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_histologyLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistologyLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_histologyLevel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_histologyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistologyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_histologyType.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_invasiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Invasive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_invasive.begin(); itr != m_invasive.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pTNMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PTNM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pTNM.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_infiltrationDepthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfiltrationDepth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_infiltrationDepth.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tuberNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TuberNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tuberNum.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_calcificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Calcification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_calcification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_necrosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Necrosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_necrosis.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_abnormityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Abnormity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_abnormity.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_breakedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Breaked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_breaked.ToJsonObject(value[key.c_str()], allocator);
    }

}


Part DetailInformation::GetPart() const
{
    return m_part;
}

void DetailInformation::SetPart(const Part& _part)
{
    m_part = _part;
    m_partHasBeenSet = true;
}

bool DetailInformation::PartHasBeenSet() const
{
    return m_partHasBeenSet;
}

vector<Size> DetailInformation::GetTissueSizes() const
{
    return m_tissueSizes;
}

void DetailInformation::SetTissueSizes(const vector<Size>& _tissueSizes)
{
    m_tissueSizes = _tissueSizes;
    m_tissueSizesHasBeenSet = true;
}

bool DetailInformation::TissueSizesHasBeenSet() const
{
    return m_tissueSizesHasBeenSet;
}

vector<Size> DetailInformation::GetTuberSizes() const
{
    return m_tuberSizes;
}

void DetailInformation::SetTuberSizes(const vector<Size>& _tuberSizes)
{
    m_tuberSizes = _tuberSizes;
    m_tuberSizesHasBeenSet = true;
}

bool DetailInformation::TuberSizesHasBeenSet() const
{
    return m_tuberSizesHasBeenSet;
}

vector<Size> DetailInformation::GetCancerSizes() const
{
    return m_cancerSizes;
}

void DetailInformation::SetCancerSizes(const vector<Size>& _cancerSizes)
{
    m_cancerSizes = _cancerSizes;
    m_cancerSizesHasBeenSet = true;
}

bool DetailInformation::CancerSizesHasBeenSet() const
{
    return m_cancerSizesHasBeenSet;
}

BaseInfo DetailInformation::GetHistologyLevel() const
{
    return m_histologyLevel;
}

void DetailInformation::SetHistologyLevel(const BaseInfo& _histologyLevel)
{
    m_histologyLevel = _histologyLevel;
    m_histologyLevelHasBeenSet = true;
}

bool DetailInformation::HistologyLevelHasBeenSet() const
{
    return m_histologyLevelHasBeenSet;
}

HistologyTypeV2 DetailInformation::GetHistologyType() const
{
    return m_histologyType;
}

void DetailInformation::SetHistologyType(const HistologyTypeV2& _histologyType)
{
    m_histologyType = _histologyType;
    m_histologyTypeHasBeenSet = true;
}

bool DetailInformation::HistologyTypeHasBeenSet() const
{
    return m_histologyTypeHasBeenSet;
}

vector<InvasiveV2> DetailInformation::GetInvasive() const
{
    return m_invasive;
}

void DetailInformation::SetInvasive(const vector<InvasiveV2>& _invasive)
{
    m_invasive = _invasive;
    m_invasiveHasBeenSet = true;
}

bool DetailInformation::InvasiveHasBeenSet() const
{
    return m_invasiveHasBeenSet;
}

PTNM DetailInformation::GetPTNM() const
{
    return m_pTNM;
}

void DetailInformation::SetPTNM(const PTNM& _pTNM)
{
    m_pTNM = _pTNM;
    m_pTNMHasBeenSet = true;
}

bool DetailInformation::PTNMHasBeenSet() const
{
    return m_pTNMHasBeenSet;
}

BaseInfo DetailInformation::GetInfiltrationDepth() const
{
    return m_infiltrationDepth;
}

void DetailInformation::SetInfiltrationDepth(const BaseInfo& _infiltrationDepth)
{
    m_infiltrationDepth = _infiltrationDepth;
    m_infiltrationDepthHasBeenSet = true;
}

bool DetailInformation::InfiltrationDepthHasBeenSet() const
{
    return m_infiltrationDepthHasBeenSet;
}

BaseInfo DetailInformation::GetTuberNum() const
{
    return m_tuberNum;
}

void DetailInformation::SetTuberNum(const BaseInfo& _tuberNum)
{
    m_tuberNum = _tuberNum;
    m_tuberNumHasBeenSet = true;
}

bool DetailInformation::TuberNumHasBeenSet() const
{
    return m_tuberNumHasBeenSet;
}

BaseInfo DetailInformation::GetCalcification() const
{
    return m_calcification;
}

void DetailInformation::SetCalcification(const BaseInfo& _calcification)
{
    m_calcification = _calcification;
    m_calcificationHasBeenSet = true;
}

bool DetailInformation::CalcificationHasBeenSet() const
{
    return m_calcificationHasBeenSet;
}

BaseInfo DetailInformation::GetNecrosis() const
{
    return m_necrosis;
}

void DetailInformation::SetNecrosis(const BaseInfo& _necrosis)
{
    m_necrosis = _necrosis;
    m_necrosisHasBeenSet = true;
}

bool DetailInformation::NecrosisHasBeenSet() const
{
    return m_necrosisHasBeenSet;
}

BaseInfo DetailInformation::GetAbnormity() const
{
    return m_abnormity;
}

void DetailInformation::SetAbnormity(const BaseInfo& _abnormity)
{
    m_abnormity = _abnormity;
    m_abnormityHasBeenSet = true;
}

bool DetailInformation::AbnormityHasBeenSet() const
{
    return m_abnormityHasBeenSet;
}

BaseInfo DetailInformation::GetBreaked() const
{
    return m_breaked;
}

void DetailInformation::SetBreaked(const BaseInfo& _breaked)
{
    m_breaked = _breaked;
    m_breakedHasBeenSet = true;
}

bool DetailInformation::BreakedHasBeenSet() const
{
    return m_breakedHasBeenSet;
}

