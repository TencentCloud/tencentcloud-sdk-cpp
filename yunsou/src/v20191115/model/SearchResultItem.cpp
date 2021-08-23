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

#include <tencentcloud/yunsou/v20191115/model/SearchResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunsou::V20191115::Model;
using namespace std;

SearchResultItem::SearchResultItem() :
    m_docAbsHasBeenSet(false),
    m_docIdHasBeenSet(false),
    m_docMetaHasBeenSet(false),
    m_l2ScoreHasBeenSet(false),
    m_searchDebuginfoHasBeenSet(false)
{
}

CoreInternalOutcome SearchResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DocAbs") && !value["DocAbs"].IsNull())
    {
        if (!value["DocAbs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResultItem.DocAbs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docAbs = string(value["DocAbs"].GetString());
        m_docAbsHasBeenSet = true;
    }

    if (value.HasMember("DocId") && !value["DocId"].IsNull())
    {
        if (!value["DocId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResultItem.DocId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docId = string(value["DocId"].GetString());
        m_docIdHasBeenSet = true;
    }

    if (value.HasMember("DocMeta") && !value["DocMeta"].IsNull())
    {
        if (!value["DocMeta"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResultItem.DocMeta` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docMeta = string(value["DocMeta"].GetString());
        m_docMetaHasBeenSet = true;
    }

    if (value.HasMember("L2Score") && !value["L2Score"].IsNull())
    {
        if (!value["L2Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResultItem.L2Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_l2Score = value["L2Score"].GetDouble();
        m_l2ScoreHasBeenSet = true;
    }

    if (value.HasMember("SearchDebuginfo") && !value["SearchDebuginfo"].IsNull())
    {
        if (!value["SearchDebuginfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResultItem.SearchDebuginfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_searchDebuginfo = string(value["SearchDebuginfo"].GetString());
        m_searchDebuginfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_docAbsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocAbs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docAbs.c_str(), allocator).Move(), allocator);
    }

    if (m_docIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docId.c_str(), allocator).Move(), allocator);
    }

    if (m_docMetaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocMeta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docMeta.c_str(), allocator).Move(), allocator);
    }

    if (m_l2ScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L2Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_l2Score, allocator);
    }

    if (m_searchDebuginfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchDebuginfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_searchDebuginfo.c_str(), allocator).Move(), allocator);
    }

}


string SearchResultItem::GetDocAbs() const
{
    return m_docAbs;
}

void SearchResultItem::SetDocAbs(const string& _docAbs)
{
    m_docAbs = _docAbs;
    m_docAbsHasBeenSet = true;
}

bool SearchResultItem::DocAbsHasBeenSet() const
{
    return m_docAbsHasBeenSet;
}

string SearchResultItem::GetDocId() const
{
    return m_docId;
}

void SearchResultItem::SetDocId(const string& _docId)
{
    m_docId = _docId;
    m_docIdHasBeenSet = true;
}

bool SearchResultItem::DocIdHasBeenSet() const
{
    return m_docIdHasBeenSet;
}

string SearchResultItem::GetDocMeta() const
{
    return m_docMeta;
}

void SearchResultItem::SetDocMeta(const string& _docMeta)
{
    m_docMeta = _docMeta;
    m_docMetaHasBeenSet = true;
}

bool SearchResultItem::DocMetaHasBeenSet() const
{
    return m_docMetaHasBeenSet;
}

double SearchResultItem::GetL2Score() const
{
    return m_l2Score;
}

void SearchResultItem::SetL2Score(const double& _l2Score)
{
    m_l2Score = _l2Score;
    m_l2ScoreHasBeenSet = true;
}

bool SearchResultItem::L2ScoreHasBeenSet() const
{
    return m_l2ScoreHasBeenSet;
}

string SearchResultItem::GetSearchDebuginfo() const
{
    return m_searchDebuginfo;
}

void SearchResultItem::SetSearchDebuginfo(const string& _searchDebuginfo)
{
    m_searchDebuginfo = _searchDebuginfo;
    m_searchDebuginfoHasBeenSet = true;
}

bool SearchResultItem::SearchDebuginfoHasBeenSet() const
{
    return m_searchDebuginfoHasBeenSet;
}

