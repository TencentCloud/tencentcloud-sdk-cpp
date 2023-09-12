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

#include <tencentcloud/mrs/v20200910/model/PdfInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

PdfInfo::PdfInfo() :
    m_urlHasBeenSet(false),
    m_base64HasBeenSet(false)
{
}

CoreInternalOutcome PdfInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PdfInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Base64") && !value["Base64"].IsNull())
    {
        if (!value["Base64"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PdfInfo.Base64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_base64 = string(value["Base64"].GetString());
        m_base64HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PdfInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_base64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Base64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_base64.c_str(), allocator).Move(), allocator);
    }

}


string PdfInfo::GetUrl() const
{
    return m_url;
}

void PdfInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool PdfInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string PdfInfo::GetBase64() const
{
    return m_base64;
}

void PdfInfo::SetBase64(const string& _base64)
{
    m_base64 = _base64;
    m_base64HasBeenSet = true;
}

bool PdfInfo::Base64HasBeenSet() const
{
    return m_base64HasBeenSet;
}

