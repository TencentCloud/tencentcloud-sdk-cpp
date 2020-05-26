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

#include <tencentcloud/trtc/v20190722/model/UserInformation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace rapidjson;
using namespace std;

UserInformation::UserInformation() :
    m_roomStrHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_joinTsHasBeenSet(false),
    m_leaveTsHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_sdkVersionHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_finishedHasBeenSet(false)
{
}

CoreInternalOutcome UserInformation::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RoomStr") && !value["RoomStr"].IsNull())
    {
        if (!value["RoomStr"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInformation.RoomStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomStr = string(value["RoomStr"].GetString());
        m_roomStrHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInformation.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("JoinTs") && !value["JoinTs"].IsNull())
    {
        if (!value["JoinTs"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `UserInformation.JoinTs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_joinTs = value["JoinTs"].GetUint64();
        m_joinTsHasBeenSet = true;
    }

    if (value.HasMember("LeaveTs") && !value["LeaveTs"].IsNull())
    {
        if (!value["LeaveTs"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `UserInformation.LeaveTs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_leaveTs = value["LeaveTs"].GetUint64();
        m_leaveTsHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInformation.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("SdkVersion") && !value["SdkVersion"].IsNull())
    {
        if (!value["SdkVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInformation.SdkVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkVersion = string(value["SdkVersion"].GetString());
        m_sdkVersionHasBeenSet = true;
    }

    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserInformation.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("Finished") && !value["Finished"].IsNull())
    {
        if (!value["Finished"].IsBool())
        {
            return CoreInternalOutcome(Error("response `UserInformation.Finished` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_finished = value["Finished"].GetBool();
        m_finishedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserInformation::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_roomStrHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoomStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_roomStr.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_joinTsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JoinTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_joinTs, allocator);
    }

    if (m_leaveTsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LeaveTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leaveTs, allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SdkVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sdkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_finishedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Finished";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finished, allocator);
    }

}


string UserInformation::GetRoomStr() const
{
    return m_roomStr;
}

void UserInformation::SetRoomStr(const string& _roomStr)
{
    m_roomStr = _roomStr;
    m_roomStrHasBeenSet = true;
}

bool UserInformation::RoomStrHasBeenSet() const
{
    return m_roomStrHasBeenSet;
}

string UserInformation::GetUserId() const
{
    return m_userId;
}

void UserInformation::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool UserInformation::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t UserInformation::GetJoinTs() const
{
    return m_joinTs;
}

void UserInformation::SetJoinTs(const uint64_t& _joinTs)
{
    m_joinTs = _joinTs;
    m_joinTsHasBeenSet = true;
}

bool UserInformation::JoinTsHasBeenSet() const
{
    return m_joinTsHasBeenSet;
}

uint64_t UserInformation::GetLeaveTs() const
{
    return m_leaveTs;
}

void UserInformation::SetLeaveTs(const uint64_t& _leaveTs)
{
    m_leaveTs = _leaveTs;
    m_leaveTsHasBeenSet = true;
}

bool UserInformation::LeaveTsHasBeenSet() const
{
    return m_leaveTsHasBeenSet;
}

string UserInformation::GetDeviceType() const
{
    return m_deviceType;
}

void UserInformation::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool UserInformation::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string UserInformation::GetSdkVersion() const
{
    return m_sdkVersion;
}

void UserInformation::SetSdkVersion(const string& _sdkVersion)
{
    m_sdkVersion = _sdkVersion;
    m_sdkVersionHasBeenSet = true;
}

bool UserInformation::SdkVersionHasBeenSet() const
{
    return m_sdkVersionHasBeenSet;
}

string UserInformation::GetClientIp() const
{
    return m_clientIp;
}

void UserInformation::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool UserInformation::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

bool UserInformation::GetFinished() const
{
    return m_finished;
}

void UserInformation::SetFinished(const bool& _finished)
{
    m_finished = _finished;
    m_finishedHasBeenSet = true;
}

bool UserInformation::FinishedHasBeenSet() const
{
    return m_finishedHasBeenSet;
}

