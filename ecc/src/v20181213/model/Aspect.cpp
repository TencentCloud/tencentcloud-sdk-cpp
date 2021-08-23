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

#include <tencentcloud/ecc/v20181213/model/Aspect.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecc::V20181213::Model;
using namespace std;

Aspect::Aspect() :
    m_nameHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_percentageHasBeenSet(false)
{
}

CoreInternalOutcome Aspect::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Aspect.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Aspect.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Percentage") && !value["Percentage"].IsNull())
    {
        if (!value["Percentage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Aspect.Percentage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_percentage = value["Percentage"].GetDouble();
        m_percentageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Aspect::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_percentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percentage, allocator);
    }

}


string Aspect::GetName() const
{
    return m_name;
}

void Aspect::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Aspect::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

double Aspect::GetScore() const
{
    return m_score;
}

void Aspect::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool Aspect::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

double Aspect::GetPercentage() const
{
    return m_percentage;
}

void Aspect::SetPercentage(const double& _percentage)
{
    m_percentage = _percentage;
    m_percentageHasBeenSet = true;
}

bool Aspect::PercentageHasBeenSet() const
{
    return m_percentageHasBeenSet;
}

