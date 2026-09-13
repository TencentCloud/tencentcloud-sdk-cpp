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

#include <tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskRunListOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

InnerWorkflowTaskRunListOption::InnerWorkflowTaskRunListOption() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_runStatesHasBeenSet(false)
{
}

CoreInternalOutcome InnerWorkflowTaskRunListOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunListOption.PageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = value["PageNumber"].GetInt64();
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunListOption.PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("RunStates") && !value["RunStates"].IsNull())
    {
        if (!value["RunStates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunListOption.RunStates` is not array type"));

        const rapidjson::Value &tmpValue = value["RunStates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_runStates.push_back((*itr).GetString());
        }
        m_runStatesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InnerWorkflowTaskRunListOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_runStatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunStates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_runStates.begin(); itr != m_runStates.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t InnerWorkflowTaskRunListOption::GetPageNumber() const
{
    return m_pageNumber;
}

void InnerWorkflowTaskRunListOption::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool InnerWorkflowTaskRunListOption::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t InnerWorkflowTaskRunListOption::GetPageSize() const
{
    return m_pageSize;
}

void InnerWorkflowTaskRunListOption::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool InnerWorkflowTaskRunListOption::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<string> InnerWorkflowTaskRunListOption::GetRunStates() const
{
    return m_runStates;
}

void InnerWorkflowTaskRunListOption::SetRunStates(const vector<string>& _runStates)
{
    m_runStates = _runStates;
    m_runStatesHasBeenSet = true;
}

bool InnerWorkflowTaskRunListOption::RunStatesHasBeenSet() const
{
    return m_runStatesHasBeenSet;
}

