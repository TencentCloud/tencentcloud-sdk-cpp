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

#include <tencentcloud/lowcode/v20210108/model/PageQuery.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

PageQuery::PageQuery() :
    m_documentSetIdHasBeenSet(false),
    m_documentSetNameHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_outputFieldsHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

CoreInternalOutcome PageQuery::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DocumentSetId") && !value["DocumentSetId"].IsNull())
    {
        if (!value["DocumentSetId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PageQuery.DocumentSetId` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `PageQuery.DocumentSetName` is not array type"));

        const rapidjson::Value &tmpValue = value["DocumentSetName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_documentSetName.push_back((*itr).GetString());
        }
        m_documentSetNameHasBeenSet = true;
    }

    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PageQuery.Limit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetUint64();
        m_limitHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PageQuery.Offset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetUint64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("OutputFields") && !value["OutputFields"].IsNull())
    {
        if (!value["OutputFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PageQuery.OutputFields` is not array type"));

        const rapidjson::Value &tmpValue = value["OutputFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_outputFields.push_back((*itr).GetString());
        }
        m_outputFieldsHasBeenSet = true;
    }

    if (value.HasMember("Filter") && !value["Filter"].IsNull())
    {
        if (!value["Filter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PageQuery.Filter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filter = string(value["Filter"].GetString());
        m_filterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PageQuery::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_outputFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_outputFields.begin(); itr != m_outputFields.end(); ++itr)
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


vector<string> PageQuery::GetDocumentSetId() const
{
    return m_documentSetId;
}

void PageQuery::SetDocumentSetId(const vector<string>& _documentSetId)
{
    m_documentSetId = _documentSetId;
    m_documentSetIdHasBeenSet = true;
}

bool PageQuery::DocumentSetIdHasBeenSet() const
{
    return m_documentSetIdHasBeenSet;
}

vector<string> PageQuery::GetDocumentSetName() const
{
    return m_documentSetName;
}

void PageQuery::SetDocumentSetName(const vector<string>& _documentSetName)
{
    m_documentSetName = _documentSetName;
    m_documentSetNameHasBeenSet = true;
}

bool PageQuery::DocumentSetNameHasBeenSet() const
{
    return m_documentSetNameHasBeenSet;
}

uint64_t PageQuery::GetLimit() const
{
    return m_limit;
}

void PageQuery::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool PageQuery::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t PageQuery::GetOffset() const
{
    return m_offset;
}

void PageQuery::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool PageQuery::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<string> PageQuery::GetOutputFields() const
{
    return m_outputFields;
}

void PageQuery::SetOutputFields(const vector<string>& _outputFields)
{
    m_outputFields = _outputFields;
    m_outputFieldsHasBeenSet = true;
}

bool PageQuery::OutputFieldsHasBeenSet() const
{
    return m_outputFieldsHasBeenSet;
}

string PageQuery::GetFilter() const
{
    return m_filter;
}

void PageQuery::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool PageQuery::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

