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

#include <tencentcloud/scf/v20180416/model/VersionWeight.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

VersionWeight::VersionWeight() :
    m_versionHasBeenSet(false),
    m_weightHasBeenSet(false)
{
}

CoreInternalOutcome VersionWeight::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionWeight.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VersionWeight.Weight` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetDouble();
        m_weightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VersionWeight::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

}


string VersionWeight::GetVersion() const
{
    return m_version;
}

void VersionWeight::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool VersionWeight::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

double VersionWeight::GetWeight() const
{
    return m_weight;
}

void VersionWeight::SetWeight(const double& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool VersionWeight::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

