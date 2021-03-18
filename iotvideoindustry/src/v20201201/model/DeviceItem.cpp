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

#include <tencentcloud/iotvideoindustry/v20201201/model/DeviceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace rapidjson;
using namespace std;

DeviceItem::DeviceItem() :
    m_deviceIdHasBeenSet(false)
{
}

CoreInternalOutcome DeviceItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceItem.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

}


string DeviceItem::GetDeviceId() const
{
    return m_deviceId;
}

void DeviceItem::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool DeviceItem::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

