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

#include <tencentcloud/vclm/v20240523/model/LogoParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

LogoParam::LogoParam() :
    m_logoUrlHasBeenSet(false),
    m_logoImageHasBeenSet(false),
    m_logoRectHasBeenSet(false)
{
}

CoreInternalOutcome LogoParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogoUrl") && !value["LogoUrl"].IsNull())
    {
        if (!value["LogoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogoParam.LogoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logoUrl = string(value["LogoUrl"].GetString());
        m_logoUrlHasBeenSet = true;
    }

    if (value.HasMember("LogoImage") && !value["LogoImage"].IsNull())
    {
        if (!value["LogoImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogoParam.LogoImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logoImage = string(value["LogoImage"].GetString());
        m_logoImageHasBeenSet = true;
    }

    if (value.HasMember("LogoRect") && !value["LogoRect"].IsNull())
    {
        if (!value["LogoRect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogoParam.LogoRect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_logoRect.Deserialize(value["LogoRect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logoRectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogoParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_logoImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logoImage.c_str(), allocator).Move(), allocator);
    }

    if (m_logoRectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoRect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logoRect.ToJsonObject(value[key.c_str()], allocator);
    }

}


string LogoParam::GetLogoUrl() const
{
    return m_logoUrl;
}

void LogoParam::SetLogoUrl(const string& _logoUrl)
{
    m_logoUrl = _logoUrl;
    m_logoUrlHasBeenSet = true;
}

bool LogoParam::LogoUrlHasBeenSet() const
{
    return m_logoUrlHasBeenSet;
}

string LogoParam::GetLogoImage() const
{
    return m_logoImage;
}

void LogoParam::SetLogoImage(const string& _logoImage)
{
    m_logoImage = _logoImage;
    m_logoImageHasBeenSet = true;
}

bool LogoParam::LogoImageHasBeenSet() const
{
    return m_logoImageHasBeenSet;
}

LogoRect LogoParam::GetLogoRect() const
{
    return m_logoRect;
}

void LogoParam::SetLogoRect(const LogoRect& _logoRect)
{
    m_logoRect = _logoRect;
    m_logoRectHasBeenSet = true;
}

bool LogoParam::LogoRectHasBeenSet() const
{
    return m_logoRectHasBeenSet;
}

