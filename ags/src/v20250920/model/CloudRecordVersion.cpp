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

#include <tencentcloud/ags/v20250920/model/CloudRecordVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

CloudRecordVersion::CloudRecordVersion() :
    m_versionIdHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_approvalModeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_descriptorsHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceConfigHasBeenSet(false),
    m_contentStatusHasBeenSet(false),
    m_contentSHA256HasBeenSet(false),
    m_contentSizeBytesHasBeenSet(false),
    m_configSHA256HasBeenSet(false),
    m_creatorSubAccountUinHasBeenSet(false),
    m_approvalActionsHasBeenSet(false),
    m_contentReadyTimeHasBeenSet(false),
    m_changeLogHasBeenSet(false),
    m_labelSetHasBeenSet(false)
{
}

CoreInternalOutcome CloudRecordVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(value["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("Revision") && !value["Revision"].IsNull())
    {
        if (!value["Revision"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.Revision` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_revision = value["Revision"].GetInt64();
        m_revisionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ApprovalMode") && !value["ApprovalMode"].IsNull())
    {
        if (!value["ApprovalMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.ApprovalMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalMode = string(value["ApprovalMode"].GetString());
        m_approvalModeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("Descriptors") && !value["Descriptors"].IsNull())
    {
        if (!value["Descriptors"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.Descriptors` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descriptors = string(value["Descriptors"].GetString());
        m_descriptorsHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceConfig") && !value["SourceConfig"].IsNull())
    {
        if (!value["SourceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.SourceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceConfig = string(value["SourceConfig"].GetString());
        m_sourceConfigHasBeenSet = true;
    }

    if (value.HasMember("ContentStatus") && !value["ContentStatus"].IsNull())
    {
        if (!value["ContentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.ContentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentStatus = string(value["ContentStatus"].GetString());
        m_contentStatusHasBeenSet = true;
    }

    if (value.HasMember("ContentSHA256") && !value["ContentSHA256"].IsNull())
    {
        if (!value["ContentSHA256"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.ContentSHA256` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentSHA256 = string(value["ContentSHA256"].GetString());
        m_contentSHA256HasBeenSet = true;
    }

    if (value.HasMember("ContentSizeBytes") && !value["ContentSizeBytes"].IsNull())
    {
        if (!value["ContentSizeBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.ContentSizeBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_contentSizeBytes = value["ContentSizeBytes"].GetInt64();
        m_contentSizeBytesHasBeenSet = true;
    }

    if (value.HasMember("ConfigSHA256") && !value["ConfigSHA256"].IsNull())
    {
        if (!value["ConfigSHA256"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.ConfigSHA256` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configSHA256 = string(value["ConfigSHA256"].GetString());
        m_configSHA256HasBeenSet = true;
    }

    if (value.HasMember("CreatorSubAccountUin") && !value["CreatorSubAccountUin"].IsNull())
    {
        if (!value["CreatorSubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.CreatorSubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorSubAccountUin = string(value["CreatorSubAccountUin"].GetString());
        m_creatorSubAccountUinHasBeenSet = true;
    }

    if (value.HasMember("ApprovalActions") && !value["ApprovalActions"].IsNull())
    {
        if (!value["ApprovalActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.ApprovalActions` is not array type"));

        const rapidjson::Value &tmpValue = value["ApprovalActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudVersionApprovalAction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_approvalActions.push_back(item);
        }
        m_approvalActionsHasBeenSet = true;
    }

    if (value.HasMember("ContentReadyTime") && !value["ContentReadyTime"].IsNull())
    {
        if (!value["ContentReadyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.ContentReadyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentReadyTime = string(value["ContentReadyTime"].GetString());
        m_contentReadyTimeHasBeenSet = true;
    }

    if (value.HasMember("ChangeLog") && !value["ChangeLog"].IsNull())
    {
        if (!value["ChangeLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.ChangeLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_changeLog = string(value["ChangeLog"].GetString());
        m_changeLogHasBeenSet = true;
    }

    if (value.HasMember("LabelSet") && !value["LabelSet"].IsNull())
    {
        if (!value["LabelSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudRecordVersion.LabelSet` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelSet.push_back((*itr).GetString());
        }
        m_labelSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudRecordVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_revisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Revision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_revision, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalMode.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
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

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Descriptors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descriptors.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_contentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_contentSHA256HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentSHA256";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentSHA256.c_str(), allocator).Move(), allocator);
    }

    if (m_contentSizeBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentSizeBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentSizeBytes, allocator);
    }

    if (m_configSHA256HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigSHA256";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configSHA256.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorSubAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_approvalActions.begin(); itr != m_approvalActions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_contentReadyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentReadyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentReadyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_changeLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_changeLog.c_str(), allocator).Move(), allocator);
    }

    if (m_labelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelSet.begin(); itr != m_labelSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CloudRecordVersion::GetVersionId() const
{
    return m_versionId;
}

void CloudRecordVersion::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool CloudRecordVersion::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string CloudRecordVersion::GetRecordId() const
{
    return m_recordId;
}

void CloudRecordVersion::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool CloudRecordVersion::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

int64_t CloudRecordVersion::GetRevision() const
{
    return m_revision;
}

void CloudRecordVersion::SetRevision(const int64_t& _revision)
{
    m_revision = _revision;
    m_revisionHasBeenSet = true;
}

bool CloudRecordVersion::RevisionHasBeenSet() const
{
    return m_revisionHasBeenSet;
}

string CloudRecordVersion::GetStatus() const
{
    return m_status;
}

void CloudRecordVersion::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CloudRecordVersion::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CloudRecordVersion::GetApprovalMode() const
{
    return m_approvalMode;
}

void CloudRecordVersion::SetApprovalMode(const string& _approvalMode)
{
    m_approvalMode = _approvalMode;
    m_approvalModeHasBeenSet = true;
}

bool CloudRecordVersion::ApprovalModeHasBeenSet() const
{
    return m_approvalModeHasBeenSet;
}

int64_t CloudRecordVersion::GetAppId() const
{
    return m_appId;
}

void CloudRecordVersion::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CloudRecordVersion::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CloudRecordVersion::GetCreatorUin() const
{
    return m_creatorUin;
}

void CloudRecordVersion::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool CloudRecordVersion::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string CloudRecordVersion::GetCreateTime() const
{
    return m_createTime;
}

void CloudRecordVersion::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CloudRecordVersion::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CloudRecordVersion::GetUpdateTime() const
{
    return m_updateTime;
}

void CloudRecordVersion::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CloudRecordVersion::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string CloudRecordVersion::GetVersionName() const
{
    return m_versionName;
}

void CloudRecordVersion::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool CloudRecordVersion::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string CloudRecordVersion::GetDescriptors() const
{
    return m_descriptors;
}

void CloudRecordVersion::SetDescriptors(const string& _descriptors)
{
    m_descriptors = _descriptors;
    m_descriptorsHasBeenSet = true;
}

bool CloudRecordVersion::DescriptorsHasBeenSet() const
{
    return m_descriptorsHasBeenSet;
}

string CloudRecordVersion::GetSourceType() const
{
    return m_sourceType;
}

void CloudRecordVersion::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CloudRecordVersion::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string CloudRecordVersion::GetSourceConfig() const
{
    return m_sourceConfig;
}

void CloudRecordVersion::SetSourceConfig(const string& _sourceConfig)
{
    m_sourceConfig = _sourceConfig;
    m_sourceConfigHasBeenSet = true;
}

bool CloudRecordVersion::SourceConfigHasBeenSet() const
{
    return m_sourceConfigHasBeenSet;
}

string CloudRecordVersion::GetContentStatus() const
{
    return m_contentStatus;
}

void CloudRecordVersion::SetContentStatus(const string& _contentStatus)
{
    m_contentStatus = _contentStatus;
    m_contentStatusHasBeenSet = true;
}

bool CloudRecordVersion::ContentStatusHasBeenSet() const
{
    return m_contentStatusHasBeenSet;
}

string CloudRecordVersion::GetContentSHA256() const
{
    return m_contentSHA256;
}

void CloudRecordVersion::SetContentSHA256(const string& _contentSHA256)
{
    m_contentSHA256 = _contentSHA256;
    m_contentSHA256HasBeenSet = true;
}

bool CloudRecordVersion::ContentSHA256HasBeenSet() const
{
    return m_contentSHA256HasBeenSet;
}

int64_t CloudRecordVersion::GetContentSizeBytes() const
{
    return m_contentSizeBytes;
}

void CloudRecordVersion::SetContentSizeBytes(const int64_t& _contentSizeBytes)
{
    m_contentSizeBytes = _contentSizeBytes;
    m_contentSizeBytesHasBeenSet = true;
}

bool CloudRecordVersion::ContentSizeBytesHasBeenSet() const
{
    return m_contentSizeBytesHasBeenSet;
}

string CloudRecordVersion::GetConfigSHA256() const
{
    return m_configSHA256;
}

void CloudRecordVersion::SetConfigSHA256(const string& _configSHA256)
{
    m_configSHA256 = _configSHA256;
    m_configSHA256HasBeenSet = true;
}

bool CloudRecordVersion::ConfigSHA256HasBeenSet() const
{
    return m_configSHA256HasBeenSet;
}

string CloudRecordVersion::GetCreatorSubAccountUin() const
{
    return m_creatorSubAccountUin;
}

void CloudRecordVersion::SetCreatorSubAccountUin(const string& _creatorSubAccountUin)
{
    m_creatorSubAccountUin = _creatorSubAccountUin;
    m_creatorSubAccountUinHasBeenSet = true;
}

bool CloudRecordVersion::CreatorSubAccountUinHasBeenSet() const
{
    return m_creatorSubAccountUinHasBeenSet;
}

vector<CloudVersionApprovalAction> CloudRecordVersion::GetApprovalActions() const
{
    return m_approvalActions;
}

void CloudRecordVersion::SetApprovalActions(const vector<CloudVersionApprovalAction>& _approvalActions)
{
    m_approvalActions = _approvalActions;
    m_approvalActionsHasBeenSet = true;
}

bool CloudRecordVersion::ApprovalActionsHasBeenSet() const
{
    return m_approvalActionsHasBeenSet;
}

string CloudRecordVersion::GetContentReadyTime() const
{
    return m_contentReadyTime;
}

void CloudRecordVersion::SetContentReadyTime(const string& _contentReadyTime)
{
    m_contentReadyTime = _contentReadyTime;
    m_contentReadyTimeHasBeenSet = true;
}

bool CloudRecordVersion::ContentReadyTimeHasBeenSet() const
{
    return m_contentReadyTimeHasBeenSet;
}

string CloudRecordVersion::GetChangeLog() const
{
    return m_changeLog;
}

void CloudRecordVersion::SetChangeLog(const string& _changeLog)
{
    m_changeLog = _changeLog;
    m_changeLogHasBeenSet = true;
}

bool CloudRecordVersion::ChangeLogHasBeenSet() const
{
    return m_changeLogHasBeenSet;
}

vector<string> CloudRecordVersion::GetLabelSet() const
{
    return m_labelSet;
}

void CloudRecordVersion::SetLabelSet(const vector<string>& _labelSet)
{
    m_labelSet = _labelSet;
    m_labelSetHasBeenSet = true;
}

bool CloudRecordVersion::LabelSetHasBeenSet() const
{
    return m_labelSetHasBeenSet;
}

