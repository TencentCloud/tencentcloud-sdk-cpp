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

#include <tencentcloud/iotexplorer/v20190423/model/TalkSTTConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkSTTConfig::TalkSTTConfig() :
    m_typeHasBeenSet(false),
    m_tRTCHasBeenSet(false)
{
}

CoreInternalOutcome TalkSTTConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkSTTConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TRTC") && !value["TRTC"].IsNull())
    {
        if (!value["TRTC"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkSTTConfig.TRTC` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tRTC.Deserialize(value["TRTC"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tRTCHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkSTTConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_tRTCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TRTC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tRTC.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TalkSTTConfig::GetType() const
{
    return m_type;
}

void TalkSTTConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TalkSTTConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

TalkSTTTRTC TalkSTTConfig::GetTRTC() const
{
    return m_tRTC;
}

void TalkSTTConfig::SetTRTC(const TalkSTTTRTC& _tRTC)
{
    m_tRTC = _tRTC;
    m_tRTCHasBeenSet = true;
}

bool TalkSTTConfig::TRTCHasBeenSet() const
{
    return m_tRTCHasBeenSet;
}

