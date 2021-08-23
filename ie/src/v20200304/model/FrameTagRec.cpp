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

#include <tencentcloud/ie/v20200304/model/FrameTagRec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

FrameTagRec::FrameTagRec() :
    m_tagTypeHasBeenSet(false),
    m_gameExtendTypeHasBeenSet(false)
{
}

CoreInternalOutcome FrameTagRec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagType") && !value["TagType"].IsNull())
    {
        if (!value["TagType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrameTagRec.TagType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagType = string(value["TagType"].GetString());
        m_tagTypeHasBeenSet = true;
    }

    if (value.HasMember("GameExtendType") && !value["GameExtendType"].IsNull())
    {
        if (!value["GameExtendType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrameTagRec.GameExtendType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gameExtendType = string(value["GameExtendType"].GetString());
        m_gameExtendTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FrameTagRec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagType.c_str(), allocator).Move(), allocator);
    }

    if (m_gameExtendTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameExtendType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gameExtendType.c_str(), allocator).Move(), allocator);
    }

}


string FrameTagRec::GetTagType() const
{
    return m_tagType;
}

void FrameTagRec::SetTagType(const string& _tagType)
{
    m_tagType = _tagType;
    m_tagTypeHasBeenSet = true;
}

bool FrameTagRec::TagTypeHasBeenSet() const
{
    return m_tagTypeHasBeenSet;
}

string FrameTagRec::GetGameExtendType() const
{
    return m_gameExtendType;
}

void FrameTagRec::SetGameExtendType(const string& _gameExtendType)
{
    m_gameExtendType = _gameExtendType;
    m_gameExtendTypeHasBeenSet = true;
}

bool FrameTagRec::GameExtendTypeHasBeenSet() const
{
    return m_gameExtendTypeHasBeenSet;
}

