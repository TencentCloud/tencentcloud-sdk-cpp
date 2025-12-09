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

#include <tencentcloud/wedata/v20210820/model/TagVoteSum.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TagVoteSum::TagVoteSum() :
    m_tagIdHasBeenSet(false),
    m_tagNameHasBeenSet(false),
    m_voteSumHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagDescHasBeenSet(false),
    m_tagValueIdHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_tagIsDeletedHasBeenSet(false),
    m_tagValueIsDeletedHasBeenSet(false)
{
}

CoreInternalOutcome TagVoteSum::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagId") && !value["TagId"].IsNull())
    {
        if (!value["TagId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TagVoteSum.TagId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tagId = value["TagId"].GetInt64();
        m_tagIdHasBeenSet = true;
    }

    if (value.HasMember("TagName") && !value["TagName"].IsNull())
    {
        if (!value["TagName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagVoteSum.TagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagName = string(value["TagName"].GetString());
        m_tagNameHasBeenSet = true;
    }

    if (value.HasMember("VoteSum") && !value["VoteSum"].IsNull())
    {
        if (!value["VoteSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TagVoteSum.VoteSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_voteSum = value["VoteSum"].GetInt64();
        m_voteSumHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TagVoteSum.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TagDesc") && !value["TagDesc"].IsNull())
    {
        if (!value["TagDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagVoteSum.TagDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagDesc = string(value["TagDesc"].GetString());
        m_tagDescHasBeenSet = true;
    }

    if (value.HasMember("TagValueId") && !value["TagValueId"].IsNull())
    {
        if (!value["TagValueId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TagVoteSum.TagValueId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tagValueId = value["TagValueId"].GetInt64();
        m_tagValueIdHasBeenSet = true;
    }

    if (value.HasMember("TagValue") && !value["TagValue"].IsNull())
    {
        if (!value["TagValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagVoteSum.TagValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagValue = string(value["TagValue"].GetString());
        m_tagValueHasBeenSet = true;
    }

    if (value.HasMember("TagIsDeleted") && !value["TagIsDeleted"].IsNull())
    {
        if (!value["TagIsDeleted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TagVoteSum.TagIsDeleted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tagIsDeleted = value["TagIsDeleted"].GetBool();
        m_tagIsDeletedHasBeenSet = true;
    }

    if (value.HasMember("TagValueIsDeleted") && !value["TagValueIsDeleted"].IsNull())
    {
        if (!value["TagValueIsDeleted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TagVoteSum.TagValueIsDeleted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tagValueIsDeleted = value["TagValueIsDeleted"].GetBool();
        m_tagValueIsDeletedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TagVoteSum::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagId, allocator);
    }

    if (m_tagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagName.c_str(), allocator).Move(), allocator);
    }

    if (m_voteSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoteSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voteSum, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_tagDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagValueId, allocator);
    }

    if (m_tagValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagValue.c_str(), allocator).Move(), allocator);
    }

    if (m_tagIsDeletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIsDeleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagIsDeleted, allocator);
    }

    if (m_tagValueIsDeletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValueIsDeleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagValueIsDeleted, allocator);
    }

}


int64_t TagVoteSum::GetTagId() const
{
    return m_tagId;
}

void TagVoteSum::SetTagId(const int64_t& _tagId)
{
    m_tagId = _tagId;
    m_tagIdHasBeenSet = true;
}

bool TagVoteSum::TagIdHasBeenSet() const
{
    return m_tagIdHasBeenSet;
}

string TagVoteSum::GetTagName() const
{
    return m_tagName;
}

void TagVoteSum::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool TagVoteSum::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

int64_t TagVoteSum::GetVoteSum() const
{
    return m_voteSum;
}

void TagVoteSum::SetVoteSum(const int64_t& _voteSum)
{
    m_voteSum = _voteSum;
    m_voteSumHasBeenSet = true;
}

bool TagVoteSum::VoteSumHasBeenSet() const
{
    return m_voteSumHasBeenSet;
}

bool TagVoteSum::GetStatus() const
{
    return m_status;
}

void TagVoteSum::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TagVoteSum::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TagVoteSum::GetTagDesc() const
{
    return m_tagDesc;
}

void TagVoteSum::SetTagDesc(const string& _tagDesc)
{
    m_tagDesc = _tagDesc;
    m_tagDescHasBeenSet = true;
}

bool TagVoteSum::TagDescHasBeenSet() const
{
    return m_tagDescHasBeenSet;
}

int64_t TagVoteSum::GetTagValueId() const
{
    return m_tagValueId;
}

void TagVoteSum::SetTagValueId(const int64_t& _tagValueId)
{
    m_tagValueId = _tagValueId;
    m_tagValueIdHasBeenSet = true;
}

bool TagVoteSum::TagValueIdHasBeenSet() const
{
    return m_tagValueIdHasBeenSet;
}

string TagVoteSum::GetTagValue() const
{
    return m_tagValue;
}

void TagVoteSum::SetTagValue(const string& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool TagVoteSum::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}

bool TagVoteSum::GetTagIsDeleted() const
{
    return m_tagIsDeleted;
}

void TagVoteSum::SetTagIsDeleted(const bool& _tagIsDeleted)
{
    m_tagIsDeleted = _tagIsDeleted;
    m_tagIsDeletedHasBeenSet = true;
}

bool TagVoteSum::TagIsDeletedHasBeenSet() const
{
    return m_tagIsDeletedHasBeenSet;
}

bool TagVoteSum::GetTagValueIsDeleted() const
{
    return m_tagValueIsDeleted;
}

void TagVoteSum::SetTagValueIsDeleted(const bool& _tagValueIsDeleted)
{
    m_tagValueIsDeleted = _tagValueIsDeleted;
    m_tagValueIsDeletedHasBeenSet = true;
}

bool TagVoteSum::TagValueIsDeletedHasBeenSet() const
{
    return m_tagValueIsDeletedHasBeenSet;
}

