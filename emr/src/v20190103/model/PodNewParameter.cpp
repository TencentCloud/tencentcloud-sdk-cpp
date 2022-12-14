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

#include <tencentcloud/emr/v20190103/model/PodNewParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

PodNewParameter::PodNewParameter() :
    m_instanceIdHasBeenSet(false),
    m_configHasBeenSet(false),
    m_parameterHasBeenSet(false)
{
}

CoreInternalOutcome PodNewParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodNewParameter.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodNewParameter.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (value.HasMember("Parameter") && !value["Parameter"].IsNull())
    {
        if (!value["Parameter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodNewParameter.Parameter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameter = string(value["Parameter"].GetString());
        m_parameterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PodNewParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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


string PodNewParameter::GetInstanceId() const
{
    return m_instanceId;
}

void PodNewParameter::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PodNewParameter::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string PodNewParameter::GetConfig() const
{
    return m_config;
}

void PodNewParameter::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool PodNewParameter::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string PodNewParameter::GetParameter() const
{
    return m_parameter;
}

void PodNewParameter::SetParameter(const string& _parameter)
{
    m_parameter = _parameter;
    m_parameterHasBeenSet = true;
}

bool PodNewParameter::ParameterHasBeenSet() const
{
    return m_parameterHasBeenSet;
}

