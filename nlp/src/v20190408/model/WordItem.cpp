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

#include <tencentcloud/nlp/v20190408/model/WordItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

WordItem::WordItem() :
    m_textHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_posHasBeenSet(false)
{
}

CoreInternalOutcome WordItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Error("response `WordItem.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `WordItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Pos") && !value["Pos"].IsNull())
    {
        if (!value["Pos"].IsString())
        {
            return CoreInternalOutcome(Error("response `WordItem.Pos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pos = string(value["Pos"].GetString());
        m_posHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WordItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_posHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pos.c_str(), allocator).Move(), allocator);
    }

}


string WordItem::GetText() const
{
    return m_text;
}

void WordItem::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool WordItem::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string WordItem::GetCreateTime() const
{
    return m_createTime;
}

void WordItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WordItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WordItem::GetPos() const
{
    return m_pos;
}

void WordItem::SetPos(const string& _pos)
{
    m_pos = _pos;
    m_posHasBeenSet = true;
}

bool WordItem::PosHasBeenSet() const
{
    return m_posHasBeenSet;
}

