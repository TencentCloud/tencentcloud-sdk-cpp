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

#include <tencentcloud/monitor/v20230616/model/PageByNoParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

PageByNoParams::PageByNoParams() :
    m_perPageHasBeenSet(false),
    m_pageNoHasBeenSet(false)
{
}

CoreInternalOutcome PageByNoParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PerPage") && !value["PerPage"].IsNull())
    {
        if (!value["PerPage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PageByNoParams.PerPage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_perPage = value["PerPage"].GetInt64();
        m_perPageHasBeenSet = true;
    }

    if (value.HasMember("PageNo") && !value["PageNo"].IsNull())
    {
        if (!value["PageNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PageByNoParams.PageNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageNo = string(value["PageNo"].GetString());
        m_pageNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PageByNoParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_perPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_perPage, allocator);
    }

    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageNo.c_str(), allocator).Move(), allocator);
    }

}


int64_t PageByNoParams::GetPerPage() const
{
    return m_perPage;
}

void PageByNoParams::SetPerPage(const int64_t& _perPage)
{
    m_perPage = _perPage;
    m_perPageHasBeenSet = true;
}

bool PageByNoParams::PerPageHasBeenSet() const
{
    return m_perPageHasBeenSet;
}

string PageByNoParams::GetPageNo() const
{
    return m_pageNo;
}

void PageByNoParams::SetPageNo(const string& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool PageByNoParams::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

