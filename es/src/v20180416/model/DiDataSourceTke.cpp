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

#include <tencentcloud/es/v20180416/model/DiDataSourceTke.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DiDataSourceTke::DiDataSourceTke() :
    m_vpcIdHasBeenSet(false),
    m_tkeIdHasBeenSet(false),
    m_collectorIdHasBeenSet(false),
    m_collectorNameHasBeenSet(false),
    m_collectorTypeHasBeenSet(false),
    m_collectorVersionHasBeenSet(false),
    m_includeNamespacesHasBeenSet(false),
    m_excludeNamespacesHasBeenSet(false),
    m_podLabelKeysHasBeenSet(false),
    m_podLabelValuesHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_configContentHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_inputPathHasBeenSet(false)
{
}

CoreInternalOutcome DiDataSourceTke::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiDataSourceTke.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("TkeId") && !value["TkeId"].IsNull())
    {
        if (!value["TkeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiDataSourceTke.TkeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tkeId = string(value["TkeId"].GetString());
        m_tkeIdHasBeenSet = true;
    }

    if (value.HasMember("CollectorId") && !value["CollectorId"].IsNull())
    {
        if (!value["CollectorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiDataSourceTke.CollectorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collectorId = string(value["CollectorId"].GetString());
        m_collectorIdHasBeenSet = true;
    }

    if (value.HasMember("CollectorName") && !value["CollectorName"].IsNull())
    {
        if (!value["CollectorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiDataSourceTke.CollectorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collectorName = string(value["CollectorName"].GetString());
        m_collectorNameHasBeenSet = true;
    }

    if (value.HasMember("CollectorType") && !value["CollectorType"].IsNull())
    {
        if (!value["CollectorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiDataSourceTke.CollectorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collectorType = string(value["CollectorType"].GetString());
        m_collectorTypeHasBeenSet = true;
    }

    if (value.HasMember("CollectorVersion") && !value["CollectorVersion"].IsNull())
    {
        if (!value["CollectorVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiDataSourceTke.CollectorVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collectorVersion = string(value["CollectorVersion"].GetString());
        m_collectorVersionHasBeenSet = true;
    }

    if (value.HasMember("IncludeNamespaces") && !value["IncludeNamespaces"].IsNull())
    {
        if (!value["IncludeNamespaces"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiDataSourceTke.IncludeNamespaces` is not array type"));

        const rapidjson::Value &tmpValue = value["IncludeNamespaces"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_includeNamespaces.push_back((*itr).GetString());
        }
        m_includeNamespacesHasBeenSet = true;
    }

    if (value.HasMember("ExcludeNamespaces") && !value["ExcludeNamespaces"].IsNull())
    {
        if (!value["ExcludeNamespaces"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiDataSourceTke.ExcludeNamespaces` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludeNamespaces"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeNamespaces.push_back((*itr).GetString());
        }
        m_excludeNamespacesHasBeenSet = true;
    }

    if (value.HasMember("PodLabelKeys") && !value["PodLabelKeys"].IsNull())
    {
        if (!value["PodLabelKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiDataSourceTke.PodLabelKeys` is not array type"));

        const rapidjson::Value &tmpValue = value["PodLabelKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_podLabelKeys.push_back((*itr).GetString());
        }
        m_podLabelKeysHasBeenSet = true;
    }

    if (value.HasMember("PodLabelValues") && !value["PodLabelValues"].IsNull())
    {
        if (!value["PodLabelValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiDataSourceTke.PodLabelValues` is not array type"));

        const rapidjson::Value &tmpValue = value["PodLabelValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_podLabelValues.push_back((*itr).GetString());
        }
        m_podLabelValuesHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiDataSourceTke.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigContent") && !value["ConfigContent"].IsNull())
    {
        if (!value["ConfigContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiDataSourceTke.ConfigContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configContent = string(value["ConfigContent"].GetString());
        m_configContentHasBeenSet = true;
    }

    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiDataSourceTke.InputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = string(value["InputType"].GetString());
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("InputPath") && !value["InputPath"].IsNull())
    {
        if (!value["InputPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiDataSourceTke.InputPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputPath = string(value["InputPath"].GetString());
        m_inputPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiDataSourceTke::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_tkeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TkeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tkeId.c_str(), allocator).Move(), allocator);
    }

    if (m_collectorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collectorId.c_str(), allocator).Move(), allocator);
    }

    if (m_collectorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collectorName.c_str(), allocator).Move(), allocator);
    }

    if (m_collectorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collectorType.c_str(), allocator).Move(), allocator);
    }

    if (m_collectorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collectorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_includeNamespacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeNamespaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includeNamespaces.begin(); itr != m_includeNamespaces.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeNamespacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeNamespaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeNamespaces.begin(); itr != m_excludeNamespaces.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_podLabelKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodLabelKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_podLabelKeys.begin(); itr != m_podLabelKeys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_podLabelValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodLabelValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_podLabelValues.begin(); itr != m_podLabelValues.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_configContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configContent.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_inputPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputPath.c_str(), allocator).Move(), allocator);
    }

}


string DiDataSourceTke::GetVpcId() const
{
    return m_vpcId;
}

void DiDataSourceTke::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DiDataSourceTke::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DiDataSourceTke::GetTkeId() const
{
    return m_tkeId;
}

void DiDataSourceTke::SetTkeId(const string& _tkeId)
{
    m_tkeId = _tkeId;
    m_tkeIdHasBeenSet = true;
}

bool DiDataSourceTke::TkeIdHasBeenSet() const
{
    return m_tkeIdHasBeenSet;
}

string DiDataSourceTke::GetCollectorId() const
{
    return m_collectorId;
}

void DiDataSourceTke::SetCollectorId(const string& _collectorId)
{
    m_collectorId = _collectorId;
    m_collectorIdHasBeenSet = true;
}

bool DiDataSourceTke::CollectorIdHasBeenSet() const
{
    return m_collectorIdHasBeenSet;
}

string DiDataSourceTke::GetCollectorName() const
{
    return m_collectorName;
}

void DiDataSourceTke::SetCollectorName(const string& _collectorName)
{
    m_collectorName = _collectorName;
    m_collectorNameHasBeenSet = true;
}

bool DiDataSourceTke::CollectorNameHasBeenSet() const
{
    return m_collectorNameHasBeenSet;
}

string DiDataSourceTke::GetCollectorType() const
{
    return m_collectorType;
}

void DiDataSourceTke::SetCollectorType(const string& _collectorType)
{
    m_collectorType = _collectorType;
    m_collectorTypeHasBeenSet = true;
}

bool DiDataSourceTke::CollectorTypeHasBeenSet() const
{
    return m_collectorTypeHasBeenSet;
}

string DiDataSourceTke::GetCollectorVersion() const
{
    return m_collectorVersion;
}

void DiDataSourceTke::SetCollectorVersion(const string& _collectorVersion)
{
    m_collectorVersion = _collectorVersion;
    m_collectorVersionHasBeenSet = true;
}

bool DiDataSourceTke::CollectorVersionHasBeenSet() const
{
    return m_collectorVersionHasBeenSet;
}

vector<string> DiDataSourceTke::GetIncludeNamespaces() const
{
    return m_includeNamespaces;
}

void DiDataSourceTke::SetIncludeNamespaces(const vector<string>& _includeNamespaces)
{
    m_includeNamespaces = _includeNamespaces;
    m_includeNamespacesHasBeenSet = true;
}

bool DiDataSourceTke::IncludeNamespacesHasBeenSet() const
{
    return m_includeNamespacesHasBeenSet;
}

vector<string> DiDataSourceTke::GetExcludeNamespaces() const
{
    return m_excludeNamespaces;
}

void DiDataSourceTke::SetExcludeNamespaces(const vector<string>& _excludeNamespaces)
{
    m_excludeNamespaces = _excludeNamespaces;
    m_excludeNamespacesHasBeenSet = true;
}

bool DiDataSourceTke::ExcludeNamespacesHasBeenSet() const
{
    return m_excludeNamespacesHasBeenSet;
}

vector<string> DiDataSourceTke::GetPodLabelKeys() const
{
    return m_podLabelKeys;
}

void DiDataSourceTke::SetPodLabelKeys(const vector<string>& _podLabelKeys)
{
    m_podLabelKeys = _podLabelKeys;
    m_podLabelKeysHasBeenSet = true;
}

bool DiDataSourceTke::PodLabelKeysHasBeenSet() const
{
    return m_podLabelKeysHasBeenSet;
}

vector<string> DiDataSourceTke::GetPodLabelValues() const
{
    return m_podLabelValues;
}

void DiDataSourceTke::SetPodLabelValues(const vector<string>& _podLabelValues)
{
    m_podLabelValues = _podLabelValues;
    m_podLabelValuesHasBeenSet = true;
}

bool DiDataSourceTke::PodLabelValuesHasBeenSet() const
{
    return m_podLabelValuesHasBeenSet;
}

string DiDataSourceTke::GetContainerName() const
{
    return m_containerName;
}

void DiDataSourceTke::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool DiDataSourceTke::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string DiDataSourceTke::GetConfigContent() const
{
    return m_configContent;
}

void DiDataSourceTke::SetConfigContent(const string& _configContent)
{
    m_configContent = _configContent;
    m_configContentHasBeenSet = true;
}

bool DiDataSourceTke::ConfigContentHasBeenSet() const
{
    return m_configContentHasBeenSet;
}

string DiDataSourceTke::GetInputType() const
{
    return m_inputType;
}

void DiDataSourceTke::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool DiDataSourceTke::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string DiDataSourceTke::GetInputPath() const
{
    return m_inputPath;
}

void DiDataSourceTke::SetInputPath(const string& _inputPath)
{
    m_inputPath = _inputPath;
    m_inputPathHasBeenSet = true;
}

bool DiDataSourceTke::InputPathHasBeenSet() const
{
    return m_inputPathHasBeenSet;
}

