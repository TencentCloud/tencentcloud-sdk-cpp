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

#include <tencentcloud/es/v20180416/model/DiSourceTke.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DiSourceTke::DiSourceTke() :
    m_vpcIdHasBeenSet(false),
    m_tkeIdHasBeenSet(false),
    m_includeNamespacesHasBeenSet(false),
    m_excludeNamespacesHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_logFiltersHasBeenSet(false),
    m_configContentHasBeenSet(false),
    m_podLabelHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_inputPathHasBeenSet(false)
{
}

CoreInternalOutcome DiSourceTke::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiSourceTke.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("TkeId") && !value["TkeId"].IsNull())
    {
        if (!value["TkeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiSourceTke.TkeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tkeId = string(value["TkeId"].GetString());
        m_tkeIdHasBeenSet = true;
    }

    if (value.HasMember("IncludeNamespaces") && !value["IncludeNamespaces"].IsNull())
    {
        if (!value["IncludeNamespaces"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiSourceTke.IncludeNamespaces` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DiSourceTke.ExcludeNamespaces` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludeNamespaces"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeNamespaces.push_back((*itr).GetString());
        }
        m_excludeNamespacesHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiSourceTke.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("LogFilters") && !value["LogFilters"].IsNull())
    {
        if (!value["LogFilters"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiSourceTke.LogFilters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logFilters = string(value["LogFilters"].GetString());
        m_logFiltersHasBeenSet = true;
    }

    if (value.HasMember("ConfigContent") && !value["ConfigContent"].IsNull())
    {
        if (!value["ConfigContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiSourceTke.ConfigContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configContent = string(value["ConfigContent"].GetString());
        m_configContentHasBeenSet = true;
    }

    if (value.HasMember("PodLabel") && !value["PodLabel"].IsNull())
    {
        if (!value["PodLabel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiSourceTke.PodLabel` is not array type"));

        const rapidjson::Value &tmpValue = value["PodLabel"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiSourceTkePodLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_podLabel.push_back(item);
        }
        m_podLabelHasBeenSet = true;
    }

    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiSourceTke.InputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = string(value["InputType"].GetString());
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("InputPath") && !value["InputPath"].IsNull())
    {
        if (!value["InputPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiSourceTke.InputPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputPath = string(value["InputPath"].GetString());
        m_inputPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiSourceTke::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_logFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogFilters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logFilters.c_str(), allocator).Move(), allocator);
    }

    if (m_configContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configContent.c_str(), allocator).Move(), allocator);
    }

    if (m_podLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_podLabel.begin(); itr != m_podLabel.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DiSourceTke::GetVpcId() const
{
    return m_vpcId;
}

void DiSourceTke::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DiSourceTke::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DiSourceTke::GetTkeId() const
{
    return m_tkeId;
}

void DiSourceTke::SetTkeId(const string& _tkeId)
{
    m_tkeId = _tkeId;
    m_tkeIdHasBeenSet = true;
}

bool DiSourceTke::TkeIdHasBeenSet() const
{
    return m_tkeIdHasBeenSet;
}

vector<string> DiSourceTke::GetIncludeNamespaces() const
{
    return m_includeNamespaces;
}

void DiSourceTke::SetIncludeNamespaces(const vector<string>& _includeNamespaces)
{
    m_includeNamespaces = _includeNamespaces;
    m_includeNamespacesHasBeenSet = true;
}

bool DiSourceTke::IncludeNamespacesHasBeenSet() const
{
    return m_includeNamespacesHasBeenSet;
}

vector<string> DiSourceTke::GetExcludeNamespaces() const
{
    return m_excludeNamespaces;
}

void DiSourceTke::SetExcludeNamespaces(const vector<string>& _excludeNamespaces)
{
    m_excludeNamespaces = _excludeNamespaces;
    m_excludeNamespacesHasBeenSet = true;
}

bool DiSourceTke::ExcludeNamespacesHasBeenSet() const
{
    return m_excludeNamespacesHasBeenSet;
}

string DiSourceTke::GetContainerName() const
{
    return m_containerName;
}

void DiSourceTke::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool DiSourceTke::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string DiSourceTke::GetLogFilters() const
{
    return m_logFilters;
}

void DiSourceTke::SetLogFilters(const string& _logFilters)
{
    m_logFilters = _logFilters;
    m_logFiltersHasBeenSet = true;
}

bool DiSourceTke::LogFiltersHasBeenSet() const
{
    return m_logFiltersHasBeenSet;
}

string DiSourceTke::GetConfigContent() const
{
    return m_configContent;
}

void DiSourceTke::SetConfigContent(const string& _configContent)
{
    m_configContent = _configContent;
    m_configContentHasBeenSet = true;
}

bool DiSourceTke::ConfigContentHasBeenSet() const
{
    return m_configContentHasBeenSet;
}

vector<DiSourceTkePodLabel> DiSourceTke::GetPodLabel() const
{
    return m_podLabel;
}

void DiSourceTke::SetPodLabel(const vector<DiSourceTkePodLabel>& _podLabel)
{
    m_podLabel = _podLabel;
    m_podLabelHasBeenSet = true;
}

bool DiSourceTke::PodLabelHasBeenSet() const
{
    return m_podLabelHasBeenSet;
}

string DiSourceTke::GetInputType() const
{
    return m_inputType;
}

void DiSourceTke::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool DiSourceTke::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string DiSourceTke::GetInputPath() const
{
    return m_inputPath;
}

void DiSourceTke::SetInputPath(const string& _inputPath)
{
    m_inputPath = _inputPath;
    m_inputPathHasBeenSet = true;
}

bool DiSourceTke::InputPathHasBeenSet() const
{
    return m_inputPathHasBeenSet;
}

