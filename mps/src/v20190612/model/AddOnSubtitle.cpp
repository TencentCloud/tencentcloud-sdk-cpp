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

#include <tencentcloud/mps/v20190612/model/AddOnSubtitle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AddOnSubtitle::AddOnSubtitle() :
    m_typeHasBeenSet(false),
    m_subtitleHasBeenSet(false),
    m_subtitleNameHasBeenSet(false)
{
}

CoreInternalOutcome AddOnSubtitle::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnSubtitle.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Subtitle") && !value["Subtitle"].IsNull())
    {
        if (!value["Subtitle"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnSubtitle.Subtitle` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subtitle.Deserialize(value["Subtitle"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subtitleHasBeenSet = true;
    }

    if (value.HasMember("SubtitleName") && !value["SubtitleName"].IsNull())
    {
        if (!value["SubtitleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnSubtitle.SubtitleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleName = string(value["SubtitleName"].GetString());
        m_subtitleNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddOnSubtitle::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subtitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitle.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subtitleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitleName.c_str(), allocator).Move(), allocator);
    }

}


string AddOnSubtitle::GetType() const
{
    return m_type;
}

void AddOnSubtitle::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AddOnSubtitle::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

MediaInputInfo AddOnSubtitle::GetSubtitle() const
{
    return m_subtitle;
}

void AddOnSubtitle::SetSubtitle(const MediaInputInfo& _subtitle)
{
    m_subtitle = _subtitle;
    m_subtitleHasBeenSet = true;
}

bool AddOnSubtitle::SubtitleHasBeenSet() const
{
    return m_subtitleHasBeenSet;
}

string AddOnSubtitle::GetSubtitleName() const
{
    return m_subtitleName;
}

void AddOnSubtitle::SetSubtitleName(const string& _subtitleName)
{
    m_subtitleName = _subtitleName;
    m_subtitleNameHasBeenSet = true;
}

bool AddOnSubtitle::SubtitleNameHasBeenSet() const
{
    return m_subtitleNameHasBeenSet;
}

