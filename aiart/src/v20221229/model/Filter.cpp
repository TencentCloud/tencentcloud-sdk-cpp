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

#include <tencentcloud/aiart/v20221229/model/Filter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aiart::V20221229::Model;
using namespace std;

Filter::Filter() :
    m_resolutionHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_occlusionHasBeenSet(false)
{
}

CoreInternalOutcome Filter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Filter.Resolution` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = value["Resolution"].GetInt64();
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Filter.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Occlusion") && !value["Occlusion"].IsNull())
    {
        if (!value["Occlusion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Filter.Occlusion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_occlusion = value["Occlusion"].GetInt64();
        m_occlusionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Filter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resolution, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_occlusionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Occlusion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_occlusion, allocator);
    }

}


int64_t Filter::GetResolution() const
{
    return m_resolution;
}

void Filter::SetResolution(const int64_t& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool Filter::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

int64_t Filter::GetSize() const
{
    return m_size;
}

void Filter::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool Filter::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t Filter::GetOcclusion() const
{
    return m_occlusion;
}

void Filter::SetOcclusion(const int64_t& _occlusion)
{
    m_occlusion = _occlusion;
    m_occlusionHasBeenSet = true;
}

bool Filter::OcclusionHasBeenSet() const
{
    return m_occlusionHasBeenSet;
}

