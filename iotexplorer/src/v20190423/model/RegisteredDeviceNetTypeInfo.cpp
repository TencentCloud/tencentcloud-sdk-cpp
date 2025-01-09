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

#include <tencentcloud/iotexplorer/v20190423/model/RegisteredDeviceNetTypeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

RegisteredDeviceNetTypeInfo::RegisteredDeviceNetTypeInfo() :
    m_normalDeviceNumHasBeenSet(false),
    m_bluetoothDeviceNumHasBeenSet(false)
{
}

CoreInternalOutcome RegisteredDeviceNetTypeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NormalDeviceNum") && !value["NormalDeviceNum"].IsNull())
    {
        if (!value["NormalDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegisteredDeviceNetTypeInfo.NormalDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_normalDeviceNum = value["NormalDeviceNum"].GetInt64();
        m_normalDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("BluetoothDeviceNum") && !value["BluetoothDeviceNum"].IsNull())
    {
        if (!value["BluetoothDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegisteredDeviceNetTypeInfo.BluetoothDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bluetoothDeviceNum = value["BluetoothDeviceNum"].GetInt64();
        m_bluetoothDeviceNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegisteredDeviceNetTypeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_normalDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_normalDeviceNum, allocator);
    }

    if (m_bluetoothDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BluetoothDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bluetoothDeviceNum, allocator);
    }

}


int64_t RegisteredDeviceNetTypeInfo::GetNormalDeviceNum() const
{
    return m_normalDeviceNum;
}

void RegisteredDeviceNetTypeInfo::SetNormalDeviceNum(const int64_t& _normalDeviceNum)
{
    m_normalDeviceNum = _normalDeviceNum;
    m_normalDeviceNumHasBeenSet = true;
}

bool RegisteredDeviceNetTypeInfo::NormalDeviceNumHasBeenSet() const
{
    return m_normalDeviceNumHasBeenSet;
}

int64_t RegisteredDeviceNetTypeInfo::GetBluetoothDeviceNum() const
{
    return m_bluetoothDeviceNum;
}

void RegisteredDeviceNetTypeInfo::SetBluetoothDeviceNum(const int64_t& _bluetoothDeviceNum)
{
    m_bluetoothDeviceNum = _bluetoothDeviceNum;
    m_bluetoothDeviceNumHasBeenSet = true;
}

bool RegisteredDeviceNetTypeInfo::BluetoothDeviceNumHasBeenSet() const
{
    return m_bluetoothDeviceNumHasBeenSet;
}

