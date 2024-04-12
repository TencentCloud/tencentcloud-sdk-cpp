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

#include <tencentcloud/lke/v20231130/model/ModifyDocAttrRangeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ModifyDocAttrRangeRequest::ModifyDocAttrRangeRequest() :
    m_botBizIdHasBeenSet(false),
    m_docBizIdsHasBeenSet(false),
    m_attrRangeHasBeenSet(false),
    m_attrLabelsHasBeenSet(false)
{
}

string ModifyDocAttrRangeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_botBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_docBizIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocBizIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_docBizIds.begin(); itr != m_docBizIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_attrRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_attrRange, allocator);
    }

    if (m_attrLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrLabels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attrLabels.begin(); itr != m_attrLabels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDocAttrRangeRequest::GetBotBizId() const
{
    return m_botBizId;
}

void ModifyDocAttrRangeRequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool ModifyDocAttrRangeRequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

vector<string> ModifyDocAttrRangeRequest::GetDocBizIds() const
{
    return m_docBizIds;
}

void ModifyDocAttrRangeRequest::SetDocBizIds(const vector<string>& _docBizIds)
{
    m_docBizIds = _docBizIds;
    m_docBizIdsHasBeenSet = true;
}

bool ModifyDocAttrRangeRequest::DocBizIdsHasBeenSet() const
{
    return m_docBizIdsHasBeenSet;
}

uint64_t ModifyDocAttrRangeRequest::GetAttrRange() const
{
    return m_attrRange;
}

void ModifyDocAttrRangeRequest::SetAttrRange(const uint64_t& _attrRange)
{
    m_attrRange = _attrRange;
    m_attrRangeHasBeenSet = true;
}

bool ModifyDocAttrRangeRequest::AttrRangeHasBeenSet() const
{
    return m_attrRangeHasBeenSet;
}

vector<AttrLabelRefer> ModifyDocAttrRangeRequest::GetAttrLabels() const
{
    return m_attrLabels;
}

void ModifyDocAttrRangeRequest::SetAttrLabels(const vector<AttrLabelRefer>& _attrLabels)
{
    m_attrLabels = _attrLabels;
    m_attrLabelsHasBeenSet = true;
}

bool ModifyDocAttrRangeRequest::AttrLabelsHasBeenSet() const
{
    return m_attrLabelsHasBeenSet;
}


