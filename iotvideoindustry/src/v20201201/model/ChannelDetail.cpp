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

#include <tencentcloud/iotvideoindustry/v20201201/model/ChannelDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

ChannelDetail::ChannelDetail() :
    m_channelNameHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_channelTypeHasBeenSet(false),
    m_channelCodeHasBeenSet(false),
    m_extraInformationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isRecordHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_businessGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome ChannelDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelDetail.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelDetail.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelType") && !value["ChannelType"].IsNull())
    {
        if (!value["ChannelType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelDetail.ChannelType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channelType = value["ChannelType"].GetInt64();
        m_channelTypeHasBeenSet = true;
    }

    if (value.HasMember("ChannelCode") && !value["ChannelCode"].IsNull())
    {
        if (!value["ChannelCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelDetail.ChannelCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelCode = string(value["ChannelCode"].GetString());
        m_channelCodeHasBeenSet = true;
    }

    if (value.HasMember("ExtraInformation") && !value["ExtraInformation"].IsNull())
    {
        if (!value["ExtraInformation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelDetail.ExtraInformation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInformation = string(value["ExtraInformation"].GetString());
        m_extraInformationHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsRecord") && !value["IsRecord"].IsNull())
    {
        if (!value["IsRecord"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelDetail.IsRecord` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRecord = value["IsRecord"].GetInt64();
        m_isRecordHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelDetail.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("BusinessGroupId") && !value["BusinessGroupId"].IsNull())
    {
        if (!value["BusinessGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelDetail.BusinessGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessGroupId = string(value["BusinessGroupId"].GetString());
        m_businessGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChannelDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelType, allocator);
    }

    if (m_channelCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelCode.c_str(), allocator).Move(), allocator);
    }

    if (m_extraInformationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInformation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInformation.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRecord, allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_businessGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessGroupId.c_str(), allocator).Move(), allocator);
    }

}


string ChannelDetail::GetChannelName() const
{
    return m_channelName;
}

void ChannelDetail::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool ChannelDetail::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string ChannelDetail::GetChannelId() const
{
    return m_channelId;
}

void ChannelDetail::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ChannelDetail::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

int64_t ChannelDetail::GetChannelType() const
{
    return m_channelType;
}

void ChannelDetail::SetChannelType(const int64_t& _channelType)
{
    m_channelType = _channelType;
    m_channelTypeHasBeenSet = true;
}

bool ChannelDetail::ChannelTypeHasBeenSet() const
{
    return m_channelTypeHasBeenSet;
}

string ChannelDetail::GetChannelCode() const
{
    return m_channelCode;
}

void ChannelDetail::SetChannelCode(const string& _channelCode)
{
    m_channelCode = _channelCode;
    m_channelCodeHasBeenSet = true;
}

bool ChannelDetail::ChannelCodeHasBeenSet() const
{
    return m_channelCodeHasBeenSet;
}

string ChannelDetail::GetExtraInformation() const
{
    return m_extraInformation;
}

void ChannelDetail::SetExtraInformation(const string& _extraInformation)
{
    m_extraInformation = _extraInformation;
    m_extraInformationHasBeenSet = true;
}

bool ChannelDetail::ExtraInformationHasBeenSet() const
{
    return m_extraInformationHasBeenSet;
}

int64_t ChannelDetail::GetStatus() const
{
    return m_status;
}

void ChannelDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ChannelDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ChannelDetail::GetIsRecord() const
{
    return m_isRecord;
}

void ChannelDetail::SetIsRecord(const int64_t& _isRecord)
{
    m_isRecord = _isRecord;
    m_isRecordHasBeenSet = true;
}

bool ChannelDetail::IsRecordHasBeenSet() const
{
    return m_isRecordHasBeenSet;
}

string ChannelDetail::GetDeviceId() const
{
    return m_deviceId;
}

void ChannelDetail::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool ChannelDetail::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string ChannelDetail::GetBusinessGroupId() const
{
    return m_businessGroupId;
}

void ChannelDetail::SetBusinessGroupId(const string& _businessGroupId)
{
    m_businessGroupId = _businessGroupId;
    m_businessGroupIdHasBeenSet = true;
}

bool ChannelDetail::BusinessGroupIdHasBeenSet() const
{
    return m_businessGroupIdHasBeenSet;
}

