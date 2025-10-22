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

#include <tencentcloud/wedata/v20250806/model/BusinessMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

BusinessMetadata::BusinessMetadata() :
    m_tagNamesHasBeenSet(false)
{
}

CoreInternalOutcome BusinessMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagNames") && !value["TagNames"].IsNull())
    {
        if (!value["TagNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BusinessMetadata.TagNames` is not array type"));

        const rapidjson::Value &tmpValue = value["TagNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagNames.push_back((*itr).GetString());
        }
        m_tagNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BusinessMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagNames.begin(); itr != m_tagNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> BusinessMetadata::GetTagNames() const
{
    return m_tagNames;
}

void BusinessMetadata::SetTagNames(const vector<string>& _tagNames)
{
    m_tagNames = _tagNames;
    m_tagNamesHasBeenSet = true;
}

bool BusinessMetadata::TagNamesHasBeenSet() const
{
    return m_tagNamesHasBeenSet;
}

