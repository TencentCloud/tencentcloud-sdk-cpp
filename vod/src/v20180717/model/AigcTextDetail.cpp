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

#include <tencentcloud/vod/v20180717/model/AigcTextDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcTextDetail::AigcTextDetail() :
    m_pageSizeHasBeenSet(false),
    m_scrollTokenHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome AigcTextDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetail.PageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetUint64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("ScrollToken") && !value["ScrollToken"].IsNull())
    {
        if (!value["ScrollToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetail.ScrollToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scrollToken = string(value["ScrollToken"].GetString());
        m_scrollTokenHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AigcTextDetail.Data` is not array type"));

        const rapidjson::Value &tmpValue = value["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AigcTextDetailData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcTextDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_scrollTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrollToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scrollToken.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t AigcTextDetail::GetPageSize() const
{
    return m_pageSize;
}

void AigcTextDetail::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool AigcTextDetail::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string AigcTextDetail::GetScrollToken() const
{
    return m_scrollToken;
}

void AigcTextDetail::SetScrollToken(const string& _scrollToken)
{
    m_scrollToken = _scrollToken;
    m_scrollTokenHasBeenSet = true;
}

bool AigcTextDetail::ScrollTokenHasBeenSet() const
{
    return m_scrollTokenHasBeenSet;
}

vector<AigcTextDetailData> AigcTextDetail::GetData() const
{
    return m_data;
}

void AigcTextDetail::SetData(const vector<AigcTextDetailData>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool AigcTextDetail::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

