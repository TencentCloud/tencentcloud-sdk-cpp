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

#include <tencentcloud/adp/v20260520/model/ConnectorKnowledgeScope.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConnectorKnowledgeScope::ConnectorKnowledgeScope() :
    m_enabledHasBeenSet(false),
    m_resourceListHasBeenSet(false)
{
}

CoreInternalOutcome ConnectorKnowledgeScope::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorKnowledgeScope.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("ResourceList") && !value["ResourceList"].IsNull())
    {
        if (!value["ResourceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConnectorKnowledgeScope.ResourceList` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConnectorResource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceList.push_back(item);
        }
        m_resourceListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConnectorKnowledgeScope::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_resourceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceList.begin(); itr != m_resourceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool ConnectorKnowledgeScope::GetEnabled() const
{
    return m_enabled;
}

void ConnectorKnowledgeScope::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ConnectorKnowledgeScope::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<ConnectorResource> ConnectorKnowledgeScope::GetResourceList() const
{
    return m_resourceList;
}

void ConnectorKnowledgeScope::SetResourceList(const vector<ConnectorResource>& _resourceList)
{
    m_resourceList = _resourceList;
    m_resourceListHasBeenSet = true;
}

bool ConnectorKnowledgeScope::ResourceListHasBeenSet() const
{
    return m_resourceListHasBeenSet;
}

