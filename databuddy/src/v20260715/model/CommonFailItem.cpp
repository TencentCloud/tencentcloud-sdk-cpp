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

#include <tencentcloud/databuddy/v20260715/model/CommonFailItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

CommonFailItem::CommonFailItem() :
    m_itemHasBeenSet(false),
    m_failReasonHasBeenSet(false)
{
}

CoreInternalOutcome CommonFailItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Item") && !value["Item"].IsNull())
    {
        if (!value["Item"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonFailItem.Item` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_item = string(value["Item"].GetString());
        m_itemHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonFailItem.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonFailItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_item.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

}


string CommonFailItem::GetItem() const
{
    return m_item;
}

void CommonFailItem::SetItem(const string& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool CommonFailItem::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

string CommonFailItem::GetFailReason() const
{
    return m_failReason;
}

void CommonFailItem::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool CommonFailItem::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

