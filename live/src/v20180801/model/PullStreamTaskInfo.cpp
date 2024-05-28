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

#include <tencentcloud/live/v20180801/model/PullStreamTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

PullStreamTaskInfo::PullStreamTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceUrlsHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_pushArgsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vodLoopTimesHasBeenSet(false),
    m_vodRefreshTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createByHasBeenSet(false),
    m_updateByHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_callbackEventsHasBeenSet(false),
    m_callbackInfoHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_recentPullInfoHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_backupSourceTypeHasBeenSet(false),
    m_backupSourceUrlHasBeenSet(false),
    m_watermarkListHasBeenSet(false),
    m_vodLocalModeHasBeenSet(false),
    m_recordTemplateIdHasBeenSet(false),
    m_backupToUrlHasBeenSet(false),
    m_transcodeTemplateNameHasBeenSet(false)
{
}

CoreInternalOutcome PullStreamTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceUrls") && !value["SourceUrls"].IsNull())
    {
        if (!value["SourceUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.SourceUrls` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceUrls.push_back((*itr).GetString());
        }
        m_sourceUrlsHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("PushArgs") && !value["PushArgs"].IsNull())
    {
        if (!value["PushArgs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.PushArgs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushArgs = string(value["PushArgs"].GetString());
        m_pushArgsHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VodLoopTimes") && !value["VodLoopTimes"].IsNull())
    {
        if (!value["VodLoopTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.VodLoopTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vodLoopTimes = value["VodLoopTimes"].GetInt64();
        m_vodLoopTimesHasBeenSet = true;
    }

    if (value.HasMember("VodRefreshType") && !value["VodRefreshType"].IsNull())
    {
        if (!value["VodRefreshType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.VodRefreshType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vodRefreshType = string(value["VodRefreshType"].GetString());
        m_vodRefreshTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateBy") && !value["CreateBy"].IsNull())
    {
        if (!value["CreateBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.CreateBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createBy = string(value["CreateBy"].GetString());
        m_createByHasBeenSet = true;
    }

    if (value.HasMember("UpdateBy") && !value["UpdateBy"].IsNull())
    {
        if (!value["UpdateBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.UpdateBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateBy = string(value["UpdateBy"].GetString());
        m_updateByHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("CallbackEvents") && !value["CallbackEvents"].IsNull())
    {
        if (!value["CallbackEvents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.CallbackEvents` is not array type"));

        const rapidjson::Value &tmpValue = value["CallbackEvents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_callbackEvents.push_back((*itr).GetString());
        }
        m_callbackEventsHasBeenSet = true;
    }

    if (value.HasMember("CallbackInfo") && !value["CallbackInfo"].IsNull())
    {
        if (!value["CallbackInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.CallbackInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackInfo = string(value["CallbackInfo"].GetString());
        m_callbackInfoHasBeenSet = true;
    }

    if (value.HasMember("ErrorInfo") && !value["ErrorInfo"].IsNull())
    {
        if (!value["ErrorInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.ErrorInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorInfo = string(value["ErrorInfo"].GetString());
        m_errorInfoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RecentPullInfo") && !value["RecentPullInfo"].IsNull())
    {
        if (!value["RecentPullInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.RecentPullInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_recentPullInfo.Deserialize(value["RecentPullInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_recentPullInfoHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("BackupSourceType") && !value["BackupSourceType"].IsNull())
    {
        if (!value["BackupSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.BackupSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupSourceType = string(value["BackupSourceType"].GetString());
        m_backupSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("BackupSourceUrl") && !value["BackupSourceUrl"].IsNull())
    {
        if (!value["BackupSourceUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.BackupSourceUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupSourceUrl = string(value["BackupSourceUrl"].GetString());
        m_backupSourceUrlHasBeenSet = true;
    }

    if (value.HasMember("WatermarkList") && !value["WatermarkList"].IsNull())
    {
        if (!value["WatermarkList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.WatermarkList` is not array type"));

        const rapidjson::Value &tmpValue = value["WatermarkList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PullPushWatermarkInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_watermarkList.push_back(item);
        }
        m_watermarkListHasBeenSet = true;
    }

    if (value.HasMember("VodLocalMode") && !value["VodLocalMode"].IsNull())
    {
        if (!value["VodLocalMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.VodLocalMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vodLocalMode = value["VodLocalMode"].GetInt64();
        m_vodLocalModeHasBeenSet = true;
    }

    if (value.HasMember("RecordTemplateId") && !value["RecordTemplateId"].IsNull())
    {
        if (!value["RecordTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.RecordTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordTemplateId = string(value["RecordTemplateId"].GetString());
        m_recordTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("BackupToUrl") && !value["BackupToUrl"].IsNull())
    {
        if (!value["BackupToUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.BackupToUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupToUrl = string(value["BackupToUrl"].GetString());
        m_backupToUrlHasBeenSet = true;
    }

    if (value.HasMember("TranscodeTemplateName") && !value["TranscodeTemplateName"].IsNull())
    {
        if (!value["TranscodeTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamTaskInfo.TranscodeTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transcodeTemplateName = string(value["TranscodeTemplateName"].GetString());
        m_transcodeTemplateNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PullStreamTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceUrls.begin(); itr != m_sourceUrls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_pushArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushArgs.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_vodLoopTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodLoopTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vodLoopTimes, allocator);
    }

    if (m_vodRefreshTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodRefreshType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vodRefreshType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createBy.c_str(), allocator).Move(), allocator);
    }

    if (m_updateByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateBy.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackEventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackEvents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callbackEvents.begin(); itr != m_callbackEvents.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_callbackInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_errorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_recentPullInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecentPullInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_recentPullInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSourceUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSourceUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupSourceUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_watermarkListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WatermarkList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_watermarkList.begin(); itr != m_watermarkList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vodLocalModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodLocalMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vodLocalMode, allocator);
    }

    if (m_recordTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupToUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupToUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupToUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_transcodeTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transcodeTemplateName.c_str(), allocator).Move(), allocator);
    }

}


string PullStreamTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void PullStreamTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool PullStreamTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string PullStreamTaskInfo::GetSourceType() const
{
    return m_sourceType;
}

void PullStreamTaskInfo::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool PullStreamTaskInfo::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

vector<string> PullStreamTaskInfo::GetSourceUrls() const
{
    return m_sourceUrls;
}

void PullStreamTaskInfo::SetSourceUrls(const vector<string>& _sourceUrls)
{
    m_sourceUrls = _sourceUrls;
    m_sourceUrlsHasBeenSet = true;
}

bool PullStreamTaskInfo::SourceUrlsHasBeenSet() const
{
    return m_sourceUrlsHasBeenSet;
}

string PullStreamTaskInfo::GetDomainName() const
{
    return m_domainName;
}

void PullStreamTaskInfo::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool PullStreamTaskInfo::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string PullStreamTaskInfo::GetAppName() const
{
    return m_appName;
}

void PullStreamTaskInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool PullStreamTaskInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string PullStreamTaskInfo::GetStreamName() const
{
    return m_streamName;
}

void PullStreamTaskInfo::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool PullStreamTaskInfo::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

string PullStreamTaskInfo::GetPushArgs() const
{
    return m_pushArgs;
}

void PullStreamTaskInfo::SetPushArgs(const string& _pushArgs)
{
    m_pushArgs = _pushArgs;
    m_pushArgsHasBeenSet = true;
}

bool PullStreamTaskInfo::PushArgsHasBeenSet() const
{
    return m_pushArgsHasBeenSet;
}

string PullStreamTaskInfo::GetStartTime() const
{
    return m_startTime;
}

void PullStreamTaskInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool PullStreamTaskInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string PullStreamTaskInfo::GetEndTime() const
{
    return m_endTime;
}

void PullStreamTaskInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool PullStreamTaskInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string PullStreamTaskInfo::GetRegion() const
{
    return m_region;
}

void PullStreamTaskInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool PullStreamTaskInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t PullStreamTaskInfo::GetVodLoopTimes() const
{
    return m_vodLoopTimes;
}

void PullStreamTaskInfo::SetVodLoopTimes(const int64_t& _vodLoopTimes)
{
    m_vodLoopTimes = _vodLoopTimes;
    m_vodLoopTimesHasBeenSet = true;
}

bool PullStreamTaskInfo::VodLoopTimesHasBeenSet() const
{
    return m_vodLoopTimesHasBeenSet;
}

string PullStreamTaskInfo::GetVodRefreshType() const
{
    return m_vodRefreshType;
}

void PullStreamTaskInfo::SetVodRefreshType(const string& _vodRefreshType)
{
    m_vodRefreshType = _vodRefreshType;
    m_vodRefreshTypeHasBeenSet = true;
}

bool PullStreamTaskInfo::VodRefreshTypeHasBeenSet() const
{
    return m_vodRefreshTypeHasBeenSet;
}

string PullStreamTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void PullStreamTaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PullStreamTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PullStreamTaskInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void PullStreamTaskInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PullStreamTaskInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string PullStreamTaskInfo::GetCreateBy() const
{
    return m_createBy;
}

void PullStreamTaskInfo::SetCreateBy(const string& _createBy)
{
    m_createBy = _createBy;
    m_createByHasBeenSet = true;
}

bool PullStreamTaskInfo::CreateByHasBeenSet() const
{
    return m_createByHasBeenSet;
}

string PullStreamTaskInfo::GetUpdateBy() const
{
    return m_updateBy;
}

void PullStreamTaskInfo::SetUpdateBy(const string& _updateBy)
{
    m_updateBy = _updateBy;
    m_updateByHasBeenSet = true;
}

bool PullStreamTaskInfo::UpdateByHasBeenSet() const
{
    return m_updateByHasBeenSet;
}

string PullStreamTaskInfo::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void PullStreamTaskInfo::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool PullStreamTaskInfo::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

vector<string> PullStreamTaskInfo::GetCallbackEvents() const
{
    return m_callbackEvents;
}

void PullStreamTaskInfo::SetCallbackEvents(const vector<string>& _callbackEvents)
{
    m_callbackEvents = _callbackEvents;
    m_callbackEventsHasBeenSet = true;
}

bool PullStreamTaskInfo::CallbackEventsHasBeenSet() const
{
    return m_callbackEventsHasBeenSet;
}

string PullStreamTaskInfo::GetCallbackInfo() const
{
    return m_callbackInfo;
}

void PullStreamTaskInfo::SetCallbackInfo(const string& _callbackInfo)
{
    m_callbackInfo = _callbackInfo;
    m_callbackInfoHasBeenSet = true;
}

bool PullStreamTaskInfo::CallbackInfoHasBeenSet() const
{
    return m_callbackInfoHasBeenSet;
}

string PullStreamTaskInfo::GetErrorInfo() const
{
    return m_errorInfo;
}

void PullStreamTaskInfo::SetErrorInfo(const string& _errorInfo)
{
    m_errorInfo = _errorInfo;
    m_errorInfoHasBeenSet = true;
}

bool PullStreamTaskInfo::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}

string PullStreamTaskInfo::GetStatus() const
{
    return m_status;
}

void PullStreamTaskInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PullStreamTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

RecentPullInfo PullStreamTaskInfo::GetRecentPullInfo() const
{
    return m_recentPullInfo;
}

void PullStreamTaskInfo::SetRecentPullInfo(const RecentPullInfo& _recentPullInfo)
{
    m_recentPullInfo = _recentPullInfo;
    m_recentPullInfoHasBeenSet = true;
}

bool PullStreamTaskInfo::RecentPullInfoHasBeenSet() const
{
    return m_recentPullInfoHasBeenSet;
}

string PullStreamTaskInfo::GetComment() const
{
    return m_comment;
}

void PullStreamTaskInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool PullStreamTaskInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string PullStreamTaskInfo::GetBackupSourceType() const
{
    return m_backupSourceType;
}

void PullStreamTaskInfo::SetBackupSourceType(const string& _backupSourceType)
{
    m_backupSourceType = _backupSourceType;
    m_backupSourceTypeHasBeenSet = true;
}

bool PullStreamTaskInfo::BackupSourceTypeHasBeenSet() const
{
    return m_backupSourceTypeHasBeenSet;
}

string PullStreamTaskInfo::GetBackupSourceUrl() const
{
    return m_backupSourceUrl;
}

void PullStreamTaskInfo::SetBackupSourceUrl(const string& _backupSourceUrl)
{
    m_backupSourceUrl = _backupSourceUrl;
    m_backupSourceUrlHasBeenSet = true;
}

bool PullStreamTaskInfo::BackupSourceUrlHasBeenSet() const
{
    return m_backupSourceUrlHasBeenSet;
}

vector<PullPushWatermarkInfo> PullStreamTaskInfo::GetWatermarkList() const
{
    return m_watermarkList;
}

void PullStreamTaskInfo::SetWatermarkList(const vector<PullPushWatermarkInfo>& _watermarkList)
{
    m_watermarkList = _watermarkList;
    m_watermarkListHasBeenSet = true;
}

bool PullStreamTaskInfo::WatermarkListHasBeenSet() const
{
    return m_watermarkListHasBeenSet;
}

int64_t PullStreamTaskInfo::GetVodLocalMode() const
{
    return m_vodLocalMode;
}

void PullStreamTaskInfo::SetVodLocalMode(const int64_t& _vodLocalMode)
{
    m_vodLocalMode = _vodLocalMode;
    m_vodLocalModeHasBeenSet = true;
}

bool PullStreamTaskInfo::VodLocalModeHasBeenSet() const
{
    return m_vodLocalModeHasBeenSet;
}

string PullStreamTaskInfo::GetRecordTemplateId() const
{
    return m_recordTemplateId;
}

void PullStreamTaskInfo::SetRecordTemplateId(const string& _recordTemplateId)
{
    m_recordTemplateId = _recordTemplateId;
    m_recordTemplateIdHasBeenSet = true;
}

bool PullStreamTaskInfo::RecordTemplateIdHasBeenSet() const
{
    return m_recordTemplateIdHasBeenSet;
}

string PullStreamTaskInfo::GetBackupToUrl() const
{
    return m_backupToUrl;
}

void PullStreamTaskInfo::SetBackupToUrl(const string& _backupToUrl)
{
    m_backupToUrl = _backupToUrl;
    m_backupToUrlHasBeenSet = true;
}

bool PullStreamTaskInfo::BackupToUrlHasBeenSet() const
{
    return m_backupToUrlHasBeenSet;
}

string PullStreamTaskInfo::GetTranscodeTemplateName() const
{
    return m_transcodeTemplateName;
}

void PullStreamTaskInfo::SetTranscodeTemplateName(const string& _transcodeTemplateName)
{
    m_transcodeTemplateName = _transcodeTemplateName;
    m_transcodeTemplateNameHasBeenSet = true;
}

bool PullStreamTaskInfo::TranscodeTemplateNameHasBeenSet() const
{
    return m_transcodeTemplateNameHasBeenSet;
}

