/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dlc/v20210125/model/EngineSessionImage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

EngineSessionImage::EngineSessionImage() :
    m_sparkImageIdHasBeenSet(false),
    m_sparkImageVersionHasBeenSet(false),
    m_sparkImageTypeHasBeenSet(false),
    m_sparkImageTagHasBeenSet(false)
{
}

CoreInternalOutcome EngineSessionImage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SparkImageId") && !value["SparkImageId"].IsNull())
    {
        if (!value["SparkImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineSessionImage.SparkImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkImageId = string(value["SparkImageId"].GetString());
        m_sparkImageIdHasBeenSet = true;
    }

    if (value.HasMember("SparkImageVersion") && !value["SparkImageVersion"].IsNull())
    {
        if (!value["SparkImageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineSessionImage.SparkImageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkImageVersion = string(value["SparkImageVersion"].GetString());
        m_sparkImageVersionHasBeenSet = true;
    }

    if (value.HasMember("SparkImageType") && !value["SparkImageType"].IsNull())
    {
        if (!value["SparkImageType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineSessionImage.SparkImageType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sparkImageType = value["SparkImageType"].GetInt64();
        m_sparkImageTypeHasBeenSet = true;
    }

    if (value.HasMember("SparkImageTag") && !value["SparkImageTag"].IsNull())
    {
        if (!value["SparkImageTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineSessionImage.SparkImageTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkImageTag = string(value["SparkImageTag"].GetString());
        m_sparkImageTagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EngineSessionImage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sparkImageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkImageId.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkImageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkImageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkImageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkImageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkImageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sparkImageType, allocator);
    }

    if (m_sparkImageTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkImageTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkImageTag.c_str(), allocator).Move(), allocator);
    }

}


string EngineSessionImage::GetSparkImageId() const
{
    return m_sparkImageId;
}

void EngineSessionImage::SetSparkImageId(const string& _sparkImageId)
{
    m_sparkImageId = _sparkImageId;
    m_sparkImageIdHasBeenSet = true;
}

bool EngineSessionImage::SparkImageIdHasBeenSet() const
{
    return m_sparkImageIdHasBeenSet;
}

string EngineSessionImage::GetSparkImageVersion() const
{
    return m_sparkImageVersion;
}

void EngineSessionImage::SetSparkImageVersion(const string& _sparkImageVersion)
{
    m_sparkImageVersion = _sparkImageVersion;
    m_sparkImageVersionHasBeenSet = true;
}

bool EngineSessionImage::SparkImageVersionHasBeenSet() const
{
    return m_sparkImageVersionHasBeenSet;
}

int64_t EngineSessionImage::GetSparkImageType() const
{
    return m_sparkImageType;
}

void EngineSessionImage::SetSparkImageType(const int64_t& _sparkImageType)
{
    m_sparkImageType = _sparkImageType;
    m_sparkImageTypeHasBeenSet = true;
}

bool EngineSessionImage::SparkImageTypeHasBeenSet() const
{
    return m_sparkImageTypeHasBeenSet;
}

string EngineSessionImage::GetSparkImageTag() const
{
    return m_sparkImageTag;
}

void EngineSessionImage::SetSparkImageTag(const string& _sparkImageTag)
{
    m_sparkImageTag = _sparkImageTag;
    m_sparkImageTagHasBeenSet = true;
}

bool EngineSessionImage::SparkImageTagHasBeenSet() const
{
    return m_sparkImageTagHasBeenSet;
}

