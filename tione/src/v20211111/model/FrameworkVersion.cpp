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

#include <tencentcloud/tione/v20211111/model/FrameworkVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

FrameworkVersion::FrameworkVersion() :
    m_versionHasBeenSet(false),
    m_trainingModesHasBeenSet(false)
{
}

CoreInternalOutcome FrameworkVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrameworkVersion.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("TrainingModes") && !value["TrainingModes"].IsNull())
    {
        if (!value["TrainingModes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FrameworkVersion.TrainingModes` is not array type"));

        const rapidjson::Value &tmpValue = value["TrainingModes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_trainingModes.push_back((*itr).GetString());
        }
        m_trainingModesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FrameworkVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_trainingModes.begin(); itr != m_trainingModes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string FrameworkVersion::GetVersion() const
{
    return m_version;
}

void FrameworkVersion::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool FrameworkVersion::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

vector<string> FrameworkVersion::GetTrainingModes() const
{
    return m_trainingModes;
}

void FrameworkVersion::SetTrainingModes(const vector<string>& _trainingModes)
{
    m_trainingModes = _trainingModes;
    m_trainingModesHasBeenSet = true;
}

bool FrameworkVersion::TrainingModesHasBeenSet() const
{
    return m_trainingModesHasBeenSet;
}

