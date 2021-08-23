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

#include <tencentcloud/emr/v20190103/model/PodParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

PodParameter::PodParameter() :
    m_clusterIdHasBeenSet(false),
    m_configHasBeenSet(false),
    m_parameterHasBeenSet(false)
{
}

CoreInternalOutcome PodParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodParameter.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodParameter.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (value.HasMember("Parameter") && !value["Parameter"].IsNull())
    {
        if (!value["Parameter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodParameter.Parameter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameter = string(value["Parameter"].GetString());
        m_parameterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PodParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_parameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameter.c_str(), allocator).Move(), allocator);
    }

}


string PodParameter::GetClusterId() const
{
    return m_clusterId;
}

void PodParameter::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool PodParameter::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string PodParameter::GetConfig() const
{
    return m_config;
}

void PodParameter::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool PodParameter::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string PodParameter::GetParameter() const
{
    return m_parameter;
}

void PodParameter::SetParameter(const string& _parameter)
{
    m_parameter = _parameter;
    m_parameterHasBeenSet = true;
}

bool PodParameter::ParameterHasBeenSet() const
{
    return m_parameterHasBeenSet;
}

