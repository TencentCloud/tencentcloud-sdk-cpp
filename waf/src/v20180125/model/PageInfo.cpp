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

#include <tencentcloud/waf/v20180125/model/PageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

PageInfo::PageInfo() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

CoreInternalOutcome PageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PageInfo.PageNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = string(value["PageNumber"].GetString());
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PageInfo.PageSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = string(value["PageSize"].GetString());
        m_pageSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageSize.c_str(), allocator).Move(), allocator);
    }

}


string PageInfo::GetPageNumber() const
{
    return m_pageNumber;
}

void PageInfo::SetPageNumber(const string& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool PageInfo::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string PageInfo::GetPageSize() const
{
    return m_pageSize;
}

void PageInfo::SetPageSize(const string& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool PageInfo::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

