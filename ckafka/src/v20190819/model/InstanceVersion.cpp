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

#include <tencentcloud/ckafka/v20190819/model/InstanceVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

InstanceVersion::InstanceVersion() :
    m_kafkaVersionHasBeenSet(false),
    m_curBrokerVersionHasBeenSet(false),
    m_latestBrokerVersionHasBeenSet(false),
    m_allowUpgradeHighVersionHasBeenSet(false),
    m_highVersionSetHasBeenSet(false),
    m_allowAutoDeleteTimestampHasBeenSet(false)
{
}

CoreInternalOutcome InstanceVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KafkaVersion") && !value["KafkaVersion"].IsNull())
    {
        if (!value["KafkaVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceVersion.KafkaVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaVersion = string(value["KafkaVersion"].GetString());
        m_kafkaVersionHasBeenSet = true;
    }

    if (value.HasMember("CurBrokerVersion") && !value["CurBrokerVersion"].IsNull())
    {
        if (!value["CurBrokerVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceVersion.CurBrokerVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curBrokerVersion = string(value["CurBrokerVersion"].GetString());
        m_curBrokerVersionHasBeenSet = true;
    }

    if (value.HasMember("LatestBrokerVersion") && !value["LatestBrokerVersion"].IsNull())
    {
        if (!value["LatestBrokerVersion"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceVersion.LatestBrokerVersion` is not array type"));

        const rapidjson::Value &tmpValue = value["LatestBrokerVersion"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LatestBrokerVersion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_latestBrokerVersion.push_back(item);
        }
        m_latestBrokerVersionHasBeenSet = true;
    }

    if (value.HasMember("AllowUpgradeHighVersion") && !value["AllowUpgradeHighVersion"].IsNull())
    {
        if (!value["AllowUpgradeHighVersion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceVersion.AllowUpgradeHighVersion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowUpgradeHighVersion = value["AllowUpgradeHighVersion"].GetBool();
        m_allowUpgradeHighVersionHasBeenSet = true;
    }

    if (value.HasMember("HighVersionSet") && !value["HighVersionSet"].IsNull())
    {
        if (!value["HighVersionSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceVersion.HighVersionSet` is not array type"));

        const rapidjson::Value &tmpValue = value["HighVersionSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_highVersionSet.push_back((*itr).GetString());
        }
        m_highVersionSetHasBeenSet = true;
    }

    if (value.HasMember("AllowAutoDeleteTimestamp") && !value["AllowAutoDeleteTimestamp"].IsNull())
    {
        if (!value["AllowAutoDeleteTimestamp"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceVersion.AllowAutoDeleteTimestamp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowAutoDeleteTimestamp = value["AllowAutoDeleteTimestamp"].GetBool();
        m_allowAutoDeleteTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_kafkaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_curBrokerVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurBrokerVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curBrokerVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_latestBrokerVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestBrokerVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_latestBrokerVersion.begin(); itr != m_latestBrokerVersion.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_allowUpgradeHighVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowUpgradeHighVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowUpgradeHighVersion, allocator);
    }

    if (m_highVersionSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighVersionSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_highVersionSet.begin(); itr != m_highVersionSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_allowAutoDeleteTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowAutoDeleteTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowAutoDeleteTimestamp, allocator);
    }

}


string InstanceVersion::GetKafkaVersion() const
{
    return m_kafkaVersion;
}

void InstanceVersion::SetKafkaVersion(const string& _kafkaVersion)
{
    m_kafkaVersion = _kafkaVersion;
    m_kafkaVersionHasBeenSet = true;
}

bool InstanceVersion::KafkaVersionHasBeenSet() const
{
    return m_kafkaVersionHasBeenSet;
}

string InstanceVersion::GetCurBrokerVersion() const
{
    return m_curBrokerVersion;
}

void InstanceVersion::SetCurBrokerVersion(const string& _curBrokerVersion)
{
    m_curBrokerVersion = _curBrokerVersion;
    m_curBrokerVersionHasBeenSet = true;
}

bool InstanceVersion::CurBrokerVersionHasBeenSet() const
{
    return m_curBrokerVersionHasBeenSet;
}

vector<LatestBrokerVersion> InstanceVersion::GetLatestBrokerVersion() const
{
    return m_latestBrokerVersion;
}

void InstanceVersion::SetLatestBrokerVersion(const vector<LatestBrokerVersion>& _latestBrokerVersion)
{
    m_latestBrokerVersion = _latestBrokerVersion;
    m_latestBrokerVersionHasBeenSet = true;
}

bool InstanceVersion::LatestBrokerVersionHasBeenSet() const
{
    return m_latestBrokerVersionHasBeenSet;
}

bool InstanceVersion::GetAllowUpgradeHighVersion() const
{
    return m_allowUpgradeHighVersion;
}

void InstanceVersion::SetAllowUpgradeHighVersion(const bool& _allowUpgradeHighVersion)
{
    m_allowUpgradeHighVersion = _allowUpgradeHighVersion;
    m_allowUpgradeHighVersionHasBeenSet = true;
}

bool InstanceVersion::AllowUpgradeHighVersionHasBeenSet() const
{
    return m_allowUpgradeHighVersionHasBeenSet;
}

vector<string> InstanceVersion::GetHighVersionSet() const
{
    return m_highVersionSet;
}

void InstanceVersion::SetHighVersionSet(const vector<string>& _highVersionSet)
{
    m_highVersionSet = _highVersionSet;
    m_highVersionSetHasBeenSet = true;
}

bool InstanceVersion::HighVersionSetHasBeenSet() const
{
    return m_highVersionSetHasBeenSet;
}

bool InstanceVersion::GetAllowAutoDeleteTimestamp() const
{
    return m_allowAutoDeleteTimestamp;
}

void InstanceVersion::SetAllowAutoDeleteTimestamp(const bool& _allowAutoDeleteTimestamp)
{
    m_allowAutoDeleteTimestamp = _allowAutoDeleteTimestamp;
    m_allowAutoDeleteTimestampHasBeenSet = true;
}

bool InstanceVersion::AllowAutoDeleteTimestampHasBeenSet() const
{
    return m_allowAutoDeleteTimestampHasBeenSet;
}

