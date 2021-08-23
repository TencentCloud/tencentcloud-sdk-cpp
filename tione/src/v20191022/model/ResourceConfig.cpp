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

#include <tencentcloud/tione/v20191022/model/ResourceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

ResourceConfig::ResourceConfig() :
    m_instanceCountHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_volumeSizeInGBHasBeenSet(false)
{
}

CoreInternalOutcome ResourceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfig.InstanceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetUint64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfig.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("VolumeSizeInGB") && !value["VolumeSizeInGB"].IsNull())
    {
        if (!value["VolumeSizeInGB"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfig.VolumeSizeInGB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_volumeSizeInGB = value["VolumeSizeInGB"].GetUint64();
        m_volumeSizeInGBHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeSizeInGBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSizeInGB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volumeSizeInGB, allocator);
    }

}


uint64_t ResourceConfig::GetInstanceCount() const
{
    return m_instanceCount;
}

void ResourceConfig::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool ResourceConfig::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

string ResourceConfig::GetInstanceType() const
{
    return m_instanceType;
}

void ResourceConfig::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ResourceConfig::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

uint64_t ResourceConfig::GetVolumeSizeInGB() const
{
    return m_volumeSizeInGB;
}

void ResourceConfig::SetVolumeSizeInGB(const uint64_t& _volumeSizeInGB)
{
    m_volumeSizeInGB = _volumeSizeInGB;
    m_volumeSizeInGBHasBeenSet = true;
}

bool ResourceConfig::VolumeSizeInGBHasBeenSet() const
{
    return m_volumeSizeInGBHasBeenSet;
}

