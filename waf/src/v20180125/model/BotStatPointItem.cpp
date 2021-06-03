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

#include <tencentcloud/waf/v20180125/model/BotStatPointItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace rapidjson;
using namespace std;

BotStatPointItem::BotStatPointItem() :
    m_timeStampHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_labelHasBeenSet(false)
{
}

CoreInternalOutcome BotStatPointItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeStamp") && !value["TimeStamp"].IsNull())
    {
        if (!value["TimeStamp"].IsString())
        {
            return CoreInternalOutcome(Error("response `BotStatPointItem.TimeStamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeStamp = string(value["TimeStamp"].GetString());
        m_timeStampHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Error("response `BotStatPointItem.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BotStatPointItem.Value` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetInt64();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Error("response `BotStatPointItem.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotStatPointItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_timeStampHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_timeStamp.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_labelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_label.c_str(), allocator).Move(), allocator);
    }

}


string BotStatPointItem::GetTimeStamp() const
{
    return m_timeStamp;
}

void BotStatPointItem::SetTimeStamp(const string& _timeStamp)
{
    m_timeStamp = _timeStamp;
    m_timeStampHasBeenSet = true;
}

bool BotStatPointItem::TimeStampHasBeenSet() const
{
    return m_timeStampHasBeenSet;
}

string BotStatPointItem::GetKey() const
{
    return m_key;
}

void BotStatPointItem::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool BotStatPointItem::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

int64_t BotStatPointItem::GetValue() const
{
    return m_value;
}

void BotStatPointItem::SetValue(const int64_t& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool BotStatPointItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string BotStatPointItem::GetLabel() const
{
    return m_label;
}

void BotStatPointItem::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool BotStatPointItem::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

