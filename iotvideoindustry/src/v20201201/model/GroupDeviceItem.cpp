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

#include <tencentcloud/iotvideoindustry/v20201201/model/GroupDeviceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

GroupDeviceItem::GroupDeviceItem() :
    m_deviceIdHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_extraInformationHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_rTSPUrlHasBeenSet(false),
    m_deviceCodeHasBeenSet(false),
    m_isRecordHasBeenSet(false),
    m_recordableHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_channelNumHasBeenSet(false),
    m_videoChannelNumHasBeenSet(false)
{
}

CoreInternalOutcome GroupDeviceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupDeviceItem.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupDeviceItem.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupDeviceItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ExtraInformation") && !value["ExtraInformation"].IsNull())
    {
        if (!value["ExtraInformation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupDeviceItem.ExtraInformation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInformation = string(value["ExtraInformation"].GetString());
        m_extraInformationHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupDeviceItem.DeviceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = value["DeviceType"].GetInt64();
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("RTSPUrl") && !value["RTSPUrl"].IsNull())
    {
        if (!value["RTSPUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupDeviceItem.RTSPUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rTSPUrl = string(value["RTSPUrl"].GetString());
        m_rTSPUrlHasBeenSet = true;
    }

    if (value.HasMember("DeviceCode") && !value["DeviceCode"].IsNull())
    {
        if (!value["DeviceCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupDeviceItem.DeviceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCode = string(value["DeviceCode"].GetString());
        m_deviceCodeHasBeenSet = true;
    }

    if (value.HasMember("IsRecord") && !value["IsRecord"].IsNull())
    {
        if (!value["IsRecord"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupDeviceItem.IsRecord` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRecord = value["IsRecord"].GetInt64();
        m_isRecordHasBeenSet = true;
    }

    if (value.HasMember("Recordable") && !value["Recordable"].IsNull())
    {
        if (!value["Recordable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupDeviceItem.Recordable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordable = value["Recordable"].GetInt64();
        m_recordableHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupDeviceItem.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupDeviceItem.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ChannelNum") && !value["ChannelNum"].IsNull())
    {
        if (!value["ChannelNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupDeviceItem.ChannelNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channelNum = value["ChannelNum"].GetInt64();
        m_channelNumHasBeenSet = true;
    }

    if (value.HasMember("VideoChannelNum") && !value["VideoChannelNum"].IsNull())
    {
        if (!value["VideoChannelNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupDeviceItem.VideoChannelNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoChannelNum = value["VideoChannelNum"].GetInt64();
        m_videoChannelNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupDeviceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_extraInformationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInformation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInformation.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceType, allocator);
    }

    if (m_rTSPUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTSPUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rTSPUrl.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_channelNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelNum, allocator);
    }

    if (m_videoChannelNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoChannelNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoChannelNum, allocator);
    }

}


string GroupDeviceItem::GetDeviceId() const
{
    return m_deviceId;
}

void GroupDeviceItem::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool GroupDeviceItem::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string GroupDeviceItem::GetNickName() const
{
    return m_nickName;
}

void GroupDeviceItem::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool GroupDeviceItem::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

int64_t GroupDeviceItem::GetStatus() const
{
    return m_status;
}

void GroupDeviceItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GroupDeviceItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GroupDeviceItem::GetExtraInformation() const
{
    return m_extraInformation;
}

void GroupDeviceItem::SetExtraInformation(const string& _extraInformation)
{
    m_extraInformation = _extraInformation;
    m_extraInformationHasBeenSet = true;
}

bool GroupDeviceItem::ExtraInformationHasBeenSet() const
{
    return m_extraInformationHasBeenSet;
}

int64_t GroupDeviceItem::GetDeviceType() const
{
    return m_deviceType;
}

void GroupDeviceItem::SetDeviceType(const int64_t& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool GroupDeviceItem::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string GroupDeviceItem::GetRTSPUrl() const
{
    return m_rTSPUrl;
}

void GroupDeviceItem::SetRTSPUrl(const string& _rTSPUrl)
{
    m_rTSPUrl = _rTSPUrl;
    m_rTSPUrlHasBeenSet = true;
}

bool GroupDeviceItem::RTSPUrlHasBeenSet() const
{
    return m_rTSPUrlHasBeenSet;
}

string GroupDeviceItem::GetDeviceCode() const
{
    return m_deviceCode;
}

void GroupDeviceItem::SetDeviceCode(const string& _deviceCode)
{
    m_deviceCode = _deviceCode;
    m_deviceCodeHasBeenSet = true;
}

bool GroupDeviceItem::DeviceCodeHasBeenSet() const
{
    return m_deviceCodeHasBeenSet;
}

int64_t GroupDeviceItem::GetIsRecord() const
{
    return m_isRecord;
}

void GroupDeviceItem::SetIsRecord(const int64_t& _isRecord)
{
    m_isRecord = _isRecord;
    m_isRecordHasBeenSet = true;
}

bool GroupDeviceItem::IsRecordHasBeenSet() const
{
    return m_isRecordHasBeenSet;
}

int64_t GroupDeviceItem::GetRecordable() const
{
    return m_recordable;
}

void GroupDeviceItem::SetRecordable(const int64_t& _recordable)
{
    m_recordable = _recordable;
    m_recordableHasBeenSet = true;
}

bool GroupDeviceItem::RecordableHasBeenSet() const
{
    return m_recordableHasBeenSet;
}

string GroupDeviceItem::GetProtocol() const
{
    return m_protocol;
}

void GroupDeviceItem::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool GroupDeviceItem::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t GroupDeviceItem::GetCreateTime() const
{
    return m_createTime;
}

void GroupDeviceItem::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GroupDeviceItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t GroupDeviceItem::GetChannelNum() const
{
    return m_channelNum;
}

void GroupDeviceItem::SetChannelNum(const int64_t& _channelNum)
{
    m_channelNum = _channelNum;
    m_channelNumHasBeenSet = true;
}

bool GroupDeviceItem::ChannelNumHasBeenSet() const
{
    return m_channelNumHasBeenSet;
}

int64_t GroupDeviceItem::GetVideoChannelNum() const
{
    return m_videoChannelNum;
}

void GroupDeviceItem::SetVideoChannelNum(const int64_t& _videoChannelNum)
{
    m_videoChannelNum = _videoChannelNum;
    m_videoChannelNumHasBeenSet = true;
}

bool GroupDeviceItem::VideoChannelNumHasBeenSet() const
{
    return m_videoChannelNumHasBeenSet;
}

