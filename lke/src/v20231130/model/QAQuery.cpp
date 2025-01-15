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

#include <tencentcloud/lke/v20231130/model/QAQuery.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

QAQuery::QAQuery() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_botBizIdHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_cateBizIdHasBeenSet(false),
    m_acceptStatusHasBeenSet(false),
    m_releaseStatusHasBeenSet(false),
    m_docBizIdHasBeenSet(false),
    m_qaBizIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_queryAnswerHasBeenSet(false),
    m_queryTypeHasBeenSet(false)
{
}

CoreInternalOutcome QAQuery::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QAQuery.PageNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = value["PageNumber"].GetUint64();
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QAQuery.PageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetUint64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("BotBizId") && !value["BotBizId"].IsNull())
    {
        if (!value["BotBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QAQuery.BotBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botBizId = string(value["BotBizId"].GetString());
        m_botBizIdHasBeenSet = true;
    }

    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QAQuery.Query` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_query = string(value["Query"].GetString());
        m_queryHasBeenSet = true;
    }

    if (value.HasMember("CateBizId") && !value["CateBizId"].IsNull())
    {
        if (!value["CateBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QAQuery.CateBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cateBizId = string(value["CateBizId"].GetString());
        m_cateBizIdHasBeenSet = true;
    }

    if (value.HasMember("AcceptStatus") && !value["AcceptStatus"].IsNull())
    {
        if (!value["AcceptStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QAQuery.AcceptStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["AcceptStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_acceptStatus.push_back((*itr).GetUint64());
        }
        m_acceptStatusHasBeenSet = true;
    }

    if (value.HasMember("ReleaseStatus") && !value["ReleaseStatus"].IsNull())
    {
        if (!value["ReleaseStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QAQuery.ReleaseStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["ReleaseStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_releaseStatus.push_back((*itr).GetUint64());
        }
        m_releaseStatusHasBeenSet = true;
    }

    if (value.HasMember("DocBizId") && !value["DocBizId"].IsNull())
    {
        if (!value["DocBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QAQuery.DocBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docBizId = string(value["DocBizId"].GetString());
        m_docBizIdHasBeenSet = true;
    }

    if (value.HasMember("QaBizId") && !value["QaBizId"].IsNull())
    {
        if (!value["QaBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QAQuery.QaBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qaBizId = string(value["QaBizId"].GetString());
        m_qaBizIdHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QAQuery.Source` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetUint64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("QueryAnswer") && !value["QueryAnswer"].IsNull())
    {
        if (!value["QueryAnswer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QAQuery.QueryAnswer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryAnswer = string(value["QueryAnswer"].GetString());
        m_queryAnswerHasBeenSet = true;
    }

    if (value.HasMember("QueryType") && !value["QueryType"].IsNull())
    {
        if (!value["QueryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QAQuery.QueryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryType = string(value["QueryType"].GetString());
        m_queryTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QAQuery::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_botBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_botBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_cateBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CateBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cateBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_acceptStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcceptStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_acceptStatus.begin(); itr != m_acceptStatus.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_releaseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_releaseStatus.begin(); itr != m_releaseStatus.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_docBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_qaBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qaBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_queryAnswerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryAnswer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryAnswer.c_str(), allocator).Move(), allocator);
    }

    if (m_queryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t QAQuery::GetPageNumber() const
{
    return m_pageNumber;
}

void QAQuery::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool QAQuery::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t QAQuery::GetPageSize() const
{
    return m_pageSize;
}

void QAQuery::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool QAQuery::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string QAQuery::GetBotBizId() const
{
    return m_botBizId;
}

void QAQuery::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool QAQuery::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

string QAQuery::GetQuery() const
{
    return m_query;
}

void QAQuery::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool QAQuery::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

string QAQuery::GetCateBizId() const
{
    return m_cateBizId;
}

void QAQuery::SetCateBizId(const string& _cateBizId)
{
    m_cateBizId = _cateBizId;
    m_cateBizIdHasBeenSet = true;
}

bool QAQuery::CateBizIdHasBeenSet() const
{
    return m_cateBizIdHasBeenSet;
}

vector<uint64_t> QAQuery::GetAcceptStatus() const
{
    return m_acceptStatus;
}

void QAQuery::SetAcceptStatus(const vector<uint64_t>& _acceptStatus)
{
    m_acceptStatus = _acceptStatus;
    m_acceptStatusHasBeenSet = true;
}

bool QAQuery::AcceptStatusHasBeenSet() const
{
    return m_acceptStatusHasBeenSet;
}

vector<uint64_t> QAQuery::GetReleaseStatus() const
{
    return m_releaseStatus;
}

void QAQuery::SetReleaseStatus(const vector<uint64_t>& _releaseStatus)
{
    m_releaseStatus = _releaseStatus;
    m_releaseStatusHasBeenSet = true;
}

bool QAQuery::ReleaseStatusHasBeenSet() const
{
    return m_releaseStatusHasBeenSet;
}

string QAQuery::GetDocBizId() const
{
    return m_docBizId;
}

void QAQuery::SetDocBizId(const string& _docBizId)
{
    m_docBizId = _docBizId;
    m_docBizIdHasBeenSet = true;
}

bool QAQuery::DocBizIdHasBeenSet() const
{
    return m_docBizIdHasBeenSet;
}

string QAQuery::GetQaBizId() const
{
    return m_qaBizId;
}

void QAQuery::SetQaBizId(const string& _qaBizId)
{
    m_qaBizId = _qaBizId;
    m_qaBizIdHasBeenSet = true;
}

bool QAQuery::QaBizIdHasBeenSet() const
{
    return m_qaBizIdHasBeenSet;
}

uint64_t QAQuery::GetSource() const
{
    return m_source;
}

void QAQuery::SetSource(const uint64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool QAQuery::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string QAQuery::GetQueryAnswer() const
{
    return m_queryAnswer;
}

void QAQuery::SetQueryAnswer(const string& _queryAnswer)
{
    m_queryAnswer = _queryAnswer;
    m_queryAnswerHasBeenSet = true;
}

bool QAQuery::QueryAnswerHasBeenSet() const
{
    return m_queryAnswerHasBeenSet;
}

string QAQuery::GetQueryType() const
{
    return m_queryType;
}

void QAQuery::SetQueryType(const string& _queryType)
{
    m_queryType = _queryType;
    m_queryTypeHasBeenSet = true;
}

bool QAQuery::QueryTypeHasBeenSet() const
{
    return m_queryTypeHasBeenSet;
}

