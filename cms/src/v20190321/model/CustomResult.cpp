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

#include <tencentcloud/cms/v20190321/model/CustomResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

CustomResult::CustomResult() :
    m_keywordsHasBeenSet(false),
    m_libIdHasBeenSet(false),
    m_libNameHasBeenSet(false)
{
}

CoreInternalOutcome CustomResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Error("response `CustomResult.Keywords` is not array type"));

        const Value &tmpValue = value["Keywords"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("LibId") && !value["LibId"].IsNull())
    {
        if (!value["LibId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CustomResult.LibId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libId = string(value["LibId"].GetString());
        m_libIdHasBeenSet = true;
    }

    if (value.HasMember("LibName") && !value["LibName"].IsNull())
    {
        if (!value["LibName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CustomResult.LibName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libName = string(value["LibName"].GetString());
        m_libNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_keywordsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_libIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LibId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_libId.c_str(), allocator).Move(), allocator);
    }

    if (m_libNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LibName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_libName.c_str(), allocator).Move(), allocator);
    }

}


vector<string> CustomResult::GetKeywords() const
{
    return m_keywords;
}

void CustomResult::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool CustomResult::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

string CustomResult::GetLibId() const
{
    return m_libId;
}

void CustomResult::SetLibId(const string& _libId)
{
    m_libId = _libId;
    m_libIdHasBeenSet = true;
}

bool CustomResult::LibIdHasBeenSet() const
{
    return m_libIdHasBeenSet;
}

string CustomResult::GetLibName() const
{
    return m_libName;
}

void CustomResult::SetLibName(const string& _libName)
{
    m_libName = _libName;
    m_libNameHasBeenSet = true;
}

bool CustomResult::LibNameHasBeenSet() const
{
    return m_libNameHasBeenSet;
}

