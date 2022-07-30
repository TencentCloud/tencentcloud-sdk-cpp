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

#include <tencentcloud/pts/v20210728/model/AlertChannel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

AlertChannel::AlertChannel() :
    m_noticeIdHasBeenSet(false),
    m_aMPConsumerIdHasBeenSet(false)
{
}

CoreInternalOutcome AlertChannel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoticeId") && !value["NoticeId"].IsNull())
    {
        if (!value["NoticeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertChannel.NoticeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noticeId = string(value["NoticeId"].GetString());
        m_noticeIdHasBeenSet = true;
    }

    if (value.HasMember("AMPConsumerId") && !value["AMPConsumerId"].IsNull())
    {
        if (!value["AMPConsumerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertChannel.AMPConsumerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aMPConsumerId = string(value["AMPConsumerId"].GetString());
        m_aMPConsumerIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlertChannel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_noticeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noticeId.c_str(), allocator).Move(), allocator);
    }

    if (m_aMPConsumerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AMPConsumerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aMPConsumerId.c_str(), allocator).Move(), allocator);
    }

}


string AlertChannel::GetNoticeId() const
{
    return m_noticeId;
}

void AlertChannel::SetNoticeId(const string& _noticeId)
{
    m_noticeId = _noticeId;
    m_noticeIdHasBeenSet = true;
}

bool AlertChannel::NoticeIdHasBeenSet() const
{
    return m_noticeIdHasBeenSet;
}

string AlertChannel::GetAMPConsumerId() const
{
    return m_aMPConsumerId;
}

void AlertChannel::SetAMPConsumerId(const string& _aMPConsumerId)
{
    m_aMPConsumerId = _aMPConsumerId;
    m_aMPConsumerIdHasBeenSet = true;
}

bool AlertChannel::AMPConsumerIdHasBeenSet() const
{
    return m_aMPConsumerIdHasBeenSet;
}

