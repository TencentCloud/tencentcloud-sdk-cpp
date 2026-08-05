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

#include <tencentcloud/trtc/v20190722/model/Input.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

Input::Input() :
    m_urlHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_agoraParamHasBeenSet(false)
{
}

CoreInternalOutcome Input::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Input.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Input.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("AgoraParam") && !value["AgoraParam"].IsNull())
    {
        if (!value["AgoraParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Input.AgoraParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_agoraParam.Deserialize(value["AgoraParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_agoraParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Input::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_agoraParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgoraParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agoraParam.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Input::GetUrl() const
{
    return m_url;
}

void Input::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool Input::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string Input::GetFormat() const
{
    return m_format;
}

void Input::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool Input::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

AgoraParam Input::GetAgoraParam() const
{
    return m_agoraParam;
}

void Input::SetAgoraParam(const AgoraParam& _agoraParam)
{
    m_agoraParam = _agoraParam;
    m_agoraParamHasBeenSet = true;
}

bool Input::AgoraParamHasBeenSet() const
{
    return m_agoraParamHasBeenSet;
}

