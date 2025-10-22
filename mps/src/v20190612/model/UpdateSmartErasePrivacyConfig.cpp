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

#include <tencentcloud/mps/v20190612/model/UpdateSmartErasePrivacyConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

UpdateSmartErasePrivacyConfig::UpdateSmartErasePrivacyConfig() :
    m_privacyModelHasBeenSet(false),
    m_privacyTargetsHasBeenSet(false)
{
}

CoreInternalOutcome UpdateSmartErasePrivacyConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrivacyModel") && !value["PrivacyModel"].IsNull())
    {
        if (!value["PrivacyModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateSmartErasePrivacyConfig.PrivacyModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privacyModel = string(value["PrivacyModel"].GetString());
        m_privacyModelHasBeenSet = true;
    }

    if (value.HasMember("PrivacyTargets") && !value["PrivacyTargets"].IsNull())
    {
        if (!value["PrivacyTargets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpdateSmartErasePrivacyConfig.PrivacyTargets` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivacyTargets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privacyTargets.push_back((*itr).GetString());
        }
        m_privacyTargetsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateSmartErasePrivacyConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_privacyModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivacyModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privacyModel.c_str(), allocator).Move(), allocator);
    }

    if (m_privacyTargetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivacyTargets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privacyTargets.begin(); itr != m_privacyTargets.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string UpdateSmartErasePrivacyConfig::GetPrivacyModel() const
{
    return m_privacyModel;
}

void UpdateSmartErasePrivacyConfig::SetPrivacyModel(const string& _privacyModel)
{
    m_privacyModel = _privacyModel;
    m_privacyModelHasBeenSet = true;
}

bool UpdateSmartErasePrivacyConfig::PrivacyModelHasBeenSet() const
{
    return m_privacyModelHasBeenSet;
}

vector<string> UpdateSmartErasePrivacyConfig::GetPrivacyTargets() const
{
    return m_privacyTargets;
}

void UpdateSmartErasePrivacyConfig::SetPrivacyTargets(const vector<string>& _privacyTargets)
{
    m_privacyTargets = _privacyTargets;
    m_privacyTargetsHasBeenSet = true;
}

bool UpdateSmartErasePrivacyConfig::PrivacyTargetsHasBeenSet() const
{
    return m_privacyTargetsHasBeenSet;
}

