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

#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTaskSubtitleInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ComplexAdaptiveDynamicStreamingTaskSubtitleInput::ComplexAdaptiveDynamicStreamingTaskSubtitleInput() :
    m_idHasBeenSet(false),
    m_defaultHasBeenSet(false)
{
}

CoreInternalOutcome ComplexAdaptiveDynamicStreamingTaskSubtitleInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplexAdaptiveDynamicStreamingTaskSubtitleInput.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Default") && !value["Default"].IsNull())
    {
        if (!value["Default"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplexAdaptiveDynamicStreamingTaskSubtitleInput.Default` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_default = string(value["Default"].GetString());
        m_defaultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplexAdaptiveDynamicStreamingTaskSubtitleInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Default";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_default.c_str(), allocator).Move(), allocator);
    }

}


string ComplexAdaptiveDynamicStreamingTaskSubtitleInput::GetId() const
{
    return m_id;
}

void ComplexAdaptiveDynamicStreamingTaskSubtitleInput::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ComplexAdaptiveDynamicStreamingTaskSubtitleInput::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ComplexAdaptiveDynamicStreamingTaskSubtitleInput::GetDefault() const
{
    return m_default;
}

void ComplexAdaptiveDynamicStreamingTaskSubtitleInput::SetDefault(const string& _default)
{
    m_default = _default;
    m_defaultHasBeenSet = true;
}

bool ComplexAdaptiveDynamicStreamingTaskSubtitleInput::DefaultHasBeenSet() const
{
    return m_defaultHasBeenSet;
}

