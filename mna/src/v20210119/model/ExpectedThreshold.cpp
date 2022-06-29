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

#include <tencentcloud/mna/v20210119/model/ExpectedThreshold.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

ExpectedThreshold::ExpectedThreshold() :
    m_rTTHasBeenSet(false),
    m_lossHasBeenSet(false),
    m_jitterHasBeenSet(false)
{
}

CoreInternalOutcome ExpectedThreshold::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RTT") && !value["RTT"].IsNull())
    {
        if (!value["RTT"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ExpectedThreshold.RTT` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rTT = value["RTT"].GetDouble();
        m_rTTHasBeenSet = true;
    }

    if (value.HasMember("Loss") && !value["Loss"].IsNull())
    {
        if (!value["Loss"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ExpectedThreshold.Loss` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_loss = value["Loss"].GetDouble();
        m_lossHasBeenSet = true;
    }

    if (value.HasMember("Jitter") && !value["Jitter"].IsNull())
    {
        if (!value["Jitter"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ExpectedThreshold.Jitter` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_jitter = value["Jitter"].GetDouble();
        m_jitterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExpectedThreshold::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rTTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rTT, allocator);
    }

    if (m_lossHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Loss";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loss, allocator);
    }

    if (m_jitterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Jitter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jitter, allocator);
    }

}


double ExpectedThreshold::GetRTT() const
{
    return m_rTT;
}

void ExpectedThreshold::SetRTT(const double& _rTT)
{
    m_rTT = _rTT;
    m_rTTHasBeenSet = true;
}

bool ExpectedThreshold::RTTHasBeenSet() const
{
    return m_rTTHasBeenSet;
}

double ExpectedThreshold::GetLoss() const
{
    return m_loss;
}

void ExpectedThreshold::SetLoss(const double& _loss)
{
    m_loss = _loss;
    m_lossHasBeenSet = true;
}

bool ExpectedThreshold::LossHasBeenSet() const
{
    return m_lossHasBeenSet;
}

double ExpectedThreshold::GetJitter() const
{
    return m_jitter;
}

void ExpectedThreshold::SetJitter(const double& _jitter)
{
    m_jitter = _jitter;
    m_jitterHasBeenSet = true;
}

bool ExpectedThreshold::JitterHasBeenSet() const
{
    return m_jitterHasBeenSet;
}

