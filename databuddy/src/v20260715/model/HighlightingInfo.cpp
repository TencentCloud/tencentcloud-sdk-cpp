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

#include <tencentcloud/databuddy/v20260715/model/HighlightingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

HighlightingInfo::HighlightingInfo() :
    m_assetNameHasBeenSet(false),
    m_fullNameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_codeFragmentsHasBeenSet(false),
    m_textFragmentsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_tagFragmentsHasBeenSet(false),
    m_aliasFragmentsHasBeenSet(false)
{
}

CoreInternalOutcome HighlightingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightingInfo.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("FullName") && !value["FullName"].IsNull())
    {
        if (!value["FullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightingInfo.FullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullName = string(value["FullName"].GetString());
        m_fullNameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightingInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("CodeFragments") && !value["CodeFragments"].IsNull())
    {
        if (!value["CodeFragments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HighlightingInfo.CodeFragments` is not array type"));

        const rapidjson::Value &tmpValue = value["CodeFragments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Fragment item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_codeFragments.push_back(item);
        }
        m_codeFragmentsHasBeenSet = true;
    }

    if (value.HasMember("TextFragments") && !value["TextFragments"].IsNull())
    {
        if (!value["TextFragments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HighlightingInfo.TextFragments` is not array type"));

        const rapidjson::Value &tmpValue = value["TextFragments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Fragment item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_textFragments.push_back(item);
        }
        m_textFragmentsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HighlightingInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("TagFragments") && !value["TagFragments"].IsNull())
    {
        if (!value["TagFragments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HighlightingInfo.TagFragments` is not array type"));

        const rapidjson::Value &tmpValue = value["TagFragments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagFragments.push_back(item);
        }
        m_tagFragmentsHasBeenSet = true;
    }

    if (value.HasMember("AliasFragments") && !value["AliasFragments"].IsNull())
    {
        if (!value["AliasFragments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HighlightingInfo.AliasFragments` is not array type"));

        const rapidjson::Value &tmpValue = value["AliasFragments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_aliasFragments.push_back((*itr).GetString());
        }
        m_aliasFragmentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HighlightingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_fullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullName.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_codeFragmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeFragments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_codeFragments.begin(); itr != m_codeFragments.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_textFragmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextFragments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_textFragments.begin(); itr != m_textFragments.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagFragmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagFragments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagFragments.begin(); itr != m_tagFragments.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aliasFragmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasFragments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aliasFragments.begin(); itr != m_aliasFragments.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string HighlightingInfo::GetAssetName() const
{
    return m_assetName;
}

void HighlightingInfo::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool HighlightingInfo::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string HighlightingInfo::GetFullName() const
{
    return m_fullName;
}

void HighlightingInfo::SetFullName(const string& _fullName)
{
    m_fullName = _fullName;
    m_fullNameHasBeenSet = true;
}

bool HighlightingInfo::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

string HighlightingInfo::GetComment() const
{
    return m_comment;
}

void HighlightingInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool HighlightingInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

vector<Fragment> HighlightingInfo::GetCodeFragments() const
{
    return m_codeFragments;
}

void HighlightingInfo::SetCodeFragments(const vector<Fragment>& _codeFragments)
{
    m_codeFragments = _codeFragments;
    m_codeFragmentsHasBeenSet = true;
}

bool HighlightingInfo::CodeFragmentsHasBeenSet() const
{
    return m_codeFragmentsHasBeenSet;
}

vector<Fragment> HighlightingInfo::GetTextFragments() const
{
    return m_textFragments;
}

void HighlightingInfo::SetTextFragments(const vector<Fragment>& _textFragments)
{
    m_textFragments = _textFragments;
    m_textFragmentsHasBeenSet = true;
}

bool HighlightingInfo::TextFragmentsHasBeenSet() const
{
    return m_textFragmentsHasBeenSet;
}

vector<TagInfo> HighlightingInfo::GetTags() const
{
    return m_tags;
}

void HighlightingInfo::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool HighlightingInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<TagInfo> HighlightingInfo::GetTagFragments() const
{
    return m_tagFragments;
}

void HighlightingInfo::SetTagFragments(const vector<TagInfo>& _tagFragments)
{
    m_tagFragments = _tagFragments;
    m_tagFragmentsHasBeenSet = true;
}

bool HighlightingInfo::TagFragmentsHasBeenSet() const
{
    return m_tagFragmentsHasBeenSet;
}

vector<string> HighlightingInfo::GetAliasFragments() const
{
    return m_aliasFragments;
}

void HighlightingInfo::SetAliasFragments(const vector<string>& _aliasFragments)
{
    m_aliasFragments = _aliasFragments;
    m_aliasFragmentsHasBeenSet = true;
}

bool HighlightingInfo::AliasFragmentsHasBeenSet() const
{
    return m_aliasFragmentsHasBeenSet;
}

