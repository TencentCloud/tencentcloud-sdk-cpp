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

#include <tencentcloud/fmu/v20191213/model/BeautyParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fmu::V20191213::Model;
using namespace std;

BeautyParam::BeautyParam() :
    m_whitenLevelHasBeenSet(false),
    m_smoothingLevelHasBeenSet(false),
    m_eyeEnlargeLevelHasBeenSet(false),
    m_faceShrinkLevelHasBeenSet(false)
{
}

CoreInternalOutcome BeautyParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WhitenLevel") && !value["WhitenLevel"].IsNull())
    {
        if (!value["WhitenLevel"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `BeautyParam.WhitenLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_whitenLevel = value["WhitenLevel"].GetUint64();
        m_whitenLevelHasBeenSet = true;
    }

    if (value.HasMember("SmoothingLevel") && !value["SmoothingLevel"].IsNull())
    {
        if (!value["SmoothingLevel"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `BeautyParam.SmoothingLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_smoothingLevel = value["SmoothingLevel"].GetUint64();
        m_smoothingLevelHasBeenSet = true;
    }

    if (value.HasMember("EyeEnlargeLevel") && !value["EyeEnlargeLevel"].IsNull())
    {
        if (!value["EyeEnlargeLevel"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `BeautyParam.EyeEnlargeLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eyeEnlargeLevel = value["EyeEnlargeLevel"].GetUint64();
        m_eyeEnlargeLevelHasBeenSet = true;
    }

    if (value.HasMember("FaceShrinkLevel") && !value["FaceShrinkLevel"].IsNull())
    {
        if (!value["FaceShrinkLevel"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `BeautyParam.FaceShrinkLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_faceShrinkLevel = value["FaceShrinkLevel"].GetUint64();
        m_faceShrinkLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BeautyParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_whitenLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhitenLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_whitenLevel, allocator);
    }

    if (m_smoothingLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmoothingLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_smoothingLevel, allocator);
    }

    if (m_eyeEnlargeLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EyeEnlargeLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eyeEnlargeLevel, allocator);
    }

    if (m_faceShrinkLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceShrinkLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_faceShrinkLevel, allocator);
    }

}


uint64_t BeautyParam::GetWhitenLevel() const
{
    return m_whitenLevel;
}

void BeautyParam::SetWhitenLevel(const uint64_t& _whitenLevel)
{
    m_whitenLevel = _whitenLevel;
    m_whitenLevelHasBeenSet = true;
}

bool BeautyParam::WhitenLevelHasBeenSet() const
{
    return m_whitenLevelHasBeenSet;
}

uint64_t BeautyParam::GetSmoothingLevel() const
{
    return m_smoothingLevel;
}

void BeautyParam::SetSmoothingLevel(const uint64_t& _smoothingLevel)
{
    m_smoothingLevel = _smoothingLevel;
    m_smoothingLevelHasBeenSet = true;
}

bool BeautyParam::SmoothingLevelHasBeenSet() const
{
    return m_smoothingLevelHasBeenSet;
}

uint64_t BeautyParam::GetEyeEnlargeLevel() const
{
    return m_eyeEnlargeLevel;
}

void BeautyParam::SetEyeEnlargeLevel(const uint64_t& _eyeEnlargeLevel)
{
    m_eyeEnlargeLevel = _eyeEnlargeLevel;
    m_eyeEnlargeLevelHasBeenSet = true;
}

bool BeautyParam::EyeEnlargeLevelHasBeenSet() const
{
    return m_eyeEnlargeLevelHasBeenSet;
}

uint64_t BeautyParam::GetFaceShrinkLevel() const
{
    return m_faceShrinkLevel;
}

void BeautyParam::SetFaceShrinkLevel(const uint64_t& _faceShrinkLevel)
{
    m_faceShrinkLevel = _faceShrinkLevel;
    m_faceShrinkLevelHasBeenSet = true;
}

bool BeautyParam::FaceShrinkLevelHasBeenSet() const
{
    return m_faceShrinkLevelHasBeenSet;
}

