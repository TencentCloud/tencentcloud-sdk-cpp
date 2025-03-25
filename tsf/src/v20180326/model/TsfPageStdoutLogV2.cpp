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

#include <tencentcloud/tsf/v20180326/model/TsfPageStdoutLogV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

TsfPageStdoutLogV2::TsfPageStdoutLogV2() :
    m_totalCountHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_scrollIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_searchAfterHasBeenSet(false)
{
}

CoreInternalOutcome TsfPageStdoutLogV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TsfPageStdoutLogV2.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TsfPageStdoutLogV2.Content` is not array type"));

        const rapidjson::Value &tmpValue = value["Content"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StdoutLogV2 item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_content.push_back(item);
        }
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("ScrollId") && !value["ScrollId"].IsNull())
    {
        if (!value["ScrollId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TsfPageStdoutLogV2.ScrollId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scrollId = string(value["ScrollId"].GetString());
        m_scrollIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TsfPageStdoutLogV2.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SearchAfter") && !value["SearchAfter"].IsNull())
    {
        if (!value["SearchAfter"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TsfPageStdoutLogV2.SearchAfter` is not array type"));

        const rapidjson::Value &tmpValue = value["SearchAfter"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_searchAfter.push_back((*itr).GetString());
        }
        m_searchAfterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TsfPageStdoutLogV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_content.begin(); itr != m_content.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_scrollIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrollId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scrollId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_searchAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searchAfter.begin(); itr != m_searchAfter.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t TsfPageStdoutLogV2::GetTotalCount() const
{
    return m_totalCount;
}

void TsfPageStdoutLogV2::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool TsfPageStdoutLogV2::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<StdoutLogV2> TsfPageStdoutLogV2::GetContent() const
{
    return m_content;
}

void TsfPageStdoutLogV2::SetContent(const vector<StdoutLogV2>& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool TsfPageStdoutLogV2::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string TsfPageStdoutLogV2::GetScrollId() const
{
    return m_scrollId;
}

void TsfPageStdoutLogV2::SetScrollId(const string& _scrollId)
{
    m_scrollId = _scrollId;
    m_scrollIdHasBeenSet = true;
}

bool TsfPageStdoutLogV2::ScrollIdHasBeenSet() const
{
    return m_scrollIdHasBeenSet;
}

string TsfPageStdoutLogV2::GetStatus() const
{
    return m_status;
}

void TsfPageStdoutLogV2::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TsfPageStdoutLogV2::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> TsfPageStdoutLogV2::GetSearchAfter() const
{
    return m_searchAfter;
}

void TsfPageStdoutLogV2::SetSearchAfter(const vector<string>& _searchAfter)
{
    m_searchAfter = _searchAfter;
    m_searchAfterHasBeenSet = true;
}

bool TsfPageStdoutLogV2::SearchAfterHasBeenSet() const
{
    return m_searchAfterHasBeenSet;
}

