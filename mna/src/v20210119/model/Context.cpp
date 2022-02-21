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

#include <tencentcloud/mna/v20210119/model/Context.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

Context::Context() :
    m_networkDataHasBeenSet(false),
    m_expectedLowThresholdHasBeenSet(false),
    m_expectedHighThresholdHasBeenSet(false)
{
}

CoreInternalOutcome Context::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NetworkData") && !value["NetworkData"].IsNull())
    {
        if (!value["NetworkData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Context.NetworkData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_networkData.Deserialize(value["NetworkData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_networkDataHasBeenSet = true;
    }

    if (value.HasMember("ExpectedLowThreshold") && !value["ExpectedLowThreshold"].IsNull())
    {
        if (!value["ExpectedLowThreshold"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Context.ExpectedLowThreshold` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_expectedLowThreshold.Deserialize(value["ExpectedLowThreshold"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_expectedLowThresholdHasBeenSet = true;
    }

    if (value.HasMember("ExpectedHighThreshold") && !value["ExpectedHighThreshold"].IsNull())
    {
        if (!value["ExpectedHighThreshold"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Context.ExpectedHighThreshold` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_expectedHighThreshold.Deserialize(value["ExpectedHighThreshold"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_expectedHighThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Context::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_networkDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_networkData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_expectedLowThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedLowThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_expectedLowThreshold.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_expectedHighThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedHighThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_expectedHighThreshold.ToJsonObject(value[key.c_str()], allocator);
    }

}


NetworkData Context::GetNetworkData() const
{
    return m_networkData;
}

void Context::SetNetworkData(const NetworkData& _networkData)
{
    m_networkData = _networkData;
    m_networkDataHasBeenSet = true;
}

bool Context::NetworkDataHasBeenSet() const
{
    return m_networkDataHasBeenSet;
}

ExpectedThreshold Context::GetExpectedLowThreshold() const
{
    return m_expectedLowThreshold;
}

void Context::SetExpectedLowThreshold(const ExpectedThreshold& _expectedLowThreshold)
{
    m_expectedLowThreshold = _expectedLowThreshold;
    m_expectedLowThresholdHasBeenSet = true;
}

bool Context::ExpectedLowThresholdHasBeenSet() const
{
    return m_expectedLowThresholdHasBeenSet;
}

ExpectedThreshold Context::GetExpectedHighThreshold() const
{
    return m_expectedHighThreshold;
}

void Context::SetExpectedHighThreshold(const ExpectedThreshold& _expectedHighThreshold)
{
    m_expectedHighThreshold = _expectedHighThreshold;
    m_expectedHighThresholdHasBeenSet = true;
}

bool Context::ExpectedHighThresholdHasBeenSet() const
{
    return m_expectedHighThresholdHasBeenSet;
}

