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

#include <tencentcloud/databuddy/v20260715/model/Highlighting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

Highlighting::Highlighting() :
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_textFragmentsHasBeenSet(false)
{
}

CoreInternalOutcome Highlighting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Highlighting.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Highlighting.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("TextFragments") && !value["TextFragments"].IsNull())
    {
        if (!value["TextFragments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Highlighting.TextFragments` is not array type"));

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


    return CoreInternalOutcome(true);
}

void Highlighting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
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

}


string Highlighting::GetName() const
{
    return m_name;
}

void Highlighting::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Highlighting::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Highlighting::GetComment() const
{
    return m_comment;
}

void Highlighting::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool Highlighting::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

vector<Fragment> Highlighting::GetTextFragments() const
{
    return m_textFragments;
}

void Highlighting::SetTextFragments(const vector<Fragment>& _textFragments)
{
    m_textFragments = _textFragments;
    m_textFragmentsHasBeenSet = true;
}

bool Highlighting::TextFragmentsHasBeenSet() const
{
    return m_textFragmentsHasBeenSet;
}

