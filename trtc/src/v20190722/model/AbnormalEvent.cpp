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

#include <tencentcloud/trtc/v20190722/model/AbnormalEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

AbnormalEvent::AbnormalEvent() :
    m_abnormalEventIdHasBeenSet(false),
    m_peerIdHasBeenSet(false)
{
}

CoreInternalOutcome AbnormalEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AbnormalEventId") && !value["AbnormalEventId"].IsNull())
    {
        if (!value["AbnormalEventId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalEvent.AbnormalEventId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalEventId = value["AbnormalEventId"].GetUint64();
        m_abnormalEventIdHasBeenSet = true;
    }

    if (value.HasMember("PeerId") && !value["PeerId"].IsNull())
    {
        if (!value["PeerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalEvent.PeerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerId = string(value["PeerId"].GetString());
        m_peerIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AbnormalEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_abnormalEventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalEventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormalEventId, allocator);
    }

    if (m_peerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AbnormalEvent::GetAbnormalEventId() const
{
    return m_abnormalEventId;
}

void AbnormalEvent::SetAbnormalEventId(const uint64_t& _abnormalEventId)
{
    m_abnormalEventId = _abnormalEventId;
    m_abnormalEventIdHasBeenSet = true;
}

bool AbnormalEvent::AbnormalEventIdHasBeenSet() const
{
    return m_abnormalEventIdHasBeenSet;
}

string AbnormalEvent::GetPeerId() const
{
    return m_peerId;
}

void AbnormalEvent::SetPeerId(const string& _peerId)
{
    m_peerId = _peerId;
    m_peerIdHasBeenSet = true;
}

bool AbnormalEvent::PeerIdHasBeenSet() const
{
    return m_peerIdHasBeenSet;
}

