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

#include <tencentcloud/dbbrain/v20210527/model/BlockingLogItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

BlockingLogItem::BlockingLogItem() :
    m_reportTimeHasBeenSet(false),
    m_monitorLoopHasBeenSet(false),
    m_durationMsHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_objectIdHasBeenSet(false),
    m_indexIdHasBeenSet(false),
    m_rootCauseHasBeenSet(false),
    m_rootCauseDescHasBeenSet(false),
    m_blockingSessionIdHasBeenSet(false),
    m_blockingLoginNameHasBeenSet(false),
    m_blockingHostNameHasBeenSet(false),
    m_blockingClientAppHasBeenSet(false),
    m_blockingStatusHasBeenSet(false),
    m_blockingIsolationLevelHasBeenSet(false),
    m_blockingTransactionNameHasBeenSet(false),
    m_blockingTranCountHasBeenSet(false),
    m_blockingLastTranStartedHasBeenSet(false),
    m_blockingInputBufferHasBeenSet(false),
    m_blockingSqlTemplateHasBeenSet(false),
    m_blockingSqlMd5HasBeenSet(false),
    m_blockingLockModeHasBeenSet(false),
    m_blockingWaitTimeMsHasBeenSet(false),
    m_blockedSessionIdHasBeenSet(false),
    m_blockedTransactionIdHasBeenSet(false),
    m_blockedWaitTimeMsHasBeenSet(false),
    m_blockedLockModeHasBeenSet(false),
    m_blockedWaitResourceHasBeenSet(false),
    m_blockedLoginNameHasBeenSet(false),
    m_blockedHostNameHasBeenSet(false),
    m_blockedClientAppHasBeenSet(false),
    m_blockedStatusHasBeenSet(false),
    m_blockedIsolationLevelHasBeenSet(false),
    m_blockedTransactionNameHasBeenSet(false),
    m_blockedTranCountHasBeenSet(false),
    m_blockedLastTranStartedHasBeenSet(false),
    m_blockedInputBufferHasBeenSet(false),
    m_blockedSqlTemplateHasBeenSet(false),
    m_blockedSqlMd5HasBeenSet(false),
    m_blockedProcessXmlHasBeenSet(false)
{
}

CoreInternalOutcome BlockingLogItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReportTime") && !value["ReportTime"].IsNull())
    {
        if (!value["ReportTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.ReportTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportTime = string(value["ReportTime"].GetString());
        m_reportTimeHasBeenSet = true;
    }

    if (value.HasMember("MonitorLoop") && !value["MonitorLoop"].IsNull())
    {
        if (!value["MonitorLoop"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.MonitorLoop` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorLoop = string(value["MonitorLoop"].GetString());
        m_monitorLoopHasBeenSet = true;
    }

    if (value.HasMember("DurationMs") && !value["DurationMs"].IsNull())
    {
        if (!value["DurationMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.DurationMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_durationMs = value["DurationMs"].GetInt64();
        m_durationMsHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.DatabaseId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = value["DatabaseId"].GetInt64();
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("ObjectId") && !value["ObjectId"].IsNull())
    {
        if (!value["ObjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.ObjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_objectId = value["ObjectId"].GetInt64();
        m_objectIdHasBeenSet = true;
    }

    if (value.HasMember("IndexId") && !value["IndexId"].IsNull())
    {
        if (!value["IndexId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.IndexId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indexId = value["IndexId"].GetInt64();
        m_indexIdHasBeenSet = true;
    }

    if (value.HasMember("RootCause") && !value["RootCause"].IsNull())
    {
        if (!value["RootCause"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.RootCause` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rootCause = string(value["RootCause"].GetString());
        m_rootCauseHasBeenSet = true;
    }

    if (value.HasMember("RootCauseDesc") && !value["RootCauseDesc"].IsNull())
    {
        if (!value["RootCauseDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.RootCauseDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rootCauseDesc = string(value["RootCauseDesc"].GetString());
        m_rootCauseDescHasBeenSet = true;
    }

    if (value.HasMember("BlockingSessionId") && !value["BlockingSessionId"].IsNull())
    {
        if (!value["BlockingSessionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockingSessionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockingSessionId = value["BlockingSessionId"].GetInt64();
        m_blockingSessionIdHasBeenSet = true;
    }

    if (value.HasMember("BlockingLoginName") && !value["BlockingLoginName"].IsNull())
    {
        if (!value["BlockingLoginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockingLoginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingLoginName = string(value["BlockingLoginName"].GetString());
        m_blockingLoginNameHasBeenSet = true;
    }

    if (value.HasMember("BlockingHostName") && !value["BlockingHostName"].IsNull())
    {
        if (!value["BlockingHostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockingHostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingHostName = string(value["BlockingHostName"].GetString());
        m_blockingHostNameHasBeenSet = true;
    }

    if (value.HasMember("BlockingClientApp") && !value["BlockingClientApp"].IsNull())
    {
        if (!value["BlockingClientApp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockingClientApp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingClientApp = string(value["BlockingClientApp"].GetString());
        m_blockingClientAppHasBeenSet = true;
    }

    if (value.HasMember("BlockingStatus") && !value["BlockingStatus"].IsNull())
    {
        if (!value["BlockingStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockingStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingStatus = string(value["BlockingStatus"].GetString());
        m_blockingStatusHasBeenSet = true;
    }

    if (value.HasMember("BlockingIsolationLevel") && !value["BlockingIsolationLevel"].IsNull())
    {
        if (!value["BlockingIsolationLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockingIsolationLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingIsolationLevel = string(value["BlockingIsolationLevel"].GetString());
        m_blockingIsolationLevelHasBeenSet = true;
    }

    if (value.HasMember("BlockingTransactionName") && !value["BlockingTransactionName"].IsNull())
    {
        if (!value["BlockingTransactionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockingTransactionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingTransactionName = string(value["BlockingTransactionName"].GetString());
        m_blockingTransactionNameHasBeenSet = true;
    }

    if (value.HasMember("BlockingTranCount") && !value["BlockingTranCount"].IsNull())
    {
        if (!value["BlockingTranCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockingTranCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockingTranCount = value["BlockingTranCount"].GetInt64();
        m_blockingTranCountHasBeenSet = true;
    }

    if (value.HasMember("BlockingLastTranStarted") && !value["BlockingLastTranStarted"].IsNull())
    {
        if (!value["BlockingLastTranStarted"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockingLastTranStarted` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingLastTranStarted = string(value["BlockingLastTranStarted"].GetString());
        m_blockingLastTranStartedHasBeenSet = true;
    }

    if (value.HasMember("BlockingInputBuffer") && !value["BlockingInputBuffer"].IsNull())
    {
        if (!value["BlockingInputBuffer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockingInputBuffer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingInputBuffer = string(value["BlockingInputBuffer"].GetString());
        m_blockingInputBufferHasBeenSet = true;
    }

    if (value.HasMember("BlockingSqlTemplate") && !value["BlockingSqlTemplate"].IsNull())
    {
        if (!value["BlockingSqlTemplate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockingSqlTemplate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingSqlTemplate = string(value["BlockingSqlTemplate"].GetString());
        m_blockingSqlTemplateHasBeenSet = true;
    }

    if (value.HasMember("BlockingSqlMd5") && !value["BlockingSqlMd5"].IsNull())
    {
        if (!value["BlockingSqlMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockingSqlMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingSqlMd5 = string(value["BlockingSqlMd5"].GetString());
        m_blockingSqlMd5HasBeenSet = true;
    }

    if (value.HasMember("BlockingLockMode") && !value["BlockingLockMode"].IsNull())
    {
        if (!value["BlockingLockMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockingLockMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingLockMode = string(value["BlockingLockMode"].GetString());
        m_blockingLockModeHasBeenSet = true;
    }

    if (value.HasMember("BlockingWaitTimeMs") && !value["BlockingWaitTimeMs"].IsNull())
    {
        if (!value["BlockingWaitTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockingWaitTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockingWaitTimeMs = value["BlockingWaitTimeMs"].GetInt64();
        m_blockingWaitTimeMsHasBeenSet = true;
    }

    if (value.HasMember("BlockedSessionId") && !value["BlockedSessionId"].IsNull())
    {
        if (!value["BlockedSessionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockedSessionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockedSessionId = value["BlockedSessionId"].GetInt64();
        m_blockedSessionIdHasBeenSet = true;
    }

    if (value.HasMember("BlockedTransactionId") && !value["BlockedTransactionId"].IsNull())
    {
        if (!value["BlockedTransactionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockedTransactionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockedTransactionId = value["BlockedTransactionId"].GetInt64();
        m_blockedTransactionIdHasBeenSet = true;
    }

    if (value.HasMember("BlockedWaitTimeMs") && !value["BlockedWaitTimeMs"].IsNull())
    {
        if (!value["BlockedWaitTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockedWaitTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockedWaitTimeMs = value["BlockedWaitTimeMs"].GetInt64();
        m_blockedWaitTimeMsHasBeenSet = true;
    }

    if (value.HasMember("BlockedLockMode") && !value["BlockedLockMode"].IsNull())
    {
        if (!value["BlockedLockMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockedLockMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedLockMode = string(value["BlockedLockMode"].GetString());
        m_blockedLockModeHasBeenSet = true;
    }

    if (value.HasMember("BlockedWaitResource") && !value["BlockedWaitResource"].IsNull())
    {
        if (!value["BlockedWaitResource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockedWaitResource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedWaitResource = string(value["BlockedWaitResource"].GetString());
        m_blockedWaitResourceHasBeenSet = true;
    }

    if (value.HasMember("BlockedLoginName") && !value["BlockedLoginName"].IsNull())
    {
        if (!value["BlockedLoginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockedLoginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedLoginName = string(value["BlockedLoginName"].GetString());
        m_blockedLoginNameHasBeenSet = true;
    }

    if (value.HasMember("BlockedHostName") && !value["BlockedHostName"].IsNull())
    {
        if (!value["BlockedHostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockedHostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedHostName = string(value["BlockedHostName"].GetString());
        m_blockedHostNameHasBeenSet = true;
    }

    if (value.HasMember("BlockedClientApp") && !value["BlockedClientApp"].IsNull())
    {
        if (!value["BlockedClientApp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockedClientApp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedClientApp = string(value["BlockedClientApp"].GetString());
        m_blockedClientAppHasBeenSet = true;
    }

    if (value.HasMember("BlockedStatus") && !value["BlockedStatus"].IsNull())
    {
        if (!value["BlockedStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockedStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedStatus = string(value["BlockedStatus"].GetString());
        m_blockedStatusHasBeenSet = true;
    }

    if (value.HasMember("BlockedIsolationLevel") && !value["BlockedIsolationLevel"].IsNull())
    {
        if (!value["BlockedIsolationLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockedIsolationLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedIsolationLevel = string(value["BlockedIsolationLevel"].GetString());
        m_blockedIsolationLevelHasBeenSet = true;
    }

    if (value.HasMember("BlockedTransactionName") && !value["BlockedTransactionName"].IsNull())
    {
        if (!value["BlockedTransactionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockedTransactionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedTransactionName = string(value["BlockedTransactionName"].GetString());
        m_blockedTransactionNameHasBeenSet = true;
    }

    if (value.HasMember("BlockedTranCount") && !value["BlockedTranCount"].IsNull())
    {
        if (!value["BlockedTranCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockedTranCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockedTranCount = value["BlockedTranCount"].GetInt64();
        m_blockedTranCountHasBeenSet = true;
    }

    if (value.HasMember("BlockedLastTranStarted") && !value["BlockedLastTranStarted"].IsNull())
    {
        if (!value["BlockedLastTranStarted"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockedLastTranStarted` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedLastTranStarted = string(value["BlockedLastTranStarted"].GetString());
        m_blockedLastTranStartedHasBeenSet = true;
    }

    if (value.HasMember("BlockedInputBuffer") && !value["BlockedInputBuffer"].IsNull())
    {
        if (!value["BlockedInputBuffer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockedInputBuffer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedInputBuffer = string(value["BlockedInputBuffer"].GetString());
        m_blockedInputBufferHasBeenSet = true;
    }

    if (value.HasMember("BlockedSqlTemplate") && !value["BlockedSqlTemplate"].IsNull())
    {
        if (!value["BlockedSqlTemplate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockedSqlTemplate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedSqlTemplate = string(value["BlockedSqlTemplate"].GetString());
        m_blockedSqlTemplateHasBeenSet = true;
    }

    if (value.HasMember("BlockedSqlMd5") && !value["BlockedSqlMd5"].IsNull())
    {
        if (!value["BlockedSqlMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockedSqlMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedSqlMd5 = string(value["BlockedSqlMd5"].GetString());
        m_blockedSqlMd5HasBeenSet = true;
    }

    if (value.HasMember("BlockedProcessXml") && !value["BlockedProcessXml"].IsNull())
    {
        if (!value["BlockedProcessXml"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingLogItem.BlockedProcessXml` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedProcessXml = string(value["BlockedProcessXml"].GetString());
        m_blockedProcessXmlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlockingLogItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reportTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportTime.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorLoopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorLoop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorLoop.c_str(), allocator).Move(), allocator);
    }

    if (m_durationMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationMs, allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_databaseId, allocator);
    }

    if (m_objectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_objectId, allocator);
    }

    if (m_indexIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexId, allocator);
    }

    if (m_rootCauseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootCause";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rootCause.c_str(), allocator).Move(), allocator);
    }

    if (m_rootCauseDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootCauseDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rootCauseDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_blockingSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingSessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockingSessionId, allocator);
    }

    if (m_blockingLoginNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingLoginName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockingLoginName.c_str(), allocator).Move(), allocator);
    }

    if (m_blockingHostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingHostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockingHostName.c_str(), allocator).Move(), allocator);
    }

    if (m_blockingClientAppHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingClientApp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockingClientApp.c_str(), allocator).Move(), allocator);
    }

    if (m_blockingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockingStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_blockingIsolationLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingIsolationLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockingIsolationLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_blockingTransactionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingTransactionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockingTransactionName.c_str(), allocator).Move(), allocator);
    }

    if (m_blockingTranCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingTranCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockingTranCount, allocator);
    }

    if (m_blockingLastTranStartedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingLastTranStarted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockingLastTranStarted.c_str(), allocator).Move(), allocator);
    }

    if (m_blockingInputBufferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingInputBuffer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockingInputBuffer.c_str(), allocator).Move(), allocator);
    }

    if (m_blockingSqlTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingSqlTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockingSqlTemplate.c_str(), allocator).Move(), allocator);
    }

    if (m_blockingSqlMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingSqlMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockingSqlMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_blockingLockModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingLockMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockingLockMode.c_str(), allocator).Move(), allocator);
    }

    if (m_blockingWaitTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingWaitTimeMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockingWaitTimeMs, allocator);
    }

    if (m_blockedSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedSessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockedSessionId, allocator);
    }

    if (m_blockedTransactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedTransactionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockedTransactionId, allocator);
    }

    if (m_blockedWaitTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedWaitTimeMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockedWaitTimeMs, allocator);
    }

    if (m_blockedLockModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedLockMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockedLockMode.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedWaitResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedWaitResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockedWaitResource.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedLoginNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedLoginName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockedLoginName.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedHostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedHostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockedHostName.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedClientAppHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedClientApp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockedClientApp.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockedStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedIsolationLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedIsolationLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockedIsolationLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedTransactionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedTransactionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockedTransactionName.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedTranCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedTranCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockedTranCount, allocator);
    }

    if (m_blockedLastTranStartedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedLastTranStarted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockedLastTranStarted.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedInputBufferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedInputBuffer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockedInputBuffer.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedSqlTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedSqlTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockedSqlTemplate.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedSqlMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedSqlMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockedSqlMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedProcessXmlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedProcessXml";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockedProcessXml.c_str(), allocator).Move(), allocator);
    }

}


string BlockingLogItem::GetReportTime() const
{
    return m_reportTime;
}

void BlockingLogItem::SetReportTime(const string& _reportTime)
{
    m_reportTime = _reportTime;
    m_reportTimeHasBeenSet = true;
}

bool BlockingLogItem::ReportTimeHasBeenSet() const
{
    return m_reportTimeHasBeenSet;
}

string BlockingLogItem::GetMonitorLoop() const
{
    return m_monitorLoop;
}

void BlockingLogItem::SetMonitorLoop(const string& _monitorLoop)
{
    m_monitorLoop = _monitorLoop;
    m_monitorLoopHasBeenSet = true;
}

bool BlockingLogItem::MonitorLoopHasBeenSet() const
{
    return m_monitorLoopHasBeenSet;
}

int64_t BlockingLogItem::GetDurationMs() const
{
    return m_durationMs;
}

void BlockingLogItem::SetDurationMs(const int64_t& _durationMs)
{
    m_durationMs = _durationMs;
    m_durationMsHasBeenSet = true;
}

bool BlockingLogItem::DurationMsHasBeenSet() const
{
    return m_durationMsHasBeenSet;
}

string BlockingLogItem::GetDatabaseName() const
{
    return m_databaseName;
}

void BlockingLogItem::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool BlockingLogItem::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

int64_t BlockingLogItem::GetDatabaseId() const
{
    return m_databaseId;
}

void BlockingLogItem::SetDatabaseId(const int64_t& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool BlockingLogItem::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

int64_t BlockingLogItem::GetObjectId() const
{
    return m_objectId;
}

void BlockingLogItem::SetObjectId(const int64_t& _objectId)
{
    m_objectId = _objectId;
    m_objectIdHasBeenSet = true;
}

bool BlockingLogItem::ObjectIdHasBeenSet() const
{
    return m_objectIdHasBeenSet;
}

int64_t BlockingLogItem::GetIndexId() const
{
    return m_indexId;
}

void BlockingLogItem::SetIndexId(const int64_t& _indexId)
{
    m_indexId = _indexId;
    m_indexIdHasBeenSet = true;
}

bool BlockingLogItem::IndexIdHasBeenSet() const
{
    return m_indexIdHasBeenSet;
}

string BlockingLogItem::GetRootCause() const
{
    return m_rootCause;
}

void BlockingLogItem::SetRootCause(const string& _rootCause)
{
    m_rootCause = _rootCause;
    m_rootCauseHasBeenSet = true;
}

bool BlockingLogItem::RootCauseHasBeenSet() const
{
    return m_rootCauseHasBeenSet;
}

string BlockingLogItem::GetRootCauseDesc() const
{
    return m_rootCauseDesc;
}

void BlockingLogItem::SetRootCauseDesc(const string& _rootCauseDesc)
{
    m_rootCauseDesc = _rootCauseDesc;
    m_rootCauseDescHasBeenSet = true;
}

bool BlockingLogItem::RootCauseDescHasBeenSet() const
{
    return m_rootCauseDescHasBeenSet;
}

int64_t BlockingLogItem::GetBlockingSessionId() const
{
    return m_blockingSessionId;
}

void BlockingLogItem::SetBlockingSessionId(const int64_t& _blockingSessionId)
{
    m_blockingSessionId = _blockingSessionId;
    m_blockingSessionIdHasBeenSet = true;
}

bool BlockingLogItem::BlockingSessionIdHasBeenSet() const
{
    return m_blockingSessionIdHasBeenSet;
}

string BlockingLogItem::GetBlockingLoginName() const
{
    return m_blockingLoginName;
}

void BlockingLogItem::SetBlockingLoginName(const string& _blockingLoginName)
{
    m_blockingLoginName = _blockingLoginName;
    m_blockingLoginNameHasBeenSet = true;
}

bool BlockingLogItem::BlockingLoginNameHasBeenSet() const
{
    return m_blockingLoginNameHasBeenSet;
}

string BlockingLogItem::GetBlockingHostName() const
{
    return m_blockingHostName;
}

void BlockingLogItem::SetBlockingHostName(const string& _blockingHostName)
{
    m_blockingHostName = _blockingHostName;
    m_blockingHostNameHasBeenSet = true;
}

bool BlockingLogItem::BlockingHostNameHasBeenSet() const
{
    return m_blockingHostNameHasBeenSet;
}

string BlockingLogItem::GetBlockingClientApp() const
{
    return m_blockingClientApp;
}

void BlockingLogItem::SetBlockingClientApp(const string& _blockingClientApp)
{
    m_blockingClientApp = _blockingClientApp;
    m_blockingClientAppHasBeenSet = true;
}

bool BlockingLogItem::BlockingClientAppHasBeenSet() const
{
    return m_blockingClientAppHasBeenSet;
}

string BlockingLogItem::GetBlockingStatus() const
{
    return m_blockingStatus;
}

void BlockingLogItem::SetBlockingStatus(const string& _blockingStatus)
{
    m_blockingStatus = _blockingStatus;
    m_blockingStatusHasBeenSet = true;
}

bool BlockingLogItem::BlockingStatusHasBeenSet() const
{
    return m_blockingStatusHasBeenSet;
}

string BlockingLogItem::GetBlockingIsolationLevel() const
{
    return m_blockingIsolationLevel;
}

void BlockingLogItem::SetBlockingIsolationLevel(const string& _blockingIsolationLevel)
{
    m_blockingIsolationLevel = _blockingIsolationLevel;
    m_blockingIsolationLevelHasBeenSet = true;
}

bool BlockingLogItem::BlockingIsolationLevelHasBeenSet() const
{
    return m_blockingIsolationLevelHasBeenSet;
}

string BlockingLogItem::GetBlockingTransactionName() const
{
    return m_blockingTransactionName;
}

void BlockingLogItem::SetBlockingTransactionName(const string& _blockingTransactionName)
{
    m_blockingTransactionName = _blockingTransactionName;
    m_blockingTransactionNameHasBeenSet = true;
}

bool BlockingLogItem::BlockingTransactionNameHasBeenSet() const
{
    return m_blockingTransactionNameHasBeenSet;
}

int64_t BlockingLogItem::GetBlockingTranCount() const
{
    return m_blockingTranCount;
}

void BlockingLogItem::SetBlockingTranCount(const int64_t& _blockingTranCount)
{
    m_blockingTranCount = _blockingTranCount;
    m_blockingTranCountHasBeenSet = true;
}

bool BlockingLogItem::BlockingTranCountHasBeenSet() const
{
    return m_blockingTranCountHasBeenSet;
}

string BlockingLogItem::GetBlockingLastTranStarted() const
{
    return m_blockingLastTranStarted;
}

void BlockingLogItem::SetBlockingLastTranStarted(const string& _blockingLastTranStarted)
{
    m_blockingLastTranStarted = _blockingLastTranStarted;
    m_blockingLastTranStartedHasBeenSet = true;
}

bool BlockingLogItem::BlockingLastTranStartedHasBeenSet() const
{
    return m_blockingLastTranStartedHasBeenSet;
}

string BlockingLogItem::GetBlockingInputBuffer() const
{
    return m_blockingInputBuffer;
}

void BlockingLogItem::SetBlockingInputBuffer(const string& _blockingInputBuffer)
{
    m_blockingInputBuffer = _blockingInputBuffer;
    m_blockingInputBufferHasBeenSet = true;
}

bool BlockingLogItem::BlockingInputBufferHasBeenSet() const
{
    return m_blockingInputBufferHasBeenSet;
}

string BlockingLogItem::GetBlockingSqlTemplate() const
{
    return m_blockingSqlTemplate;
}

void BlockingLogItem::SetBlockingSqlTemplate(const string& _blockingSqlTemplate)
{
    m_blockingSqlTemplate = _blockingSqlTemplate;
    m_blockingSqlTemplateHasBeenSet = true;
}

bool BlockingLogItem::BlockingSqlTemplateHasBeenSet() const
{
    return m_blockingSqlTemplateHasBeenSet;
}

string BlockingLogItem::GetBlockingSqlMd5() const
{
    return m_blockingSqlMd5;
}

void BlockingLogItem::SetBlockingSqlMd5(const string& _blockingSqlMd5)
{
    m_blockingSqlMd5 = _blockingSqlMd5;
    m_blockingSqlMd5HasBeenSet = true;
}

bool BlockingLogItem::BlockingSqlMd5HasBeenSet() const
{
    return m_blockingSqlMd5HasBeenSet;
}

string BlockingLogItem::GetBlockingLockMode() const
{
    return m_blockingLockMode;
}

void BlockingLogItem::SetBlockingLockMode(const string& _blockingLockMode)
{
    m_blockingLockMode = _blockingLockMode;
    m_blockingLockModeHasBeenSet = true;
}

bool BlockingLogItem::BlockingLockModeHasBeenSet() const
{
    return m_blockingLockModeHasBeenSet;
}

int64_t BlockingLogItem::GetBlockingWaitTimeMs() const
{
    return m_blockingWaitTimeMs;
}

void BlockingLogItem::SetBlockingWaitTimeMs(const int64_t& _blockingWaitTimeMs)
{
    m_blockingWaitTimeMs = _blockingWaitTimeMs;
    m_blockingWaitTimeMsHasBeenSet = true;
}

bool BlockingLogItem::BlockingWaitTimeMsHasBeenSet() const
{
    return m_blockingWaitTimeMsHasBeenSet;
}

int64_t BlockingLogItem::GetBlockedSessionId() const
{
    return m_blockedSessionId;
}

void BlockingLogItem::SetBlockedSessionId(const int64_t& _blockedSessionId)
{
    m_blockedSessionId = _blockedSessionId;
    m_blockedSessionIdHasBeenSet = true;
}

bool BlockingLogItem::BlockedSessionIdHasBeenSet() const
{
    return m_blockedSessionIdHasBeenSet;
}

int64_t BlockingLogItem::GetBlockedTransactionId() const
{
    return m_blockedTransactionId;
}

void BlockingLogItem::SetBlockedTransactionId(const int64_t& _blockedTransactionId)
{
    m_blockedTransactionId = _blockedTransactionId;
    m_blockedTransactionIdHasBeenSet = true;
}

bool BlockingLogItem::BlockedTransactionIdHasBeenSet() const
{
    return m_blockedTransactionIdHasBeenSet;
}

int64_t BlockingLogItem::GetBlockedWaitTimeMs() const
{
    return m_blockedWaitTimeMs;
}

void BlockingLogItem::SetBlockedWaitTimeMs(const int64_t& _blockedWaitTimeMs)
{
    m_blockedWaitTimeMs = _blockedWaitTimeMs;
    m_blockedWaitTimeMsHasBeenSet = true;
}

bool BlockingLogItem::BlockedWaitTimeMsHasBeenSet() const
{
    return m_blockedWaitTimeMsHasBeenSet;
}

string BlockingLogItem::GetBlockedLockMode() const
{
    return m_blockedLockMode;
}

void BlockingLogItem::SetBlockedLockMode(const string& _blockedLockMode)
{
    m_blockedLockMode = _blockedLockMode;
    m_blockedLockModeHasBeenSet = true;
}

bool BlockingLogItem::BlockedLockModeHasBeenSet() const
{
    return m_blockedLockModeHasBeenSet;
}

string BlockingLogItem::GetBlockedWaitResource() const
{
    return m_blockedWaitResource;
}

void BlockingLogItem::SetBlockedWaitResource(const string& _blockedWaitResource)
{
    m_blockedWaitResource = _blockedWaitResource;
    m_blockedWaitResourceHasBeenSet = true;
}

bool BlockingLogItem::BlockedWaitResourceHasBeenSet() const
{
    return m_blockedWaitResourceHasBeenSet;
}

string BlockingLogItem::GetBlockedLoginName() const
{
    return m_blockedLoginName;
}

void BlockingLogItem::SetBlockedLoginName(const string& _blockedLoginName)
{
    m_blockedLoginName = _blockedLoginName;
    m_blockedLoginNameHasBeenSet = true;
}

bool BlockingLogItem::BlockedLoginNameHasBeenSet() const
{
    return m_blockedLoginNameHasBeenSet;
}

string BlockingLogItem::GetBlockedHostName() const
{
    return m_blockedHostName;
}

void BlockingLogItem::SetBlockedHostName(const string& _blockedHostName)
{
    m_blockedHostName = _blockedHostName;
    m_blockedHostNameHasBeenSet = true;
}

bool BlockingLogItem::BlockedHostNameHasBeenSet() const
{
    return m_blockedHostNameHasBeenSet;
}

string BlockingLogItem::GetBlockedClientApp() const
{
    return m_blockedClientApp;
}

void BlockingLogItem::SetBlockedClientApp(const string& _blockedClientApp)
{
    m_blockedClientApp = _blockedClientApp;
    m_blockedClientAppHasBeenSet = true;
}

bool BlockingLogItem::BlockedClientAppHasBeenSet() const
{
    return m_blockedClientAppHasBeenSet;
}

string BlockingLogItem::GetBlockedStatus() const
{
    return m_blockedStatus;
}

void BlockingLogItem::SetBlockedStatus(const string& _blockedStatus)
{
    m_blockedStatus = _blockedStatus;
    m_blockedStatusHasBeenSet = true;
}

bool BlockingLogItem::BlockedStatusHasBeenSet() const
{
    return m_blockedStatusHasBeenSet;
}

string BlockingLogItem::GetBlockedIsolationLevel() const
{
    return m_blockedIsolationLevel;
}

void BlockingLogItem::SetBlockedIsolationLevel(const string& _blockedIsolationLevel)
{
    m_blockedIsolationLevel = _blockedIsolationLevel;
    m_blockedIsolationLevelHasBeenSet = true;
}

bool BlockingLogItem::BlockedIsolationLevelHasBeenSet() const
{
    return m_blockedIsolationLevelHasBeenSet;
}

string BlockingLogItem::GetBlockedTransactionName() const
{
    return m_blockedTransactionName;
}

void BlockingLogItem::SetBlockedTransactionName(const string& _blockedTransactionName)
{
    m_blockedTransactionName = _blockedTransactionName;
    m_blockedTransactionNameHasBeenSet = true;
}

bool BlockingLogItem::BlockedTransactionNameHasBeenSet() const
{
    return m_blockedTransactionNameHasBeenSet;
}

int64_t BlockingLogItem::GetBlockedTranCount() const
{
    return m_blockedTranCount;
}

void BlockingLogItem::SetBlockedTranCount(const int64_t& _blockedTranCount)
{
    m_blockedTranCount = _blockedTranCount;
    m_blockedTranCountHasBeenSet = true;
}

bool BlockingLogItem::BlockedTranCountHasBeenSet() const
{
    return m_blockedTranCountHasBeenSet;
}

string BlockingLogItem::GetBlockedLastTranStarted() const
{
    return m_blockedLastTranStarted;
}

void BlockingLogItem::SetBlockedLastTranStarted(const string& _blockedLastTranStarted)
{
    m_blockedLastTranStarted = _blockedLastTranStarted;
    m_blockedLastTranStartedHasBeenSet = true;
}

bool BlockingLogItem::BlockedLastTranStartedHasBeenSet() const
{
    return m_blockedLastTranStartedHasBeenSet;
}

string BlockingLogItem::GetBlockedInputBuffer() const
{
    return m_blockedInputBuffer;
}

void BlockingLogItem::SetBlockedInputBuffer(const string& _blockedInputBuffer)
{
    m_blockedInputBuffer = _blockedInputBuffer;
    m_blockedInputBufferHasBeenSet = true;
}

bool BlockingLogItem::BlockedInputBufferHasBeenSet() const
{
    return m_blockedInputBufferHasBeenSet;
}

string BlockingLogItem::GetBlockedSqlTemplate() const
{
    return m_blockedSqlTemplate;
}

void BlockingLogItem::SetBlockedSqlTemplate(const string& _blockedSqlTemplate)
{
    m_blockedSqlTemplate = _blockedSqlTemplate;
    m_blockedSqlTemplateHasBeenSet = true;
}

bool BlockingLogItem::BlockedSqlTemplateHasBeenSet() const
{
    return m_blockedSqlTemplateHasBeenSet;
}

string BlockingLogItem::GetBlockedSqlMd5() const
{
    return m_blockedSqlMd5;
}

void BlockingLogItem::SetBlockedSqlMd5(const string& _blockedSqlMd5)
{
    m_blockedSqlMd5 = _blockedSqlMd5;
    m_blockedSqlMd5HasBeenSet = true;
}

bool BlockingLogItem::BlockedSqlMd5HasBeenSet() const
{
    return m_blockedSqlMd5HasBeenSet;
}

string BlockingLogItem::GetBlockedProcessXml() const
{
    return m_blockedProcessXml;
}

void BlockingLogItem::SetBlockedProcessXml(const string& _blockedProcessXml)
{
    m_blockedProcessXml = _blockedProcessXml;
    m_blockedProcessXmlHasBeenSet = true;
}

bool BlockingLogItem::BlockedProcessXmlHasBeenSet() const
{
    return m_blockedProcessXmlHasBeenSet;
}

