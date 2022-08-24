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

#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrFullTextResultOutputSubtitleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::AiRecognitionTaskAsrFullTextResultOutputSubtitleItem() :
    m_formatHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResultOutputSubtitleItem.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResultOutputSubtitleItem.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


string AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::GetFormat() const
{
    return m_format;
}

void AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::GetUrl() const
{
    return m_url;
}

void AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

