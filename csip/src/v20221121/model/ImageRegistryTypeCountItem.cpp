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

#include <tencentcloud/csip/v20221121/model/ImageRegistryTypeCountItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageRegistryTypeCountItem::ImageRegistryTypeCountItem() :
    m_registryTypeHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome ImageRegistryTypeCountItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegistryType") && !value["RegistryType"].IsNull())
    {
        if (!value["RegistryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryTypeCountItem.RegistryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryType = string(value["RegistryType"].GetString());
        m_registryTypeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryTypeCountItem.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageRegistryTypeCountItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_registryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryType.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string ImageRegistryTypeCountItem::GetRegistryType() const
{
    return m_registryType;
}

void ImageRegistryTypeCountItem::SetRegistryType(const string& _registryType)
{
    m_registryType = _registryType;
    m_registryTypeHasBeenSet = true;
}

bool ImageRegistryTypeCountItem::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

uint64_t ImageRegistryTypeCountItem::GetCount() const
{
    return m_count;
}

void ImageRegistryTypeCountItem::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ImageRegistryTypeCountItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

