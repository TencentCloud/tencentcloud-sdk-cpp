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

#include <tencentcloud/csip/v20221121/model/ImageScanRegistryFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageScanRegistryFilter::ImageScanRegistryFilter() :
    m_registryTypeHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

CoreInternalOutcome ImageScanRegistryFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegistryType") && !value["RegistryType"].IsNull())
    {
        if (!value["RegistryType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageScanRegistryFilter.RegistryType` is not array type"));

        const rapidjson::Value &tmpValue = value["RegistryType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_registryType.push_back((*itr).GetString());
        }
        m_registryTypeHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageScanRegistryFilter.Namespace` is not array type"));

        const rapidjson::Value &tmpValue = value["Namespace"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_namespace.push_back((*itr).GetString());
        }
        m_namespaceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageScanRegistryFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_registryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_registryType.begin(); itr != m_registryType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_namespace.begin(); itr != m_namespace.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> ImageScanRegistryFilter::GetRegistryType() const
{
    return m_registryType;
}

void ImageScanRegistryFilter::SetRegistryType(const vector<string>& _registryType)
{
    m_registryType = _registryType;
    m_registryTypeHasBeenSet = true;
}

bool ImageScanRegistryFilter::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

vector<string> ImageScanRegistryFilter::GetNamespace() const
{
    return m_namespace;
}

void ImageScanRegistryFilter::SetNamespace(const vector<string>& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ImageScanRegistryFilter::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

