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

#include <tencentcloud/csip/v20221121/model/ImageRegistryDetectionHostParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageRegistryDetectionHostParam::ImageRegistryDetectionHostParam() :
    m_instanceUuidHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_quuidHasBeenSet(false)
{
}

CoreInternalOutcome ImageRegistryDetectionHostParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceUuid") && !value["InstanceUuid"].IsNull())
    {
        if (!value["InstanceUuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryDetectionHostParam.InstanceUuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceUuid = string(value["InstanceUuid"].GetString());
        m_instanceUuidHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryDetectionHostParam.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryDetectionHostParam.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageRegistryDetectionHostParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

}


string ImageRegistryDetectionHostParam::GetInstanceUuid() const
{
    return m_instanceUuid;
}

void ImageRegistryDetectionHostParam::SetInstanceUuid(const string& _instanceUuid)
{
    m_instanceUuid = _instanceUuid;
    m_instanceUuidHasBeenSet = true;
}

bool ImageRegistryDetectionHostParam::InstanceUuidHasBeenSet() const
{
    return m_instanceUuidHasBeenSet;
}

string ImageRegistryDetectionHostParam::GetRegion() const
{
    return m_region;
}

void ImageRegistryDetectionHostParam::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ImageRegistryDetectionHostParam::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ImageRegistryDetectionHostParam::GetQuuid() const
{
    return m_quuid;
}

void ImageRegistryDetectionHostParam::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool ImageRegistryDetectionHostParam::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

