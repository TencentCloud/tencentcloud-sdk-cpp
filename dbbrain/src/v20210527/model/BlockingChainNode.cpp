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

#include <tencentcloud/dbbrain/v20210527/model/BlockingChainNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

BlockingChainNode::BlockingChainNode() :
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
    m_rootCauseHasBeenSet(false),
    m_reportTimeHasBeenSet(false),
    m_childrenHasBeenSet(false)
{
}

CoreInternalOutcome BlockingChainNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BlockedSessionId") && !value["BlockedSessionId"].IsNull())
    {
        if (!value["BlockedSessionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.BlockedSessionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockedSessionId = value["BlockedSessionId"].GetInt64();
        m_blockedSessionIdHasBeenSet = true;
    }

    if (value.HasMember("BlockedTransactionId") && !value["BlockedTransactionId"].IsNull())
    {
        if (!value["BlockedTransactionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.BlockedTransactionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockedTransactionId = value["BlockedTransactionId"].GetInt64();
        m_blockedTransactionIdHasBeenSet = true;
    }

    if (value.HasMember("BlockedWaitTimeMs") && !value["BlockedWaitTimeMs"].IsNull())
    {
        if (!value["BlockedWaitTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.BlockedWaitTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockedWaitTimeMs = value["BlockedWaitTimeMs"].GetInt64();
        m_blockedWaitTimeMsHasBeenSet = true;
    }

    if (value.HasMember("BlockedLockMode") && !value["BlockedLockMode"].IsNull())
    {
        if (!value["BlockedLockMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.BlockedLockMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedLockMode = string(value["BlockedLockMode"].GetString());
        m_blockedLockModeHasBeenSet = true;
    }

    if (value.HasMember("BlockedWaitResource") && !value["BlockedWaitResource"].IsNull())
    {
        if (!value["BlockedWaitResource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.BlockedWaitResource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedWaitResource = string(value["BlockedWaitResource"].GetString());
        m_blockedWaitResourceHasBeenSet = true;
    }

    if (value.HasMember("BlockedLoginName") && !value["BlockedLoginName"].IsNull())
    {
        if (!value["BlockedLoginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.BlockedLoginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedLoginName = string(value["BlockedLoginName"].GetString());
        m_blockedLoginNameHasBeenSet = true;
    }

    if (value.HasMember("BlockedHostName") && !value["BlockedHostName"].IsNull())
    {
        if (!value["BlockedHostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.BlockedHostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedHostName = string(value["BlockedHostName"].GetString());
        m_blockedHostNameHasBeenSet = true;
    }

    if (value.HasMember("BlockedClientApp") && !value["BlockedClientApp"].IsNull())
    {
        if (!value["BlockedClientApp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.BlockedClientApp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedClientApp = string(value["BlockedClientApp"].GetString());
        m_blockedClientAppHasBeenSet = true;
    }

    if (value.HasMember("BlockedStatus") && !value["BlockedStatus"].IsNull())
    {
        if (!value["BlockedStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.BlockedStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedStatus = string(value["BlockedStatus"].GetString());
        m_blockedStatusHasBeenSet = true;
    }

    if (value.HasMember("BlockedIsolationLevel") && !value["BlockedIsolationLevel"].IsNull())
    {
        if (!value["BlockedIsolationLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.BlockedIsolationLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedIsolationLevel = string(value["BlockedIsolationLevel"].GetString());
        m_blockedIsolationLevelHasBeenSet = true;
    }

    if (value.HasMember("BlockedTransactionName") && !value["BlockedTransactionName"].IsNull())
    {
        if (!value["BlockedTransactionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.BlockedTransactionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedTransactionName = string(value["BlockedTransactionName"].GetString());
        m_blockedTransactionNameHasBeenSet = true;
    }

    if (value.HasMember("BlockedTranCount") && !value["BlockedTranCount"].IsNull())
    {
        if (!value["BlockedTranCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.BlockedTranCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockedTranCount = value["BlockedTranCount"].GetInt64();
        m_blockedTranCountHasBeenSet = true;
    }

    if (value.HasMember("BlockedLastTranStarted") && !value["BlockedLastTranStarted"].IsNull())
    {
        if (!value["BlockedLastTranStarted"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.BlockedLastTranStarted` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedLastTranStarted = string(value["BlockedLastTranStarted"].GetString());
        m_blockedLastTranStartedHasBeenSet = true;
    }

    if (value.HasMember("BlockedInputBuffer") && !value["BlockedInputBuffer"].IsNull())
    {
        if (!value["BlockedInputBuffer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.BlockedInputBuffer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedInputBuffer = string(value["BlockedInputBuffer"].GetString());
        m_blockedInputBufferHasBeenSet = true;
    }

    if (value.HasMember("BlockedSqlTemplate") && !value["BlockedSqlTemplate"].IsNull())
    {
        if (!value["BlockedSqlTemplate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.BlockedSqlTemplate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedSqlTemplate = string(value["BlockedSqlTemplate"].GetString());
        m_blockedSqlTemplateHasBeenSet = true;
    }

    if (value.HasMember("BlockedSqlMd5") && !value["BlockedSqlMd5"].IsNull())
    {
        if (!value["BlockedSqlMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.BlockedSqlMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockedSqlMd5 = string(value["BlockedSqlMd5"].GetString());
        m_blockedSqlMd5HasBeenSet = true;
    }

    if (value.HasMember("RootCause") && !value["RootCause"].IsNull())
    {
        if (!value["RootCause"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.RootCause` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rootCause = string(value["RootCause"].GetString());
        m_rootCauseHasBeenSet = true;
    }

    if (value.HasMember("ReportTime") && !value["ReportTime"].IsNull())
    {
        if (!value["ReportTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.ReportTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportTime = string(value["ReportTime"].GetString());
        m_reportTimeHasBeenSet = true;
    }

    if (value.HasMember("Children") && !value["Children"].IsNull())
    {
        if (!value["Children"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BlockingChainNode.Children` is not array type"));

        const rapidjson::Value &tmpValue = value["Children"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BlockingChainNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_children.push_back(item);
        }
        m_childrenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlockingChainNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_rootCauseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootCause";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rootCause.c_str(), allocator).Move(), allocator);
    }

    if (m_reportTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportTime.c_str(), allocator).Move(), allocator);
    }

    if (m_childrenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Children";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_children.begin(); itr != m_children.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t BlockingChainNode::GetBlockedSessionId() const
{
    return m_blockedSessionId;
}

void BlockingChainNode::SetBlockedSessionId(const int64_t& _blockedSessionId)
{
    m_blockedSessionId = _blockedSessionId;
    m_blockedSessionIdHasBeenSet = true;
}

bool BlockingChainNode::BlockedSessionIdHasBeenSet() const
{
    return m_blockedSessionIdHasBeenSet;
}

int64_t BlockingChainNode::GetBlockedTransactionId() const
{
    return m_blockedTransactionId;
}

void BlockingChainNode::SetBlockedTransactionId(const int64_t& _blockedTransactionId)
{
    m_blockedTransactionId = _blockedTransactionId;
    m_blockedTransactionIdHasBeenSet = true;
}

bool BlockingChainNode::BlockedTransactionIdHasBeenSet() const
{
    return m_blockedTransactionIdHasBeenSet;
}

int64_t BlockingChainNode::GetBlockedWaitTimeMs() const
{
    return m_blockedWaitTimeMs;
}

void BlockingChainNode::SetBlockedWaitTimeMs(const int64_t& _blockedWaitTimeMs)
{
    m_blockedWaitTimeMs = _blockedWaitTimeMs;
    m_blockedWaitTimeMsHasBeenSet = true;
}

bool BlockingChainNode::BlockedWaitTimeMsHasBeenSet() const
{
    return m_blockedWaitTimeMsHasBeenSet;
}

string BlockingChainNode::GetBlockedLockMode() const
{
    return m_blockedLockMode;
}

void BlockingChainNode::SetBlockedLockMode(const string& _blockedLockMode)
{
    m_blockedLockMode = _blockedLockMode;
    m_blockedLockModeHasBeenSet = true;
}

bool BlockingChainNode::BlockedLockModeHasBeenSet() const
{
    return m_blockedLockModeHasBeenSet;
}

string BlockingChainNode::GetBlockedWaitResource() const
{
    return m_blockedWaitResource;
}

void BlockingChainNode::SetBlockedWaitResource(const string& _blockedWaitResource)
{
    m_blockedWaitResource = _blockedWaitResource;
    m_blockedWaitResourceHasBeenSet = true;
}

bool BlockingChainNode::BlockedWaitResourceHasBeenSet() const
{
    return m_blockedWaitResourceHasBeenSet;
}

string BlockingChainNode::GetBlockedLoginName() const
{
    return m_blockedLoginName;
}

void BlockingChainNode::SetBlockedLoginName(const string& _blockedLoginName)
{
    m_blockedLoginName = _blockedLoginName;
    m_blockedLoginNameHasBeenSet = true;
}

bool BlockingChainNode::BlockedLoginNameHasBeenSet() const
{
    return m_blockedLoginNameHasBeenSet;
}

string BlockingChainNode::GetBlockedHostName() const
{
    return m_blockedHostName;
}

void BlockingChainNode::SetBlockedHostName(const string& _blockedHostName)
{
    m_blockedHostName = _blockedHostName;
    m_blockedHostNameHasBeenSet = true;
}

bool BlockingChainNode::BlockedHostNameHasBeenSet() const
{
    return m_blockedHostNameHasBeenSet;
}

string BlockingChainNode::GetBlockedClientApp() const
{
    return m_blockedClientApp;
}

void BlockingChainNode::SetBlockedClientApp(const string& _blockedClientApp)
{
    m_blockedClientApp = _blockedClientApp;
    m_blockedClientAppHasBeenSet = true;
}

bool BlockingChainNode::BlockedClientAppHasBeenSet() const
{
    return m_blockedClientAppHasBeenSet;
}

string BlockingChainNode::GetBlockedStatus() const
{
    return m_blockedStatus;
}

void BlockingChainNode::SetBlockedStatus(const string& _blockedStatus)
{
    m_blockedStatus = _blockedStatus;
    m_blockedStatusHasBeenSet = true;
}

bool BlockingChainNode::BlockedStatusHasBeenSet() const
{
    return m_blockedStatusHasBeenSet;
}

string BlockingChainNode::GetBlockedIsolationLevel() const
{
    return m_blockedIsolationLevel;
}

void BlockingChainNode::SetBlockedIsolationLevel(const string& _blockedIsolationLevel)
{
    m_blockedIsolationLevel = _blockedIsolationLevel;
    m_blockedIsolationLevelHasBeenSet = true;
}

bool BlockingChainNode::BlockedIsolationLevelHasBeenSet() const
{
    return m_blockedIsolationLevelHasBeenSet;
}

string BlockingChainNode::GetBlockedTransactionName() const
{
    return m_blockedTransactionName;
}

void BlockingChainNode::SetBlockedTransactionName(const string& _blockedTransactionName)
{
    m_blockedTransactionName = _blockedTransactionName;
    m_blockedTransactionNameHasBeenSet = true;
}

bool BlockingChainNode::BlockedTransactionNameHasBeenSet() const
{
    return m_blockedTransactionNameHasBeenSet;
}

int64_t BlockingChainNode::GetBlockedTranCount() const
{
    return m_blockedTranCount;
}

void BlockingChainNode::SetBlockedTranCount(const int64_t& _blockedTranCount)
{
    m_blockedTranCount = _blockedTranCount;
    m_blockedTranCountHasBeenSet = true;
}

bool BlockingChainNode::BlockedTranCountHasBeenSet() const
{
    return m_blockedTranCountHasBeenSet;
}

string BlockingChainNode::GetBlockedLastTranStarted() const
{
    return m_blockedLastTranStarted;
}

void BlockingChainNode::SetBlockedLastTranStarted(const string& _blockedLastTranStarted)
{
    m_blockedLastTranStarted = _blockedLastTranStarted;
    m_blockedLastTranStartedHasBeenSet = true;
}

bool BlockingChainNode::BlockedLastTranStartedHasBeenSet() const
{
    return m_blockedLastTranStartedHasBeenSet;
}

string BlockingChainNode::GetBlockedInputBuffer() const
{
    return m_blockedInputBuffer;
}

void BlockingChainNode::SetBlockedInputBuffer(const string& _blockedInputBuffer)
{
    m_blockedInputBuffer = _blockedInputBuffer;
    m_blockedInputBufferHasBeenSet = true;
}

bool BlockingChainNode::BlockedInputBufferHasBeenSet() const
{
    return m_blockedInputBufferHasBeenSet;
}

string BlockingChainNode::GetBlockedSqlTemplate() const
{
    return m_blockedSqlTemplate;
}

void BlockingChainNode::SetBlockedSqlTemplate(const string& _blockedSqlTemplate)
{
    m_blockedSqlTemplate = _blockedSqlTemplate;
    m_blockedSqlTemplateHasBeenSet = true;
}

bool BlockingChainNode::BlockedSqlTemplateHasBeenSet() const
{
    return m_blockedSqlTemplateHasBeenSet;
}

string BlockingChainNode::GetBlockedSqlMd5() const
{
    return m_blockedSqlMd5;
}

void BlockingChainNode::SetBlockedSqlMd5(const string& _blockedSqlMd5)
{
    m_blockedSqlMd5 = _blockedSqlMd5;
    m_blockedSqlMd5HasBeenSet = true;
}

bool BlockingChainNode::BlockedSqlMd5HasBeenSet() const
{
    return m_blockedSqlMd5HasBeenSet;
}

string BlockingChainNode::GetRootCause() const
{
    return m_rootCause;
}

void BlockingChainNode::SetRootCause(const string& _rootCause)
{
    m_rootCause = _rootCause;
    m_rootCauseHasBeenSet = true;
}

bool BlockingChainNode::RootCauseHasBeenSet() const
{
    return m_rootCauseHasBeenSet;
}

string BlockingChainNode::GetReportTime() const
{
    return m_reportTime;
}

void BlockingChainNode::SetReportTime(const string& _reportTime)
{
    m_reportTime = _reportTime;
    m_reportTimeHasBeenSet = true;
}

bool BlockingChainNode::ReportTimeHasBeenSet() const
{
    return m_reportTimeHasBeenSet;
}

vector<BlockingChainNode> BlockingChainNode::GetChildren() const
{
    return m_children;
}

void BlockingChainNode::SetChildren(const vector<BlockingChainNode>& _children)
{
    m_children = _children;
    m_childrenHasBeenSet = true;
}

bool BlockingChainNode::ChildrenHasBeenSet() const
{
    return m_childrenHasBeenSet;
}

