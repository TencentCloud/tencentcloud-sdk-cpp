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

#include <tencentcloud/databuddy/v20260715/model/ScheduleBizEnumBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ScheduleBizEnumBrief::ScheduleBizEnumBrief() :
    m_labelKeyHasBeenSet(false),
    m_labelValueHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome ScheduleBizEnumBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelKey") && !value["LabelKey"].IsNull())
    {
        if (!value["LabelKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleBizEnumBrief.LabelKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelKey = string(value["LabelKey"].GetString());
        m_labelKeyHasBeenSet = true;
    }

    if (value.HasMember("LabelValue") && !value["LabelValue"].IsNull())
    {
        if (!value["LabelValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleBizEnumBrief.LabelValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelValue = string(value["LabelValue"].GetString());
        m_labelValueHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleBizEnumBrief.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScheduleBizEnumBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelKey.c_str(), allocator).Move(), allocator);
    }

    if (m_labelValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelValue.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string ScheduleBizEnumBrief::GetLabelKey() const
{
    return m_labelKey;
}

void ScheduleBizEnumBrief::SetLabelKey(const string& _labelKey)
{
    m_labelKey = _labelKey;
    m_labelKeyHasBeenSet = true;
}

bool ScheduleBizEnumBrief::LabelKeyHasBeenSet() const
{
    return m_labelKeyHasBeenSet;
}

string ScheduleBizEnumBrief::GetLabelValue() const
{
    return m_labelValue;
}

void ScheduleBizEnumBrief::SetLabelValue(const string& _labelValue)
{
    m_labelValue = _labelValue;
    m_labelValueHasBeenSet = true;
}

bool ScheduleBizEnumBrief::LabelValueHasBeenSet() const
{
    return m_labelValueHasBeenSet;
}

int64_t ScheduleBizEnumBrief::GetCount() const
{
    return m_count;
}

void ScheduleBizEnumBrief::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ScheduleBizEnumBrief::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

