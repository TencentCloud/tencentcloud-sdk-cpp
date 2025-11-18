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

#include <tencentcloud/ess/v20201111/model/ReferenceExcerpt.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ReferenceExcerpt::ReferenceExcerpt() :
    m_contentHasBeenSet(false),
    m_positionHasBeenSet(false)
{
}

CoreInternalOutcome ReferenceExcerpt::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferenceExcerpt.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReferenceExcerpt.Position` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_position.Deserialize(value["Position"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_positionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReferenceExcerpt::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_position.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ReferenceExcerpt::GetContent() const
{
    return m_content;
}

void ReferenceExcerpt::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ReferenceExcerpt::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

PositionInfo ReferenceExcerpt::GetPosition() const
{
    return m_position;
}

void ReferenceExcerpt::SetPosition(const PositionInfo& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool ReferenceExcerpt::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

