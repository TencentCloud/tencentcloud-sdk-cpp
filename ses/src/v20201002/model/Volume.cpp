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

#include <tencentcloud/ses/v20201002/model/Volume.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

Volume::Volume() :
    m_sendDateHasBeenSet(false),
    m_requestCountHasBeenSet(false),
    m_acceptedCountHasBeenSet(false),
    m_deliveredCountHasBeenSet(false),
    m_openedCountHasBeenSet(false),
    m_clickedCountHasBeenSet(false),
    m_bounceCountHasBeenSet(false),
    m_unsubscribeCountHasBeenSet(false)
{
}

CoreInternalOutcome Volume::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SendDate") && !value["SendDate"].IsNull())
    {
        if (!value["SendDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.SendDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sendDate = string(value["SendDate"].GetString());
        m_sendDateHasBeenSet = true;
    }

    if (value.HasMember("RequestCount") && !value["RequestCount"].IsNull())
    {
        if (!value["RequestCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.RequestCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_requestCount = value["RequestCount"].GetUint64();
        m_requestCountHasBeenSet = true;
    }

    if (value.HasMember("AcceptedCount") && !value["AcceptedCount"].IsNull())
    {
        if (!value["AcceptedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.AcceptedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_acceptedCount = value["AcceptedCount"].GetUint64();
        m_acceptedCountHasBeenSet = true;
    }

    if (value.HasMember("DeliveredCount") && !value["DeliveredCount"].IsNull())
    {
        if (!value["DeliveredCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.DeliveredCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deliveredCount = value["DeliveredCount"].GetUint64();
        m_deliveredCountHasBeenSet = true;
    }

    if (value.HasMember("OpenedCount") && !value["OpenedCount"].IsNull())
    {
        if (!value["OpenedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.OpenedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_openedCount = value["OpenedCount"].GetUint64();
        m_openedCountHasBeenSet = true;
    }

    if (value.HasMember("ClickedCount") && !value["ClickedCount"].IsNull())
    {
        if (!value["ClickedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.ClickedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clickedCount = value["ClickedCount"].GetUint64();
        m_clickedCountHasBeenSet = true;
    }

    if (value.HasMember("BounceCount") && !value["BounceCount"].IsNull())
    {
        if (!value["BounceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.BounceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bounceCount = value["BounceCount"].GetUint64();
        m_bounceCountHasBeenSet = true;
    }

    if (value.HasMember("UnsubscribeCount") && !value["UnsubscribeCount"].IsNull())
    {
        if (!value["UnsubscribeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.UnsubscribeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unsubscribeCount = value["UnsubscribeCount"].GetUint64();
        m_unsubscribeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Volume::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sendDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sendDate.c_str(), allocator).Move(), allocator);
    }

    if (m_requestCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestCount, allocator);
    }

    if (m_acceptedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcceptedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_acceptedCount, allocator);
    }

    if (m_deliveredCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveredCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliveredCount, allocator);
    }

    if (m_openedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openedCount, allocator);
    }

    if (m_clickedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClickedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clickedCount, allocator);
    }

    if (m_bounceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BounceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bounceCount, allocator);
    }

    if (m_unsubscribeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnsubscribeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unsubscribeCount, allocator);
    }

}


string Volume::GetSendDate() const
{
    return m_sendDate;
}

void Volume::SetSendDate(const string& _sendDate)
{
    m_sendDate = _sendDate;
    m_sendDateHasBeenSet = true;
}

bool Volume::SendDateHasBeenSet() const
{
    return m_sendDateHasBeenSet;
}

uint64_t Volume::GetRequestCount() const
{
    return m_requestCount;
}

void Volume::SetRequestCount(const uint64_t& _requestCount)
{
    m_requestCount = _requestCount;
    m_requestCountHasBeenSet = true;
}

bool Volume::RequestCountHasBeenSet() const
{
    return m_requestCountHasBeenSet;
}

uint64_t Volume::GetAcceptedCount() const
{
    return m_acceptedCount;
}

void Volume::SetAcceptedCount(const uint64_t& _acceptedCount)
{
    m_acceptedCount = _acceptedCount;
    m_acceptedCountHasBeenSet = true;
}

bool Volume::AcceptedCountHasBeenSet() const
{
    return m_acceptedCountHasBeenSet;
}

uint64_t Volume::GetDeliveredCount() const
{
    return m_deliveredCount;
}

void Volume::SetDeliveredCount(const uint64_t& _deliveredCount)
{
    m_deliveredCount = _deliveredCount;
    m_deliveredCountHasBeenSet = true;
}

bool Volume::DeliveredCountHasBeenSet() const
{
    return m_deliveredCountHasBeenSet;
}

uint64_t Volume::GetOpenedCount() const
{
    return m_openedCount;
}

void Volume::SetOpenedCount(const uint64_t& _openedCount)
{
    m_openedCount = _openedCount;
    m_openedCountHasBeenSet = true;
}

bool Volume::OpenedCountHasBeenSet() const
{
    return m_openedCountHasBeenSet;
}

uint64_t Volume::GetClickedCount() const
{
    return m_clickedCount;
}

void Volume::SetClickedCount(const uint64_t& _clickedCount)
{
    m_clickedCount = _clickedCount;
    m_clickedCountHasBeenSet = true;
}

bool Volume::ClickedCountHasBeenSet() const
{
    return m_clickedCountHasBeenSet;
}

uint64_t Volume::GetBounceCount() const
{
    return m_bounceCount;
}

void Volume::SetBounceCount(const uint64_t& _bounceCount)
{
    m_bounceCount = _bounceCount;
    m_bounceCountHasBeenSet = true;
}

bool Volume::BounceCountHasBeenSet() const
{
    return m_bounceCountHasBeenSet;
}

uint64_t Volume::GetUnsubscribeCount() const
{
    return m_unsubscribeCount;
}

void Volume::SetUnsubscribeCount(const uint64_t& _unsubscribeCount)
{
    m_unsubscribeCount = _unsubscribeCount;
    m_unsubscribeCountHasBeenSet = true;
}

bool Volume::UnsubscribeCountHasBeenSet() const
{
    return m_unsubscribeCountHasBeenSet;
}

