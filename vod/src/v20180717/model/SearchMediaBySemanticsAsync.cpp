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

#include <tencentcloud/vod/v20180717/model/SearchMediaBySemanticsAsync.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SearchMediaBySemanticsAsync::SearchMediaBySemanticsAsync() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_errCodeExtHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_queryTextHasBeenSet(false),
    m_searchResultsHasBeenSet(false)
{
}

CoreInternalOutcome SearchMediaBySemanticsAsync::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchMediaBySemanticsAsync.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchMediaBySemanticsAsync.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchMediaBySemanticsAsync.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrCodeExt") && !value["ErrCodeExt"].IsNull())
    {
        if (!value["ErrCodeExt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchMediaBySemanticsAsync.ErrCodeExt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errCodeExt = string(value["ErrCodeExt"].GetString());
        m_errCodeExtHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchMediaBySemanticsAsync.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("QueryText") && !value["QueryText"].IsNull())
    {
        if (!value["QueryText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchMediaBySemanticsAsync.QueryText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryText = string(value["QueryText"].GetString());
        m_queryTextHasBeenSet = true;
    }

    if (value.HasMember("SearchResults") && !value["SearchResults"].IsNull())
    {
        if (!value["SearchResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchMediaBySemanticsAsync.SearchResults` is not array type"));

        const rapidjson::Value &tmpValue = value["SearchResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SemanticsSearchResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_searchResults.push_back(item);
        }
        m_searchResultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchMediaBySemanticsAsync::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_errCodeExtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCodeExt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errCodeExt.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_queryTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryText.c_str(), allocator).Move(), allocator);
    }

    if (m_searchResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_searchResults.begin(); itr != m_searchResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SearchMediaBySemanticsAsync::GetTaskId() const
{
    return m_taskId;
}

void SearchMediaBySemanticsAsync::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool SearchMediaBySemanticsAsync::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string SearchMediaBySemanticsAsync::GetStatus() const
{
    return m_status;
}

void SearchMediaBySemanticsAsync::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SearchMediaBySemanticsAsync::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t SearchMediaBySemanticsAsync::GetErrCode() const
{
    return m_errCode;
}

void SearchMediaBySemanticsAsync::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool SearchMediaBySemanticsAsync::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string SearchMediaBySemanticsAsync::GetErrCodeExt() const
{
    return m_errCodeExt;
}

void SearchMediaBySemanticsAsync::SetErrCodeExt(const string& _errCodeExt)
{
    m_errCodeExt = _errCodeExt;
    m_errCodeExtHasBeenSet = true;
}

bool SearchMediaBySemanticsAsync::ErrCodeExtHasBeenSet() const
{
    return m_errCodeExtHasBeenSet;
}

string SearchMediaBySemanticsAsync::GetMessage() const
{
    return m_message;
}

void SearchMediaBySemanticsAsync::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SearchMediaBySemanticsAsync::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string SearchMediaBySemanticsAsync::GetQueryText() const
{
    return m_queryText;
}

void SearchMediaBySemanticsAsync::SetQueryText(const string& _queryText)
{
    m_queryText = _queryText;
    m_queryTextHasBeenSet = true;
}

bool SearchMediaBySemanticsAsync::QueryTextHasBeenSet() const
{
    return m_queryTextHasBeenSet;
}

vector<SemanticsSearchResult> SearchMediaBySemanticsAsync::GetSearchResults() const
{
    return m_searchResults;
}

void SearchMediaBySemanticsAsync::SetSearchResults(const vector<SemanticsSearchResult>& _searchResults)
{
    m_searchResults = _searchResults;
    m_searchResultsHasBeenSet = true;
}

bool SearchMediaBySemanticsAsync::SearchResultsHasBeenSet() const
{
    return m_searchResultsHasBeenSet;
}

