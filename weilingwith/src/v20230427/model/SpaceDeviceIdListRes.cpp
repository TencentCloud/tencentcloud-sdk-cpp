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

#include <tencentcloud/weilingwith/v20230427/model/SpaceDeviceIdListRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

SpaceDeviceIdListRes::SpaceDeviceIdListRes() :
    m_deviceIdsHasBeenSet(false)
{
}

CoreInternalOutcome SpaceDeviceIdListRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceIds") && !value["DeviceIds"].IsNull())
    {
        if (!value["DeviceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpaceDeviceIdListRes.DeviceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["DeviceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_deviceIds.push_back((*itr).GetString());
        }
        m_deviceIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpaceDeviceIdListRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceIds.begin(); itr != m_deviceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> SpaceDeviceIdListRes::GetDeviceIds() const
{
    return m_deviceIds;
}

void SpaceDeviceIdListRes::SetDeviceIds(const vector<string>& _deviceIds)
{
    m_deviceIds = _deviceIds;
    m_deviceIdsHasBeenSet = true;
}

bool SpaceDeviceIdListRes::DeviceIdsHasBeenSet() const
{
    return m_deviceIdsHasBeenSet;
}

