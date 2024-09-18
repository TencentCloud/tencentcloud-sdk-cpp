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

#include <tencentcloud/cdb/v20170320/model/SwitchDBInstanceMasterSlaveRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

SwitchDBInstanceMasterSlaveRequest::SwitchDBInstanceMasterSlaveRequest() :
    m_instanceIdHasBeenSet(false),
    m_dstSlaveHasBeenSet(false),
    m_forceSwitchHasBeenSet(false),
    m_waitSwitchHasBeenSet(false),
    m_dstNodeIdHasBeenSet(false)
{
}

string SwitchDBInstanceMasterSlaveRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstSlaveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstSlave";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstSlave.c_str(), allocator).Move(), allocator);
    }

    if (m_forceSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceSwitch, allocator);
    }

    if (m_waitSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_waitSwitch, allocator);
    }

    if (m_dstNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstNodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstNodeId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SwitchDBInstanceMasterSlaveRequest::GetInstanceId() const
{
    return m_instanceId;
}

void SwitchDBInstanceMasterSlaveRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SwitchDBInstanceMasterSlaveRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SwitchDBInstanceMasterSlaveRequest::GetDstSlave() const
{
    return m_dstSlave;
}

void SwitchDBInstanceMasterSlaveRequest::SetDstSlave(const string& _dstSlave)
{
    m_dstSlave = _dstSlave;
    m_dstSlaveHasBeenSet = true;
}

bool SwitchDBInstanceMasterSlaveRequest::DstSlaveHasBeenSet() const
{
    return m_dstSlaveHasBeenSet;
}

bool SwitchDBInstanceMasterSlaveRequest::GetForceSwitch() const
{
    return m_forceSwitch;
}

void SwitchDBInstanceMasterSlaveRequest::SetForceSwitch(const bool& _forceSwitch)
{
    m_forceSwitch = _forceSwitch;
    m_forceSwitchHasBeenSet = true;
}

bool SwitchDBInstanceMasterSlaveRequest::ForceSwitchHasBeenSet() const
{
    return m_forceSwitchHasBeenSet;
}

bool SwitchDBInstanceMasterSlaveRequest::GetWaitSwitch() const
{
    return m_waitSwitch;
}

void SwitchDBInstanceMasterSlaveRequest::SetWaitSwitch(const bool& _waitSwitch)
{
    m_waitSwitch = _waitSwitch;
    m_waitSwitchHasBeenSet = true;
}

bool SwitchDBInstanceMasterSlaveRequest::WaitSwitchHasBeenSet() const
{
    return m_waitSwitchHasBeenSet;
}

string SwitchDBInstanceMasterSlaveRequest::GetDstNodeId() const
{
    return m_dstNodeId;
}

void SwitchDBInstanceMasterSlaveRequest::SetDstNodeId(const string& _dstNodeId)
{
    m_dstNodeId = _dstNodeId;
    m_dstNodeIdHasBeenSet = true;
}

bool SwitchDBInstanceMasterSlaveRequest::DstNodeIdHasBeenSet() const
{
    return m_dstNodeIdHasBeenSet;
}


