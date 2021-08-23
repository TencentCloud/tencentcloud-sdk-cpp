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

#include <tencentcloud/ie/v20200304/model/Denoising.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

Denoising::Denoising() :
    m_typeHasBeenSet(false),
    m_templStrengthHasBeenSet(false),
    m_spatialStrengthHasBeenSet(false)
{
}

CoreInternalOutcome Denoising::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Denoising.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TemplStrength") && !value["TemplStrength"].IsNull())
    {
        if (!value["TemplStrength"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Denoising.TemplStrength` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_templStrength = value["TemplStrength"].GetDouble();
        m_templStrengthHasBeenSet = true;
    }

    if (value.HasMember("SpatialStrength") && !value["SpatialStrength"].IsNull())
    {
        if (!value["SpatialStrength"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Denoising.SpatialStrength` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_spatialStrength = value["SpatialStrength"].GetDouble();
        m_spatialStrengthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Denoising::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_templStrengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplStrength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templStrength, allocator);
    }

    if (m_spatialStrengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpatialStrength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spatialStrength, allocator);
    }

}


string Denoising::GetType() const
{
    return m_type;
}

void Denoising::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Denoising::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

double Denoising::GetTemplStrength() const
{
    return m_templStrength;
}

void Denoising::SetTemplStrength(const double& _templStrength)
{
    m_templStrength = _templStrength;
    m_templStrengthHasBeenSet = true;
}

bool Denoising::TemplStrengthHasBeenSet() const
{
    return m_templStrengthHasBeenSet;
}

double Denoising::GetSpatialStrength() const
{
    return m_spatialStrength;
}

void Denoising::SetSpatialStrength(const double& _spatialStrength)
{
    m_spatialStrength = _spatialStrength;
    m_spatialStrengthHasBeenSet = true;
}

bool Denoising::SpatialStrengthHasBeenSet() const
{
    return m_spatialStrengthHasBeenSet;
}

