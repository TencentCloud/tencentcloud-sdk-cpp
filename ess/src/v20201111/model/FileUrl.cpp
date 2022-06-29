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

#include <tencentcloud/ess/v20201111/model/FileUrl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FileUrl::FileUrl() :
    m_urlHasBeenSet(false),
    m_optionHasBeenSet(false)
{
}

CoreInternalOutcome FileUrl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileUrl.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Option") && !value["Option"].IsNull())
    {
        if (!value["Option"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileUrl.Option` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_option = string(value["Option"].GetString());
        m_optionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileUrl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_optionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Option";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_option.c_str(), allocator).Move(), allocator);
    }

}


string FileUrl::GetUrl() const
{
    return m_url;
}

void FileUrl::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool FileUrl::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string FileUrl::GetOption() const
{
    return m_option;
}

void FileUrl::SetOption(const string& _option)
{
    m_option = _option;
    m_optionHasBeenSet = true;
}

bool FileUrl::OptionHasBeenSet() const
{
    return m_optionHasBeenSet;
}

