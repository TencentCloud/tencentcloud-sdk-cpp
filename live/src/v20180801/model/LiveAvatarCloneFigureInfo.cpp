/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/live/v20180801/model/LiveAvatarCloneFigureInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

LiveAvatarCloneFigureInfo::LiveAvatarCloneFigureInfo() :
    m_taskIdHasBeenSet(false),
    m_sceneTypeHasBeenSet(false),
    m_figureNameHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_avatarKeyHasBeenSet(false),
    m_figureImgHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_materialUrlHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_renewStatusHasBeenSet(false),
    m_isExpiredHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_needPlaybackHasBeenSet(false),
    m_photoVersionHasBeenSet(false),
    m_confirmDemoUrlsHasBeenSet(false),
    m_estimatedCompleteTimeHasBeenSet(false)
{
}

CoreInternalOutcome LiveAvatarCloneFigureInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("SceneType") && !value["SceneType"].IsNull())
    {
        if (!value["SceneType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.SceneType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneType = string(value["SceneType"].GetString());
        m_sceneTypeHasBeenSet = true;
    }

    if (value.HasMember("FigureName") && !value["FigureName"].IsNull())
    {
        if (!value["FigureName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.FigureName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_figureName = string(value["FigureName"].GetString());
        m_figureNameHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.Gender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gender = string(value["Gender"].GetString());
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("AvatarKey") && !value["AvatarKey"].IsNull())
    {
        if (!value["AvatarKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.AvatarKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatarKey = string(value["AvatarKey"].GetString());
        m_avatarKeyHasBeenSet = true;
    }

    if (value.HasMember("FigureImg") && !value["FigureImg"].IsNull())
    {
        if (!value["FigureImg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.FigureImg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_figureImg = string(value["FigureImg"].GetString());
        m_figureImgHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("MaterialUrl") && !value["MaterialUrl"].IsNull())
    {
        if (!value["MaterialUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.MaterialUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialUrl = string(value["MaterialUrl"].GetString());
        m_materialUrlHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("RenewStatus") && !value["RenewStatus"].IsNull())
    {
        if (!value["RenewStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.RenewStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewStatus = string(value["RenewStatus"].GetString());
        m_renewStatusHasBeenSet = true;
    }

    if (value.HasMember("IsExpired") && !value["IsExpired"].IsNull())
    {
        if (!value["IsExpired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.IsExpired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isExpired = value["IsExpired"].GetBool();
        m_isExpiredHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("NeedPlayback") && !value["NeedPlayback"].IsNull())
    {
        if (!value["NeedPlayback"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.NeedPlayback` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_needPlayback = value["NeedPlayback"].GetUint64();
        m_needPlaybackHasBeenSet = true;
    }

    if (value.HasMember("PhotoVersion") && !value["PhotoVersion"].IsNull())
    {
        if (!value["PhotoVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.PhotoVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_photoVersion = value["PhotoVersion"].GetUint64();
        m_photoVersionHasBeenSet = true;
    }

    if (value.HasMember("ConfirmDemoUrls") && !value["ConfirmDemoUrls"].IsNull())
    {
        if (!value["ConfirmDemoUrls"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.ConfirmDemoUrls` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confirmDemoUrls = string(value["ConfirmDemoUrls"].GetString());
        m_confirmDemoUrlsHasBeenSet = true;
    }

    if (value.HasMember("EstimatedCompleteTime") && !value["EstimatedCompleteTime"].IsNull())
    {
        if (!value["EstimatedCompleteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAvatarCloneFigureInfo.EstimatedCompleteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedCompleteTime = string(value["EstimatedCompleteTime"].GetString());
        m_estimatedCompleteTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveAvatarCloneFigureInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneType.c_str(), allocator).Move(), allocator);
    }

    if (m_figureNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FigureName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_figureName.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gender.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_avatarKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvatarKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatarKey.c_str(), allocator).Move(), allocator);
    }

    if (m_figureImgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FigureImg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_figureImg.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_materialUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialUrl.c_str(), allocator).Move(), allocator);
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

    if (m_renewStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_isExpiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExpired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExpired, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_needPlaybackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedPlayback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needPlayback, allocator);
    }

    if (m_photoVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhotoVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_photoVersion, allocator);
    }

    if (m_confirmDemoUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfirmDemoUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confirmDemoUrls.c_str(), allocator).Move(), allocator);
    }

    if (m_estimatedCompleteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstimatedCompleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_estimatedCompleteTime.c_str(), allocator).Move(), allocator);
    }

}


string LiveAvatarCloneFigureInfo::GetTaskId() const
{
    return m_taskId;
}

void LiveAvatarCloneFigureInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string LiveAvatarCloneFigureInfo::GetSceneType() const
{
    return m_sceneType;
}

void LiveAvatarCloneFigureInfo::SetSceneType(const string& _sceneType)
{
    m_sceneType = _sceneType;
    m_sceneTypeHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

string LiveAvatarCloneFigureInfo::GetFigureName() const
{
    return m_figureName;
}

void LiveAvatarCloneFigureInfo::SetFigureName(const string& _figureName)
{
    m_figureName = _figureName;
    m_figureNameHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::FigureNameHasBeenSet() const
{
    return m_figureNameHasBeenSet;
}

string LiveAvatarCloneFigureInfo::GetGender() const
{
    return m_gender;
}

void LiveAvatarCloneFigureInfo::SetGender(const string& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string LiveAvatarCloneFigureInfo::GetStatus() const
{
    return m_status;
}

void LiveAvatarCloneFigureInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t LiveAvatarCloneFigureInfo::GetProgress() const
{
    return m_progress;
}

void LiveAvatarCloneFigureInfo::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string LiveAvatarCloneFigureInfo::GetAvatarKey() const
{
    return m_avatarKey;
}

void LiveAvatarCloneFigureInfo::SetAvatarKey(const string& _avatarKey)
{
    m_avatarKey = _avatarKey;
    m_avatarKeyHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::AvatarKeyHasBeenSet() const
{
    return m_avatarKeyHasBeenSet;
}

string LiveAvatarCloneFigureInfo::GetFigureImg() const
{
    return m_figureImg;
}

void LiveAvatarCloneFigureInfo::SetFigureImg(const string& _figureImg)
{
    m_figureImg = _figureImg;
    m_figureImgHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::FigureImgHasBeenSet() const
{
    return m_figureImgHasBeenSet;
}

string LiveAvatarCloneFigureInfo::GetFailReason() const
{
    return m_failReason;
}

void LiveAvatarCloneFigureInfo::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string LiveAvatarCloneFigureInfo::GetMaterialUrl() const
{
    return m_materialUrl;
}

void LiveAvatarCloneFigureInfo::SetMaterialUrl(const string& _materialUrl)
{
    m_materialUrl = _materialUrl;
    m_materialUrlHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::MaterialUrlHasBeenSet() const
{
    return m_materialUrlHasBeenSet;
}

string LiveAvatarCloneFigureInfo::GetCreateTime() const
{
    return m_createTime;
}

void LiveAvatarCloneFigureInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LiveAvatarCloneFigureInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void LiveAvatarCloneFigureInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string LiveAvatarCloneFigureInfo::GetRenewStatus() const
{
    return m_renewStatus;
}

void LiveAvatarCloneFigureInfo::SetRenewStatus(const string& _renewStatus)
{
    m_renewStatus = _renewStatus;
    m_renewStatusHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::RenewStatusHasBeenSet() const
{
    return m_renewStatusHasBeenSet;
}

bool LiveAvatarCloneFigureInfo::GetIsExpired() const
{
    return m_isExpired;
}

void LiveAvatarCloneFigureInfo::SetIsExpired(const bool& _isExpired)
{
    m_isExpired = _isExpired;
    m_isExpiredHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::IsExpiredHasBeenSet() const
{
    return m_isExpiredHasBeenSet;
}

string LiveAvatarCloneFigureInfo::GetExpireTime() const
{
    return m_expireTime;
}

void LiveAvatarCloneFigureInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t LiveAvatarCloneFigureInfo::GetNeedPlayback() const
{
    return m_needPlayback;
}

void LiveAvatarCloneFigureInfo::SetNeedPlayback(const uint64_t& _needPlayback)
{
    m_needPlayback = _needPlayback;
    m_needPlaybackHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::NeedPlaybackHasBeenSet() const
{
    return m_needPlaybackHasBeenSet;
}

uint64_t LiveAvatarCloneFigureInfo::GetPhotoVersion() const
{
    return m_photoVersion;
}

void LiveAvatarCloneFigureInfo::SetPhotoVersion(const uint64_t& _photoVersion)
{
    m_photoVersion = _photoVersion;
    m_photoVersionHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::PhotoVersionHasBeenSet() const
{
    return m_photoVersionHasBeenSet;
}

string LiveAvatarCloneFigureInfo::GetConfirmDemoUrls() const
{
    return m_confirmDemoUrls;
}

void LiveAvatarCloneFigureInfo::SetConfirmDemoUrls(const string& _confirmDemoUrls)
{
    m_confirmDemoUrls = _confirmDemoUrls;
    m_confirmDemoUrlsHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::ConfirmDemoUrlsHasBeenSet() const
{
    return m_confirmDemoUrlsHasBeenSet;
}

string LiveAvatarCloneFigureInfo::GetEstimatedCompleteTime() const
{
    return m_estimatedCompleteTime;
}

void LiveAvatarCloneFigureInfo::SetEstimatedCompleteTime(const string& _estimatedCompleteTime)
{
    m_estimatedCompleteTime = _estimatedCompleteTime;
    m_estimatedCompleteTimeHasBeenSet = true;
}

bool LiveAvatarCloneFigureInfo::EstimatedCompleteTimeHasBeenSet() const
{
    return m_estimatedCompleteTimeHasBeenSet;
}

