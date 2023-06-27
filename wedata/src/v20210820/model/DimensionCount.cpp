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

#include <tencentcloud/wedata/v20210820/model/DimensionCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DimensionCount::DimensionCount() :
    m_dimTypeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_qualityDimHasBeenSet(false)
{
}

CoreInternalOutcome DimensionCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DimType") && !value["DimType"].IsNull())
    {
        if (!value["DimType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionCount.DimType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dimType = value["DimType"].GetUint64();
        m_dimTypeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionCount.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("QualityDim") && !value["QualityDim"].IsNull())
    {
        if (!value["QualityDim"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionCount.QualityDim` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qualityDim = value["QualityDim"].GetUint64();
        m_qualityDimHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DimensionCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dimTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dimType, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_qualityDimHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityDim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qualityDim, allocator);
    }

}


uint64_t DimensionCount::GetDimType() const
{
    return m_dimType;
}

void DimensionCount::SetDimType(const uint64_t& _dimType)
{
    m_dimType = _dimType;
    m_dimTypeHasBeenSet = true;
}

bool DimensionCount::DimTypeHasBeenSet() const
{
    return m_dimTypeHasBeenSet;
}

uint64_t DimensionCount::GetCount() const
{
    return m_count;
}

void DimensionCount::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DimensionCount::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

uint64_t DimensionCount::GetQualityDim() const
{
    return m_qualityDim;
}

void DimensionCount::SetQualityDim(const uint64_t& _qualityDim)
{
    m_qualityDim = _qualityDim;
    m_qualityDimHasBeenSet = true;
}

bool DimensionCount::QualityDimHasBeenSet() const
{
    return m_qualityDimHasBeenSet;
}

