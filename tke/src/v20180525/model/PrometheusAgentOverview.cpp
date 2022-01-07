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

#include <tencentcloud/tke/v20180525/model/PrometheusAgentOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

PrometheusAgentOverview::PrometheusAgentOverview() :
    m_clusterTypeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_externalLabelsHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusAgentOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgentOverview.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgentOverview.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgentOverview.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgentOverview.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ExternalLabels") && !value["ExternalLabels"].IsNull())
    {
        if (!value["ExternalLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusAgentOverview.ExternalLabels` is not array type"));

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


    return CoreInternalOutcome(true);
}

void PrometheusAgentOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
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

}


string PrometheusAgentOverview::GetClusterType() const
{
    return m_clusterType;
}

void PrometheusAgentOverview::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool PrometheusAgentOverview::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string PrometheusAgentOverview::GetClusterId() const
{
    return m_clusterId;
}

void PrometheusAgentOverview::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool PrometheusAgentOverview::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string PrometheusAgentOverview::GetStatus() const
{
    return m_status;
}

void PrometheusAgentOverview::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PrometheusAgentOverview::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PrometheusAgentOverview::GetClusterName() const
{
    return m_clusterName;
}

void PrometheusAgentOverview::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool PrometheusAgentOverview::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

vector<Label> PrometheusAgentOverview::GetExternalLabels() const
{
    return m_externalLabels;
}

void PrometheusAgentOverview::SetExternalLabels(const vector<Label>& _externalLabels)
{
    m_externalLabels = _externalLabels;
    m_externalLabelsHasBeenSet = true;
}

bool PrometheusAgentOverview::ExternalLabelsHasBeenSet() const
{
    return m_externalLabelsHasBeenSet;
}

