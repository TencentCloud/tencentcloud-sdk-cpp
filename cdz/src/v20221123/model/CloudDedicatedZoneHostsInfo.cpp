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

#include <tencentcloud/cdz/v20221123/model/CloudDedicatedZoneHostsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdz::V20221123::Model;
using namespace std;

CloudDedicatedZoneHostsInfo::CloudDedicatedZoneHostsInfo() :
    m_hostUuidHasBeenSet(false),
    m_instancesInfoHasBeenSet(false)
{
}

CoreInternalOutcome CloudDedicatedZoneHostsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostUuid") && !value["HostUuid"].IsNull())
    {
        if (!value["HostUuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZoneHostsInfo.HostUuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostUuid = string(value["HostUuid"].GetString());
        m_hostUuidHasBeenSet = true;
    }

    if (value.HasMember("InstancesInfo") && !value["InstancesInfo"].IsNull())
    {
        if (!value["InstancesInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZoneHostsInfo.InstancesInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["InstancesInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instancesInfo.push_back((*itr).GetString());
        }
        m_instancesInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudDedicatedZoneHostsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_instancesInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancesInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instancesInfo.begin(); itr != m_instancesInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CloudDedicatedZoneHostsInfo::GetHostUuid() const
{
    return m_hostUuid;
}

void CloudDedicatedZoneHostsInfo::SetHostUuid(const string& _hostUuid)
{
    m_hostUuid = _hostUuid;
    m_hostUuidHasBeenSet = true;
}

bool CloudDedicatedZoneHostsInfo::HostUuidHasBeenSet() const
{
    return m_hostUuidHasBeenSet;
}

vector<string> CloudDedicatedZoneHostsInfo::GetInstancesInfo() const
{
    return m_instancesInfo;
}

void CloudDedicatedZoneHostsInfo::SetInstancesInfo(const vector<string>& _instancesInfo)
{
    m_instancesInfo = _instancesInfo;
    m_instancesInfoHasBeenSet = true;
}

bool CloudDedicatedZoneHostsInfo::InstancesInfoHasBeenSet() const
{
    return m_instancesInfoHasBeenSet;
}

