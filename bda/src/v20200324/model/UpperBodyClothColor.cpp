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

#include <tencentcloud/bda/v20200324/model/UpperBodyClothColor.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

UpperBodyClothColor::UpperBodyClothColor() :
    m_typeHasBeenSet(false),
    m_probabilityHasBeenSet(false)
{
}

CoreInternalOutcome UpperBodyClothColor::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpperBodyClothColor.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Probability") && !value["Probability"].IsNull())
    {
        if (!value["Probability"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `UpperBodyClothColor.Probability` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_probability = value["Probability"].GetDouble();
        m_probabilityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpperBodyClothColor::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_probabilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Probability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_probability, allocator);
    }

}


string UpperBodyClothColor::GetType() const
{
    return m_type;
}

void UpperBodyClothColor::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool UpperBodyClothColor::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

double UpperBodyClothColor::GetProbability() const
{
    return m_probability;
}

void UpperBodyClothColor::SetProbability(const double& _probability)
{
    m_probability = _probability;
    m_probabilityHasBeenSet = true;
}

bool UpperBodyClothColor::ProbabilityHasBeenSet() const
{
    return m_probabilityHasBeenSet;
}

