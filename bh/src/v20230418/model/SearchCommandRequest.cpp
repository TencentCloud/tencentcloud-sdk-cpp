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

#include <tencentcloud/bh/v20230418/model/SearchCommandRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

SearchCommandRequest::SearchCommandRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_realNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_cmdHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_auditActionHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string SearchCommandRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_realNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_realName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cmd.c_str(), allocator).Move(), allocator);
    }

    if (m_encodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encoding";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_encoding, allocator);
    }

    if (m_auditActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_auditAction.begin(); itr != m_auditAction.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchCommandRequest::GetStartTime() const
{
    return m_startTime;
}

void SearchCommandRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SearchCommandRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SearchCommandRequest::GetEndTime() const
{
    return m_endTime;
}

void SearchCommandRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SearchCommandRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string SearchCommandRequest::GetUserName() const
{
    return m_userName;
}

void SearchCommandRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool SearchCommandRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string SearchCommandRequest::GetRealName() const
{
    return m_realName;
}

void SearchCommandRequest::SetRealName(const string& _realName)
{
    m_realName = _realName;
    m_realNameHasBeenSet = true;
}

bool SearchCommandRequest::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
}

string SearchCommandRequest::GetInstanceId() const
{
    return m_instanceId;
}

void SearchCommandRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SearchCommandRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SearchCommandRequest::GetDeviceName() const
{
    return m_deviceName;
}

void SearchCommandRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool SearchCommandRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string SearchCommandRequest::GetPublicIp() const
{
    return m_publicIp;
}

void SearchCommandRequest::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool SearchCommandRequest::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string SearchCommandRequest::GetPrivateIp() const
{
    return m_privateIp;
}

void SearchCommandRequest::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool SearchCommandRequest::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string SearchCommandRequest::GetCmd() const
{
    return m_cmd;
}

void SearchCommandRequest::SetCmd(const string& _cmd)
{
    m_cmd = _cmd;
    m_cmdHasBeenSet = true;
}

bool SearchCommandRequest::CmdHasBeenSet() const
{
    return m_cmdHasBeenSet;
}

uint64_t SearchCommandRequest::GetEncoding() const
{
    return m_encoding;
}

void SearchCommandRequest::SetEncoding(const uint64_t& _encoding)
{
    m_encoding = _encoding;
    m_encodingHasBeenSet = true;
}

bool SearchCommandRequest::EncodingHasBeenSet() const
{
    return m_encodingHasBeenSet;
}

vector<uint64_t> SearchCommandRequest::GetAuditAction() const
{
    return m_auditAction;
}

void SearchCommandRequest::SetAuditAction(const vector<uint64_t>& _auditAction)
{
    m_auditAction = _auditAction;
    m_auditActionHasBeenSet = true;
}

bool SearchCommandRequest::AuditActionHasBeenSet() const
{
    return m_auditActionHasBeenSet;
}

uint64_t SearchCommandRequest::GetLimit() const
{
    return m_limit;
}

void SearchCommandRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchCommandRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t SearchCommandRequest::GetOffset() const
{
    return m_offset;
}

void SearchCommandRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SearchCommandRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


