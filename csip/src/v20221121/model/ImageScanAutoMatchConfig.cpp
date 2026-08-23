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

#include <tencentcloud/csip/v20221121/model/ImageScanAutoMatchConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageScanAutoMatchConfig::ImageScanAutoMatchConfig() :
    m_modesHasBeenSet(false),
    m_clustersHasBeenSet(false)
{
}

CoreInternalOutcome ImageScanAutoMatchConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Modes") && !value["Modes"].IsNull())
    {
        if (!value["Modes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageScanAutoMatchConfig.Modes` is not array type"));

        const rapidjson::Value &tmpValue = value["Modes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_modes.push_back((*itr).GetString());
        }
        m_modesHasBeenSet = true;
    }

    if (value.HasMember("Clusters") && !value["Clusters"].IsNull())
    {
        if (!value["Clusters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageScanAutoMatchConfig.Clusters` is not array type"));

        const rapidjson::Value &tmpValue = value["Clusters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_clusters.push_back((*itr).GetString());
        }
        m_clustersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageScanAutoMatchConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Modes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modes.begin(); itr != m_modes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Clusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusters.begin(); itr != m_clusters.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> ImageScanAutoMatchConfig::GetModes() const
{
    return m_modes;
}

void ImageScanAutoMatchConfig::SetModes(const vector<string>& _modes)
{
    m_modes = _modes;
    m_modesHasBeenSet = true;
}

bool ImageScanAutoMatchConfig::ModesHasBeenSet() const
{
    return m_modesHasBeenSet;
}

vector<string> ImageScanAutoMatchConfig::GetClusters() const
{
    return m_clusters;
}

void ImageScanAutoMatchConfig::SetClusters(const vector<string>& _clusters)
{
    m_clusters = _clusters;
    m_clustersHasBeenSet = true;
}

bool ImageScanAutoMatchConfig::ClustersHasBeenSet() const
{
    return m_clustersHasBeenSet;
}

