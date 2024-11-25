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

#include <tencentcloud/lke/v20231130/model/RunReRankRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

RunReRankRequest::RunReRankRequest() :
    m_queryHasBeenSet(false),
    m_docsHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_dataListHasBeenSet(false),
    m_onlineHasBeenSet(false)
{
}

string RunReRankRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_docsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Docs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_docs.begin(); itr != m_docs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_dataListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataList.begin(); itr != m_dataList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_onlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Online";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_online, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunReRankRequest::GetQuery() const
{
    return m_query;
}

void RunReRankRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool RunReRankRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

vector<string> RunReRankRequest::GetDocs() const
{
    return m_docs;
}

void RunReRankRequest::SetDocs(const vector<string>& _docs)
{
    m_docs = _docs;
    m_docsHasBeenSet = true;
}

bool RunReRankRequest::DocsHasBeenSet() const
{
    return m_docsHasBeenSet;
}

string RunReRankRequest::GetModel() const
{
    return m_model;
}

void RunReRankRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool RunReRankRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<ReRankDataObject> RunReRankRequest::GetDataList() const
{
    return m_dataList;
}

void RunReRankRequest::SetDataList(const vector<ReRankDataObject>& _dataList)
{
    m_dataList = _dataList;
    m_dataListHasBeenSet = true;
}

bool RunReRankRequest::DataListHasBeenSet() const
{
    return m_dataListHasBeenSet;
}

bool RunReRankRequest::GetOnline() const
{
    return m_online;
}

void RunReRankRequest::SetOnline(const bool& _online)
{
    m_online = _online;
    m_onlineHasBeenSet = true;
}

bool RunReRankRequest::OnlineHasBeenSet() const
{
    return m_onlineHasBeenSet;
}


