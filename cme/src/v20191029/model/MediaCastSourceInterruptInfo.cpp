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

#include <tencentcloud/cme/v20191029/model/MediaCastSourceInterruptInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MediaCastSourceInterruptInfo::MediaCastSourceInterruptInfo() :
    m_sourceInfoHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome MediaCastSourceInterruptInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceInfo") && !value["SourceInfo"].IsNull())
    {
        if (!value["SourceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastSourceInterruptInfo.SourceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceInfo.Deserialize(value["SourceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceInfoHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastSourceInterruptInfo.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCastSourceInterruptInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


MediaCastSourceInfo MediaCastSourceInterruptInfo::GetSourceInfo() const
{
    return m_sourceInfo;
}

void MediaCastSourceInterruptInfo::SetSourceInfo(const MediaCastSourceInfo& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool MediaCastSourceInterruptInfo::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}

string MediaCastSourceInterruptInfo::GetReason() const
{
    return m_reason;
}

void MediaCastSourceInterruptInfo::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool MediaCastSourceInterruptInfo::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

