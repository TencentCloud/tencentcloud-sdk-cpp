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

#include <tencentcloud/ioa/v20220601/model/OptionsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

OptionsItem::OptionsItem() :
    m_valueChHasBeenSet(false),
    m_valueEnHasBeenSet(false),
    m_optionKeyHasBeenSet(false)
{
}

CoreInternalOutcome OptionsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ValueCh") && !value["ValueCh"].IsNull())
    {
        if (!value["ValueCh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptionsItem.ValueCh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueCh = string(value["ValueCh"].GetString());
        m_valueChHasBeenSet = true;
    }

    if (value.HasMember("ValueEn") && !value["ValueEn"].IsNull())
    {
        if (!value["ValueEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptionsItem.ValueEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueEn = string(value["ValueEn"].GetString());
        m_valueEnHasBeenSet = true;
    }

    if (value.HasMember("OptionKey") && !value["OptionKey"].IsNull())
    {
        if (!value["OptionKey"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OptionsItem.OptionKey` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_optionKey = value["OptionKey"].GetInt64();
        m_optionKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OptionsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_valueChHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueCh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueCh.c_str(), allocator).Move(), allocator);
    }

    if (m_valueEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueEn.c_str(), allocator).Move(), allocator);
    }

    if (m_optionKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_optionKey, allocator);
    }

}


string OptionsItem::GetValueCh() const
{
    return m_valueCh;
}

void OptionsItem::SetValueCh(const string& _valueCh)
{
    m_valueCh = _valueCh;
    m_valueChHasBeenSet = true;
}

bool OptionsItem::ValueChHasBeenSet() const
{
    return m_valueChHasBeenSet;
}

string OptionsItem::GetValueEn() const
{
    return m_valueEn;
}

void OptionsItem::SetValueEn(const string& _valueEn)
{
    m_valueEn = _valueEn;
    m_valueEnHasBeenSet = true;
}

bool OptionsItem::ValueEnHasBeenSet() const
{
    return m_valueEnHasBeenSet;
}

int64_t OptionsItem::GetOptionKey() const
{
    return m_optionKey;
}

void OptionsItem::SetOptionKey(const int64_t& _optionKey)
{
    m_optionKey = _optionKey;
    m_optionKeyHasBeenSet = true;
}

bool OptionsItem::OptionKeyHasBeenSet() const
{
    return m_optionKeyHasBeenSet;
}

