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

#include <tencentcloud/dasb/v20191018/model/SearchFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

SearchFileRequest::SearchFileRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_realNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_auditActionHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string SearchFileRequest::ToJsonString() const
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

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_method.begin(); itr != m_method.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
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


string SearchFileRequest::GetStartTime() const
{
    return m_startTime;
}

void SearchFileRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SearchFileRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SearchFileRequest::GetEndTime() const
{
    return m_endTime;
}

void SearchFileRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SearchFileRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string SearchFileRequest::GetUserName() const
{
    return m_userName;
}

void SearchFileRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool SearchFileRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string SearchFileRequest::GetRealName() const
{
    return m_realName;
}

void SearchFileRequest::SetRealName(const string& _realName)
{
    m_realName = _realName;
    m_realNameHasBeenSet = true;
}

bool SearchFileRequest::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
}

string SearchFileRequest::GetInstanceId() const
{
    return m_instanceId;
}

void SearchFileRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SearchFileRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SearchFileRequest::GetDeviceName() const
{
    return m_deviceName;
}

void SearchFileRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool SearchFileRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string SearchFileRequest::GetPublicIp() const
{
    return m_publicIp;
}

void SearchFileRequest::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool SearchFileRequest::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string SearchFileRequest::GetPrivateIp() const
{
    return m_privateIp;
}

void SearchFileRequest::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool SearchFileRequest::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

vector<uint64_t> SearchFileRequest::GetMethod() const
{
    return m_method;
}

void SearchFileRequest::SetMethod(const vector<uint64_t>& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool SearchFileRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string SearchFileRequest::GetFileName() const
{
    return m_fileName;
}

void SearchFileRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool SearchFileRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

vector<uint64_t> SearchFileRequest::GetAuditAction() const
{
    return m_auditAction;
}

void SearchFileRequest::SetAuditAction(const vector<uint64_t>& _auditAction)
{
    m_auditAction = _auditAction;
    m_auditActionHasBeenSet = true;
}

bool SearchFileRequest::AuditActionHasBeenSet() const
{
    return m_auditActionHasBeenSet;
}

uint64_t SearchFileRequest::GetLimit() const
{
    return m_limit;
}

void SearchFileRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchFileRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t SearchFileRequest::GetOffset() const
{
    return m_offset;
}

void SearchFileRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SearchFileRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


