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

#include <tencentcloud/ft/v20200304/model/GradientInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ft::V20200304::Model;
using namespace std;

GradientInfo::GradientInfo() :
    m_tempoHasBeenSet(false),
    m_morphTimeHasBeenSet(false)
{
}

CoreInternalOutcome GradientInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tempo") && !value["Tempo"].IsNull())
    {
        if (!value["Tempo"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `GradientInfo.Tempo` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tempo = value["Tempo"].GetDouble();
        m_tempoHasBeenSet = true;
    }

    if (value.HasMember("MorphTime") && !value["MorphTime"].IsNull())
    {
        if (!value["MorphTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `GradientInfo.MorphTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_morphTime = value["MorphTime"].GetDouble();
        m_morphTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GradientInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tempoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tempo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tempo, allocator);
    }

    if (m_morphTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MorphTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_morphTime, allocator);
    }

}


double GradientInfo::GetTempo() const
{
    return m_tempo;
}

void GradientInfo::SetTempo(const double& _tempo)
{
    m_tempo = _tempo;
    m_tempoHasBeenSet = true;
}

bool GradientInfo::TempoHasBeenSet() const
{
    return m_tempoHasBeenSet;
}

double GradientInfo::GetMorphTime() const
{
    return m_morphTime;
}

void GradientInfo::SetMorphTime(const double& _morphTime)
{
    m_morphTime = _morphTime;
    m_morphTimeHasBeenSet = true;
}

bool GradientInfo::MorphTimeHasBeenSet() const
{
    return m_morphTimeHasBeenSet;
}

