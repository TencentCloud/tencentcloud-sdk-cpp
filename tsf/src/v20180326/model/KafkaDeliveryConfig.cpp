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

#include <tencentcloud/tsf/v20180326/model/KafkaDeliveryConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

KafkaDeliveryConfig::KafkaDeliveryConfig() :
    m_configIdHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_collectPathHasBeenSet(false),
    m_kafkaVIpHasBeenSet(false),
    m_kafkaVPortHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_lineRuleHasBeenSet(false)
{
}

CoreInternalOutcome KafkaDeliveryConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }

    if (value.HasMember("CollectPath") && !value["CollectPath"].IsNull())
    {
        if (!value["CollectPath"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.CollectPath` is not array type"));

        const rapidjson::Value &tmpValue = value["CollectPath"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_collectPath.push_back((*itr).GetString());
        }
        m_collectPathHasBeenSet = true;
    }

    if (value.HasMember("KafkaVIp") && !value["KafkaVIp"].IsNull())
    {
        if (!value["KafkaVIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.KafkaVIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaVIp = string(value["KafkaVIp"].GetString());
        m_kafkaVIpHasBeenSet = true;
    }

    if (value.HasMember("KafkaVPort") && !value["KafkaVPort"].IsNull())
    {
        if (!value["KafkaVPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.KafkaVPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaVPort = string(value["KafkaVPort"].GetString());
        m_kafkaVPortHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("LineRule") && !value["LineRule"].IsNull())
    {
        if (!value["LineRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.LineRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineRule = string(value["LineRule"].GetString());
        m_lineRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KafkaDeliveryConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_collectPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_collectPath.begin(); itr != m_collectPath.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_kafkaVIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaVIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaVIp.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaVPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaVPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaVPort.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_lineRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineRule.c_str(), allocator).Move(), allocator);
    }

}


string KafkaDeliveryConfig::GetConfigId() const
{
    return m_configId;
}

void KafkaDeliveryConfig::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool KafkaDeliveryConfig::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string KafkaDeliveryConfig::GetConfigName() const
{
    return m_configName;
}

void KafkaDeliveryConfig::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool KafkaDeliveryConfig::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

vector<string> KafkaDeliveryConfig::GetCollectPath() const
{
    return m_collectPath;
}

void KafkaDeliveryConfig::SetCollectPath(const vector<string>& _collectPath)
{
    m_collectPath = _collectPath;
    m_collectPathHasBeenSet = true;
}

bool KafkaDeliveryConfig::CollectPathHasBeenSet() const
{
    return m_collectPathHasBeenSet;
}

string KafkaDeliveryConfig::GetKafkaVIp() const
{
    return m_kafkaVIp;
}

void KafkaDeliveryConfig::SetKafkaVIp(const string& _kafkaVIp)
{
    m_kafkaVIp = _kafkaVIp;
    m_kafkaVIpHasBeenSet = true;
}

bool KafkaDeliveryConfig::KafkaVIpHasBeenSet() const
{
    return m_kafkaVIpHasBeenSet;
}

string KafkaDeliveryConfig::GetKafkaVPort() const
{
    return m_kafkaVPort;
}

void KafkaDeliveryConfig::SetKafkaVPort(const string& _kafkaVPort)
{
    m_kafkaVPort = _kafkaVPort;
    m_kafkaVPortHasBeenSet = true;
}

bool KafkaDeliveryConfig::KafkaVPortHasBeenSet() const
{
    return m_kafkaVPortHasBeenSet;
}

string KafkaDeliveryConfig::GetTopic() const
{
    return m_topic;
}

void KafkaDeliveryConfig::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool KafkaDeliveryConfig::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string KafkaDeliveryConfig::GetLineRule() const
{
    return m_lineRule;
}

void KafkaDeliveryConfig::SetLineRule(const string& _lineRule)
{
    m_lineRule = _lineRule;
    m_lineRuleHasBeenSet = true;
}

bool KafkaDeliveryConfig::LineRuleHasBeenSet() const
{
    return m_lineRuleHasBeenSet;
}

