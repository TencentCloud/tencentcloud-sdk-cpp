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

#include <tencentcloud/cms/v20190321/model/OCRDetect.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

OCRDetect::OCRDetect() :
    m_itemHasBeenSet(false),
    m_textInfoHasBeenSet(false)
{
}

CoreInternalOutcome OCRDetect::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Item") && !value["Item"].IsNull())
    {
        if (!value["Item"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OCRDetect.Item` is not array type"));

        const rapidjson::Value &tmpValue = value["Item"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OCRItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_item.push_back(item);
        }
        m_itemHasBeenSet = true;
    }

    if (value.HasMember("TextInfo") && !value["TextInfo"].IsNull())
    {
        if (!value["TextInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OCRDetect.TextInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_textInfo = string(value["TextInfo"].GetString());
        m_textInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OCRDetect::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_item.begin(); itr != m_item.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_textInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_textInfo.c_str(), allocator).Move(), allocator);
    }

}


vector<OCRItem> OCRDetect::GetItem() const
{
    return m_item;
}

void OCRDetect::SetItem(const vector<OCRItem>& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool OCRDetect::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

string OCRDetect::GetTextInfo() const
{
    return m_textInfo;
}

void OCRDetect::SetTextInfo(const string& _textInfo)
{
    m_textInfo = _textInfo;
    m_textInfoHasBeenSet = true;
}

bool OCRDetect::TextInfoHasBeenSet() const
{
    return m_textInfoHasBeenSet;
}

