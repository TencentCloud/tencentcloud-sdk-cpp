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

#include <tencentcloud/emr/v20190103/model/ComponentDeployInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ComponentDeployInfo::ComponentDeployInfo() :
    m_componentNameHasBeenSet(false),
    m_deployHostUuidListHasBeenSet(false)
{
}

CoreInternalOutcome ComponentDeployInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComponentName") && !value["ComponentName"].IsNull())
    {
        if (!value["ComponentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentDeployInfo.ComponentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentName = string(value["ComponentName"].GetString());
        m_componentNameHasBeenSet = true;
    }

    if (value.HasMember("DeployHostUuidList") && !value["DeployHostUuidList"].IsNull())
    {
        if (!value["DeployHostUuidList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComponentDeployInfo.DeployHostUuidList` is not array type"));

        const rapidjson::Value &tmpValue = value["DeployHostUuidList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_deployHostUuidList.push_back((*itr).GetString());
        }
        m_deployHostUuidListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComponentDeployInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_componentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentName.c_str(), allocator).Move(), allocator);
    }

    if (m_deployHostUuidListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployHostUuidList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deployHostUuidList.begin(); itr != m_deployHostUuidList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ComponentDeployInfo::GetComponentName() const
{
    return m_componentName;
}

void ComponentDeployInfo::SetComponentName(const string& _componentName)
{
    m_componentName = _componentName;
    m_componentNameHasBeenSet = true;
}

bool ComponentDeployInfo::ComponentNameHasBeenSet() const
{
    return m_componentNameHasBeenSet;
}

vector<string> ComponentDeployInfo::GetDeployHostUuidList() const
{
    return m_deployHostUuidList;
}

void ComponentDeployInfo::SetDeployHostUuidList(const vector<string>& _deployHostUuidList)
{
    m_deployHostUuidList = _deployHostUuidList;
    m_deployHostUuidListHasBeenSet = true;
}

bool ComponentDeployInfo::DeployHostUuidListHasBeenSet() const
{
    return m_deployHostUuidListHasBeenSet;
}

