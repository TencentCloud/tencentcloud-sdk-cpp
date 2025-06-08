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

#include <tencentcloud/teo/v20220901/model/HttpDDoSProtection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

HttpDDoSProtection::HttpDDoSProtection() :
    m_adaptiveFrequencyControlHasBeenSet(false),
    m_clientFilteringHasBeenSet(false),
    m_bandwidthAbuseDefenseHasBeenSet(false),
    m_slowAttackDefenseHasBeenSet(false)
{
}

CoreInternalOutcome HttpDDoSProtection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AdaptiveFrequencyControl") && !value["AdaptiveFrequencyControl"].IsNull())
    {
        if (!value["AdaptiveFrequencyControl"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HttpDDoSProtection.AdaptiveFrequencyControl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_adaptiveFrequencyControl.Deserialize(value["AdaptiveFrequencyControl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adaptiveFrequencyControlHasBeenSet = true;
    }

    if (value.HasMember("ClientFiltering") && !value["ClientFiltering"].IsNull())
    {
        if (!value["ClientFiltering"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HttpDDoSProtection.ClientFiltering` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clientFiltering.Deserialize(value["ClientFiltering"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clientFilteringHasBeenSet = true;
    }

    if (value.HasMember("BandwidthAbuseDefense") && !value["BandwidthAbuseDefense"].IsNull())
    {
        if (!value["BandwidthAbuseDefense"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HttpDDoSProtection.BandwidthAbuseDefense` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bandwidthAbuseDefense.Deserialize(value["BandwidthAbuseDefense"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bandwidthAbuseDefenseHasBeenSet = true;
    }

    if (value.HasMember("SlowAttackDefense") && !value["SlowAttackDefense"].IsNull())
    {
        if (!value["SlowAttackDefense"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HttpDDoSProtection.SlowAttackDefense` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_slowAttackDefense.Deserialize(value["SlowAttackDefense"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_slowAttackDefenseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HttpDDoSProtection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_adaptiveFrequencyControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdaptiveFrequencyControl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_adaptiveFrequencyControl.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clientFilteringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientFiltering";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientFiltering.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bandwidthAbuseDefenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthAbuseDefense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bandwidthAbuseDefense.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_slowAttackDefenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlowAttackDefense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_slowAttackDefense.ToJsonObject(value[key.c_str()], allocator);
    }

}


AdaptiveFrequencyControl HttpDDoSProtection::GetAdaptiveFrequencyControl() const
{
    return m_adaptiveFrequencyControl;
}

void HttpDDoSProtection::SetAdaptiveFrequencyControl(const AdaptiveFrequencyControl& _adaptiveFrequencyControl)
{
    m_adaptiveFrequencyControl = _adaptiveFrequencyControl;
    m_adaptiveFrequencyControlHasBeenSet = true;
}

bool HttpDDoSProtection::AdaptiveFrequencyControlHasBeenSet() const
{
    return m_adaptiveFrequencyControlHasBeenSet;
}

ClientFiltering HttpDDoSProtection::GetClientFiltering() const
{
    return m_clientFiltering;
}

void HttpDDoSProtection::SetClientFiltering(const ClientFiltering& _clientFiltering)
{
    m_clientFiltering = _clientFiltering;
    m_clientFilteringHasBeenSet = true;
}

bool HttpDDoSProtection::ClientFilteringHasBeenSet() const
{
    return m_clientFilteringHasBeenSet;
}

BandwidthAbuseDefense HttpDDoSProtection::GetBandwidthAbuseDefense() const
{
    return m_bandwidthAbuseDefense;
}

void HttpDDoSProtection::SetBandwidthAbuseDefense(const BandwidthAbuseDefense& _bandwidthAbuseDefense)
{
    m_bandwidthAbuseDefense = _bandwidthAbuseDefense;
    m_bandwidthAbuseDefenseHasBeenSet = true;
}

bool HttpDDoSProtection::BandwidthAbuseDefenseHasBeenSet() const
{
    return m_bandwidthAbuseDefenseHasBeenSet;
}

SlowAttackDefense HttpDDoSProtection::GetSlowAttackDefense() const
{
    return m_slowAttackDefense;
}

void HttpDDoSProtection::SetSlowAttackDefense(const SlowAttackDefense& _slowAttackDefense)
{
    m_slowAttackDefense = _slowAttackDefense;
    m_slowAttackDefenseHasBeenSet = true;
}

bool HttpDDoSProtection::SlowAttackDefenseHasBeenSet() const
{
    return m_slowAttackDefenseHasBeenSet;
}

