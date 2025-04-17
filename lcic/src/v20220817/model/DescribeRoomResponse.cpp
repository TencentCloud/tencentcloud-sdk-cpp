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

#include <tencentcloud/lcic/v20220817/model/DescribeRoomResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

DescribeRoomResponse::DescribeRoomResponse() :
    m_nameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_teacherIdHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_audienceTypeHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_maxMicNumberHasBeenSet(false),
    m_autoMicHasBeenSet(false),
    m_audioQualityHasBeenSet(false),
    m_subTypeHasBeenSet(false),
    m_disableRecordHasBeenSet(false),
    m_assistantsHasBeenSet(false),
    m_recordUrlHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_enableDirectControlHasBeenSet(false),
    m_interactionModeHasBeenSet(false),
    m_videoOrientationHasBeenSet(false),
    m_isGradingRequiredPostClassHasBeenSet(false),
    m_roomTypeHasBeenSet(false),
    m_videoDurationHasBeenSet(false),
    m_endDelayTimeHasBeenSet(false),
    m_liveTypeHasBeenSet(false),
    m_recordLiveUrlHasBeenSet(false),
    m_enableAutoStartHasBeenSet(false),
    m_recordBackgroundHasBeenSet(false),
    m_rTMPStreamingURLHasBeenSet(false),
    m_recordSceneHasBeenSet(false),
    m_recordLangHasBeenSet(false),
    m_recordStreamHasBeenSet(false),
    m_recordLayoutHasBeenSet(false),
    m_whiteBoardSnapshotModeHasBeenSet(false),
    m_subtitlesTranscriptionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRoomResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = rsp["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = rsp["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("TeacherId") && !rsp["TeacherId"].IsNull())
    {
        if (!rsp["TeacherId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TeacherId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teacherId = string(rsp["TeacherId"].GetString());
        m_teacherIdHasBeenSet = true;
    }

    if (rsp.HasMember("SdkAppId") && !rsp["SdkAppId"].IsNull())
    {
        if (!rsp["SdkAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = rsp["SdkAppId"].GetUint64();
        m_sdkAppIdHasBeenSet = true;
    }

    if (rsp.HasMember("AudienceType") && !rsp["AudienceType"].IsNull())
    {
        if (!rsp["AudienceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AudienceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audienceType = rsp["AudienceType"].GetUint64();
        m_audienceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Resolution") && !rsp["Resolution"].IsNull())
    {
        if (!rsp["Resolution"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resolution` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = rsp["Resolution"].GetUint64();
        m_resolutionHasBeenSet = true;
    }

    if (rsp.HasMember("MaxMicNumber") && !rsp["MaxMicNumber"].IsNull())
    {
        if (!rsp["MaxMicNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxMicNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMicNumber = rsp["MaxMicNumber"].GetUint64();
        m_maxMicNumberHasBeenSet = true;
    }

    if (rsp.HasMember("AutoMic") && !rsp["AutoMic"].IsNull())
    {
        if (!rsp["AutoMic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoMic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoMic = rsp["AutoMic"].GetUint64();
        m_autoMicHasBeenSet = true;
    }

    if (rsp.HasMember("AudioQuality") && !rsp["AudioQuality"].IsNull())
    {
        if (!rsp["AudioQuality"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioQuality` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioQuality = rsp["AudioQuality"].GetUint64();
        m_audioQualityHasBeenSet = true;
    }

    if (rsp.HasMember("SubType") && !rsp["SubType"].IsNull())
    {
        if (!rsp["SubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subType = string(rsp["SubType"].GetString());
        m_subTypeHasBeenSet = true;
    }

    if (rsp.HasMember("DisableRecord") && !rsp["DisableRecord"].IsNull())
    {
        if (!rsp["DisableRecord"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DisableRecord` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_disableRecord = rsp["DisableRecord"].GetUint64();
        m_disableRecordHasBeenSet = true;
    }

    if (rsp.HasMember("Assistants") && !rsp["Assistants"].IsNull())
    {
        if (!rsp["Assistants"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Assistants` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Assistants"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_assistants.push_back((*itr).GetString());
        }
        m_assistantsHasBeenSet = true;
    }

    if (rsp.HasMember("RecordUrl") && !rsp["RecordUrl"].IsNull())
    {
        if (!rsp["RecordUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordUrl = string(rsp["RecordUrl"].GetString());
        m_recordUrlHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("GroupId") && !rsp["GroupId"].IsNull())
    {
        if (!rsp["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(rsp["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (rsp.HasMember("EnableDirectControl") && !rsp["EnableDirectControl"].IsNull())
    {
        if (!rsp["EnableDirectControl"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EnableDirectControl` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableDirectControl = rsp["EnableDirectControl"].GetUint64();
        m_enableDirectControlHasBeenSet = true;
    }

    if (rsp.HasMember("InteractionMode") && !rsp["InteractionMode"].IsNull())
    {
        if (!rsp["InteractionMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InteractionMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interactionMode = rsp["InteractionMode"].GetInt64();
        m_interactionModeHasBeenSet = true;
    }

    if (rsp.HasMember("VideoOrientation") && !rsp["VideoOrientation"].IsNull())
    {
        if (!rsp["VideoOrientation"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoOrientation` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoOrientation = rsp["VideoOrientation"].GetUint64();
        m_videoOrientationHasBeenSet = true;
    }

    if (rsp.HasMember("IsGradingRequiredPostClass") && !rsp["IsGradingRequiredPostClass"].IsNull())
    {
        if (!rsp["IsGradingRequiredPostClass"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsGradingRequiredPostClass` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isGradingRequiredPostClass = rsp["IsGradingRequiredPostClass"].GetInt64();
        m_isGradingRequiredPostClassHasBeenSet = true;
    }

    if (rsp.HasMember("RoomType") && !rsp["RoomType"].IsNull())
    {
        if (!rsp["RoomType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roomType = rsp["RoomType"].GetInt64();
        m_roomTypeHasBeenSet = true;
    }

    if (rsp.HasMember("VideoDuration") && !rsp["VideoDuration"].IsNull())
    {
        if (!rsp["VideoDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoDuration = rsp["VideoDuration"].GetUint64();
        m_videoDurationHasBeenSet = true;
    }

    if (rsp.HasMember("EndDelayTime") && !rsp["EndDelayTime"].IsNull())
    {
        if (!rsp["EndDelayTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EndDelayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endDelayTime = rsp["EndDelayTime"].GetInt64();
        m_endDelayTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LiveType") && !rsp["LiveType"].IsNull())
    {
        if (!rsp["LiveType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_liveType = rsp["LiveType"].GetUint64();
        m_liveTypeHasBeenSet = true;
    }

    if (rsp.HasMember("RecordLiveUrl") && !rsp["RecordLiveUrl"].IsNull())
    {
        if (!rsp["RecordLiveUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordLiveUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordLiveUrl = string(rsp["RecordLiveUrl"].GetString());
        m_recordLiveUrlHasBeenSet = true;
    }

    if (rsp.HasMember("EnableAutoStart") && !rsp["EnableAutoStart"].IsNull())
    {
        if (!rsp["EnableAutoStart"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EnableAutoStart` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableAutoStart = rsp["EnableAutoStart"].GetUint64();
        m_enableAutoStartHasBeenSet = true;
    }

    if (rsp.HasMember("RecordBackground") && !rsp["RecordBackground"].IsNull())
    {
        if (!rsp["RecordBackground"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordBackground` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordBackground = string(rsp["RecordBackground"].GetString());
        m_recordBackgroundHasBeenSet = true;
    }

    if (rsp.HasMember("RTMPStreamingURL") && !rsp["RTMPStreamingURL"].IsNull())
    {
        if (!rsp["RTMPStreamingURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RTMPStreamingURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rTMPStreamingURL = string(rsp["RTMPStreamingURL"].GetString());
        m_rTMPStreamingURLHasBeenSet = true;
    }

    if (rsp.HasMember("RecordScene") && !rsp["RecordScene"].IsNull())
    {
        if (!rsp["RecordScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordScene = string(rsp["RecordScene"].GetString());
        m_recordSceneHasBeenSet = true;
    }

    if (rsp.HasMember("RecordLang") && !rsp["RecordLang"].IsNull())
    {
        if (!rsp["RecordLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordLang = string(rsp["RecordLang"].GetString());
        m_recordLangHasBeenSet = true;
    }

    if (rsp.HasMember("RecordStream") && !rsp["RecordStream"].IsNull())
    {
        if (!rsp["RecordStream"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordStream` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordStream = rsp["RecordStream"].GetUint64();
        m_recordStreamHasBeenSet = true;
    }

    if (rsp.HasMember("RecordLayout") && !rsp["RecordLayout"].IsNull())
    {
        if (!rsp["RecordLayout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordLayout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordLayout = rsp["RecordLayout"].GetUint64();
        m_recordLayoutHasBeenSet = true;
    }

    if (rsp.HasMember("WhiteBoardSnapshotMode") && !rsp["WhiteBoardSnapshotMode"].IsNull())
    {
        if (!rsp["WhiteBoardSnapshotMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteBoardSnapshotMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_whiteBoardSnapshotMode = rsp["WhiteBoardSnapshotMode"].GetUint64();
        m_whiteBoardSnapshotModeHasBeenSet = true;
    }

    if (rsp.HasMember("SubtitlesTranscription") && !rsp["SubtitlesTranscription"].IsNull())
    {
        if (!rsp["SubtitlesTranscription"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitlesTranscription` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subtitlesTranscription = rsp["SubtitlesTranscription"].GetUint64();
        m_subtitlesTranscriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRoomResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_teacherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teacherId.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_audienceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudienceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audienceType, allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resolution, allocator);
    }

    if (m_maxMicNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMicNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMicNumber, allocator);
    }

    if (m_autoMicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoMic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoMic, allocator);
    }

    if (m_audioQualityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioQuality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioQuality, allocator);
    }

    if (m_subTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subType.c_str(), allocator).Move(), allocator);
    }

    if (m_disableRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableRecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableRecord, allocator);
    }

    if (m_assistantsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Assistants";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assistants.begin(); itr != m_assistants.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_recordUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableDirectControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDirectControl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableDirectControl, allocator);
    }

    if (m_interactionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InteractionMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interactionMode, allocator);
    }

    if (m_videoOrientationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoOrientation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoOrientation, allocator);
    }

    if (m_isGradingRequiredPostClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGradingRequiredPostClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGradingRequiredPostClass, allocator);
    }

    if (m_roomTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roomType, allocator);
    }

    if (m_videoDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoDuration, allocator);
    }

    if (m_endDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endDelayTime, allocator);
    }

    if (m_liveTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_liveType, allocator);
    }

    if (m_recordLiveUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLiveUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordLiveUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_enableAutoStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAutoStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAutoStart, allocator);
    }

    if (m_recordBackgroundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordBackground";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordBackground.c_str(), allocator).Move(), allocator);
    }

    if (m_rTMPStreamingURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTMPStreamingURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rTMPStreamingURL.c_str(), allocator).Move(), allocator);
    }

    if (m_recordSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordScene.c_str(), allocator).Move(), allocator);
    }

    if (m_recordLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordLang.c_str(), allocator).Move(), allocator);
    }

    if (m_recordStreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordStream";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordStream, allocator);
    }

    if (m_recordLayoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLayout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordLayout, allocator);
    }

    if (m_whiteBoardSnapshotModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteBoardSnapshotMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_whiteBoardSnapshotMode, allocator);
    }

    if (m_subtitlesTranscriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitlesTranscription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subtitlesTranscription, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeRoomResponse::GetName() const
{
    return m_name;
}

bool DescribeRoomResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DescribeRoomResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeRoomResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeRoomResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeRoomResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeRoomResponse::GetTeacherId() const
{
    return m_teacherId;
}

bool DescribeRoomResponse::TeacherIdHasBeenSet() const
{
    return m_teacherIdHasBeenSet;
}

uint64_t DescribeRoomResponse::GetSdkAppId() const
{
    return m_sdkAppId;
}

bool DescribeRoomResponse::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t DescribeRoomResponse::GetAudienceType() const
{
    return m_audienceType;
}

bool DescribeRoomResponse::AudienceTypeHasBeenSet() const
{
    return m_audienceTypeHasBeenSet;
}

uint64_t DescribeRoomResponse::GetResolution() const
{
    return m_resolution;
}

bool DescribeRoomResponse::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

uint64_t DescribeRoomResponse::GetMaxMicNumber() const
{
    return m_maxMicNumber;
}

bool DescribeRoomResponse::MaxMicNumberHasBeenSet() const
{
    return m_maxMicNumberHasBeenSet;
}

uint64_t DescribeRoomResponse::GetAutoMic() const
{
    return m_autoMic;
}

bool DescribeRoomResponse::AutoMicHasBeenSet() const
{
    return m_autoMicHasBeenSet;
}

uint64_t DescribeRoomResponse::GetAudioQuality() const
{
    return m_audioQuality;
}

bool DescribeRoomResponse::AudioQualityHasBeenSet() const
{
    return m_audioQualityHasBeenSet;
}

string DescribeRoomResponse::GetSubType() const
{
    return m_subType;
}

bool DescribeRoomResponse::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

uint64_t DescribeRoomResponse::GetDisableRecord() const
{
    return m_disableRecord;
}

bool DescribeRoomResponse::DisableRecordHasBeenSet() const
{
    return m_disableRecordHasBeenSet;
}

vector<string> DescribeRoomResponse::GetAssistants() const
{
    return m_assistants;
}

bool DescribeRoomResponse::AssistantsHasBeenSet() const
{
    return m_assistantsHasBeenSet;
}

string DescribeRoomResponse::GetRecordUrl() const
{
    return m_recordUrl;
}

bool DescribeRoomResponse::RecordUrlHasBeenSet() const
{
    return m_recordUrlHasBeenSet;
}

uint64_t DescribeRoomResponse::GetStatus() const
{
    return m_status;
}

bool DescribeRoomResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeRoomResponse::GetGroupId() const
{
    return m_groupId;
}

bool DescribeRoomResponse::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

uint64_t DescribeRoomResponse::GetEnableDirectControl() const
{
    return m_enableDirectControl;
}

bool DescribeRoomResponse::EnableDirectControlHasBeenSet() const
{
    return m_enableDirectControlHasBeenSet;
}

int64_t DescribeRoomResponse::GetInteractionMode() const
{
    return m_interactionMode;
}

bool DescribeRoomResponse::InteractionModeHasBeenSet() const
{
    return m_interactionModeHasBeenSet;
}

uint64_t DescribeRoomResponse::GetVideoOrientation() const
{
    return m_videoOrientation;
}

bool DescribeRoomResponse::VideoOrientationHasBeenSet() const
{
    return m_videoOrientationHasBeenSet;
}

int64_t DescribeRoomResponse::GetIsGradingRequiredPostClass() const
{
    return m_isGradingRequiredPostClass;
}

bool DescribeRoomResponse::IsGradingRequiredPostClassHasBeenSet() const
{
    return m_isGradingRequiredPostClassHasBeenSet;
}

int64_t DescribeRoomResponse::GetRoomType() const
{
    return m_roomType;
}

bool DescribeRoomResponse::RoomTypeHasBeenSet() const
{
    return m_roomTypeHasBeenSet;
}

uint64_t DescribeRoomResponse::GetVideoDuration() const
{
    return m_videoDuration;
}

bool DescribeRoomResponse::VideoDurationHasBeenSet() const
{
    return m_videoDurationHasBeenSet;
}

int64_t DescribeRoomResponse::GetEndDelayTime() const
{
    return m_endDelayTime;
}

bool DescribeRoomResponse::EndDelayTimeHasBeenSet() const
{
    return m_endDelayTimeHasBeenSet;
}

uint64_t DescribeRoomResponse::GetLiveType() const
{
    return m_liveType;
}

bool DescribeRoomResponse::LiveTypeHasBeenSet() const
{
    return m_liveTypeHasBeenSet;
}

string DescribeRoomResponse::GetRecordLiveUrl() const
{
    return m_recordLiveUrl;
}

bool DescribeRoomResponse::RecordLiveUrlHasBeenSet() const
{
    return m_recordLiveUrlHasBeenSet;
}

uint64_t DescribeRoomResponse::GetEnableAutoStart() const
{
    return m_enableAutoStart;
}

bool DescribeRoomResponse::EnableAutoStartHasBeenSet() const
{
    return m_enableAutoStartHasBeenSet;
}

string DescribeRoomResponse::GetRecordBackground() const
{
    return m_recordBackground;
}

bool DescribeRoomResponse::RecordBackgroundHasBeenSet() const
{
    return m_recordBackgroundHasBeenSet;
}

string DescribeRoomResponse::GetRTMPStreamingURL() const
{
    return m_rTMPStreamingURL;
}

bool DescribeRoomResponse::RTMPStreamingURLHasBeenSet() const
{
    return m_rTMPStreamingURLHasBeenSet;
}

string DescribeRoomResponse::GetRecordScene() const
{
    return m_recordScene;
}

bool DescribeRoomResponse::RecordSceneHasBeenSet() const
{
    return m_recordSceneHasBeenSet;
}

string DescribeRoomResponse::GetRecordLang() const
{
    return m_recordLang;
}

bool DescribeRoomResponse::RecordLangHasBeenSet() const
{
    return m_recordLangHasBeenSet;
}

uint64_t DescribeRoomResponse::GetRecordStream() const
{
    return m_recordStream;
}

bool DescribeRoomResponse::RecordStreamHasBeenSet() const
{
    return m_recordStreamHasBeenSet;
}

uint64_t DescribeRoomResponse::GetRecordLayout() const
{
    return m_recordLayout;
}

bool DescribeRoomResponse::RecordLayoutHasBeenSet() const
{
    return m_recordLayoutHasBeenSet;
}

uint64_t DescribeRoomResponse::GetWhiteBoardSnapshotMode() const
{
    return m_whiteBoardSnapshotMode;
}

bool DescribeRoomResponse::WhiteBoardSnapshotModeHasBeenSet() const
{
    return m_whiteBoardSnapshotModeHasBeenSet;
}

uint64_t DescribeRoomResponse::GetSubtitlesTranscription() const
{
    return m_subtitlesTranscription;
}

bool DescribeRoomResponse::SubtitlesTranscriptionHasBeenSet() const
{
    return m_subtitlesTranscriptionHasBeenSet;
}


