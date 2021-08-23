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

#include <tencentcloud/lighthouse/v20200324/model/InstanceTrafficPackage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

InstanceTrafficPackage::InstanceTrafficPackage() :
    m_instanceIdHasBeenSet(false),
    m_trafficPackageSetHasBeenSet(false)
{
}

CoreInternalOutcome InstanceTrafficPackage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTrafficPackage.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("TrafficPackageSet") && !value["TrafficPackageSet"].IsNull())
    {
        if (!value["TrafficPackageSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceTrafficPackage.TrafficPackageSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TrafficPackageSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrafficPackage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_trafficPackageSet.push_back(item);
        }
        m_trafficPackageSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceTrafficPackage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficPackageSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficPackageSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_trafficPackageSet.begin(); itr != m_trafficPackageSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InstanceTrafficPackage::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceTrafficPackage::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceTrafficPackage::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<TrafficPackage> InstanceTrafficPackage::GetTrafficPackageSet() const
{
    return m_trafficPackageSet;
}

void InstanceTrafficPackage::SetTrafficPackageSet(const vector<TrafficPackage>& _trafficPackageSet)
{
    m_trafficPackageSet = _trafficPackageSet;
    m_trafficPackageSetHasBeenSet = true;
}

bool InstanceTrafficPackage::TrafficPackageSetHasBeenSet() const
{
    return m_trafficPackageSetHasBeenSet;
}

