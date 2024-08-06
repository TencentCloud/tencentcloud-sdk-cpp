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

#include <tencentcloud/wedata/v20210820/model/TagVoteSum.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TagVoteSum::TagVoteSum() :
    m_tagIdHasBeenSet(false),
    m_voteSumHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagNameHasBeenSet(false)
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

    if (value.HasMember("TagName") && !value["TagName"].IsNull())
    {
        if (!value["TagName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagVoteSum.TagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagName = string(value["TagName"].GetString());
        m_tagNameHasBeenSet = true;
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

    if (m_tagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagName.c_str(), allocator).Move(), allocator);
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

