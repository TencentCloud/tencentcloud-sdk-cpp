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

#include <tencentcloud/iotvideoindustry/v20201201/model/AllDeviceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

AllDeviceInfo::AllDeviceInfo() :
    m_deviceIdHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_extraInformationHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_groupPathHasBeenSet(false),
    m_deviceCodeHasBeenSet(false),
    m_isRecordHasBeenSet(false),
    m_recordableHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
}

CoreInternalOutcome AllDeviceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllDeviceInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AllDeviceInfo.DeviceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = value["DeviceType"].GetInt64();
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AllDeviceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AllDeviceInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExtraInformation") && !value["ExtraInformation"].IsNull())
    {
        if (!value["ExtraInformation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllDeviceInfo.ExtraInformation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInformation = string(value["ExtraInformation"].GetString());
        m_extraInformationHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllDeviceInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("GroupPath") && !value["GroupPath"].IsNull())
    {
        if (!value["GroupPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllDeviceInfo.GroupPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupPath = string(value["GroupPath"].GetString());
        m_groupPathHasBeenSet = true;
    }

    if (value.HasMember("DeviceCode") && !value["DeviceCode"].IsNull())
    {
        if (!value["DeviceCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllDeviceInfo.DeviceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCode = string(value["DeviceCode"].GetString());
        m_deviceCodeHasBeenSet = true;
    }

    if (value.HasMember("IsRecord") && !value["IsRecord"].IsNull())
    {
        if (!value["IsRecord"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AllDeviceInfo.IsRecord` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRecord = value["IsRecord"].GetInt64();
        m_isRecordHasBeenSet = true;
    }

    if (value.HasMember("Recordable") && !value["Recordable"].IsNull())
    {
        if (!value["Recordable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AllDeviceInfo.Recordable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordable = value["Recordable"].GetInt64();
        m_recordableHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllDeviceInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllDeviceInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllDeviceInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AllDeviceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceType, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_extraInformationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInformation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInformation.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupPath.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_isRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRecord, allocator);
    }

    if (m_recordableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Recordable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordable, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

}


string AllDeviceInfo::GetDeviceId() const
{
    return m_deviceId;
}

void AllDeviceInfo::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool AllDeviceInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

int64_t AllDeviceInfo::GetDeviceType() const
{
    return m_deviceType;
}

void AllDeviceInfo::SetDeviceType(const int64_t& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool AllDeviceInfo::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

int64_t AllDeviceInfo::GetStatus() const
{
    return m_status;
}

void AllDeviceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AllDeviceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AllDeviceInfo::GetCreateTime() const
{
    return m_createTime;
}

void AllDeviceInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AllDeviceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AllDeviceInfo::GetExtraInformation() const
{
    return m_extraInformation;
}

void AllDeviceInfo::SetExtraInformation(const string& _extraInformation)
{
    m_extraInformation = _extraInformation;
    m_extraInformationHasBeenSet = true;
}

bool AllDeviceInfo::ExtraInformationHasBeenSet() const
{
    return m_extraInformationHasBeenSet;
}

string AllDeviceInfo::GetNickName() const
{
    return m_nickName;
}

void AllDeviceInfo::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool AllDeviceInfo::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string AllDeviceInfo::GetGroupPath() const
{
    return m_groupPath;
}

void AllDeviceInfo::SetGroupPath(const string& _groupPath)
{
    m_groupPath = _groupPath;
    m_groupPathHasBeenSet = true;
}

bool AllDeviceInfo::GroupPathHasBeenSet() const
{
    return m_groupPathHasBeenSet;
}

string AllDeviceInfo::GetDeviceCode() const
{
    return m_deviceCode;
}

void AllDeviceInfo::SetDeviceCode(const string& _deviceCode)
{
    m_deviceCode = _deviceCode;
    m_deviceCodeHasBeenSet = true;
}

bool AllDeviceInfo::DeviceCodeHasBeenSet() const
{
    return m_deviceCodeHasBeenSet;
}

int64_t AllDeviceInfo::GetIsRecord() const
{
    return m_isRecord;
}

void AllDeviceInfo::SetIsRecord(const int64_t& _isRecord)
{
    m_isRecord = _isRecord;
    m_isRecordHasBeenSet = true;
}

bool AllDeviceInfo::IsRecordHasBeenSet() const
{
    return m_isRecordHasBeenSet;
}

int64_t AllDeviceInfo::GetRecordable() const
{
    return m_recordable;
}

void AllDeviceInfo::SetRecordable(const int64_t& _recordable)
{
    m_recordable = _recordable;
    m_recordableHasBeenSet = true;
}

bool AllDeviceInfo::RecordableHasBeenSet() const
{
    return m_recordableHasBeenSet;
}

string AllDeviceInfo::GetProtocol() const
{
    return m_protocol;
}

void AllDeviceInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool AllDeviceInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string AllDeviceInfo::GetGroupId() const
{
    return m_groupId;
}

void AllDeviceInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool AllDeviceInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string AllDeviceInfo::GetGroupName() const
{
    return m_groupName;
}

void AllDeviceInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool AllDeviceInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

