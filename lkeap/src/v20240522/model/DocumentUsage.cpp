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

#include <tencentcloud/lkeap/v20240522/model/DocumentUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

DocumentUsage::DocumentUsage() :
    m_pageNumberHasBeenSet(false),
    m_totalTokenHasBeenSet(false),
    m_totalTokensHasBeenSet(false),
    m_splitTokensHasBeenSet(false),
    m_mllmTokensHasBeenSet(false)
{
}

CoreInternalOutcome DocumentUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentUsage.PageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = value["PageNumber"].GetInt64();
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("TotalToken") && !value["TotalToken"].IsNull())
    {
        if (!value["TotalToken"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentUsage.TotalToken` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalToken = value["TotalToken"].GetInt64();
        m_totalTokenHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentUsage.TotalTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetInt64();
        m_totalTokensHasBeenSet = true;
    }

    if (value.HasMember("SplitTokens") && !value["SplitTokens"].IsNull())
    {
        if (!value["SplitTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentUsage.SplitTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_splitTokens = value["SplitTokens"].GetInt64();
        m_splitTokensHasBeenSet = true;
    }

    if (value.HasMember("MllmTokens") && !value["MllmTokens"].IsNull())
    {
        if (!value["MllmTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentUsage.MllmTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mllmTokens = value["MllmTokens"].GetInt64();
        m_mllmTokensHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocumentUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_totalTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalToken, allocator);
    }

    if (m_totalTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokens, allocator);
    }

    if (m_splitTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SplitTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_splitTokens, allocator);
    }

    if (m_mllmTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MllmTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mllmTokens, allocator);
    }

}


int64_t DocumentUsage::GetPageNumber() const
{
    return m_pageNumber;
}

void DocumentUsage::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DocumentUsage::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DocumentUsage::GetTotalToken() const
{
    return m_totalToken;
}

void DocumentUsage::SetTotalToken(const int64_t& _totalToken)
{
    m_totalToken = _totalToken;
    m_totalTokenHasBeenSet = true;
}

bool DocumentUsage::TotalTokenHasBeenSet() const
{
    return m_totalTokenHasBeenSet;
}

int64_t DocumentUsage::GetTotalTokens() const
{
    return m_totalTokens;
}

void DocumentUsage::SetTotalTokens(const int64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool DocumentUsage::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

int64_t DocumentUsage::GetSplitTokens() const
{
    return m_splitTokens;
}

void DocumentUsage::SetSplitTokens(const int64_t& _splitTokens)
{
    m_splitTokens = _splitTokens;
    m_splitTokensHasBeenSet = true;
}

bool DocumentUsage::SplitTokensHasBeenSet() const
{
    return m_splitTokensHasBeenSet;
}

int64_t DocumentUsage::GetMllmTokens() const
{
    return m_mllmTokens;
}

void DocumentUsage::SetMllmTokens(const int64_t& _mllmTokens)
{
    m_mllmTokens = _mllmTokens;
    m_mllmTokensHasBeenSet = true;
}

bool DocumentUsage::MllmTokensHasBeenSet() const
{
    return m_mllmTokensHasBeenSet;
}

