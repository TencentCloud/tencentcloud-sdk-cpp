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

#include <tencentcloud/lke/v20231130/model/WordRecognizeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

WordRecognizeInfo::WordRecognizeInfo() :
    m_pageNumberHasBeenSet(false),
    m_wordBase64HasBeenSet(false)
{
}

CoreInternalOutcome WordRecognizeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WordRecognizeInfo.PageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = value["PageNumber"].GetInt64();
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("WordBase64") && !value["WordBase64"].IsNull())
    {
        if (!value["WordBase64"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WordRecognizeInfo.WordBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wordBase64 = string(value["WordBase64"].GetString());
        m_wordBase64HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WordRecognizeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_wordBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordBase64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wordBase64.c_str(), allocator).Move(), allocator);
    }

}


int64_t WordRecognizeInfo::GetPageNumber() const
{
    return m_pageNumber;
}

void WordRecognizeInfo::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool WordRecognizeInfo::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string WordRecognizeInfo::GetWordBase64() const
{
    return m_wordBase64;
}

void WordRecognizeInfo::SetWordBase64(const string& _wordBase64)
{
    m_wordBase64 = _wordBase64;
    m_wordBase64HasBeenSet = true;
}

bool WordRecognizeInfo::WordBase64HasBeenSet() const
{
    return m_wordBase64HasBeenSet;
}

