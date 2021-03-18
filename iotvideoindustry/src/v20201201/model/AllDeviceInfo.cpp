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
using namespace rapidjson;
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
    m_isRecordHasBeenSet(false)
{
}

CoreInternalOutcome AllDeviceInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AllDeviceInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AllDeviceInfo.DeviceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = value["DeviceType"].GetInt64();
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AllDeviceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AllDeviceInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExtraInformation") && !value["ExtraInformation"].IsNull())
    {
        if (!value["ExtraInformation"].IsString())
        {
            return CoreInternalOutcome(Error("response `AllDeviceInfo.ExtraInformation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInformation = string(value["ExtraInformation"].GetString());
        m_extraInformationHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AllDeviceInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("GroupPath") && !value["GroupPath"].IsNull())
    {
        if (!value["GroupPath"].IsString())
        {
            return CoreInternalOutcome(Error("response `AllDeviceInfo.GroupPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupPath = string(value["GroupPath"].GetString());
        m_groupPathHasBeenSet = true;
    }

    if (value.HasMember("DeviceCode") && !value["DeviceCode"].IsNull())
    {
        if (!value["DeviceCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `AllDeviceInfo.DeviceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCode = string(value["DeviceCode"].GetString());
        m_deviceCodeHasBeenSet = true;
    }

    if (value.HasMember("IsRecord") && !value["IsRecord"].IsNull())
    {
        if (!value["IsRecord"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AllDeviceInfo.IsRecord` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRecord = value["IsRecord"].GetInt64();
        m_isRecordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AllDeviceInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceType, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_extraInformationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExtraInformation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_extraInformation.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupPathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupPath.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_deviceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_isRecordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsRecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRecord, allocator);
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

