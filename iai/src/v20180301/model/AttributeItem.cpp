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

#include <tencentcloud/iai/v20180301/model/AttributeItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

AttributeItem::AttributeItem() :
    m_typeHasBeenSet(false),
    m_probabilityHasBeenSet(false)
{
}

CoreInternalOutcome AttributeItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AttributeItem.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Probability") && !value["Probability"].IsNull())
    {
        if (!value["Probability"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AttributeItem.Probability` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_probability = value["Probability"].GetDouble();
        m_probabilityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttributeItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_probabilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Probability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_probability, allocator);
    }

}


int64_t AttributeItem::GetType() const
{
    return m_type;
}

void AttributeItem::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AttributeItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

double AttributeItem::GetProbability() const
{
    return m_probability;
}

void AttributeItem::SetProbability(const double& _probability)
{
    m_probability = _probability;
    m_probabilityHasBeenSet = true;
}

bool AttributeItem::ProbabilityHasBeenSet() const
{
    return m_probabilityHasBeenSet;
}

