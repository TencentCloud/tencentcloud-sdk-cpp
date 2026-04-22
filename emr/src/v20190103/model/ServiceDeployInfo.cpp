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

#include <tencentcloud/emr/v20190103/model/ServiceDeployInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ServiceDeployInfo::ServiceDeployInfo() :
    m_serviceNameHasBeenSet(false),
    m_componentDeployInfoListHasBeenSet(false)
{
}

CoreInternalOutcome ServiceDeployInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDeployInfo.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("ComponentDeployInfoList") && !value["ComponentDeployInfoList"].IsNull())
    {
        if (!value["ComponentDeployInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceDeployInfo.ComponentDeployInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["ComponentDeployInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComponentDeployInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_componentDeployInfoList.push_back(item);
        }
        m_componentDeployInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceDeployInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_componentDeployInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentDeployInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_componentDeployInfoList.begin(); itr != m_componentDeployInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ServiceDeployInfo::GetServiceName() const
{
    return m_serviceName;
}

void ServiceDeployInfo::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ServiceDeployInfo::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

vector<ComponentDeployInfo> ServiceDeployInfo::GetComponentDeployInfoList() const
{
    return m_componentDeployInfoList;
}

void ServiceDeployInfo::SetComponentDeployInfoList(const vector<ComponentDeployInfo>& _componentDeployInfoList)
{
    m_componentDeployInfoList = _componentDeployInfoList;
    m_componentDeployInfoListHasBeenSet = true;
}

bool ServiceDeployInfo::ComponentDeployInfoListHasBeenSet() const
{
    return m_componentDeployInfoListHasBeenSet;
}

