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

#include <tencentcloud/redis/v20180412/model/ResourceBundle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

ResourceBundle::ResourceBundle() :
    m_resourceBundleNameHasBeenSet(false),
    m_availableMemoryHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome ResourceBundle::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceBundleName") && !value["ResourceBundleName"].IsNull())
    {
        if (!value["ResourceBundleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceBundle.ResourceBundleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceBundleName = string(value["ResourceBundleName"].GetString());
        m_resourceBundleNameHasBeenSet = true;
    }

    if (value.HasMember("AvailableMemory") && !value["AvailableMemory"].IsNull())
    {
        if (!value["AvailableMemory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceBundle.AvailableMemory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableMemory = value["AvailableMemory"].GetInt64();
        m_availableMemoryHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceBundle.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceBundle::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceBundleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceBundleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceBundleName.c_str(), allocator).Move(), allocator);
    }

    if (m_availableMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableMemory, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string ResourceBundle::GetResourceBundleName() const
{
    return m_resourceBundleName;
}

void ResourceBundle::SetResourceBundleName(const string& _resourceBundleName)
{
    m_resourceBundleName = _resourceBundleName;
    m_resourceBundleNameHasBeenSet = true;
}

bool ResourceBundle::ResourceBundleNameHasBeenSet() const
{
    return m_resourceBundleNameHasBeenSet;
}

int64_t ResourceBundle::GetAvailableMemory() const
{
    return m_availableMemory;
}

void ResourceBundle::SetAvailableMemory(const int64_t& _availableMemory)
{
    m_availableMemory = _availableMemory;
    m_availableMemoryHasBeenSet = true;
}

bool ResourceBundle::AvailableMemoryHasBeenSet() const
{
    return m_availableMemoryHasBeenSet;
}

int64_t ResourceBundle::GetCount() const
{
    return m_count;
}

void ResourceBundle::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ResourceBundle::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

