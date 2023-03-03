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

#include <tencentcloud/trtc/v20190722/model/McuPassThrough.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuPassThrough::McuPassThrough() :
    m_payloadContentHasBeenSet(false),
    m_payloadTypeHasBeenSet(false),
    m_payloadUuidHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_followIdrHasBeenSet(false)
{
}

CoreInternalOutcome McuPassThrough::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayloadContent") && !value["PayloadContent"].IsNull())
    {
        if (!value["PayloadContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuPassThrough.PayloadContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payloadContent = string(value["PayloadContent"].GetString());
        m_payloadContentHasBeenSet = true;
    }

    if (value.HasMember("PayloadType") && !value["PayloadType"].IsNull())
    {
        if (!value["PayloadType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuPassThrough.PayloadType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payloadType = value["PayloadType"].GetUint64();
        m_payloadTypeHasBeenSet = true;
    }

    if (value.HasMember("PayloadUuid") && !value["PayloadUuid"].IsNull())
    {
        if (!value["PayloadUuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuPassThrough.PayloadUuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payloadUuid = string(value["PayloadUuid"].GetString());
        m_payloadUuidHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuPassThrough.Interval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetUint64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("FollowIdr") && !value["FollowIdr"].IsNull())
    {
        if (!value["FollowIdr"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuPassThrough.FollowIdr` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_followIdr = value["FollowIdr"].GetUint64();
        m_followIdrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuPassThrough::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payloadContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayloadContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payloadContent.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayloadType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payloadType, allocator);
    }

    if (m_payloadUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayloadUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payloadUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_followIdrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowIdr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_followIdr, allocator);
    }

}


string McuPassThrough::GetPayloadContent() const
{
    return m_payloadContent;
}

void McuPassThrough::SetPayloadContent(const string& _payloadContent)
{
    m_payloadContent = _payloadContent;
    m_payloadContentHasBeenSet = true;
}

bool McuPassThrough::PayloadContentHasBeenSet() const
{
    return m_payloadContentHasBeenSet;
}

uint64_t McuPassThrough::GetPayloadType() const
{
    return m_payloadType;
}

void McuPassThrough::SetPayloadType(const uint64_t& _payloadType)
{
    m_payloadType = _payloadType;
    m_payloadTypeHasBeenSet = true;
}

bool McuPassThrough::PayloadTypeHasBeenSet() const
{
    return m_payloadTypeHasBeenSet;
}

string McuPassThrough::GetPayloadUuid() const
{
    return m_payloadUuid;
}

void McuPassThrough::SetPayloadUuid(const string& _payloadUuid)
{
    m_payloadUuid = _payloadUuid;
    m_payloadUuidHasBeenSet = true;
}

bool McuPassThrough::PayloadUuidHasBeenSet() const
{
    return m_payloadUuidHasBeenSet;
}

uint64_t McuPassThrough::GetInterval() const
{
    return m_interval;
}

void McuPassThrough::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool McuPassThrough::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

uint64_t McuPassThrough::GetFollowIdr() const
{
    return m_followIdr;
}

void McuPassThrough::SetFollowIdr(const uint64_t& _followIdr)
{
    m_followIdr = _followIdr;
    m_followIdrHasBeenSet = true;
}

bool McuPassThrough::FollowIdrHasBeenSet() const
{
    return m_followIdrHasBeenSet;
}

