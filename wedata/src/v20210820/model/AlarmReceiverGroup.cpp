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

#include <tencentcloud/wedata/v20210820/model/AlarmReceiverGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AlarmReceiverGroup::AlarmReceiverGroup() :
    m_alarmRecipientTypeHasBeenSet(false),
    m_alarmRecipientIdHasBeenSet(false),
    m_alarmRecipientNameHasBeenSet(false),
    m_alarmWayHasBeenSet(false),
    m_quietPeriodsHasBeenSet(false),
    m_alarmMessageRuleHasBeenSet(false)
{
}

CoreInternalOutcome AlarmReceiverGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmRecipientType") && !value["AlarmRecipientType"].IsNull())
    {
        if (!value["AlarmRecipientType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmReceiverGroup.AlarmRecipientType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRecipientType = value["AlarmRecipientType"].GetUint64();
        m_alarmRecipientTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipientId") && !value["AlarmRecipientId"].IsNull())
    {
        if (!value["AlarmRecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmReceiverGroup.AlarmRecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRecipientId = string(value["AlarmRecipientId"].GetString());
        m_alarmRecipientIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipientName") && !value["AlarmRecipientName"].IsNull())
    {
        if (!value["AlarmRecipientName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmReceiverGroup.AlarmRecipientName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRecipientName = string(value["AlarmRecipientName"].GetString());
        m_alarmRecipientNameHasBeenSet = true;
    }

    if (value.HasMember("AlarmWay") && !value["AlarmWay"].IsNull())
    {
        if (!value["AlarmWay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmReceiverGroup.AlarmWay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmWay = string(value["AlarmWay"].GetString());
        m_alarmWayHasBeenSet = true;
    }

    if (value.HasMember("QuietPeriods") && !value["QuietPeriods"].IsNull())
    {
        if (!value["QuietPeriods"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmReceiverGroup.QuietPeriods` is not array type"));

        const rapidjson::Value &tmpValue = value["QuietPeriods"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QuietPeriod item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_quietPeriods.push_back(item);
        }
        m_quietPeriodsHasBeenSet = true;
    }

    if (value.HasMember("AlarmMessageRule") && !value["AlarmMessageRule"].IsNull())
    {
        if (!value["AlarmMessageRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmReceiverGroup.AlarmMessageRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmMessageRule = string(value["AlarmMessageRule"].GetString());
        m_alarmMessageRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmReceiverGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmRecipientTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmRecipientType, allocator);
    }

    if (m_alarmRecipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmRecipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmRecipientNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmRecipientName.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmWay.c_str(), allocator).Move(), allocator);
    }

    if (m_quietPeriodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuietPeriods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_quietPeriods.begin(); itr != m_quietPeriods.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_alarmMessageRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmMessageRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmMessageRule.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AlarmReceiverGroup::GetAlarmRecipientType() const
{
    return m_alarmRecipientType;
}

void AlarmReceiverGroup::SetAlarmRecipientType(const uint64_t& _alarmRecipientType)
{
    m_alarmRecipientType = _alarmRecipientType;
    m_alarmRecipientTypeHasBeenSet = true;
}

bool AlarmReceiverGroup::AlarmRecipientTypeHasBeenSet() const
{
    return m_alarmRecipientTypeHasBeenSet;
}

string AlarmReceiverGroup::GetAlarmRecipientId() const
{
    return m_alarmRecipientId;
}

void AlarmReceiverGroup::SetAlarmRecipientId(const string& _alarmRecipientId)
{
    m_alarmRecipientId = _alarmRecipientId;
    m_alarmRecipientIdHasBeenSet = true;
}

bool AlarmReceiverGroup::AlarmRecipientIdHasBeenSet() const
{
    return m_alarmRecipientIdHasBeenSet;
}

string AlarmReceiverGroup::GetAlarmRecipientName() const
{
    return m_alarmRecipientName;
}

void AlarmReceiverGroup::SetAlarmRecipientName(const string& _alarmRecipientName)
{
    m_alarmRecipientName = _alarmRecipientName;
    m_alarmRecipientNameHasBeenSet = true;
}

bool AlarmReceiverGroup::AlarmRecipientNameHasBeenSet() const
{
    return m_alarmRecipientNameHasBeenSet;
}

string AlarmReceiverGroup::GetAlarmWay() const
{
    return m_alarmWay;
}

void AlarmReceiverGroup::SetAlarmWay(const string& _alarmWay)
{
    m_alarmWay = _alarmWay;
    m_alarmWayHasBeenSet = true;
}

bool AlarmReceiverGroup::AlarmWayHasBeenSet() const
{
    return m_alarmWayHasBeenSet;
}

vector<QuietPeriod> AlarmReceiverGroup::GetQuietPeriods() const
{
    return m_quietPeriods;
}

void AlarmReceiverGroup::SetQuietPeriods(const vector<QuietPeriod>& _quietPeriods)
{
    m_quietPeriods = _quietPeriods;
    m_quietPeriodsHasBeenSet = true;
}

bool AlarmReceiverGroup::QuietPeriodsHasBeenSet() const
{
    return m_quietPeriodsHasBeenSet;
}

string AlarmReceiverGroup::GetAlarmMessageRule() const
{
    return m_alarmMessageRule;
}

void AlarmReceiverGroup::SetAlarmMessageRule(const string& _alarmMessageRule)
{
    m_alarmMessageRule = _alarmMessageRule;
    m_alarmMessageRuleHasBeenSet = true;
}

bool AlarmReceiverGroup::AlarmMessageRuleHasBeenSet() const
{
    return m_alarmMessageRuleHasBeenSet;
}

