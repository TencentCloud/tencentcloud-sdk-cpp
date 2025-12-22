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

#include <tencentcloud/cls/v20201016/model/DescribeEsRechargePreviewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeEsRechargePreviewRequest::DescribeEsRechargePreviewRequest() :
    m_nameHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_esInfoHasBeenSet(false),
    m_importInfoHasBeenSet(false),
    m_timeInfoHasBeenSet(false)
{
}

string DescribeEsRechargePreviewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_esInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_esInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_importInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_importInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_timeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeEsRechargePreviewRequest::GetName() const
{
    return m_name;
}

void DescribeEsRechargePreviewRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeEsRechargePreviewRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeEsRechargePreviewRequest::GetTopicId() const
{
    return m_topicId;
}

void DescribeEsRechargePreviewRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool DescribeEsRechargePreviewRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string DescribeEsRechargePreviewRequest::GetIndex() const
{
    return m_index;
}

void DescribeEsRechargePreviewRequest::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool DescribeEsRechargePreviewRequest::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string DescribeEsRechargePreviewRequest::GetQuery() const
{
    return m_query;
}

void DescribeEsRechargePreviewRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool DescribeEsRechargePreviewRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

EsInfo DescribeEsRechargePreviewRequest::GetEsInfo() const
{
    return m_esInfo;
}

void DescribeEsRechargePreviewRequest::SetEsInfo(const EsInfo& _esInfo)
{
    m_esInfo = _esInfo;
    m_esInfoHasBeenSet = true;
}

bool DescribeEsRechargePreviewRequest::EsInfoHasBeenSet() const
{
    return m_esInfoHasBeenSet;
}

EsImportInfo DescribeEsRechargePreviewRequest::GetImportInfo() const
{
    return m_importInfo;
}

void DescribeEsRechargePreviewRequest::SetImportInfo(const EsImportInfo& _importInfo)
{
    m_importInfo = _importInfo;
    m_importInfoHasBeenSet = true;
}

bool DescribeEsRechargePreviewRequest::ImportInfoHasBeenSet() const
{
    return m_importInfoHasBeenSet;
}

EsTimeInfo DescribeEsRechargePreviewRequest::GetTimeInfo() const
{
    return m_timeInfo;
}

void DescribeEsRechargePreviewRequest::SetTimeInfo(const EsTimeInfo& _timeInfo)
{
    m_timeInfo = _timeInfo;
    m_timeInfoHasBeenSet = true;
}

bool DescribeEsRechargePreviewRequest::TimeInfoHasBeenSet() const
{
    return m_timeInfoHasBeenSet;
}


