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

#include <tencentcloud/vod/v20180717/model/AdaptiveDynamicStreamingInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AdaptiveDynamicStreamingInfoItem::AdaptiveDynamicStreamingInfoItem() :
    m_definitionHasBeenSet(false),
    m_packageHasBeenSet(false),
    m_drmTypeHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome AdaptiveDynamicStreamingInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingInfoItem.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Package") && !value["Package"].IsNull())
    {
        if (!value["Package"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingInfoItem.Package` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_package = string(value["Package"].GetString());
        m_packageHasBeenSet = true;
    }

    if (value.HasMember("DrmType") && !value["DrmType"].IsNull())
    {
        if (!value["DrmType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingInfoItem.DrmType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drmType = string(value["DrmType"].GetString());
        m_drmTypeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingInfoItem.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdaptiveDynamicStreamingInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_packageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Package";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_package.c_str(), allocator).Move(), allocator);
    }

    if (m_drmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drmType.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


int64_t AdaptiveDynamicStreamingInfoItem::GetDefinition() const
{
    return m_definition;
}

void AdaptiveDynamicStreamingInfoItem::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool AdaptiveDynamicStreamingInfoItem::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string AdaptiveDynamicStreamingInfoItem::GetPackage() const
{
    return m_package;
}

void AdaptiveDynamicStreamingInfoItem::SetPackage(const string& _package)
{
    m_package = _package;
    m_packageHasBeenSet = true;
}

bool AdaptiveDynamicStreamingInfoItem::PackageHasBeenSet() const
{
    return m_packageHasBeenSet;
}

string AdaptiveDynamicStreamingInfoItem::GetDrmType() const
{
    return m_drmType;
}

void AdaptiveDynamicStreamingInfoItem::SetDrmType(const string& _drmType)
{
    m_drmType = _drmType;
    m_drmTypeHasBeenSet = true;
}

bool AdaptiveDynamicStreamingInfoItem::DrmTypeHasBeenSet() const
{
    return m_drmTypeHasBeenSet;
}

string AdaptiveDynamicStreamingInfoItem::GetUrl() const
{
    return m_url;
}

void AdaptiveDynamicStreamingInfoItem::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool AdaptiveDynamicStreamingInfoItem::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

