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

#include <tencentcloud/waf/v20180125/model/SessionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

SessionItem::SessionItem() :
    m_categoryHasBeenSet(false),
    m_keyOrStartMatHasBeenSet(false),
    m_endMatHasBeenSet(false),
    m_startOffsetHasBeenSet(false),
    m_endOffsetHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_tsVersionHasBeenSet(false)
{
}

CoreInternalOutcome SessionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("KeyOrStartMat") && !value["KeyOrStartMat"].IsNull())
    {
        if (!value["KeyOrStartMat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.KeyOrStartMat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyOrStartMat = string(value["KeyOrStartMat"].GetString());
        m_keyOrStartMatHasBeenSet = true;
    }

    if (value.HasMember("EndMat") && !value["EndMat"].IsNull())
    {
        if (!value["EndMat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.EndMat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endMat = string(value["EndMat"].GetString());
        m_endMatHasBeenSet = true;
    }

    if (value.HasMember("StartOffset") && !value["StartOffset"].IsNull())
    {
        if (!value["StartOffset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.StartOffset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startOffset = string(value["StartOffset"].GetString());
        m_startOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndOffset") && !value["EndOffset"].IsNull())
    {
        if (!value["EndOffset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.EndOffset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endOffset = string(value["EndOffset"].GetString());
        m_endOffsetHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("TsVersion") && !value["TsVersion"].IsNull())
    {
        if (!value["TsVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.TsVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tsVersion = string(value["TsVersion"].GetString());
        m_tsVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SessionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_keyOrStartMatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyOrStartMat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyOrStartMat.c_str(), allocator).Move(), allocator);
    }

    if (m_endMatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndMat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endMat.c_str(), allocator).Move(), allocator);
    }

    if (m_startOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startOffset.c_str(), allocator).Move(), allocator);
    }

    if (m_endOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endOffset.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_tsVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tsVersion.c_str(), allocator).Move(), allocator);
    }

}


string SessionItem::GetCategory() const
{
    return m_category;
}

void SessionItem::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool SessionItem::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string SessionItem::GetKeyOrStartMat() const
{
    return m_keyOrStartMat;
}

void SessionItem::SetKeyOrStartMat(const string& _keyOrStartMat)
{
    m_keyOrStartMat = _keyOrStartMat;
    m_keyOrStartMatHasBeenSet = true;
}

bool SessionItem::KeyOrStartMatHasBeenSet() const
{
    return m_keyOrStartMatHasBeenSet;
}

string SessionItem::GetEndMat() const
{
    return m_endMat;
}

void SessionItem::SetEndMat(const string& _endMat)
{
    m_endMat = _endMat;
    m_endMatHasBeenSet = true;
}

bool SessionItem::EndMatHasBeenSet() const
{
    return m_endMatHasBeenSet;
}

string SessionItem::GetStartOffset() const
{
    return m_startOffset;
}

void SessionItem::SetStartOffset(const string& _startOffset)
{
    m_startOffset = _startOffset;
    m_startOffsetHasBeenSet = true;
}

bool SessionItem::StartOffsetHasBeenSet() const
{
    return m_startOffsetHasBeenSet;
}

string SessionItem::GetEndOffset() const
{
    return m_endOffset;
}

void SessionItem::SetEndOffset(const string& _endOffset)
{
    m_endOffset = _endOffset;
    m_endOffsetHasBeenSet = true;
}

bool SessionItem::EndOffsetHasBeenSet() const
{
    return m_endOffsetHasBeenSet;
}

string SessionItem::GetSource() const
{
    return m_source;
}

void SessionItem::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool SessionItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string SessionItem::GetTsVersion() const
{
    return m_tsVersion;
}

void SessionItem::SetTsVersion(const string& _tsVersion)
{
    m_tsVersion = _tsVersion;
    m_tsVersionHasBeenSet = true;
}

bool SessionItem::TsVersionHasBeenSet() const
{
    return m_tsVersionHasBeenSet;
}

