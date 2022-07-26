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

#include <tencentcloud/antiddos/v20200309/model/L4RuleSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

L4RuleSource::L4RuleSource() :
    m_sourceHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_portHasBeenSet(false),
    m_backupHasBeenSet(false)
{
}

CoreInternalOutcome L4RuleSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleSource.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleSource.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleSource.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Backup") && !value["Backup"].IsNull())
    {
        if (!value["Backup"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleSource.Backup` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backup = value["Backup"].GetUint64();
        m_backupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L4RuleSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_backupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Backup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backup, allocator);
    }

}


string L4RuleSource::GetSource() const
{
    return m_source;
}

void L4RuleSource::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool L4RuleSource::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

uint64_t L4RuleSource::GetWeight() const
{
    return m_weight;
}

void L4RuleSource::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool L4RuleSource::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

uint64_t L4RuleSource::GetPort() const
{
    return m_port;
}

void L4RuleSource::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool L4RuleSource::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t L4RuleSource::GetBackup() const
{
    return m_backup;
}

void L4RuleSource::SetBackup(const uint64_t& _backup)
{
    m_backup = _backup;
    m_backupHasBeenSet = true;
}

bool L4RuleSource::BackupHasBeenSet() const
{
    return m_backupHasBeenSet;
}

