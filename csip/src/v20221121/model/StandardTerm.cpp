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

#include <tencentcloud/csip/v20221121/model/StandardTerm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

StandardTerm::StandardTerm() :
    m_tagHasBeenSet(false),
    m_termsHasBeenSet(false)
{
}

CoreInternalOutcome StandardTerm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardTerm.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Terms") && !value["Terms"].IsNull())
    {
        if (!value["Terms"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StandardTerm.Terms` is not array type"));

        const rapidjson::Value &tmpValue = value["Terms"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_terms.push_back((*itr).GetString());
        }
        m_termsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StandardTerm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_termsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Terms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_terms.begin(); itr != m_terms.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string StandardTerm::GetTag() const
{
    return m_tag;
}

void StandardTerm::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool StandardTerm::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

vector<string> StandardTerm::GetTerms() const
{
    return m_terms;
}

void StandardTerm::SetTerms(const vector<string>& _terms)
{
    m_terms = _terms;
    m_termsHasBeenSet = true;
}

bool StandardTerm::TermsHasBeenSet() const
{
    return m_termsHasBeenSet;
}

