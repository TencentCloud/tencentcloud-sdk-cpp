/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/teo/v20220901/model/FrequentScanningProtection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

FrequentScanningProtection::FrequentScanningProtection() :
    m_enabledHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_countByHasBeenSet(false),
    m_blockThresholdHasBeenSet(false),
    m_countingPeriodHasBeenSet(false),
    m_actionDurationHasBeenSet(false)
{
}

CoreInternalOutcome FrequentScanningProtection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrequentScanningProtection.Enabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = string(value["Enabled"].GetString());
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FrequentScanningProtection.Action` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_action.Deserialize(value["Action"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_actionHasBeenSet = true;
    }

    if (value.HasMember("CountBy") && !value["CountBy"].IsNull())
    {
        if (!value["CountBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrequentScanningProtection.CountBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countBy = string(value["CountBy"].GetString());
        m_countByHasBeenSet = true;
    }

    if (value.HasMember("BlockThreshold") && !value["BlockThreshold"].IsNull())
    {
        if (!value["BlockThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FrequentScanningProtection.BlockThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockThreshold = value["BlockThreshold"].GetInt64();
        m_blockThresholdHasBeenSet = true;
    }

    if (value.HasMember("CountingPeriod") && !value["CountingPeriod"].IsNull())
    {
        if (!value["CountingPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrequentScanningProtection.CountingPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countingPeriod = string(value["CountingPeriod"].GetString());
        m_countingPeriodHasBeenSet = true;
    }

    if (value.HasMember("ActionDuration") && !value["ActionDuration"].IsNull())
    {
        if (!value["ActionDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrequentScanningProtection.ActionDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionDuration = string(value["ActionDuration"].GetString());
        m_actionDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FrequentScanningProtection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_action.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_countByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countBy.c_str(), allocator).Move(), allocator);
    }

    if (m_blockThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockThreshold, allocator);
    }

    if (m_countingPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountingPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countingPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_actionDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionDuration.c_str(), allocator).Move(), allocator);
    }

}


string FrequentScanningProtection::GetEnabled() const
{
    return m_enabled;
}

void FrequentScanningProtection::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool FrequentScanningProtection::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

SecurityAction FrequentScanningProtection::GetAction() const
{
    return m_action;
}

void FrequentScanningProtection::SetAction(const SecurityAction& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool FrequentScanningProtection::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string FrequentScanningProtection::GetCountBy() const
{
    return m_countBy;
}

void FrequentScanningProtection::SetCountBy(const string& _countBy)
{
    m_countBy = _countBy;
    m_countByHasBeenSet = true;
}

bool FrequentScanningProtection::CountByHasBeenSet() const
{
    return m_countByHasBeenSet;
}

int64_t FrequentScanningProtection::GetBlockThreshold() const
{
    return m_blockThreshold;
}

void FrequentScanningProtection::SetBlockThreshold(const int64_t& _blockThreshold)
{
    m_blockThreshold = _blockThreshold;
    m_blockThresholdHasBeenSet = true;
}

bool FrequentScanningProtection::BlockThresholdHasBeenSet() const
{
    return m_blockThresholdHasBeenSet;
}

string FrequentScanningProtection::GetCountingPeriod() const
{
    return m_countingPeriod;
}

void FrequentScanningProtection::SetCountingPeriod(const string& _countingPeriod)
{
    m_countingPeriod = _countingPeriod;
    m_countingPeriodHasBeenSet = true;
}

bool FrequentScanningProtection::CountingPeriodHasBeenSet() const
{
    return m_countingPeriodHasBeenSet;
}

string FrequentScanningProtection::GetActionDuration() const
{
    return m_actionDuration;
}

void FrequentScanningProtection::SetActionDuration(const string& _actionDuration)
{
    m_actionDuration = _actionDuration;
    m_actionDurationHasBeenSet = true;
}

bool FrequentScanningProtection::ActionDurationHasBeenSet() const
{
    return m_actionDurationHasBeenSet;
}

