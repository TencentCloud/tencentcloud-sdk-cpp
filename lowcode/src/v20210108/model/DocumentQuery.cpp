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

#include <tencentcloud/lowcode/v20210108/model/DocumentQuery.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

DocumentQuery::DocumentQuery() :
    m_documentSetIdHasBeenSet(false),
    m_documentSetNameHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

CoreInternalOutcome DocumentQuery::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DocumentSetId") && !value["DocumentSetId"].IsNull())
    {
        if (!value["DocumentSetId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DocumentQuery.DocumentSetId` is not array type"));

        const rapidjson::Value &tmpValue = value["DocumentSetId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_documentSetId.push_back((*itr).GetString());
        }
        m_documentSetIdHasBeenSet = true;
    }

    if (value.HasMember("DocumentSetName") && !value["DocumentSetName"].IsNull())
    {
        if (!value["DocumentSetName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DocumentQuery.DocumentSetName` is not array type"));

        const rapidjson::Value &tmpValue = value["DocumentSetName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_documentSetName.push_back((*itr).GetString());
        }
        m_documentSetNameHasBeenSet = true;
    }

    if (value.HasMember("Filter") && !value["Filter"].IsNull())
    {
        if (!value["Filter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentQuery.Filter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filter = string(value["Filter"].GetString());
        m_filterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocumentQuery::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_documentSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_documentSetId.begin(); itr != m_documentSetId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_documentSetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentSetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_documentSetName.begin(); itr != m_documentSetName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
    }

}


vector<string> DocumentQuery::GetDocumentSetId() const
{
    return m_documentSetId;
}

void DocumentQuery::SetDocumentSetId(const vector<string>& _documentSetId)
{
    m_documentSetId = _documentSetId;
    m_documentSetIdHasBeenSet = true;
}

bool DocumentQuery::DocumentSetIdHasBeenSet() const
{
    return m_documentSetIdHasBeenSet;
}

vector<string> DocumentQuery::GetDocumentSetName() const
{
    return m_documentSetName;
}

void DocumentQuery::SetDocumentSetName(const vector<string>& _documentSetName)
{
    m_documentSetName = _documentSetName;
    m_documentSetNameHasBeenSet = true;
}

bool DocumentQuery::DocumentSetNameHasBeenSet() const
{
    return m_documentSetNameHasBeenSet;
}

string DocumentQuery::GetFilter() const
{
    return m_filter;
}

void DocumentQuery::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DocumentQuery::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

