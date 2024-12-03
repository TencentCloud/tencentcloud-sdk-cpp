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

#include <tencentcloud/tsf/v20180326/model/TsfPageApplication.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

TsfPageApplication::TsfPageApplication() :
    m_totalCountHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_specTotalCountHasBeenSet(false)
{
}

CoreInternalOutcome TsfPageApplication::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TsfPageApplication.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TsfPageApplication.Content` is not array type"));

        const rapidjson::Value &tmpValue = value["Content"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApplicationForPage item;
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

    if (value.HasMember("SpecTotalCount") && !value["SpecTotalCount"].IsNull())
    {
        if (!value["SpecTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TsfPageApplication.SpecTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_specTotalCount = value["SpecTotalCount"].GetInt64();
        m_specTotalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TsfPageApplication::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_specTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_specTotalCount, allocator);
    }

}


int64_t TsfPageApplication::GetTotalCount() const
{
    return m_totalCount;
}

void TsfPageApplication::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool TsfPageApplication::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<ApplicationForPage> TsfPageApplication::GetContent() const
{
    return m_content;
}

void TsfPageApplication::SetContent(const vector<ApplicationForPage>& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool TsfPageApplication::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t TsfPageApplication::GetSpecTotalCount() const
{
    return m_specTotalCount;
}

void TsfPageApplication::SetSpecTotalCount(const int64_t& _specTotalCount)
{
    m_specTotalCount = _specTotalCount;
    m_specTotalCountHasBeenSet = true;
}

bool TsfPageApplication::SpecTotalCountHasBeenSet() const
{
    return m_specTotalCountHasBeenSet;
}

