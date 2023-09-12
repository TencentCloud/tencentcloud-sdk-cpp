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

#include <tencentcloud/mrs/v20200910/model/TextTypeListBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

TextTypeListBlock::TextTypeListBlock() :
    m_textTypeListHasBeenSet(false)
{
}

CoreInternalOutcome TextTypeListBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TextTypeList") && !value["TextTypeList"].IsNull())
    {
        if (!value["TextTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TextTypeListBlock.TextTypeList` is not array type"));

        const rapidjson::Value &tmpValue = value["TextTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TextType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_textTypeList.push_back(item);
        }
        m_textTypeListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextTypeListBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_textTypeList.begin(); itr != m_textTypeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<TextType> TextTypeListBlock::GetTextTypeList() const
{
    return m_textTypeList;
}

void TextTypeListBlock::SetTextTypeList(const vector<TextType>& _textTypeList)
{
    m_textTypeList = _textTypeList;
    m_textTypeListHasBeenSet = true;
}

bool TextTypeListBlock::TextTypeListHasBeenSet() const
{
    return m_textTypeListHasBeenSet;
}

