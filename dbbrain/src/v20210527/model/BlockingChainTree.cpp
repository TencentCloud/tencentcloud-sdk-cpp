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

#include <tencentcloud/dbbrain/v20210527/model/BlockingChainTree.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

BlockingChainTree::BlockingChainTree() :
    m_monitorLoopHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_blockingSessionIdHasBeenSet(false),
    m_blockingTransactionIdHasBeenSet(false),
    m_blockingLoginNameHasBeenSet(false),
    m_blockingHostNameHasBeenSet(false),
    m_blockingClientAppHasBeenSet(false),
    m_blockingStatusHasBeenSet(false),
    m_blockingIsolationLevelHasBeenSet(false),
    m_blockingTranCountHasBeenSet(false),
    m_blockingInputBufferHasBeenSet(false),
    m_blockingSqlTemplateHasBeenSet(false),
    m_blockingSqlMd5HasBeenSet(false),
    m_blockingWaitTimeMsHasBeenSet(false),
    m_rootCauseHasBeenSet(false),
    m_rootCauseDescHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_durationMsHasBeenSet(false),
    m_chainLengthHasBeenSet(false),
    m_chainDepthHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

CoreInternalOutcome BlockingChainTree::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MonitorLoop") && !value["MonitorLoop"].IsNull())
    {
        if (!value["MonitorLoop"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.MonitorLoop` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorLoop = string(value["MonitorLoop"].GetString());
        m_monitorLoopHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("BlockingSessionId") && !value["BlockingSessionId"].IsNull())
    {
        if (!value["BlockingSessionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.BlockingSessionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockingSessionId = value["BlockingSessionId"].GetInt64();
        m_blockingSessionIdHasBeenSet = true;
    }

    if (value.HasMember("BlockingTransactionId") && !value["BlockingTransactionId"].IsNull())
    {
        if (!value["BlockingTransactionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.BlockingTransactionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockingTransactionId = value["BlockingTransactionId"].GetInt64();
        m_blockingTransactionIdHasBeenSet = true;
    }

    if (value.HasMember("BlockingLoginName") && !value["BlockingLoginName"].IsNull())
    {
        if (!value["BlockingLoginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.BlockingLoginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingLoginName = string(value["BlockingLoginName"].GetString());
        m_blockingLoginNameHasBeenSet = true;
    }

    if (value.HasMember("BlockingHostName") && !value["BlockingHostName"].IsNull())
    {
        if (!value["BlockingHostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.BlockingHostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingHostName = string(value["BlockingHostName"].GetString());
        m_blockingHostNameHasBeenSet = true;
    }

    if (value.HasMember("BlockingClientApp") && !value["BlockingClientApp"].IsNull())
    {
        if (!value["BlockingClientApp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.BlockingClientApp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingClientApp = string(value["BlockingClientApp"].GetString());
        m_blockingClientAppHasBeenSet = true;
    }

    if (value.HasMember("BlockingStatus") && !value["BlockingStatus"].IsNull())
    {
        if (!value["BlockingStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.BlockingStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingStatus = string(value["BlockingStatus"].GetString());
        m_blockingStatusHasBeenSet = true;
    }

    if (value.HasMember("BlockingIsolationLevel") && !value["BlockingIsolationLevel"].IsNull())
    {
        if (!value["BlockingIsolationLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.BlockingIsolationLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingIsolationLevel = string(value["BlockingIsolationLevel"].GetString());
        m_blockingIsolationLevelHasBeenSet = true;
    }

    if (value.HasMember("BlockingTranCount") && !value["BlockingTranCount"].IsNull())
    {
        if (!value["BlockingTranCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.BlockingTranCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockingTranCount = value["BlockingTranCount"].GetInt64();
        m_blockingTranCountHasBeenSet = true;
    }

    if (value.HasMember("BlockingInputBuffer") && !value["BlockingInputBuffer"].IsNull())
    {
        if (!value["BlockingInputBuffer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.BlockingInputBuffer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingInputBuffer = string(value["BlockingInputBuffer"].GetString());
        m_blockingInputBufferHasBeenSet = true;
    }

    if (value.HasMember("BlockingSqlTemplate") && !value["BlockingSqlTemplate"].IsNull())
    {
        if (!value["BlockingSqlTemplate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.BlockingSqlTemplate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingSqlTemplate = string(value["BlockingSqlTemplate"].GetString());
        m_blockingSqlTemplateHasBeenSet = true;
    }

    if (value.HasMember("BlockingSqlMd5") && !value["BlockingSqlMd5"].IsNull())
    {
        if (!value["BlockingSqlMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.BlockingSqlMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockingSqlMd5 = string(value["BlockingSqlMd5"].GetString());
        m_blockingSqlMd5HasBeenSet = true;
    }

    if (value.HasMember("BlockingWaitTimeMs") && !value["BlockingWaitTimeMs"].IsNull())
    {
        if (!value["BlockingWaitTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.BlockingWaitTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockingWaitTimeMs = value["BlockingWaitTimeMs"].GetInt64();
        m_blockingWaitTimeMsHasBeenSet = true;
    }

    if (value.HasMember("RootCause") && !value["RootCause"].IsNull())
    {
        if (!value["RootCause"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.RootCause` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rootCause = string(value["RootCause"].GetString());
        m_rootCauseHasBeenSet = true;
    }

    if (value.HasMember("RootCauseDesc") && !value["RootCauseDesc"].IsNull())
    {
        if (!value["RootCauseDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.RootCauseDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rootCauseDesc = string(value["RootCauseDesc"].GetString());
        m_rootCauseDescHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("DurationMs") && !value["DurationMs"].IsNull())
    {
        if (!value["DurationMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.DurationMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_durationMs = value["DurationMs"].GetInt64();
        m_durationMsHasBeenSet = true;
    }

    if (value.HasMember("ChainLength") && !value["ChainLength"].IsNull())
    {
        if (!value["ChainLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.ChainLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chainLength = value["ChainLength"].GetInt64();
        m_chainLengthHasBeenSet = true;
    }

    if (value.HasMember("ChainDepth") && !value["ChainDepth"].IsNull())
    {
        if (!value["ChainDepth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.ChainDepth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chainDepth = value["ChainDepth"].GetInt64();
        m_chainDepthHasBeenSet = true;
    }

    if (value.HasMember("Details") && !value["Details"].IsNull())
    {
        if (!value["Details"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BlockingChainTree.Details` is not array type"));

        const rapidjson::Value &tmpValue = value["Details"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BlockingChainNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_details.push_back(item);
        }
        m_detailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlockingChainTree::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_monitorLoopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorLoop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorLoop.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_blockingSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingSessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockingSessionId, allocator);
    }

    if (m_blockingTransactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingTransactionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockingTransactionId, allocator);
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

    if (m_blockingTranCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingTranCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockingTranCount, allocator);
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

    if (m_blockingWaitTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingWaitTimeMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockingWaitTimeMs, allocator);
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

    if (m_durationMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationMs, allocator);
    }

    if (m_chainLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chainLength, allocator);
    }

    if (m_chainDepthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainDepth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chainDepth, allocator);
    }

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_details.begin(); itr != m_details.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BlockingChainTree::GetMonitorLoop() const
{
    return m_monitorLoop;
}

void BlockingChainTree::SetMonitorLoop(const string& _monitorLoop)
{
    m_monitorLoop = _monitorLoop;
    m_monitorLoopHasBeenSet = true;
}

bool BlockingChainTree::MonitorLoopHasBeenSet() const
{
    return m_monitorLoopHasBeenSet;
}

string BlockingChainTree::GetDatabaseName() const
{
    return m_databaseName;
}

void BlockingChainTree::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool BlockingChainTree::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

int64_t BlockingChainTree::GetBlockingSessionId() const
{
    return m_blockingSessionId;
}

void BlockingChainTree::SetBlockingSessionId(const int64_t& _blockingSessionId)
{
    m_blockingSessionId = _blockingSessionId;
    m_blockingSessionIdHasBeenSet = true;
}

bool BlockingChainTree::BlockingSessionIdHasBeenSet() const
{
    return m_blockingSessionIdHasBeenSet;
}

int64_t BlockingChainTree::GetBlockingTransactionId() const
{
    return m_blockingTransactionId;
}

void BlockingChainTree::SetBlockingTransactionId(const int64_t& _blockingTransactionId)
{
    m_blockingTransactionId = _blockingTransactionId;
    m_blockingTransactionIdHasBeenSet = true;
}

bool BlockingChainTree::BlockingTransactionIdHasBeenSet() const
{
    return m_blockingTransactionIdHasBeenSet;
}

string BlockingChainTree::GetBlockingLoginName() const
{
    return m_blockingLoginName;
}

void BlockingChainTree::SetBlockingLoginName(const string& _blockingLoginName)
{
    m_blockingLoginName = _blockingLoginName;
    m_blockingLoginNameHasBeenSet = true;
}

bool BlockingChainTree::BlockingLoginNameHasBeenSet() const
{
    return m_blockingLoginNameHasBeenSet;
}

string BlockingChainTree::GetBlockingHostName() const
{
    return m_blockingHostName;
}

void BlockingChainTree::SetBlockingHostName(const string& _blockingHostName)
{
    m_blockingHostName = _blockingHostName;
    m_blockingHostNameHasBeenSet = true;
}

bool BlockingChainTree::BlockingHostNameHasBeenSet() const
{
    return m_blockingHostNameHasBeenSet;
}

string BlockingChainTree::GetBlockingClientApp() const
{
    return m_blockingClientApp;
}

void BlockingChainTree::SetBlockingClientApp(const string& _blockingClientApp)
{
    m_blockingClientApp = _blockingClientApp;
    m_blockingClientAppHasBeenSet = true;
}

bool BlockingChainTree::BlockingClientAppHasBeenSet() const
{
    return m_blockingClientAppHasBeenSet;
}

string BlockingChainTree::GetBlockingStatus() const
{
    return m_blockingStatus;
}

void BlockingChainTree::SetBlockingStatus(const string& _blockingStatus)
{
    m_blockingStatus = _blockingStatus;
    m_blockingStatusHasBeenSet = true;
}

bool BlockingChainTree::BlockingStatusHasBeenSet() const
{
    return m_blockingStatusHasBeenSet;
}

string BlockingChainTree::GetBlockingIsolationLevel() const
{
    return m_blockingIsolationLevel;
}

void BlockingChainTree::SetBlockingIsolationLevel(const string& _blockingIsolationLevel)
{
    m_blockingIsolationLevel = _blockingIsolationLevel;
    m_blockingIsolationLevelHasBeenSet = true;
}

bool BlockingChainTree::BlockingIsolationLevelHasBeenSet() const
{
    return m_blockingIsolationLevelHasBeenSet;
}

int64_t BlockingChainTree::GetBlockingTranCount() const
{
    return m_blockingTranCount;
}

void BlockingChainTree::SetBlockingTranCount(const int64_t& _blockingTranCount)
{
    m_blockingTranCount = _blockingTranCount;
    m_blockingTranCountHasBeenSet = true;
}

bool BlockingChainTree::BlockingTranCountHasBeenSet() const
{
    return m_blockingTranCountHasBeenSet;
}

string BlockingChainTree::GetBlockingInputBuffer() const
{
    return m_blockingInputBuffer;
}

void BlockingChainTree::SetBlockingInputBuffer(const string& _blockingInputBuffer)
{
    m_blockingInputBuffer = _blockingInputBuffer;
    m_blockingInputBufferHasBeenSet = true;
}

bool BlockingChainTree::BlockingInputBufferHasBeenSet() const
{
    return m_blockingInputBufferHasBeenSet;
}

string BlockingChainTree::GetBlockingSqlTemplate() const
{
    return m_blockingSqlTemplate;
}

void BlockingChainTree::SetBlockingSqlTemplate(const string& _blockingSqlTemplate)
{
    m_blockingSqlTemplate = _blockingSqlTemplate;
    m_blockingSqlTemplateHasBeenSet = true;
}

bool BlockingChainTree::BlockingSqlTemplateHasBeenSet() const
{
    return m_blockingSqlTemplateHasBeenSet;
}

string BlockingChainTree::GetBlockingSqlMd5() const
{
    return m_blockingSqlMd5;
}

void BlockingChainTree::SetBlockingSqlMd5(const string& _blockingSqlMd5)
{
    m_blockingSqlMd5 = _blockingSqlMd5;
    m_blockingSqlMd5HasBeenSet = true;
}

bool BlockingChainTree::BlockingSqlMd5HasBeenSet() const
{
    return m_blockingSqlMd5HasBeenSet;
}

int64_t BlockingChainTree::GetBlockingWaitTimeMs() const
{
    return m_blockingWaitTimeMs;
}

void BlockingChainTree::SetBlockingWaitTimeMs(const int64_t& _blockingWaitTimeMs)
{
    m_blockingWaitTimeMs = _blockingWaitTimeMs;
    m_blockingWaitTimeMsHasBeenSet = true;
}

bool BlockingChainTree::BlockingWaitTimeMsHasBeenSet() const
{
    return m_blockingWaitTimeMsHasBeenSet;
}

string BlockingChainTree::GetRootCause() const
{
    return m_rootCause;
}

void BlockingChainTree::SetRootCause(const string& _rootCause)
{
    m_rootCause = _rootCause;
    m_rootCauseHasBeenSet = true;
}

bool BlockingChainTree::RootCauseHasBeenSet() const
{
    return m_rootCauseHasBeenSet;
}

string BlockingChainTree::GetRootCauseDesc() const
{
    return m_rootCauseDesc;
}

void BlockingChainTree::SetRootCauseDesc(const string& _rootCauseDesc)
{
    m_rootCauseDesc = _rootCauseDesc;
    m_rootCauseDescHasBeenSet = true;
}

bool BlockingChainTree::RootCauseDescHasBeenSet() const
{
    return m_rootCauseDescHasBeenSet;
}

string BlockingChainTree::GetStartTime() const
{
    return m_startTime;
}

void BlockingChainTree::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BlockingChainTree::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BlockingChainTree::GetEndTime() const
{
    return m_endTime;
}

void BlockingChainTree::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool BlockingChainTree::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t BlockingChainTree::GetDurationMs() const
{
    return m_durationMs;
}

void BlockingChainTree::SetDurationMs(const int64_t& _durationMs)
{
    m_durationMs = _durationMs;
    m_durationMsHasBeenSet = true;
}

bool BlockingChainTree::DurationMsHasBeenSet() const
{
    return m_durationMsHasBeenSet;
}

int64_t BlockingChainTree::GetChainLength() const
{
    return m_chainLength;
}

void BlockingChainTree::SetChainLength(const int64_t& _chainLength)
{
    m_chainLength = _chainLength;
    m_chainLengthHasBeenSet = true;
}

bool BlockingChainTree::ChainLengthHasBeenSet() const
{
    return m_chainLengthHasBeenSet;
}

int64_t BlockingChainTree::GetChainDepth() const
{
    return m_chainDepth;
}

void BlockingChainTree::SetChainDepth(const int64_t& _chainDepth)
{
    m_chainDepth = _chainDepth;
    m_chainDepthHasBeenSet = true;
}

bool BlockingChainTree::ChainDepthHasBeenSet() const
{
    return m_chainDepthHasBeenSet;
}

vector<BlockingChainNode> BlockingChainTree::GetDetails() const
{
    return m_details;
}

void BlockingChainTree::SetDetails(const vector<BlockingChainNode>& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool BlockingChainTree::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}

