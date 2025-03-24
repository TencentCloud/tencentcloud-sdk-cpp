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

#include <tencentcloud/chc/v20230418/model/ModelVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

ModelVersion::ModelVersion() :
    m_devModelHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome ModelVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DevModel") && !value["DevModel"].IsNull())
    {
        if (!value["DevModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersion.DevModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devModel = string(value["DevModel"].GetString());
        m_devModelHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersion.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_devModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devModel.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

}


string ModelVersion::GetDevModel() const
{
    return m_devModel;
}

void ModelVersion::SetDevModel(const string& _devModel)
{
    m_devModel = _devModel;
    m_devModelHasBeenSet = true;
}

bool ModelVersion::DevModelHasBeenSet() const
{
    return m_devModelHasBeenSet;
}

string ModelVersion::GetVersion() const
{
    return m_version;
}

void ModelVersion::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ModelVersion::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

