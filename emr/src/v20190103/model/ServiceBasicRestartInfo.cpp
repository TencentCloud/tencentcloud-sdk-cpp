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

#include <tencentcloud/emr/v20190103/model/ServiceBasicRestartInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ServiceBasicRestartInfo::ServiceBasicRestartInfo() :
    m_serviceNameHasBeenSet(false),
    m_componentInfoListHasBeenSet(false)
{
}

CoreInternalOutcome ServiceBasicRestartInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceBasicRestartInfo.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("ComponentInfoList") && !value["ComponentInfoList"].IsNull())
    {
        if (!value["ComponentInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceBasicRestartInfo.ComponentInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["ComponentInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComponentBasicRestartInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_componentInfoList.push_back(item);
        }
        m_componentInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceBasicRestartInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_componentInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_componentInfoList.begin(); itr != m_componentInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ServiceBasicRestartInfo::GetServiceName() const
{
    return m_serviceName;
}

void ServiceBasicRestartInfo::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ServiceBasicRestartInfo::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

vector<ComponentBasicRestartInfo> ServiceBasicRestartInfo::GetComponentInfoList() const
{
    return m_componentInfoList;
}

void ServiceBasicRestartInfo::SetComponentInfoList(const vector<ComponentBasicRestartInfo>& _componentInfoList)
{
    m_componentInfoList = _componentInfoList;
    m_componentInfoListHasBeenSet = true;
}

bool ServiceBasicRestartInfo::ComponentInfoListHasBeenSet() const
{
    return m_componentInfoListHasBeenSet;
}

