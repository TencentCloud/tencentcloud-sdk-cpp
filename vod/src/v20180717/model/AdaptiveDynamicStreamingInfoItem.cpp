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
    m_urlHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_digitalWatermarkTypeHasBeenSet(false),
    m_subStreamSetHasBeenSet(false),
    m_copyRightWatermarkTextHasBeenSet(false),
    m_subtitleSetHasBeenSet(false),
    m_defaultSubtitleIdHasBeenSet(false)
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

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingInfoItem.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("DigitalWatermarkType") && !value["DigitalWatermarkType"].IsNull())
    {
        if (!value["DigitalWatermarkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingInfoItem.DigitalWatermarkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_digitalWatermarkType = string(value["DigitalWatermarkType"].GetString());
        m_digitalWatermarkTypeHasBeenSet = true;
    }

    if (value.HasMember("SubStreamSet") && !value["SubStreamSet"].IsNull())
    {
        if (!value["SubStreamSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingInfoItem.SubStreamSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SubStreamSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaSubStreamInfoItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subStreamSet.push_back(item);
        }
        m_subStreamSetHasBeenSet = true;
    }

    if (value.HasMember("CopyRightWatermarkText") && !value["CopyRightWatermarkText"].IsNull())
    {
        if (!value["CopyRightWatermarkText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingInfoItem.CopyRightWatermarkText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyRightWatermarkText = string(value["CopyRightWatermarkText"].GetString());
        m_copyRightWatermarkTextHasBeenSet = true;
    }

    if (value.HasMember("SubtitleSet") && !value["SubtitleSet"].IsNull())
    {
        if (!value["SubtitleSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingInfoItem.SubtitleSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SubtitleSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaSubtitleItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subtitleSet.push_back(item);
        }
        m_subtitleSetHasBeenSet = true;
    }

    if (value.HasMember("DefaultSubtitleId") && !value["DefaultSubtitleId"].IsNull())
    {
        if (!value["DefaultSubtitleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingInfoItem.DefaultSubtitleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultSubtitleId = string(value["DefaultSubtitleId"].GetString());
        m_defaultSubtitleIdHasBeenSet = true;
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

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_digitalWatermarkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DigitalWatermarkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_digitalWatermarkType.c_str(), allocator).Move(), allocator);
    }

    if (m_subStreamSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubStreamSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subStreamSet.begin(); itr != m_subStreamSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_copyRightWatermarkTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyRightWatermarkText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyRightWatermarkText.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subtitleSet.begin(); itr != m_subtitleSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_defaultSubtitleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultSubtitleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultSubtitleId.c_str(), allocator).Move(), allocator);
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

int64_t AdaptiveDynamicStreamingInfoItem::GetSize() const
{
    return m_size;
}

void AdaptiveDynamicStreamingInfoItem::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool AdaptiveDynamicStreamingInfoItem::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string AdaptiveDynamicStreamingInfoItem::GetDigitalWatermarkType() const
{
    return m_digitalWatermarkType;
}

void AdaptiveDynamicStreamingInfoItem::SetDigitalWatermarkType(const string& _digitalWatermarkType)
{
    m_digitalWatermarkType = _digitalWatermarkType;
    m_digitalWatermarkTypeHasBeenSet = true;
}

bool AdaptiveDynamicStreamingInfoItem::DigitalWatermarkTypeHasBeenSet() const
{
    return m_digitalWatermarkTypeHasBeenSet;
}

vector<MediaSubStreamInfoItem> AdaptiveDynamicStreamingInfoItem::GetSubStreamSet() const
{
    return m_subStreamSet;
}

void AdaptiveDynamicStreamingInfoItem::SetSubStreamSet(const vector<MediaSubStreamInfoItem>& _subStreamSet)
{
    m_subStreamSet = _subStreamSet;
    m_subStreamSetHasBeenSet = true;
}

bool AdaptiveDynamicStreamingInfoItem::SubStreamSetHasBeenSet() const
{
    return m_subStreamSetHasBeenSet;
}

string AdaptiveDynamicStreamingInfoItem::GetCopyRightWatermarkText() const
{
    return m_copyRightWatermarkText;
}

void AdaptiveDynamicStreamingInfoItem::SetCopyRightWatermarkText(const string& _copyRightWatermarkText)
{
    m_copyRightWatermarkText = _copyRightWatermarkText;
    m_copyRightWatermarkTextHasBeenSet = true;
}

bool AdaptiveDynamicStreamingInfoItem::CopyRightWatermarkTextHasBeenSet() const
{
    return m_copyRightWatermarkTextHasBeenSet;
}

vector<MediaSubtitleItem> AdaptiveDynamicStreamingInfoItem::GetSubtitleSet() const
{
    return m_subtitleSet;
}

void AdaptiveDynamicStreamingInfoItem::SetSubtitleSet(const vector<MediaSubtitleItem>& _subtitleSet)
{
    m_subtitleSet = _subtitleSet;
    m_subtitleSetHasBeenSet = true;
}

bool AdaptiveDynamicStreamingInfoItem::SubtitleSetHasBeenSet() const
{
    return m_subtitleSetHasBeenSet;
}

string AdaptiveDynamicStreamingInfoItem::GetDefaultSubtitleId() const
{
    return m_defaultSubtitleId;
}

void AdaptiveDynamicStreamingInfoItem::SetDefaultSubtitleId(const string& _defaultSubtitleId)
{
    m_defaultSubtitleId = _defaultSubtitleId;
    m_defaultSubtitleIdHasBeenSet = true;
}

bool AdaptiveDynamicStreamingInfoItem::DefaultSubtitleIdHasBeenSet() const
{
    return m_defaultSubtitleIdHasBeenSet;
}

