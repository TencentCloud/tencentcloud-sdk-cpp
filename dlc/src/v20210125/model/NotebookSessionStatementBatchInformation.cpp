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

#include <tencentcloud/dlc/v20210125/model/NotebookSessionStatementBatchInformation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

NotebookSessionStatementBatchInformation::NotebookSessionStatementBatchInformation() :
    m_notebookSessionStatementBatchHasBeenSet(false),
    m_isAvailableHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_batchIdHasBeenSet(false)
{
}

CoreInternalOutcome NotebookSessionStatementBatchInformation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NotebookSessionStatementBatch") && !value["NotebookSessionStatementBatch"].IsNull())
    {
        if (!value["NotebookSessionStatementBatch"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotebookSessionStatementBatchInformation.NotebookSessionStatementBatch` is not array type"));

        const rapidjson::Value &tmpValue = value["NotebookSessionStatementBatch"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NotebookSessionStatementInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_notebookSessionStatementBatch.push_back(item);
        }
        m_notebookSessionStatementBatchHasBeenSet = true;
    }

    if (value.HasMember("IsAvailable") && !value["IsAvailable"].IsNull())
    {
        if (!value["IsAvailable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionStatementBatchInformation.IsAvailable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAvailable = value["IsAvailable"].GetBool();
        m_isAvailableHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionStatementBatchInformation.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("BatchId") && !value["BatchId"].IsNull())
    {
        if (!value["BatchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionStatementBatchInformation.BatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchId = string(value["BatchId"].GetString());
        m_batchIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotebookSessionStatementBatchInformation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_notebookSessionStatementBatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotebookSessionStatementBatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_notebookSessionStatementBatch.begin(); itr != m_notebookSessionStatementBatch.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAvailable, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

}


vector<NotebookSessionStatementInfo> NotebookSessionStatementBatchInformation::GetNotebookSessionStatementBatch() const
{
    return m_notebookSessionStatementBatch;
}

void NotebookSessionStatementBatchInformation::SetNotebookSessionStatementBatch(const vector<NotebookSessionStatementInfo>& _notebookSessionStatementBatch)
{
    m_notebookSessionStatementBatch = _notebookSessionStatementBatch;
    m_notebookSessionStatementBatchHasBeenSet = true;
}

bool NotebookSessionStatementBatchInformation::NotebookSessionStatementBatchHasBeenSet() const
{
    return m_notebookSessionStatementBatchHasBeenSet;
}

bool NotebookSessionStatementBatchInformation::GetIsAvailable() const
{
    return m_isAvailable;
}

void NotebookSessionStatementBatchInformation::SetIsAvailable(const bool& _isAvailable)
{
    m_isAvailable = _isAvailable;
    m_isAvailableHasBeenSet = true;
}

bool NotebookSessionStatementBatchInformation::IsAvailableHasBeenSet() const
{
    return m_isAvailableHasBeenSet;
}

string NotebookSessionStatementBatchInformation::GetSessionId() const
{
    return m_sessionId;
}

void NotebookSessionStatementBatchInformation::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool NotebookSessionStatementBatchInformation::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string NotebookSessionStatementBatchInformation::GetBatchId() const
{
    return m_batchId;
}

void NotebookSessionStatementBatchInformation::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool NotebookSessionStatementBatchInformation::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

