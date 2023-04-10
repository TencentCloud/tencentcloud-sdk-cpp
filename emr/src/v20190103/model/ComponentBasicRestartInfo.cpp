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

#include <tencentcloud/emr/v20190103/model/ComponentBasicRestartInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ComponentBasicRestartInfo::ComponentBasicRestartInfo() :
    m_componentNameHasBeenSet(false),
    m_ipListHasBeenSet(false)
{
}

CoreInternalOutcome ComponentBasicRestartInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComponentName") && !value["ComponentName"].IsNull())
    {
        if (!value["ComponentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentBasicRestartInfo.ComponentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentName = string(value["ComponentName"].GetString());
        m_componentNameHasBeenSet = true;
    }

    if (value.HasMember("IpList") && !value["IpList"].IsNull())
    {
        if (!value["IpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComponentBasicRestartInfo.IpList` is not array type"));

        const rapidjson::Value &tmpValue = value["IpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipList.push_back((*itr).GetString());
        }
        m_ipListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComponentBasicRestartInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_componentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentName.c_str(), allocator).Move(), allocator);
    }

    if (m_ipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipList.begin(); itr != m_ipList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ComponentBasicRestartInfo::GetComponentName() const
{
    return m_componentName;
}

void ComponentBasicRestartInfo::SetComponentName(const string& _componentName)
{
    m_componentName = _componentName;
    m_componentNameHasBeenSet = true;
}

bool ComponentBasicRestartInfo::ComponentNameHasBeenSet() const
{
    return m_componentNameHasBeenSet;
}

vector<string> ComponentBasicRestartInfo::GetIpList() const
{
    return m_ipList;
}

void ComponentBasicRestartInfo::SetIpList(const vector<string>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool ComponentBasicRestartInfo::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}

