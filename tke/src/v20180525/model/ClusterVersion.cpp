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

#include <tencentcloud/tke/v20180525/model/ClusterVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ClusterVersion::ClusterVersion() :
    m_clusterIdHasBeenSet(false),
    m_versionsHasBeenSet(false)
{
}

CoreInternalOutcome ClusterVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterVersion.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Versions") && !value["Versions"].IsNull())
    {
        if (!value["Versions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterVersion.Versions` is not array type"));

        const rapidjson::Value &tmpValue = value["Versions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_versions.push_back((*itr).GetString());
        }
        m_versionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Versions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_versions.begin(); itr != m_versions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ClusterVersion::GetClusterId() const
{
    return m_clusterId;
}

void ClusterVersion::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterVersion::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> ClusterVersion::GetVersions() const
{
    return m_versions;
}

void ClusterVersion::SetVersions(const vector<string>& _versions)
{
    m_versions = _versions;
    m_versionsHasBeenSet = true;
}

bool ClusterVersion::VersionsHasBeenSet() const
{
    return m_versionsHasBeenSet;
}

