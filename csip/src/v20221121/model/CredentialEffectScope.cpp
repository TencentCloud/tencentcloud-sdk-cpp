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

#include <tencentcloud/csip/v20221121/model/CredentialEffectScope.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CredentialEffectScope::CredentialEffectScope() :
    m_excludeHasBeenSet(false),
    m_instancesHasBeenSet(false)
{
}

CoreInternalOutcome CredentialEffectScope::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Exclude") && !value["Exclude"].IsNull())
    {
        if (!value["Exclude"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialEffectScope.Exclude` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exclude = value["Exclude"].GetInt64();
        m_excludeHasBeenSet = true;
    }

    if (value.HasMember("Instances") && !value["Instances"].IsNull())
    {
        if (!value["Instances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CredentialEffectScope.Instances` is not array type"));

        const rapidjson::Value &tmpValue = value["Instances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instances.push_back((*itr).GetString());
        }
        m_instancesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CredentialEffectScope::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_excludeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exclude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exclude, allocator);
    }

    if (m_instancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instances.begin(); itr != m_instances.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t CredentialEffectScope::GetExclude() const
{
    return m_exclude;
}

void CredentialEffectScope::SetExclude(const int64_t& _exclude)
{
    m_exclude = _exclude;
    m_excludeHasBeenSet = true;
}

bool CredentialEffectScope::ExcludeHasBeenSet() const
{
    return m_excludeHasBeenSet;
}

vector<string> CredentialEffectScope::GetInstances() const
{
    return m_instances;
}

void CredentialEffectScope::SetInstances(const vector<string>& _instances)
{
    m_instances = _instances;
    m_instancesHasBeenSet = true;
}

bool CredentialEffectScope::InstancesHasBeenSet() const
{
    return m_instancesHasBeenSet;
}

