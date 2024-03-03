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

#include <tencentcloud/monitor/v20180724/model/PrometheusAgentOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusAgentOverview::PrometheusAgentOverview() :
    m_clusterTypeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_externalLabelsHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_failedReasonHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_enableExternalHasBeenSet(false),
    m_desiredAgentNumHasBeenSet(false),
    m_readyAgentNumHasBeenSet(false)
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

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgentOverview.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgentOverview.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("FailedReason") && !value["FailedReason"].IsNull())
    {
        if (!value["FailedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgentOverview.FailedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedReason = string(value["FailedReason"].GetString());
        m_failedReasonHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgentOverview.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("EnableExternal") && !value["EnableExternal"].IsNull())
    {
        if (!value["EnableExternal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgentOverview.EnableExternal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableExternal = value["EnableExternal"].GetBool();
        m_enableExternalHasBeenSet = true;
    }

    if (value.HasMember("DesiredAgentNum") && !value["DesiredAgentNum"].IsNull())
    {
        if (!value["DesiredAgentNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgentOverview.DesiredAgentNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredAgentNum = value["DesiredAgentNum"].GetInt64();
        m_desiredAgentNumHasBeenSet = true;
    }

    if (value.HasMember("ReadyAgentNum") && !value["ReadyAgentNum"].IsNull())
    {
        if (!value["ReadyAgentNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgentOverview.ReadyAgentNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readyAgentNum = value["ReadyAgentNum"].GetInt64();
        m_readyAgentNumHasBeenSet = true;
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_failedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedReason.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_enableExternalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableExternal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableExternal, allocator);
    }

    if (m_desiredAgentNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredAgentNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredAgentNum, allocator);
    }

    if (m_readyAgentNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadyAgentNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readyAgentNum, allocator);
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

string PrometheusAgentOverview::GetRegion() const
{
    return m_region;
}

void PrometheusAgentOverview::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool PrometheusAgentOverview::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string PrometheusAgentOverview::GetVpcId() const
{
    return m_vpcId;
}

void PrometheusAgentOverview::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool PrometheusAgentOverview::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string PrometheusAgentOverview::GetFailedReason() const
{
    return m_failedReason;
}

void PrometheusAgentOverview::SetFailedReason(const string& _failedReason)
{
    m_failedReason = _failedReason;
    m_failedReasonHasBeenSet = true;
}

bool PrometheusAgentOverview::FailedReasonHasBeenSet() const
{
    return m_failedReasonHasBeenSet;
}

string PrometheusAgentOverview::GetName() const
{
    return m_name;
}

void PrometheusAgentOverview::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PrometheusAgentOverview::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool PrometheusAgentOverview::GetEnableExternal() const
{
    return m_enableExternal;
}

void PrometheusAgentOverview::SetEnableExternal(const bool& _enableExternal)
{
    m_enableExternal = _enableExternal;
    m_enableExternalHasBeenSet = true;
}

bool PrometheusAgentOverview::EnableExternalHasBeenSet() const
{
    return m_enableExternalHasBeenSet;
}

int64_t PrometheusAgentOverview::GetDesiredAgentNum() const
{
    return m_desiredAgentNum;
}

void PrometheusAgentOverview::SetDesiredAgentNum(const int64_t& _desiredAgentNum)
{
    m_desiredAgentNum = _desiredAgentNum;
    m_desiredAgentNumHasBeenSet = true;
}

bool PrometheusAgentOverview::DesiredAgentNumHasBeenSet() const
{
    return m_desiredAgentNumHasBeenSet;
}

int64_t PrometheusAgentOverview::GetReadyAgentNum() const
{
    return m_readyAgentNum;
}

void PrometheusAgentOverview::SetReadyAgentNum(const int64_t& _readyAgentNum)
{
    m_readyAgentNum = _readyAgentNum;
    m_readyAgentNumHasBeenSet = true;
}

bool PrometheusAgentOverview::ReadyAgentNumHasBeenSet() const
{
    return m_readyAgentNumHasBeenSet;
}

