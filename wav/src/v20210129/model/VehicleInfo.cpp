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

#include <tencentcloud/wav/v20210129/model/VehicleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

VehicleInfo::VehicleInfo() :
    m_brandIdHasBeenSet(false),
    m_brandNameHasBeenSet(false),
    m_seriesIdHasBeenSet(false),
    m_seriesNameHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_modelNameHasBeenSet(false)
{
}

CoreInternalOutcome VehicleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BrandId") && !value["BrandId"].IsNull())
    {
        if (!value["BrandId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VehicleInfo.BrandId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_brandId = value["BrandId"].GetUint64();
        m_brandIdHasBeenSet = true;
    }

    if (value.HasMember("BrandName") && !value["BrandName"].IsNull())
    {
        if (!value["BrandName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VehicleInfo.BrandName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brandName = string(value["BrandName"].GetString());
        m_brandNameHasBeenSet = true;
    }

    if (value.HasMember("SeriesId") && !value["SeriesId"].IsNull())
    {
        if (!value["SeriesId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VehicleInfo.SeriesId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_seriesId = value["SeriesId"].GetUint64();
        m_seriesIdHasBeenSet = true;
    }

    if (value.HasMember("SeriesName") && !value["SeriesName"].IsNull())
    {
        if (!value["SeriesName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VehicleInfo.SeriesName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seriesName = string(value["SeriesName"].GetString());
        m_seriesNameHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VehicleInfo.ModelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = value["ModelId"].GetUint64();
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VehicleInfo.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VehicleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_brandIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_brandId, allocator);
    }

    if (m_brandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brandName.c_str(), allocator).Move(), allocator);
    }

    if (m_seriesIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriesId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seriesId, allocator);
    }

    if (m_seriesNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriesName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seriesName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelId, allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t VehicleInfo::GetBrandId() const
{
    return m_brandId;
}

void VehicleInfo::SetBrandId(const uint64_t& _brandId)
{
    m_brandId = _brandId;
    m_brandIdHasBeenSet = true;
}

bool VehicleInfo::BrandIdHasBeenSet() const
{
    return m_brandIdHasBeenSet;
}

string VehicleInfo::GetBrandName() const
{
    return m_brandName;
}

void VehicleInfo::SetBrandName(const string& _brandName)
{
    m_brandName = _brandName;
    m_brandNameHasBeenSet = true;
}

bool VehicleInfo::BrandNameHasBeenSet() const
{
    return m_brandNameHasBeenSet;
}

uint64_t VehicleInfo::GetSeriesId() const
{
    return m_seriesId;
}

void VehicleInfo::SetSeriesId(const uint64_t& _seriesId)
{
    m_seriesId = _seriesId;
    m_seriesIdHasBeenSet = true;
}

bool VehicleInfo::SeriesIdHasBeenSet() const
{
    return m_seriesIdHasBeenSet;
}

string VehicleInfo::GetSeriesName() const
{
    return m_seriesName;
}

void VehicleInfo::SetSeriesName(const string& _seriesName)
{
    m_seriesName = _seriesName;
    m_seriesNameHasBeenSet = true;
}

bool VehicleInfo::SeriesNameHasBeenSet() const
{
    return m_seriesNameHasBeenSet;
}

uint64_t VehicleInfo::GetModelId() const
{
    return m_modelId;
}

void VehicleInfo::SetModelId(const uint64_t& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool VehicleInfo::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string VehicleInfo::GetModelName() const
{
    return m_modelName;
}

void VehicleInfo::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool VehicleInfo::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

