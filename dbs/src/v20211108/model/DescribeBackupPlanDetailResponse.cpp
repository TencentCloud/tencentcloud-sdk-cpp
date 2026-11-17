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

#include <tencentcloud/dbs/v20211108/model/DescribeBackupPlanDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

DescribeBackupPlanDetailResponse::DescribeBackupPlanDetailResponse() :
    m_regionHasBeenSet(false),
    m_backupPlanIdHasBeenSet(false),
    m_backupPlanNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sourceEndPointHasBeenSet(false),
    m_backupObjectHasBeenSet(false),
    m_backupStrategyHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_offlineTimeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_sourceInfoHasBeenSet(false),
    m_setSourceInfoHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_lastBackupJobTimeHasBeenSet(false),
    m_lastFullBackupJobStatusHasBeenSet(false),
    m_lastIncBackupJobStatusHasBeenSet(false),
    m_nextBackupJobTimeHasBeenSet(false),
    m_lastRestoreJobTimeHasBeenSet(false),
    m_lastRestoreJobStatusHasBeenSet(false),
    m_payInfoHasBeenSet(false),
    m_upperParallelHasBeenSet(false),
    m_upperBandwidthHasBeenSet(false),
    m_allowedActionsHasBeenSet(false),
    m_restoreRangeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupPlanDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("BackupPlanId") && !rsp["BackupPlanId"].IsNull())
    {
        if (!rsp["BackupPlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupPlanId = string(rsp["BackupPlanId"].GetString());
        m_backupPlanIdHasBeenSet = true;
    }

    if (rsp.HasMember("BackupPlanName") && !rsp["BackupPlanName"].IsNull())
    {
        if (!rsp["BackupPlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupPlanName = string(rsp["BackupPlanName"].GetString());
        m_backupPlanNameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("SourceEndPoint") && !rsp["SourceEndPoint"].IsNull())
    {
        if (!rsp["SourceEndPoint"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SourceEndPoint` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SourceEndPoint"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Endpoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sourceEndPoint.push_back(item);
        }
        m_sourceEndPointHasBeenSet = true;
    }

    if (rsp.HasMember("BackupObject") && !rsp["BackupObject"].IsNull())
    {
        if (!rsp["BackupObject"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackupObject` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupObject.Deserialize(rsp["BackupObject"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupObjectHasBeenSet = true;
    }

    if (rsp.HasMember("BackupStrategy") && !rsp["BackupStrategy"].IsNull())
    {
        if (!rsp["BackupStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupStrategy.Deserialize(rsp["BackupStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupStrategyHasBeenSet = true;
    }

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Progress` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_progress.Deserialize(rsp["Progress"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_progressHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorInfo") && !rsp["ErrorInfo"].IsNull())
    {
        if (!rsp["ErrorInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_errorInfo.Deserialize(rsp["ErrorInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorInfoHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(rsp["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("OfflineTime") && !rsp["OfflineTime"].IsNull())
    {
        if (!rsp["OfflineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineTime = string(rsp["OfflineTime"].GetString());
        m_offlineTimeHasBeenSet = true;
    }

    if (rsp.HasMember("AutoRenewFlag") && !rsp["AutoRenewFlag"].IsNull())
    {
        if (!rsp["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = rsp["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (rsp.HasMember("SourceInfo") && !rsp["SourceInfo"].IsNull())
    {
        if (!rsp["SourceInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SourceInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SourceInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceInfo.push_back((*itr).GetString());
        }
        m_sourceInfoHasBeenSet = true;
    }

    if (rsp.HasMember("SetSourceInfo") && !rsp["SetSourceInfo"].IsNull())
    {
        if (!rsp["SetSourceInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SetSourceInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SetSourceInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_setSourceInfo.push_back((*itr).GetString());
        }
        m_setSourceInfoHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("LastBackupJobTime") && !rsp["LastBackupJobTime"].IsNull())
    {
        if (!rsp["LastBackupJobTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastBackupJobTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastBackupJobTime = string(rsp["LastBackupJobTime"].GetString());
        m_lastBackupJobTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LastFullBackupJobStatus") && !rsp["LastFullBackupJobStatus"].IsNull())
    {
        if (!rsp["LastFullBackupJobStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastFullBackupJobStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastFullBackupJobStatus = string(rsp["LastFullBackupJobStatus"].GetString());
        m_lastFullBackupJobStatusHasBeenSet = true;
    }

    if (rsp.HasMember("LastIncBackupJobStatus") && !rsp["LastIncBackupJobStatus"].IsNull())
    {
        if (!rsp["LastIncBackupJobStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastIncBackupJobStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastIncBackupJobStatus = string(rsp["LastIncBackupJobStatus"].GetString());
        m_lastIncBackupJobStatusHasBeenSet = true;
    }

    if (rsp.HasMember("NextBackupJobTime") && !rsp["NextBackupJobTime"].IsNull())
    {
        if (!rsp["NextBackupJobTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NextBackupJobTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextBackupJobTime = string(rsp["NextBackupJobTime"].GetString());
        m_nextBackupJobTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LastRestoreJobTime") && !rsp["LastRestoreJobTime"].IsNull())
    {
        if (!rsp["LastRestoreJobTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastRestoreJobTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastRestoreJobTime = string(rsp["LastRestoreJobTime"].GetString());
        m_lastRestoreJobTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LastRestoreJobStatus") && !rsp["LastRestoreJobStatus"].IsNull())
    {
        if (!rsp["LastRestoreJobStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastRestoreJobStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastRestoreJobStatus = string(rsp["LastRestoreJobStatus"].GetString());
        m_lastRestoreJobStatusHasBeenSet = true;
    }

    if (rsp.HasMember("PayInfo") && !rsp["PayInfo"].IsNull())
    {
        if (!rsp["PayInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PayInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_payInfo.Deserialize(rsp["PayInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_payInfoHasBeenSet = true;
    }

    if (rsp.HasMember("UpperParallel") && !rsp["UpperParallel"].IsNull())
    {
        if (!rsp["UpperParallel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpperParallel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upperParallel = rsp["UpperParallel"].GetInt64();
        m_upperParallelHasBeenSet = true;
    }

    if (rsp.HasMember("UpperBandwidth") && !rsp["UpperBandwidth"].IsNull())
    {
        if (!rsp["UpperBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpperBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upperBandwidth = rsp["UpperBandwidth"].GetInt64();
        m_upperBandwidthHasBeenSet = true;
    }

    if (rsp.HasMember("AllowedActions") && !rsp["AllowedActions"].IsNull())
    {
        if (!rsp["AllowedActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AllowedActions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AllowedActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowedActions.push_back((*itr).GetString());
        }
        m_allowedActionsHasBeenSet = true;
    }

    if (rsp.HasMember("RestoreRange") && !rsp["RestoreRange"].IsNull())
    {
        if (!rsp["RestoreRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_restoreRange.Deserialize(rsp["RestoreRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_restoreRangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupPlanDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupPlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPlanNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPlanName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupPlanName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceEndPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceEndPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceEndPoint.begin(); itr != m_sourceEndPoint.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_backupObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupObject.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backupStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_progress.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_errorInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_offlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_sourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceInfo.begin(); itr != m_sourceInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_setSourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetSourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_setSourceInfo.begin(); itr != m_setSourceInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lastBackupJobTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastBackupJobTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastBackupJobTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastFullBackupJobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastFullBackupJobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastFullBackupJobStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_lastIncBackupJobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastIncBackupJobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastIncBackupJobStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_nextBackupJobTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextBackupJobTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextBackupJobTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastRestoreJobTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRestoreJobTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastRestoreJobTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastRestoreJobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRestoreJobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastRestoreJobStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_payInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_payInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_upperParallelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpperParallel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upperParallel, allocator);
    }

    if (m_upperBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpperBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upperBandwidth, allocator);
    }

    if (m_allowedActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowedActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowedActions.begin(); itr != m_allowedActions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_restoreRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_restoreRange.ToJsonObject(value[key.c_str()], allocator);
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


string DescribeBackupPlanDetailResponse::GetRegion() const
{
    return m_region;
}

bool DescribeBackupPlanDetailResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeBackupPlanDetailResponse::GetBackupPlanId() const
{
    return m_backupPlanId;
}

bool DescribeBackupPlanDetailResponse::BackupPlanIdHasBeenSet() const
{
    return m_backupPlanIdHasBeenSet;
}

string DescribeBackupPlanDetailResponse::GetBackupPlanName() const
{
    return m_backupPlanName;
}

bool DescribeBackupPlanDetailResponse::BackupPlanNameHasBeenSet() const
{
    return m_backupPlanNameHasBeenSet;
}

string DescribeBackupPlanDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeBackupPlanDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<Endpoint> DescribeBackupPlanDetailResponse::GetSourceEndPoint() const
{
    return m_sourceEndPoint;
}

bool DescribeBackupPlanDetailResponse::SourceEndPointHasBeenSet() const
{
    return m_sourceEndPointHasBeenSet;
}

BackupObject DescribeBackupPlanDetailResponse::GetBackupObject() const
{
    return m_backupObject;
}

bool DescribeBackupPlanDetailResponse::BackupObjectHasBeenSet() const
{
    return m_backupObjectHasBeenSet;
}

BackupStrategyItem DescribeBackupPlanDetailResponse::GetBackupStrategy() const
{
    return m_backupStrategy;
}

bool DescribeBackupPlanDetailResponse::BackupStrategyHasBeenSet() const
{
    return m_backupStrategyHasBeenSet;
}

BackupProgress DescribeBackupPlanDetailResponse::GetProgress() const
{
    return m_progress;
}

bool DescribeBackupPlanDetailResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

ErrorInfo DescribeBackupPlanDetailResponse::GetErrorInfo() const
{
    return m_errorInfo;
}

bool DescribeBackupPlanDetailResponse::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}

string DescribeBackupPlanDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeBackupPlanDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeBackupPlanDetailResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribeBackupPlanDetailResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeBackupPlanDetailResponse::GetOfflineTime() const
{
    return m_offlineTime;
}

bool DescribeBackupPlanDetailResponse::OfflineTimeHasBeenSet() const
{
    return m_offlineTimeHasBeenSet;
}

int64_t DescribeBackupPlanDetailResponse::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

bool DescribeBackupPlanDetailResponse::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

vector<string> DescribeBackupPlanDetailResponse::GetSourceInfo() const
{
    return m_sourceInfo;
}

bool DescribeBackupPlanDetailResponse::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}

vector<string> DescribeBackupPlanDetailResponse::GetSetSourceInfo() const
{
    return m_setSourceInfo;
}

bool DescribeBackupPlanDetailResponse::SetSourceInfoHasBeenSet() const
{
    return m_setSourceInfoHasBeenSet;
}

vector<TagInfo> DescribeBackupPlanDetailResponse::GetTags() const
{
    return m_tags;
}

bool DescribeBackupPlanDetailResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DescribeBackupPlanDetailResponse::GetLastBackupJobTime() const
{
    return m_lastBackupJobTime;
}

bool DescribeBackupPlanDetailResponse::LastBackupJobTimeHasBeenSet() const
{
    return m_lastBackupJobTimeHasBeenSet;
}

string DescribeBackupPlanDetailResponse::GetLastFullBackupJobStatus() const
{
    return m_lastFullBackupJobStatus;
}

bool DescribeBackupPlanDetailResponse::LastFullBackupJobStatusHasBeenSet() const
{
    return m_lastFullBackupJobStatusHasBeenSet;
}

string DescribeBackupPlanDetailResponse::GetLastIncBackupJobStatus() const
{
    return m_lastIncBackupJobStatus;
}

bool DescribeBackupPlanDetailResponse::LastIncBackupJobStatusHasBeenSet() const
{
    return m_lastIncBackupJobStatusHasBeenSet;
}

string DescribeBackupPlanDetailResponse::GetNextBackupJobTime() const
{
    return m_nextBackupJobTime;
}

bool DescribeBackupPlanDetailResponse::NextBackupJobTimeHasBeenSet() const
{
    return m_nextBackupJobTimeHasBeenSet;
}

string DescribeBackupPlanDetailResponse::GetLastRestoreJobTime() const
{
    return m_lastRestoreJobTime;
}

bool DescribeBackupPlanDetailResponse::LastRestoreJobTimeHasBeenSet() const
{
    return m_lastRestoreJobTimeHasBeenSet;
}

string DescribeBackupPlanDetailResponse::GetLastRestoreJobStatus() const
{
    return m_lastRestoreJobStatus;
}

bool DescribeBackupPlanDetailResponse::LastRestoreJobStatusHasBeenSet() const
{
    return m_lastRestoreJobStatusHasBeenSet;
}

BackupPlanPayInfo DescribeBackupPlanDetailResponse::GetPayInfo() const
{
    return m_payInfo;
}

bool DescribeBackupPlanDetailResponse::PayInfoHasBeenSet() const
{
    return m_payInfoHasBeenSet;
}

int64_t DescribeBackupPlanDetailResponse::GetUpperParallel() const
{
    return m_upperParallel;
}

bool DescribeBackupPlanDetailResponse::UpperParallelHasBeenSet() const
{
    return m_upperParallelHasBeenSet;
}

int64_t DescribeBackupPlanDetailResponse::GetUpperBandwidth() const
{
    return m_upperBandwidth;
}

bool DescribeBackupPlanDetailResponse::UpperBandwidthHasBeenSet() const
{
    return m_upperBandwidthHasBeenSet;
}

vector<string> DescribeBackupPlanDetailResponse::GetAllowedActions() const
{
    return m_allowedActions;
}

bool DescribeBackupPlanDetailResponse::AllowedActionsHasBeenSet() const
{
    return m_allowedActionsHasBeenSet;
}

RestoreRange DescribeBackupPlanDetailResponse::GetRestoreRange() const
{
    return m_restoreRange;
}

bool DescribeBackupPlanDetailResponse::RestoreRangeHasBeenSet() const
{
    return m_restoreRangeHasBeenSet;
}


