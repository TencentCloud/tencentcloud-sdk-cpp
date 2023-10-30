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

#include <tencentcloud/tiw/v20190919/model/StartWhiteboardPushRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

StartWhiteboardPushRequest::StartWhiteboardPushRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_pushUserIdHasBeenSet(false),
    m_pushUserSigHasBeenSet(false),
    m_whiteboardHasBeenSet(false),
    m_autoStopTimeoutHasBeenSet(false),
    m_autoManageBackupHasBeenSet(false),
    m_backupHasBeenSet(false),
    m_privateMapKeyHasBeenSet(false),
    m_videoFPSHasBeenSet(false),
    m_videoBitrateHasBeenSet(false),
    m_autoRecordHasBeenSet(false),
    m_userDefinedRecordIdHasBeenSet(false),
    m_autoPublishHasBeenSet(false),
    m_userDefinedStreamIdHasBeenSet(false),
    m_extraDataHasBeenSet(false),
    m_tRTCRoomIdHasBeenSet(false),
    m_tRTCRoomIdStrHasBeenSet(false),
    m_iMAuthParamHasBeenSet(false),
    m_tRTCAuthParamHasBeenSet(false),
    m_tRTCEnterRoomModeHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

string StartWhiteboardPushRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomId, allocator);
    }

    if (m_pushUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pushUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_pushUserSigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushUserSig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pushUserSig.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteboardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Whiteboard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_whiteboard.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_autoStopTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoStopTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoStopTimeout, allocator);
    }

    if (m_autoManageBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoManageBackup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoManageBackup, allocator);
    }

    if (m_backupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Backup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backup.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_privateMapKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateMapKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privateMapKey.c_str(), allocator).Move(), allocator);
    }

    if (m_videoFPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoFPS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_videoFPS, allocator);
    }

    if (m_videoBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoBitrate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_videoBitrate, allocator);
    }

    if (m_autoRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRecord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRecord, allocator);
    }

    if (m_userDefinedRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefinedRecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userDefinedRecordId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoPublishHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPublish";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoPublish, allocator);
    }

    if (m_userDefinedStreamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefinedStreamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userDefinedStreamId.c_str(), allocator).Move(), allocator);
    }

    if (m_extraDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraData.c_str(), allocator).Move(), allocator);
    }

    if (m_tRTCRoomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TRTCRoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tRTCRoomId, allocator);
    }

    if (m_tRTCRoomIdStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TRTCRoomIdStr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tRTCRoomIdStr.c_str(), allocator).Move(), allocator);
    }

    if (m_iMAuthParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IMAuthParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iMAuthParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tRTCAuthParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TRTCAuthParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tRTCAuthParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tRTCEnterRoomModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TRTCEnterRoomMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tRTCEnterRoomMode.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t StartWhiteboardPushRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void StartWhiteboardPushRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool StartWhiteboardPushRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

int64_t StartWhiteboardPushRequest::GetRoomId() const
{
    return m_roomId;
}

void StartWhiteboardPushRequest::SetRoomId(const int64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool StartWhiteboardPushRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string StartWhiteboardPushRequest::GetPushUserId() const
{
    return m_pushUserId;
}

void StartWhiteboardPushRequest::SetPushUserId(const string& _pushUserId)
{
    m_pushUserId = _pushUserId;
    m_pushUserIdHasBeenSet = true;
}

bool StartWhiteboardPushRequest::PushUserIdHasBeenSet() const
{
    return m_pushUserIdHasBeenSet;
}

string StartWhiteboardPushRequest::GetPushUserSig() const
{
    return m_pushUserSig;
}

void StartWhiteboardPushRequest::SetPushUserSig(const string& _pushUserSig)
{
    m_pushUserSig = _pushUserSig;
    m_pushUserSigHasBeenSet = true;
}

bool StartWhiteboardPushRequest::PushUserSigHasBeenSet() const
{
    return m_pushUserSigHasBeenSet;
}

Whiteboard StartWhiteboardPushRequest::GetWhiteboard() const
{
    return m_whiteboard;
}

void StartWhiteboardPushRequest::SetWhiteboard(const Whiteboard& _whiteboard)
{
    m_whiteboard = _whiteboard;
    m_whiteboardHasBeenSet = true;
}

bool StartWhiteboardPushRequest::WhiteboardHasBeenSet() const
{
    return m_whiteboardHasBeenSet;
}

int64_t StartWhiteboardPushRequest::GetAutoStopTimeout() const
{
    return m_autoStopTimeout;
}

void StartWhiteboardPushRequest::SetAutoStopTimeout(const int64_t& _autoStopTimeout)
{
    m_autoStopTimeout = _autoStopTimeout;
    m_autoStopTimeoutHasBeenSet = true;
}

bool StartWhiteboardPushRequest::AutoStopTimeoutHasBeenSet() const
{
    return m_autoStopTimeoutHasBeenSet;
}

bool StartWhiteboardPushRequest::GetAutoManageBackup() const
{
    return m_autoManageBackup;
}

void StartWhiteboardPushRequest::SetAutoManageBackup(const bool& _autoManageBackup)
{
    m_autoManageBackup = _autoManageBackup;
    m_autoManageBackupHasBeenSet = true;
}

bool StartWhiteboardPushRequest::AutoManageBackupHasBeenSet() const
{
    return m_autoManageBackupHasBeenSet;
}

WhiteboardPushBackupParam StartWhiteboardPushRequest::GetBackup() const
{
    return m_backup;
}

void StartWhiteboardPushRequest::SetBackup(const WhiteboardPushBackupParam& _backup)
{
    m_backup = _backup;
    m_backupHasBeenSet = true;
}

bool StartWhiteboardPushRequest::BackupHasBeenSet() const
{
    return m_backupHasBeenSet;
}

string StartWhiteboardPushRequest::GetPrivateMapKey() const
{
    return m_privateMapKey;
}

void StartWhiteboardPushRequest::SetPrivateMapKey(const string& _privateMapKey)
{
    m_privateMapKey = _privateMapKey;
    m_privateMapKeyHasBeenSet = true;
}

bool StartWhiteboardPushRequest::PrivateMapKeyHasBeenSet() const
{
    return m_privateMapKeyHasBeenSet;
}

int64_t StartWhiteboardPushRequest::GetVideoFPS() const
{
    return m_videoFPS;
}

void StartWhiteboardPushRequest::SetVideoFPS(const int64_t& _videoFPS)
{
    m_videoFPS = _videoFPS;
    m_videoFPSHasBeenSet = true;
}

bool StartWhiteboardPushRequest::VideoFPSHasBeenSet() const
{
    return m_videoFPSHasBeenSet;
}

int64_t StartWhiteboardPushRequest::GetVideoBitrate() const
{
    return m_videoBitrate;
}

void StartWhiteboardPushRequest::SetVideoBitrate(const int64_t& _videoBitrate)
{
    m_videoBitrate = _videoBitrate;
    m_videoBitrateHasBeenSet = true;
}

bool StartWhiteboardPushRequest::VideoBitrateHasBeenSet() const
{
    return m_videoBitrateHasBeenSet;
}

bool StartWhiteboardPushRequest::GetAutoRecord() const
{
    return m_autoRecord;
}

void StartWhiteboardPushRequest::SetAutoRecord(const bool& _autoRecord)
{
    m_autoRecord = _autoRecord;
    m_autoRecordHasBeenSet = true;
}

bool StartWhiteboardPushRequest::AutoRecordHasBeenSet() const
{
    return m_autoRecordHasBeenSet;
}

string StartWhiteboardPushRequest::GetUserDefinedRecordId() const
{
    return m_userDefinedRecordId;
}

void StartWhiteboardPushRequest::SetUserDefinedRecordId(const string& _userDefinedRecordId)
{
    m_userDefinedRecordId = _userDefinedRecordId;
    m_userDefinedRecordIdHasBeenSet = true;
}

bool StartWhiteboardPushRequest::UserDefinedRecordIdHasBeenSet() const
{
    return m_userDefinedRecordIdHasBeenSet;
}

bool StartWhiteboardPushRequest::GetAutoPublish() const
{
    return m_autoPublish;
}

void StartWhiteboardPushRequest::SetAutoPublish(const bool& _autoPublish)
{
    m_autoPublish = _autoPublish;
    m_autoPublishHasBeenSet = true;
}

bool StartWhiteboardPushRequest::AutoPublishHasBeenSet() const
{
    return m_autoPublishHasBeenSet;
}

string StartWhiteboardPushRequest::GetUserDefinedStreamId() const
{
    return m_userDefinedStreamId;
}

void StartWhiteboardPushRequest::SetUserDefinedStreamId(const string& _userDefinedStreamId)
{
    m_userDefinedStreamId = _userDefinedStreamId;
    m_userDefinedStreamIdHasBeenSet = true;
}

bool StartWhiteboardPushRequest::UserDefinedStreamIdHasBeenSet() const
{
    return m_userDefinedStreamIdHasBeenSet;
}

string StartWhiteboardPushRequest::GetExtraData() const
{
    return m_extraData;
}

void StartWhiteboardPushRequest::SetExtraData(const string& _extraData)
{
    m_extraData = _extraData;
    m_extraDataHasBeenSet = true;
}

bool StartWhiteboardPushRequest::ExtraDataHasBeenSet() const
{
    return m_extraDataHasBeenSet;
}

int64_t StartWhiteboardPushRequest::GetTRTCRoomId() const
{
    return m_tRTCRoomId;
}

void StartWhiteboardPushRequest::SetTRTCRoomId(const int64_t& _tRTCRoomId)
{
    m_tRTCRoomId = _tRTCRoomId;
    m_tRTCRoomIdHasBeenSet = true;
}

bool StartWhiteboardPushRequest::TRTCRoomIdHasBeenSet() const
{
    return m_tRTCRoomIdHasBeenSet;
}

string StartWhiteboardPushRequest::GetTRTCRoomIdStr() const
{
    return m_tRTCRoomIdStr;
}

void StartWhiteboardPushRequest::SetTRTCRoomIdStr(const string& _tRTCRoomIdStr)
{
    m_tRTCRoomIdStr = _tRTCRoomIdStr;
    m_tRTCRoomIdStrHasBeenSet = true;
}

bool StartWhiteboardPushRequest::TRTCRoomIdStrHasBeenSet() const
{
    return m_tRTCRoomIdStrHasBeenSet;
}

AuthParam StartWhiteboardPushRequest::GetIMAuthParam() const
{
    return m_iMAuthParam;
}

void StartWhiteboardPushRequest::SetIMAuthParam(const AuthParam& _iMAuthParam)
{
    m_iMAuthParam = _iMAuthParam;
    m_iMAuthParamHasBeenSet = true;
}

bool StartWhiteboardPushRequest::IMAuthParamHasBeenSet() const
{
    return m_iMAuthParamHasBeenSet;
}

AuthParam StartWhiteboardPushRequest::GetTRTCAuthParam() const
{
    return m_tRTCAuthParam;
}

void StartWhiteboardPushRequest::SetTRTCAuthParam(const AuthParam& _tRTCAuthParam)
{
    m_tRTCAuthParam = _tRTCAuthParam;
    m_tRTCAuthParamHasBeenSet = true;
}

bool StartWhiteboardPushRequest::TRTCAuthParamHasBeenSet() const
{
    return m_tRTCAuthParamHasBeenSet;
}

string StartWhiteboardPushRequest::GetTRTCEnterRoomMode() const
{
    return m_tRTCEnterRoomMode;
}

void StartWhiteboardPushRequest::SetTRTCEnterRoomMode(const string& _tRTCEnterRoomMode)
{
    m_tRTCEnterRoomMode = _tRTCEnterRoomMode;
    m_tRTCEnterRoomModeHasBeenSet = true;
}

bool StartWhiteboardPushRequest::TRTCEnterRoomModeHasBeenSet() const
{
    return m_tRTCEnterRoomModeHasBeenSet;
}

string StartWhiteboardPushRequest::GetGroupId() const
{
    return m_groupId;
}

void StartWhiteboardPushRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool StartWhiteboardPushRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}


