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
    m_tsVersionHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionNameHasBeenSet(false),
    m_sessionInUsedHasBeenSet(false),
    m_relatedRuleIDHasBeenSet(false)
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

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.SessionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = value["SessionId"].GetInt64();
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("SessionName") && !value["SessionName"].IsNull())
    {
        if (!value["SessionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.SessionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionName = string(value["SessionName"].GetString());
        m_sessionNameHasBeenSet = true;
    }

    if (value.HasMember("SessionInUsed") && !value["SessionInUsed"].IsNull())
    {
        if (!value["SessionInUsed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.SessionInUsed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sessionInUsed = value["SessionInUsed"].GetBool();
        m_sessionInUsedHasBeenSet = true;
    }

    if (value.HasMember("RelatedRuleID") && !value["RelatedRuleID"].IsNull())
    {
        if (!value["RelatedRuleID"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionItem.RelatedRuleID` is not array type"));

        const rapidjson::Value &tmpValue = value["RelatedRuleID"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_relatedRuleID.push_back((*itr).GetInt64());
        }
        m_relatedRuleIDHasBeenSet = true;
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

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionId, allocator);
    }

    if (m_sessionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionName.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionInUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionInUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionInUsed, allocator);
    }

    if (m_relatedRuleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedRuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_relatedRuleID.begin(); itr != m_relatedRuleID.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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

int64_t SessionItem::GetSessionId() const
{
    return m_sessionId;
}

void SessionItem::SetSessionId(const int64_t& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool SessionItem::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string SessionItem::GetSessionName() const
{
    return m_sessionName;
}

void SessionItem::SetSessionName(const string& _sessionName)
{
    m_sessionName = _sessionName;
    m_sessionNameHasBeenSet = true;
}

bool SessionItem::SessionNameHasBeenSet() const
{
    return m_sessionNameHasBeenSet;
}

bool SessionItem::GetSessionInUsed() const
{
    return m_sessionInUsed;
}

void SessionItem::SetSessionInUsed(const bool& _sessionInUsed)
{
    m_sessionInUsed = _sessionInUsed;
    m_sessionInUsedHasBeenSet = true;
}

bool SessionItem::SessionInUsedHasBeenSet() const
{
    return m_sessionInUsedHasBeenSet;
}

vector<int64_t> SessionItem::GetRelatedRuleID() const
{
    return m_relatedRuleID;
}

void SessionItem::SetRelatedRuleID(const vector<int64_t>& _relatedRuleID)
{
    m_relatedRuleID = _relatedRuleID;
    m_relatedRuleIDHasBeenSet = true;
}

bool SessionItem::RelatedRuleIDHasBeenSet() const
{
    return m_relatedRuleIDHasBeenSet;
}

