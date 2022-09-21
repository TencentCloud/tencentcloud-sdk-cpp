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

#include <tencentcloud/ivld/v20210903/model/MediaFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

MediaFilter::MediaFilter() :
    m_mediaNameSetHasBeenSet(false),
    m_statusSetHasBeenSet(false),
    m_mediaIdSetHasBeenSet(false),
    m_labelSetHasBeenSet(false),
    m_mediaTypeHasBeenSet(false)
{
}

CoreInternalOutcome MediaFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MediaNameSet") && !value["MediaNameSet"].IsNull())
    {
        if (!value["MediaNameSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaFilter.MediaNameSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MediaNameSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_mediaNameSet.push_back((*itr).GetString());
        }
        m_mediaNameSetHasBeenSet = true;
    }

    if (value.HasMember("StatusSet") && !value["StatusSet"].IsNull())
    {
        if (!value["StatusSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaFilter.StatusSet` is not array type"));

        const rapidjson::Value &tmpValue = value["StatusSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_statusSet.push_back((*itr).GetInt64());
        }
        m_statusSetHasBeenSet = true;
    }

    if (value.HasMember("MediaIdSet") && !value["MediaIdSet"].IsNull())
    {
        if (!value["MediaIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaFilter.MediaIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MediaIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_mediaIdSet.push_back((*itr).GetString());
        }
        m_mediaIdSetHasBeenSet = true;
    }

    if (value.HasMember("LabelSet") && !value["LabelSet"].IsNull())
    {
        if (!value["LabelSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaFilter.LabelSet` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelSet.push_back((*itr).GetString());
        }
        m_labelSetHasBeenSet = true;
    }

    if (value.HasMember("MediaType") && !value["MediaType"].IsNull())
    {
        if (!value["MediaType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaFilter.MediaType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mediaType = value["MediaType"].GetInt64();
        m_mediaTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mediaNameSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaNameSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mediaNameSet.begin(); itr != m_mediaNameSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statusSet.begin(); itr != m_statusSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_mediaIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mediaIdSet.begin(); itr != m_mediaIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_labelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelSet.begin(); itr != m_labelSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mediaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediaType, allocator);
    }

}


vector<string> MediaFilter::GetMediaNameSet() const
{
    return m_mediaNameSet;
}

void MediaFilter::SetMediaNameSet(const vector<string>& _mediaNameSet)
{
    m_mediaNameSet = _mediaNameSet;
    m_mediaNameSetHasBeenSet = true;
}

bool MediaFilter::MediaNameSetHasBeenSet() const
{
    return m_mediaNameSetHasBeenSet;
}

vector<int64_t> MediaFilter::GetStatusSet() const
{
    return m_statusSet;
}

void MediaFilter::SetStatusSet(const vector<int64_t>& _statusSet)
{
    m_statusSet = _statusSet;
    m_statusSetHasBeenSet = true;
}

bool MediaFilter::StatusSetHasBeenSet() const
{
    return m_statusSetHasBeenSet;
}

vector<string> MediaFilter::GetMediaIdSet() const
{
    return m_mediaIdSet;
}

void MediaFilter::SetMediaIdSet(const vector<string>& _mediaIdSet)
{
    m_mediaIdSet = _mediaIdSet;
    m_mediaIdSetHasBeenSet = true;
}

bool MediaFilter::MediaIdSetHasBeenSet() const
{
    return m_mediaIdSetHasBeenSet;
}

vector<string> MediaFilter::GetLabelSet() const
{
    return m_labelSet;
}

void MediaFilter::SetLabelSet(const vector<string>& _labelSet)
{
    m_labelSet = _labelSet;
    m_labelSetHasBeenSet = true;
}

bool MediaFilter::LabelSetHasBeenSet() const
{
    return m_labelSetHasBeenSet;
}

int64_t MediaFilter::GetMediaType() const
{
    return m_mediaType;
}

void MediaFilter::SetMediaType(const int64_t& _mediaType)
{
    m_mediaType = _mediaType;
    m_mediaTypeHasBeenSet = true;
}

bool MediaFilter::MediaTypeHasBeenSet() const
{
    return m_mediaTypeHasBeenSet;
}

