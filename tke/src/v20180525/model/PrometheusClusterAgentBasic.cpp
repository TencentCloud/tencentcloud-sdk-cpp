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

#include <tencentcloud/tke/v20180525/model/PrometheusClusterAgentBasic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

PrometheusClusterAgentBasic::PrometheusClusterAgentBasic() :
    m_regionHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_enableExternalHasBeenSet(false),
    m_inClusterPodConfigHasBeenSet(false),
    m_externalLabelsHasBeenSet(false),
    m_notInstallBasicScrapeHasBeenSet(false),
    m_notScrapeHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusClusterAgentBasic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusClusterAgentBasic.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusClusterAgentBasic.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusClusterAgentBasic.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("EnableExternal") && !value["EnableExternal"].IsNull())
    {
        if (!value["EnableExternal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusClusterAgentBasic.EnableExternal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableExternal = value["EnableExternal"].GetBool();
        m_enableExternalHasBeenSet = true;
    }

    if (value.HasMember("InClusterPodConfig") && !value["InClusterPodConfig"].IsNull())
    {
        if (!value["InClusterPodConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusClusterAgentBasic.InClusterPodConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inClusterPodConfig.Deserialize(value["InClusterPodConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inClusterPodConfigHasBeenSet = true;
    }

    if (value.HasMember("ExternalLabels") && !value["ExternalLabels"].IsNull())
    {
        if (!value["ExternalLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusClusterAgentBasic.ExternalLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["ExternalLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Label item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_externalLabels.push_back(item);
        }
        m_externalLabelsHasBeenSet = true;
    }

    if (value.HasMember("NotInstallBasicScrape") && !value["NotInstallBasicScrape"].IsNull())
    {
        if (!value["NotInstallBasicScrape"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusClusterAgentBasic.NotInstallBasicScrape` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_notInstallBasicScrape = value["NotInstallBasicScrape"].GetBool();
        m_notInstallBasicScrapeHasBeenSet = true;
    }

    if (value.HasMember("NotScrape") && !value["NotScrape"].IsNull())
    {
        if (!value["NotScrape"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusClusterAgentBasic.NotScrape` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_notScrape = value["NotScrape"].GetBool();
        m_notScrapeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusClusterAgentBasic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableExternalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableExternal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableExternal, allocator);
    }

    if (m_inClusterPodConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InClusterPodConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inClusterPodConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_externalLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_externalLabels.begin(); itr != m_externalLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_notInstallBasicScrapeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotInstallBasicScrape";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notInstallBasicScrape, allocator);
    }

    if (m_notScrapeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotScrape";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notScrape, allocator);
    }

}


string PrometheusClusterAgentBasic::GetRegion() const
{
    return m_region;
}

void PrometheusClusterAgentBasic::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool PrometheusClusterAgentBasic::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string PrometheusClusterAgentBasic::GetClusterType() const
{
    return m_clusterType;
}

void PrometheusClusterAgentBasic::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool PrometheusClusterAgentBasic::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string PrometheusClusterAgentBasic::GetClusterId() const
{
    return m_clusterId;
}

void PrometheusClusterAgentBasic::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool PrometheusClusterAgentBasic::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

bool PrometheusClusterAgentBasic::GetEnableExternal() const
{
    return m_enableExternal;
}

void PrometheusClusterAgentBasic::SetEnableExternal(const bool& _enableExternal)
{
    m_enableExternal = _enableExternal;
    m_enableExternalHasBeenSet = true;
}

bool PrometheusClusterAgentBasic::EnableExternalHasBeenSet() const
{
    return m_enableExternalHasBeenSet;
}

PrometheusClusterAgentPodConfig PrometheusClusterAgentBasic::GetInClusterPodConfig() const
{
    return m_inClusterPodConfig;
}

void PrometheusClusterAgentBasic::SetInClusterPodConfig(const PrometheusClusterAgentPodConfig& _inClusterPodConfig)
{
    m_inClusterPodConfig = _inClusterPodConfig;
    m_inClusterPodConfigHasBeenSet = true;
}

bool PrometheusClusterAgentBasic::InClusterPodConfigHasBeenSet() const
{
    return m_inClusterPodConfigHasBeenSet;
}

vector<Label> PrometheusClusterAgentBasic::GetExternalLabels() const
{
    return m_externalLabels;
}

void PrometheusClusterAgentBasic::SetExternalLabels(const vector<Label>& _externalLabels)
{
    m_externalLabels = _externalLabels;
    m_externalLabelsHasBeenSet = true;
}

bool PrometheusClusterAgentBasic::ExternalLabelsHasBeenSet() const
{
    return m_externalLabelsHasBeenSet;
}

bool PrometheusClusterAgentBasic::GetNotInstallBasicScrape() const
{
    return m_notInstallBasicScrape;
}

void PrometheusClusterAgentBasic::SetNotInstallBasicScrape(const bool& _notInstallBasicScrape)
{
    m_notInstallBasicScrape = _notInstallBasicScrape;
    m_notInstallBasicScrapeHasBeenSet = true;
}

bool PrometheusClusterAgentBasic::NotInstallBasicScrapeHasBeenSet() const
{
    return m_notInstallBasicScrapeHasBeenSet;
}

bool PrometheusClusterAgentBasic::GetNotScrape() const
{
    return m_notScrape;
}

void PrometheusClusterAgentBasic::SetNotScrape(const bool& _notScrape)
{
    m_notScrape = _notScrape;
    m_notScrapeHasBeenSet = true;
}

bool PrometheusClusterAgentBasic::NotScrapeHasBeenSet() const
{
    return m_notScrapeHasBeenSet;
}

