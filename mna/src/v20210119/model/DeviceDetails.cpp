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

#include <tencentcloud/mna/v20210119/model/DeviceDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

DeviceDetails::DeviceDetails() :
    m_deviceBaseInfoHasBeenSet(false),
    m_deviceNetInfoHasBeenSet(false)
{
}

CoreInternalOutcome DeviceDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceBaseInfo") && !value["DeviceBaseInfo"].IsNull())
    {
        if (!value["DeviceBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetails.DeviceBaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deviceBaseInfo.Deserialize(value["DeviceBaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deviceBaseInfoHasBeenSet = true;
    }

    if (value.HasMember("DeviceNetInfo") && !value["DeviceNetInfo"].IsNull())
    {
        if (!value["DeviceNetInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceDetails.DeviceNetInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["DeviceNetInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceNetInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deviceNetInfo.push_back(item);
        }
        m_deviceNetInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deviceBaseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deviceNetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceNetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deviceNetInfo.begin(); itr != m_deviceNetInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


DeviceBaseInfo DeviceDetails::GetDeviceBaseInfo() const
{
    return m_deviceBaseInfo;
}

void DeviceDetails::SetDeviceBaseInfo(const DeviceBaseInfo& _deviceBaseInfo)
{
    m_deviceBaseInfo = _deviceBaseInfo;
    m_deviceBaseInfoHasBeenSet = true;
}

bool DeviceDetails::DeviceBaseInfoHasBeenSet() const
{
    return m_deviceBaseInfoHasBeenSet;
}

vector<DeviceNetInfo> DeviceDetails::GetDeviceNetInfo() const
{
    return m_deviceNetInfo;
}

void DeviceDetails::SetDeviceNetInfo(const vector<DeviceNetInfo>& _deviceNetInfo)
{
    m_deviceNetInfo = _deviceNetInfo;
    m_deviceNetInfoHasBeenSet = true;
}

bool DeviceDetails::DeviceNetInfoHasBeenSet() const
{
    return m_deviceNetInfoHasBeenSet;
}

