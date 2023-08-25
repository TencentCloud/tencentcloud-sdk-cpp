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

#include <tencentcloud/dsgc/v20190723/model/RiskMatrixLevel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

RiskMatrixLevel::RiskMatrixLevel() :
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
}

CoreInternalOutcome RiskMatrixLevel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskMatrixLevel.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskMatrixLevel.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RiskMatrixLevel.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskMatrixLevel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

}


string RiskMatrixLevel::GetName() const
{
    return m_name;
}

void RiskMatrixLevel::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RiskMatrixLevel::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t RiskMatrixLevel::GetId() const
{
    return m_id;
}

void RiskMatrixLevel::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RiskMatrixLevel::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

double RiskMatrixLevel::GetScore() const
{
    return m_score;
}

void RiskMatrixLevel::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool RiskMatrixLevel::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

