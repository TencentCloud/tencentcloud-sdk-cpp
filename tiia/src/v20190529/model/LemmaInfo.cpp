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

#include <tencentcloud/tiia/v20190529/model/LemmaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

LemmaInfo::LemmaInfo() :
    m_lemmaTitleHasBeenSet(false),
    m_lemmaAbstractHasBeenSet(false),
    m_tagHasBeenSet(false)
{
}

CoreInternalOutcome LemmaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LemmaTitle") && !value["LemmaTitle"].IsNull())
    {
        if (!value["LemmaTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LemmaInfo.LemmaTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lemmaTitle = string(value["LemmaTitle"].GetString());
        m_lemmaTitleHasBeenSet = true;
    }

    if (value.HasMember("LemmaAbstract") && !value["LemmaAbstract"].IsNull())
    {
        if (!value["LemmaAbstract"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LemmaInfo.LemmaAbstract` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lemmaAbstract = string(value["LemmaAbstract"].GetString());
        m_lemmaAbstractHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LemmaInfo.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LemmaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lemmaTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LemmaTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lemmaTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_lemmaAbstractHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LemmaAbstract";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lemmaAbstract.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

}


string LemmaInfo::GetLemmaTitle() const
{
    return m_lemmaTitle;
}

void LemmaInfo::SetLemmaTitle(const string& _lemmaTitle)
{
    m_lemmaTitle = _lemmaTitle;
    m_lemmaTitleHasBeenSet = true;
}

bool LemmaInfo::LemmaTitleHasBeenSet() const
{
    return m_lemmaTitleHasBeenSet;
}

string LemmaInfo::GetLemmaAbstract() const
{
    return m_lemmaAbstract;
}

void LemmaInfo::SetLemmaAbstract(const string& _lemmaAbstract)
{
    m_lemmaAbstract = _lemmaAbstract;
    m_lemmaAbstractHasBeenSet = true;
}

bool LemmaInfo::LemmaAbstractHasBeenSet() const
{
    return m_lemmaAbstractHasBeenSet;
}

string LemmaInfo::GetTag() const
{
    return m_tag;
}

void LemmaInfo::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool LemmaInfo::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

