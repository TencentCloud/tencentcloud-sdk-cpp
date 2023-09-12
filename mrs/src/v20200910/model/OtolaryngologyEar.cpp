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

#include <tencentcloud/mrs/v20200910/model/OtolaryngologyEar.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

OtolaryngologyEar::OtolaryngologyEar() :
    m_textHasBeenSet(false),
    m_hearingHasBeenSet(false)
{
}

CoreInternalOutcome OtolaryngologyEar::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OtolaryngologyEar.Text` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_text.Deserialize(value["Text"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textHasBeenSet = true;
    }

    if (value.HasMember("Hearing") && !value["Hearing"].IsNull())
    {
        if (!value["Hearing"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OtolaryngologyEar.Hearing` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hearing.Deserialize(value["Hearing"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hearingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OtolaryngologyEar::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_text.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hearingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hearing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hearing.ToJsonObject(value[key.c_str()], allocator);
    }

}


KeyValueItem OtolaryngologyEar::GetText() const
{
    return m_text;
}

void OtolaryngologyEar::SetText(const KeyValueItem& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool OtolaryngologyEar::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

HearingItem OtolaryngologyEar::GetHearing() const
{
    return m_hearing;
}

void OtolaryngologyEar::SetHearing(const HearingItem& _hearing)
{
    m_hearing = _hearing;
    m_hearingHasBeenSet = true;
}

bool OtolaryngologyEar::HearingHasBeenSet() const
{
    return m_hearingHasBeenSet;
}

