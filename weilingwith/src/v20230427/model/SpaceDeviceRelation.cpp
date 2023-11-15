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

#include <tencentcloud/weilingwith/v20230427/model/SpaceDeviceRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

SpaceDeviceRelation::SpaceDeviceRelation() :
    m_deviceIdHasBeenSet(false),
    m_elementIdHasBeenSet(false)
{
}

CoreInternalOutcome SpaceDeviceRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceDeviceRelation.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("ElementId") && !value["ElementId"].IsNull())
    {
        if (!value["ElementId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceDeviceRelation.ElementId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementId = string(value["ElementId"].GetString());
        m_elementIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpaceDeviceRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_elementIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elementId.c_str(), allocator).Move(), allocator);
    }

}


string SpaceDeviceRelation::GetDeviceId() const
{
    return m_deviceId;
}

void SpaceDeviceRelation::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool SpaceDeviceRelation::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string SpaceDeviceRelation::GetElementId() const
{
    return m_elementId;
}

void SpaceDeviceRelation::SetElementId(const string& _elementId)
{
    m_elementId = _elementId;
    m_elementIdHasBeenSet = true;
}

bool SpaceDeviceRelation::ElementIdHasBeenSet() const
{
    return m_elementIdHasBeenSet;
}

