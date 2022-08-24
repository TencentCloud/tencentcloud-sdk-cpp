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

#include <tencentcloud/cme/v20191029/model/MediaCastDestinationInterruptInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MediaCastDestinationInterruptInfo::MediaCastDestinationInterruptInfo() :
    m_destinationInfoHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome MediaCastDestinationInterruptInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DestinationInfo") && !value["DestinationInfo"].IsNull())
    {
        if (!value["DestinationInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastDestinationInterruptInfo.DestinationInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_destinationInfo.Deserialize(value["DestinationInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_destinationInfoHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastDestinationInterruptInfo.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCastDestinationInterruptInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_destinationInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_destinationInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


MediaCastDestinationInfo MediaCastDestinationInterruptInfo::GetDestinationInfo() const
{
    return m_destinationInfo;
}

void MediaCastDestinationInterruptInfo::SetDestinationInfo(const MediaCastDestinationInfo& _destinationInfo)
{
    m_destinationInfo = _destinationInfo;
    m_destinationInfoHasBeenSet = true;
}

bool MediaCastDestinationInterruptInfo::DestinationInfoHasBeenSet() const
{
    return m_destinationInfoHasBeenSet;
}

string MediaCastDestinationInterruptInfo::GetReason() const
{
    return m_reason;
}

void MediaCastDestinationInterruptInfo::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool MediaCastDestinationInterruptInfo::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

