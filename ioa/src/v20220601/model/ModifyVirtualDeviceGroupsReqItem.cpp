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

#include <tencentcloud/ioa/v20220601/model/ModifyVirtualDeviceGroupsReqItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

ModifyVirtualDeviceGroupsReqItem::ModifyVirtualDeviceGroupsReqItem() :
    m_deviceMidHasBeenSet(false),
    m_operationHasBeenSet(false)
{
}

CoreInternalOutcome ModifyVirtualDeviceGroupsReqItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceMid") && !value["DeviceMid"].IsNull())
    {
        if (!value["DeviceMid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyVirtualDeviceGroupsReqItem.DeviceMid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceMid = string(value["DeviceMid"].GetString());
        m_deviceMidHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyVirtualDeviceGroupsReqItem.Operation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operation = value["Operation"].GetInt64();
        m_operationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyVirtualDeviceGroupsReqItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceMidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceMid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceMid.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operation, allocator);
    }

}


string ModifyVirtualDeviceGroupsReqItem::GetDeviceMid() const
{
    return m_deviceMid;
}

void ModifyVirtualDeviceGroupsReqItem::SetDeviceMid(const string& _deviceMid)
{
    m_deviceMid = _deviceMid;
    m_deviceMidHasBeenSet = true;
}

bool ModifyVirtualDeviceGroupsReqItem::DeviceMidHasBeenSet() const
{
    return m_deviceMidHasBeenSet;
}

int64_t ModifyVirtualDeviceGroupsReqItem::GetOperation() const
{
    return m_operation;
}

void ModifyVirtualDeviceGroupsReqItem::SetOperation(const int64_t& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool ModifyVirtualDeviceGroupsReqItem::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

