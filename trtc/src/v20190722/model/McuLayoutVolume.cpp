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

#include <tencentcloud/trtc/v20190722/model/McuLayoutVolume.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuLayoutVolume::McuLayoutVolume() :
    m_appDataHasBeenSet(false),
    m_payloadTypeHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_followIdrHasBeenSet(false)
{
}

CoreInternalOutcome McuLayoutVolume::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppData") && !value["AppData"].IsNull())
    {
        if (!value["AppData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayoutVolume.AppData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appData = string(value["AppData"].GetString());
        m_appDataHasBeenSet = true;
    }

    if (value.HasMember("PayloadType") && !value["PayloadType"].IsNull())
    {
        if (!value["PayloadType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayoutVolume.PayloadType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payloadType = value["PayloadType"].GetUint64();
        m_payloadTypeHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayoutVolume.Interval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetUint64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("FollowIdr") && !value["FollowIdr"].IsNull())
    {
        if (!value["FollowIdr"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayoutVolume.FollowIdr` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_followIdr = value["FollowIdr"].GetUint64();
        m_followIdrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuLayoutVolume::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appData.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayloadType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payloadType, allocator);
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


string McuLayoutVolume::GetAppData() const
{
    return m_appData;
}

void McuLayoutVolume::SetAppData(const string& _appData)
{
    m_appData = _appData;
    m_appDataHasBeenSet = true;
}

bool McuLayoutVolume::AppDataHasBeenSet() const
{
    return m_appDataHasBeenSet;
}

uint64_t McuLayoutVolume::GetPayloadType() const
{
    return m_payloadType;
}

void McuLayoutVolume::SetPayloadType(const uint64_t& _payloadType)
{
    m_payloadType = _payloadType;
    m_payloadTypeHasBeenSet = true;
}

bool McuLayoutVolume::PayloadTypeHasBeenSet() const
{
    return m_payloadTypeHasBeenSet;
}

uint64_t McuLayoutVolume::GetInterval() const
{
    return m_interval;
}

void McuLayoutVolume::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool McuLayoutVolume::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

uint64_t McuLayoutVolume::GetFollowIdr() const
{
    return m_followIdr;
}

void McuLayoutVolume::SetFollowIdr(const uint64_t& _followIdr)
{
    m_followIdr = _followIdr;
    m_followIdrHasBeenSet = true;
}

bool McuLayoutVolume::FollowIdrHasBeenSet() const
{
    return m_followIdrHasBeenSet;
}

