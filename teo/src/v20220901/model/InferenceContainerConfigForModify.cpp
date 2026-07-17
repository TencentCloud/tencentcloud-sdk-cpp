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

#include <tencentcloud/teo/v20220901/model/InferenceContainerConfigForModify.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceContainerConfigForModify::InferenceContainerConfigForModify() :
    m_imageTypeHasBeenSet(false),
    m_tcrRepositoryConfigHasBeenSet(false),
    m_startupCommandHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false)
{
}

CoreInternalOutcome InferenceContainerConfigForModify::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageType") && !value["ImageType"].IsNull())
    {
        if (!value["ImageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceContainerConfigForModify.ImageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageType = string(value["ImageType"].GetString());
        m_imageTypeHasBeenSet = true;
    }

    if (value.HasMember("TcrRepositoryConfig") && !value["TcrRepositoryConfig"].IsNull())
    {
        if (!value["TcrRepositoryConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceContainerConfigForModify.TcrRepositoryConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tcrRepositoryConfig.Deserialize(value["TcrRepositoryConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tcrRepositoryConfigHasBeenSet = true;
    }

    if (value.HasMember("StartupCommand") && !value["StartupCommand"].IsNull())
    {
        if (!value["StartupCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceContainerConfigForModify.StartupCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startupCommand = string(value["StartupCommand"].GetString());
        m_startupCommandHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentVariables") && !value["EnvironmentVariables"].IsNull())
    {
        if (!value["EnvironmentVariables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InferenceContainerConfigForModify.EnvironmentVariables` is not array type"));

        const rapidjson::Value &tmpValue = value["EnvironmentVariables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InferenceEnvironmentVariable item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_environmentVariables.push_back(item);
        }
        m_environmentVariablesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceContainerConfigForModify::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageType.c_str(), allocator).Move(), allocator);
    }

    if (m_tcrRepositoryConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcrRepositoryConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tcrRepositoryConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_startupCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartupCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startupCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentVariablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentVariables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_environmentVariables.begin(); itr != m_environmentVariables.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InferenceContainerConfigForModify::GetImageType() const
{
    return m_imageType;
}

void InferenceContainerConfigForModify::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool InferenceContainerConfigForModify::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

InferenceTCRRepositoryConfig InferenceContainerConfigForModify::GetTcrRepositoryConfig() const
{
    return m_tcrRepositoryConfig;
}

void InferenceContainerConfigForModify::SetTcrRepositoryConfig(const InferenceTCRRepositoryConfig& _tcrRepositoryConfig)
{
    m_tcrRepositoryConfig = _tcrRepositoryConfig;
    m_tcrRepositoryConfigHasBeenSet = true;
}

bool InferenceContainerConfigForModify::TcrRepositoryConfigHasBeenSet() const
{
    return m_tcrRepositoryConfigHasBeenSet;
}

string InferenceContainerConfigForModify::GetStartupCommand() const
{
    return m_startupCommand;
}

void InferenceContainerConfigForModify::SetStartupCommand(const string& _startupCommand)
{
    m_startupCommand = _startupCommand;
    m_startupCommandHasBeenSet = true;
}

bool InferenceContainerConfigForModify::StartupCommandHasBeenSet() const
{
    return m_startupCommandHasBeenSet;
}

vector<InferenceEnvironmentVariable> InferenceContainerConfigForModify::GetEnvironmentVariables() const
{
    return m_environmentVariables;
}

void InferenceContainerConfigForModify::SetEnvironmentVariables(const vector<InferenceEnvironmentVariable>& _environmentVariables)
{
    m_environmentVariables = _environmentVariables;
    m_environmentVariablesHasBeenSet = true;
}

bool InferenceContainerConfigForModify::EnvironmentVariablesHasBeenSet() const
{
    return m_environmentVariablesHasBeenSet;
}

