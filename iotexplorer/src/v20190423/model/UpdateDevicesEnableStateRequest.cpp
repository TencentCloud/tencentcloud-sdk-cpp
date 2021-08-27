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

#include <tencentcloud/iotexplorer/v20190423/model/UpdateDevicesEnableStateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

UpdateDevicesEnableStateRequest::UpdateDevicesEnableStateRequest() :
    m_devicesItemsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string UpdateDevicesEnableStateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_devicesItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevicesItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_devicesItems.begin(); itr != m_devicesItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<DevicesItem> UpdateDevicesEnableStateRequest::GetDevicesItems() const
{
    return m_devicesItems;
}

void UpdateDevicesEnableStateRequest::SetDevicesItems(const vector<DevicesItem>& _devicesItems)
{
    m_devicesItems = _devicesItems;
    m_devicesItemsHasBeenSet = true;
}

bool UpdateDevicesEnableStateRequest::DevicesItemsHasBeenSet() const
{
    return m_devicesItemsHasBeenSet;
}

int64_t UpdateDevicesEnableStateRequest::GetStatus() const
{
    return m_status;
}

void UpdateDevicesEnableStateRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpdateDevicesEnableStateRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


