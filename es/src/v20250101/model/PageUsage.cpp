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

#include <tencentcloud/es/v20250101/model/PageUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20250101::Model;
using namespace std;

PageUsage::PageUsage() :
    m_totalPagesHasBeenSet(false)
{
}

CoreInternalOutcome PageUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalPages") && !value["TotalPages"].IsNull())
    {
        if (!value["TotalPages"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PageUsage.TotalPages` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPages = value["TotalPages"].GetInt64();
        m_totalPagesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PageUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalPagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPages, allocator);
    }

}


int64_t PageUsage::GetTotalPages() const
{
    return m_totalPages;
}

void PageUsage::SetTotalPages(const int64_t& _totalPages)
{
    m_totalPages = _totalPages;
    m_totalPagesHasBeenSet = true;
}

bool PageUsage::TotalPagesHasBeenSet() const
{
    return m_totalPagesHasBeenSet;
}

