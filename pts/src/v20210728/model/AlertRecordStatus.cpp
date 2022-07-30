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

#include <tencentcloud/pts/v20210728/model/AlertRecordStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

AlertRecordStatus::AlertRecordStatus() :
    m_abortJobHasBeenSet(false),
    m_sendNoticeHasBeenSet(false)
{
}

CoreInternalOutcome AlertRecordStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AbortJob") && !value["AbortJob"].IsNull())
    {
        if (!value["AbortJob"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertRecordStatus.AbortJob` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_abortJob = value["AbortJob"].GetUint64();
        m_abortJobHasBeenSet = true;
    }

    if (value.HasMember("SendNotice") && !value["SendNotice"].IsNull())
    {
        if (!value["SendNotice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertRecordStatus.SendNotice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sendNotice = value["SendNotice"].GetUint64();
        m_sendNoticeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlertRecordStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_abortJobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbortJob";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abortJob, allocator);
    }

    if (m_sendNoticeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendNotice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendNotice, allocator);
    }

}


uint64_t AlertRecordStatus::GetAbortJob() const
{
    return m_abortJob;
}

void AlertRecordStatus::SetAbortJob(const uint64_t& _abortJob)
{
    m_abortJob = _abortJob;
    m_abortJobHasBeenSet = true;
}

bool AlertRecordStatus::AbortJobHasBeenSet() const
{
    return m_abortJobHasBeenSet;
}

uint64_t AlertRecordStatus::GetSendNotice() const
{
    return m_sendNotice;
}

void AlertRecordStatus::SetSendNotice(const uint64_t& _sendNotice)
{
    m_sendNotice = _sendNotice;
    m_sendNoticeHasBeenSet = true;
}

bool AlertRecordStatus::SendNoticeHasBeenSet() const
{
    return m_sendNoticeHasBeenSet;
}

